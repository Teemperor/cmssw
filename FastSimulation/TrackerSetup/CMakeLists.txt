add_subdirectory(plugins)
add_library(FastSimulationTrackerSetup OBJECT 
  src/TrackerInteractionGeometry.cc
  src/ES_TrackerInteractionGeometry.cc
  src/TrackerInteractionGeometryRecord.cc
)

target_include_directories(FastSimulationTrackerSetup PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationTrackerSetup PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationTrackerSetup PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationTrackerSetup PUBLIC /usr/include/root/)
target_include_directories(FastSimulationTrackerSetup PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationTrackerSetup PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationTrackerSetup PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationTrackerSetup PUBLIC /usr/include/boost/regex/)

