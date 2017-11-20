add_library(GeneratorInterfaceGenFilters OBJECT 
  src/HZZ4lFilter.cc
  src/RecoDiMuon.cc
  src/MCMultiParticleFilter.cc
  src/JetFlavourCutFilter.cc
  src/MCSmartSingleParticleFilter.cc
  src/FourLepFilter.cc
  src/Zto2lFilter.cc
  src/ZgammaMassFilter.cc
  src/SealModule.cc
  src/HighETPhotonsFilterAlgo.cc
  src/MCPdgIndexFilter.cc
  src/XtoFFbarFilter.cc
  src/MCDecayingPionKaonFilter.cc
  src/MCSingleParticleFilter.cc
  src/GenHTFilter.cc
  src/VBFGenJetFilter.cc
  src/PythiaFilterGammaGamma.cc
  src/BHFilter.cc
  src/PythiaDauFilter.cc
  src/ComphepSingletopFilterPy8.cc
  src/LHEDYdecayFilter.cc
  src/LQGenFilter.cc
  src/PythiaFilterGammaJetIsoPi0.cc
  src/MCDijetResonance.cc
  src/HerwigMaxPtPartonFilter.cc
  src/EMEnrichingFilter.cc
  src/doubleEMEnrichingFilter.cc
  src/GenLeadTrackFilter.cc
  src/PythiaFilterZgamma.cc
  src/MinimumBiasFilter.cc
  src/TotalKinematicsFilter.cc
  src/PythiaFilterZJet.cc
  src/HeavyQuarkFromMPIFilter.cc
  src/HeavyQuarkFromMPIFilterAlgo.cc
  src/JetFlavourFilter.cc
  src/PythiaFilterEMJetHeep.cc
  src/PythiaFilterHT.cc
  src/HighETPhotonsFilter.cc
  src/MCZll.cc
  src/PythiaFilterTTBar.cc
  src/BsJpsiPhiFilter.cc
  src/BdecayFilter.cc
  src/TwoVBGenFilter.cc
  src/PythiaFilterZJetWithOutBg.cc
  src/PythiaHLTSoupFilter.cc
  src/PythiaFilterGammaJetWithBg.cc
  src/NJetsMC.cc
  src/ZgMassFilter.cc
  src/UEDMultiLeptonFilter.cc
  src/PythiaFilterIsolatedTrack.cc
  src/JGJFilter.cc
  src/BCToEFilter.cc
  src/doubleEMEnrichingFilterAlgo.cc
  src/DJpsiFilter.cc
  src/PythiaFilterMultiMother.cc
  src/PythiaDauVFilter.cc
  src/MCLongLivedParticles.cc
  src/PythiaFilterGammaJetWithOutBg.cc
  src/EMEnrichingFilterAlgo.cc
  src/MCProcessRangeFilter.cc
  src/ComphepSingletopFilter.cc
  src/MCProcessFilter.cc
  src/MCSingleParticleYPt.cc
  src/MCParticlePairFilter.cc
  src/PythiaFilter.cc
  src/CosmicGenFilterLowE.cc
  src/PythiaFilterGammaJet.cc
  src/PythiaFilterEMJet.cc
  src/BCToEFilterAlgo.cc
  src/PhotonEnrichmentFilter.cc
  src/STFilter.cc
  src/CosmicGenFilterHelix.cc
  src/PythiaMomDauFilter.cc
  src/LHEGenericFilter.cc
)

target_include_directories(GeneratorInterfaceGenFilters PUBLIC /usr/include/boost/iostreams/)
target_include_directories(GeneratorInterfaceGenFilters PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceGenFilters PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceGenFilters PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceGenFilters PUBLIC /usr/include/boost/serialization/)
target_include_directories(GeneratorInterfaceGenFilters PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceGenFilters PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceGenFilters PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceGenFilters PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceGenFilters PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceGenFilters PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceGenFilters PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceGenFilters PUBLIC /usr/include/boost/regex/)

