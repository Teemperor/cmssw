#ifndef HCALSIMPLERECALGO_H
#define HCALSIMPLERECALGO_H 1

#include <memory>
#include "boost/shared_ptr.hpp"

#include "DataFormats/HcalDigi/interface/QIE10DataFrame.h"
#include "DataFormats/HcalDigi/interface/HFDataFrame.h"
#include "DataFormats/HcalDigi/interface/HODataFrame.h"
#include "DataFormats/HcalDigi/interface/ZDCDataFrame.h"
#include "DataFormats/HcalDigi/interface/HcalCalibDataFrame.h"
#include "DataFormats/HcalRecHit/interface/HFRecHit.h"
#include "DataFormats/HcalRecHit/interface/HORecHit.h"
#include "DataFormats/HcalRecHit/interface/ZDCRecHit.h"
#include "DataFormats/HcalRecHit/interface/HcalCalibRecHit.h"
#include "CalibFormats/HcalObjects/interface/HcalCoder.h"
#include "CalibFormats/HcalObjects/interface/HcalCalibrations.h"
#include "CalibCalorimetry/HcalAlgos/interface/HcalPulseContainmentManager.h"
#include "CondFormats/HcalObjects/interface/AbsOOTPileupCorrection.h"

#include "RecoLocalCalo/HcalRecAlgos/interface/PulseShapeFitOOTPileupCorrection.h"
#include "RecoLocalCalo/HcalRecAlgos/interface/HcalDeterministicFit.h"

#include "RecoLocalCalo/HcalRecAlgos/interface/PedestalSub.h"

/** \class HcalSimpleRecAlgo

   This class reconstructs RecHits from Digis for HBHE, HF, and HO by addition
   of selected time samples, pedestal subtraction, and gain application. The
   time of the hit is reconstructed using a weighted peak bin calculation
   supplemented by precise time lookup table. A consumer of this class also
   has the option of correcting the reconstructed time for energy-dependent
   time slew associated with the QIE.
    
   \author J. Mans - Minnesota
*/

class HcalSimpleRecAlgo {
public:
  /** Full featured constructor for HB/HE and HO (HPD-based detectors) */
  HcalSimpleRecAlgo(bool correctForTimeslew, 
		    bool correctForContainment, float fixedPhaseNs);

  void beginRun(edm::EventSetup const & es);
  void endRun();

  void initPulseCorr(int toadd); 

  // set RecoParams channel-by-channel.
  void setRecoParams(bool correctForTimeslew, bool correctForPulse, bool setLeakCorrection, int pileupCleaningID, float phaseNS);

  // usage of leak correction 
  void setLeakCorrection();

  // set OOT pileup corrections
  void setHFPileupCorrection(boost::shared_ptr<AbsOOTPileupCorrection> corr);
  void setHOPileupCorrection(boost::shared_ptr<AbsOOTPileupCorrection> corr);

  // Set bunch crossing information.
  // This object will not manage the pointer.
  void setBXInfo(const BunchXParameter* info, unsigned lenInfo);


  HFRecHit reconstruct(const HFDataFrame& digi,  int first, int toadd, const HcalCoder& coder, const HcalCalibrations& calibs) const;
  HFRecHit reconstructQIE10(const QIE10DataFrame& digi,  int first, int toadd, const HcalCoder& coder, const HcalCalibrations& calibs) const;

  HORecHit reconstruct(const HODataFrame& digi,  int first, int toadd, const HcalCoder& coder, const HcalCalibrations& calibs) const;
  HcalCalibRecHit reconstruct(const HcalCalibDataFrame& digi,  int first, int toadd, const HcalCoder& coder, const HcalCalibrations& calibs) const;

private:
  bool correctForTimeslew_;
  bool correctForPulse_;
  float phaseNS_;
  std::unique_ptr<HcalPulseContainmentManager> pulseCorr_;
  int runnum_;  // data run numer
  bool setLeakCorrection_;
  int pileupCleaningID_;
  const BunchXParameter* bunchCrossingInfo_;
  unsigned lenBunchCrossingInfo_;
  boost::shared_ptr<AbsOOTPileupCorrection> hbhePileupCorr_;
  boost::shared_ptr<AbsOOTPileupCorrection> hfPileupCorr_;
  boost::shared_ptr<AbsOOTPileupCorrection> hoPileupCorr_;

  HcalPulseShapes theHcalPulseShapes_;

  int puCorrMethod_;

  std::unique_ptr<PulseShapeFitOOTPileupCorrection> psFitOOTpuCorr_;
  
  std::unique_ptr<PedestalSub> pedSubFxn_;

  // S.Brandt Feb19 : Add a pointer to the HLT algo
  std::unique_ptr<HcalDeterministicFit> hltOOTpuCorr_;
};

#endif
