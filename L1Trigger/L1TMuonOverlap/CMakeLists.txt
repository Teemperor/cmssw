add_subdirectory(plugins)
add_library(L1TriggerL1TMuonOverlap OBJECT 
  src/OMTFResult.cc
  src/XMLConfigReader.cc
  src/OMTFinputMaker.cc
  src/XMLConfigWriter.cc
  src/OMTFinput.cc
  src/OMTFReconstruction.cc
  src/OMTFConfiguration.cc
  src/AngleConverter.cc
  src/OmtfName.cc
  src/OMTFSorter.cc
  src/GhostBuster.cc
  src/OMTFProcessor.cc
  src/AlgoMuon.cc
  src/GoldenPattern.cc
  src/OMTFConfigMaker.cc
)

target_include_directories(L1TriggerL1TMuonOverlap PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerL1TMuonOverlap PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerL1TMuonOverlap PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerL1TMuonOverlap PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerL1TMuonOverlap PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerL1TMuonOverlap PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerL1TMuonOverlap PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerL1TMuonOverlap PUBLIC /usr/include/root/)
target_include_directories(L1TriggerL1TMuonOverlap PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerL1TMuonOverlap PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerL1TMuonOverlap PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerL1TMuonOverlap PUBLIC /usr/include/boost/regex/)

