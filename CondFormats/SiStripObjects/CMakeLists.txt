add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsSiStripObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/SiStripObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsSiStripObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/SiStripObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/SiStripObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/SiStripObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsSiStripObjectssrcclassesh")

add_library(CondFormatsSiStripObjects OBJECT 
  src/FedTimingAnalysis.cc
  src/SiStripRunSummary.cc
  src/SiStripBackPlaneCorrection.cc
  src/FastFedCablingAnalysis.cc
  src/SiStripDetSummary.cc
  src/PedestalsAnalysis.cc
  src/SiStripLorentzAngle.cc
  src/SiStripLatency.cc
  src/NoiseAnalysis.cc
  src/CommissioningAnalysis.cc
  src/SiStripApvGain.cc
  src/SiStripPedestals.cc
  src/SiStripDetVOff.cc
  src/PedsOnlyAnalysis.cc
  src/FedChannelConnection.cc
  src/ApvTimingAnalysis.cc
  src/FedCablingAnalysis.cc
  src/SiStripConfObject.cc
  src/SiStripBadStrip.cc
  src/DaqScopeModeAnalysis.cc
  src/PedsFullNoiseAnalysis.cc
  src/SamplingAnalysis.cc
  src/SiStripBaseDelay.cc
  src/T_EventSetup_SiStrip.cc
  src/SiStripSummary.cc
  src/SiStripNoises.cc
  src/CalibrationAnalysis.cc
  src/EventSetup_Registration.cc
  src/ApvLatencyAnalysis.cc
  src/SiStripFedCabling.cc
  src/OptoScanAnalysis.cc
  src/SiStripThreshold.cc
  src/Phase2TrackerModule.cc
  src/VpspScanAnalysis.cc
  src/Phase2TrackerCabling.cc
  ${CMAKE_BINARY_DIR}/CondFormatsSiStripObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsSiStripObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsSiStripObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsSiStripObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsSiStripObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsSiStripObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsSiStripObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsSiStripObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsSiStripObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsSiStripObjects PUBLIC /usr/include/boost/regex/)

