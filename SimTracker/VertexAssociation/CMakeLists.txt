add_subdirectory(test)
add_library(SimTrackerVertexAssociation OBJECT 
  src/VertexAssociatorByTracks.cc
  src/calculateVertexSharedTracks.cc
  src/VertexAssociatorByPositionAndTracks.cc
)

target_include_directories(SimTrackerVertexAssociation PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimTrackerVertexAssociation PUBLIC /usr/include/root/)
target_include_directories(SimTrackerVertexAssociation PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimTrackerVertexAssociation PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimTrackerVertexAssociation PUBLIC /usr/include/boost/)
target_include_directories(SimTrackerVertexAssociation PUBLIC /usr/include/boost/regex/)

