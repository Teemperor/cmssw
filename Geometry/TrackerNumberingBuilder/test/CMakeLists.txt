add_library(ModuleNumbering OBJECT 
  ModuleNumbering.cc
)

target_include_directories(ModuleNumbering PUBLIC /usr/include/boost/python/)
target_include_directories(ModuleNumbering PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ModuleNumbering PUBLIC /usr/include/python2.7/)
target_include_directories(ModuleNumbering PUBLIC /usr/include/root/)
target_include_directories(ModuleNumbering PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ModuleNumbering PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ModuleNumbering PUBLIC /usr/include/boost/)
target_include_directories(ModuleNumbering PUBLIC /usr/include/boost/regex/)

add_library(testGeometryTrackerNumberingBuilder OBJECT 
  GeometricDetAnalyzer.cc
)

target_include_directories(testGeometryTrackerNumberingBuilder PUBLIC /usr/include/boost/python/)
target_include_directories(testGeometryTrackerNumberingBuilder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testGeometryTrackerNumberingBuilder PUBLIC /usr/include/python2.7/)
target_include_directories(testGeometryTrackerNumberingBuilder PUBLIC /usr/include/root/)
target_include_directories(testGeometryTrackerNumberingBuilder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testGeometryTrackerNumberingBuilder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testGeometryTrackerNumberingBuilder PUBLIC /usr/include/boost/)
target_include_directories(testGeometryTrackerNumberingBuilder PUBLIC /usr/include/boost/regex/)

add_library(TrackerTopologyAnalyzer OBJECT 
  TrackerTopologyAnalyzer.cc
)

target_include_directories(TrackerTopologyAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(TrackerTopologyAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackerTopologyAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(TrackerTopologyAnalyzer PUBLIC /usr/include/root/)
target_include_directories(TrackerTopologyAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackerTopologyAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackerTopologyAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(TrackerTopologyAnalyzer PUBLIC /usr/include/boost/regex/)

