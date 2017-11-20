add_library(L1TriggerConfigUtilities OBJECT 
  src/L1MenuReader.cc
  src/L1TCaloParamsUpdater.cc
  src/L1TMuonEndcapViewer.cc
  src/L1TCaloParamsViewer.cc
  src/L1TGlobalPrescalesVetosWriter.cc
  src/L1TMuonOverlapReader.cc
  src/L1TGlobalPrescalesVetosViewer.cc
  src/L1TriggerKeyExtReader.cc
  src/L1TMuonBarrelParamsWriter.cc
  src/L1TriggerKeyListExtReader.cc
  src/L1KeyListWriter.cc
  src/L1TCaloParamsReader.cc
  src/L1TCaloParamsWriter.cc
  src/L1TMuonGlobalParamsWriter.cc
  src/L1TCaloParamsCompare.cc
  src/L1TMuonGlobalParamsViewer.cc
  src/L1MenuWriter.cc
  src/L1KeyWriter.cc
  src/L1TMuonOverlapWriter.cc
  src/L1TMuonEndcapWriter.cc
)

target_include_directories(L1TriggerConfigUtilities PUBLIC /usr/include/boost/iostreams/)
target_include_directories(L1TriggerConfigUtilities PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerConfigUtilities PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(L1TriggerConfigUtilities PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerConfigUtilities PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerConfigUtilities PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(L1TriggerConfigUtilities PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerConfigUtilities PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerConfigUtilities PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerConfigUtilities PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerConfigUtilities PUBLIC /usr/include/root/)
target_include_directories(L1TriggerConfigUtilities PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerConfigUtilities PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerConfigUtilities PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerConfigUtilities PUBLIC /usr/include/boost/regex/)

