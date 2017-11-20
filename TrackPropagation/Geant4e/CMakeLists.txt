add_subdirectory(test)
add_subdirectory(plugins)
add_library(TrackPropagationGeant4e OBJECT 
  src/Geant4ePropagator.cc
)

target_include_directories(TrackPropagationGeant4e PUBLIC /usr/include/boost/python/)
target_include_directories(TrackPropagationGeant4e PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackPropagationGeant4e PUBLIC /usr/include/python2.7/)
target_include_directories(TrackPropagationGeant4e PUBLIC /usr/include/root/)
target_include_directories(TrackPropagationGeant4e PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackPropagationGeant4e PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackPropagationGeant4e PUBLIC /usr/include/boost/)
target_include_directories(TrackPropagationGeant4e PUBLIC /usr/include/Geant4/)
target_include_directories(TrackPropagationGeant4e PUBLIC /usr/include/boost/regex/)

