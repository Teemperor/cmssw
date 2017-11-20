add_library(TrackPropagatorsGeant4ePlugins OBJECT 
  module.cc
  GeantPropagatorESProducer.cc
)

target_include_directories(TrackPropagatorsGeant4ePlugins PUBLIC /usr/include/boost/python/)
target_include_directories(TrackPropagatorsGeant4ePlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackPropagatorsGeant4ePlugins PUBLIC /usr/include/python2.7/)
target_include_directories(TrackPropagatorsGeant4ePlugins PUBLIC /usr/include/root/)
target_include_directories(TrackPropagatorsGeant4ePlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackPropagatorsGeant4ePlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackPropagatorsGeant4ePlugins PUBLIC /usr/include/boost/)
target_include_directories(TrackPropagatorsGeant4ePlugins PUBLIC /usr/include/Geant4/)
target_include_directories(TrackPropagatorsGeant4ePlugins PUBLIC /usr/include/boost/regex/)

