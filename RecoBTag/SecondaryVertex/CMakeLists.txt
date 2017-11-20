add_subdirectory(plugins)
add_library(RecoBTagSecondaryVertex OBJECT 
  src/TrackSorting.cc
  src/TrackSelector.cc
  src/GhostTrackComputer.cc
  src/CombinedSVComputer.cc
  src/TrackKinematics.cc
  src/TemplatedSecondaryVertex.cc
  src/V0Filter.cc
  src/CombinedSVSoftLeptonComputer.cc
  src/VertexFilter.cc
  src/CandidateBoostedDoubleSecondaryVertexComputer.cc
)

target_include_directories(RecoBTagSecondaryVertex PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoBTagSecondaryVertex PUBLIC /usr/include/python2.7/)
target_include_directories(RecoBTagSecondaryVertex PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoBTagSecondaryVertex PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoBTagSecondaryVertex PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoBTagSecondaryVertex PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoBTagSecondaryVertex PUBLIC /usr/include/boost/)
target_include_directories(RecoBTagSecondaryVertex PUBLIC /usr/include/boost/python/)
target_include_directories(RecoBTagSecondaryVertex PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoBTagSecondaryVertex PUBLIC /usr/include/root/)
target_include_directories(RecoBTagSecondaryVertex PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoBTagSecondaryVertex PUBLIC /usr/include/boost/regex/)

