add_subdirectory(test)
add_subdirectory(plugins)
add_library(CommonToolsRecoAlgos OBJECT 
  src/ClusterStorer.cc
  src/TrackWithVertexSelector.cc
  src/TrackSelector.cc
  src/PrimaryVertexAssignment.cc
  src/PrimaryVertexSorting.cc
  src/MassiveCandidateConverter.cc
  src/MuonSelector.cc
)

target_include_directories(CommonToolsRecoAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(CommonToolsRecoAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CommonToolsRecoAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(CommonToolsRecoAlgos PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(CommonToolsRecoAlgos PUBLIC /usr/include/root/)
target_include_directories(CommonToolsRecoAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CommonToolsRecoAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CommonToolsRecoAlgos PUBLIC /usr/include/boost/)
target_include_directories(CommonToolsRecoAlgos PUBLIC /usr/include/boost/regex/)

