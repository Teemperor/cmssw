add_library(L1TriggerConfigDTTrackFinder OBJECT 
  src/DTQualPatternLutOnlineProd.cc
  src/DTPtaLutOnlineProd.cc
  src/SealModule.cc
  src/DTQualPatternLutTester.cc
  src/DTTFRSKeysOnlineProd.cc
  src/DTTFParametersTester.cc
  src/DTPtaLutTester.cc
  src/DTExtLutTester.cc
  src/DTPhiLutOnlineProd.cc
  src/DTTFMasksTester.cc
  src/DTPhiLutTester.cc
  src/DTTFParametersOnlineProd.cc
  src/DTEtaPatternLutOnlineProd.cc
  src/DTTFMasksOnlineProd.cc
  src/DTTFTSCObjectKeysOnlineProd.cc
  src/DTTrackFinderConfig.cc
  src/DTExtLutOnlineProd.cc
  src/DTEtaPatternLutTester.cc
)

target_include_directories(L1TriggerConfigDTTrackFinder PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerConfigDTTrackFinder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerConfigDTTrackFinder PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerConfigDTTrackFinder PUBLIC /usr/include/root/)
target_include_directories(L1TriggerConfigDTTrackFinder PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerConfigDTTrackFinder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerConfigDTTrackFinder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerConfigDTTrackFinder PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerConfigDTTrackFinder PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerConfigDTTrackFinder PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerConfigDTTrackFinder PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerConfigDTTrackFinder PUBLIC /usr/include/boost/regex/)

