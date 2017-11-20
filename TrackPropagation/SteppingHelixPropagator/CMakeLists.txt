add_subdirectory(test)
add_subdirectory(plugins)
add_library(TrackPropagationSteppingHelixPropagator OBJECT 
  src/SteppingHelixPropagator.cc
  src/SteppingHelixStateInfo.cc
)

target_include_directories(TrackPropagationSteppingHelixPropagator PUBLIC /usr/include/boost/python/)
target_include_directories(TrackPropagationSteppingHelixPropagator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackPropagationSteppingHelixPropagator PUBLIC /usr/include/python2.7/)
target_include_directories(TrackPropagationSteppingHelixPropagator PUBLIC /usr/include/root/)
target_include_directories(TrackPropagationSteppingHelixPropagator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackPropagationSteppingHelixPropagator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackPropagationSteppingHelixPropagator PUBLIC /usr/include/boost/)
target_include_directories(TrackPropagationSteppingHelixPropagator PUBLIC /usr/include/boost/regex/)

