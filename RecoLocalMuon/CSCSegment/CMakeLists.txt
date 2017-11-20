add_subdirectory(test)
add_library(RecoLocalMuonCSCSegment OBJECT 
  src/SealModule.cc
  src/CSCSegAlgoPreClustering.cc
  src/CSCSegAlgoRU.cc
  src/CSCSegmentBuilderPluginFactory.cc
  src/CSCCondSegFit.cc
  src/CSCSegAlgoTC.cc
  src/CSCSegmentProducer.cc
  src/CSCSegAlgoShowering.cc
  src/CSCSegmentBuilder.cc
  src/CSCSegAlgoSK.cc
  src/CSCSegAlgoST.cc
  src/CSCSegAlgoDF.cc
  src/CSCSegFit.cc
)

target_include_directories(RecoLocalMuonCSCSegment PUBLIC /usr/include/boost/python/)
target_include_directories(RecoLocalMuonCSCSegment PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoLocalMuonCSCSegment PUBLIC /usr/include/python2.7/)
target_include_directories(RecoLocalMuonCSCSegment PUBLIC /usr/include/root/)
target_include_directories(RecoLocalMuonCSCSegment PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoLocalMuonCSCSegment PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoLocalMuonCSCSegment PUBLIC /usr/include/boost/)
target_include_directories(RecoLocalMuonCSCSegment PUBLIC /usr/include/boost/regex/)

