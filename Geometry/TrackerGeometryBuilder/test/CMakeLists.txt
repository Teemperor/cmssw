add_library(TrackerDigiGeometryAnalyzer OBJECT 
  TrackerDigiGeometryAnalyzer.cc
)

target_include_directories(TrackerDigiGeometryAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(TrackerDigiGeometryAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackerDigiGeometryAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(TrackerDigiGeometryAnalyzer PUBLIC /usr/include/root/)
target_include_directories(TrackerDigiGeometryAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackerDigiGeometryAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackerDigiGeometryAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackerDigiGeometryAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(TrackerDigiGeometryAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(TrackerParametersAnalyzer OBJECT 
  TrackerParametersAnalyzer.cc
)

target_include_directories(TrackerParametersAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(TrackerParametersAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackerParametersAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(TrackerParametersAnalyzer PUBLIC /usr/include/root/)
target_include_directories(TrackerParametersAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackerParametersAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackerParametersAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackerParametersAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(TrackerParametersAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(TrackerMapTool OBJECT 
  TrackerMapTool.cc
)

target_include_directories(TrackerMapTool PUBLIC /usr/include/boost/python/)
target_include_directories(TrackerMapTool PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackerMapTool PUBLIC /usr/include/python2.7/)
target_include_directories(TrackerMapTool PUBLIC /usr/include/root/)
target_include_directories(TrackerMapTool PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackerMapTool PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackerMapTool PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackerMapTool PUBLIC /usr/include/boost/)
target_include_directories(TrackerMapTool PUBLIC /usr/include/boost/regex/)

add_library(ModuleInfo OBJECT 
  ModuleInfo.cc
)

target_include_directories(ModuleInfo PUBLIC /usr/include/boost/python/)
target_include_directories(ModuleInfo PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ModuleInfo PUBLIC /usr/include/python2.7/)
target_include_directories(ModuleInfo PUBLIC /usr/include/root/)
target_include_directories(ModuleInfo PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ModuleInfo PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ModuleInfo PUBLIC /usr/include/boost/serialization/)
target_include_directories(ModuleInfo PUBLIC /usr/include/boost/)
target_include_directories(ModuleInfo PUBLIC /usr/include/boost/regex/)

add_library(GeoHierarchyTest OBJECT 
  GeoHierarchyTest.cc
)

target_include_directories(GeoHierarchyTest PUBLIC /usr/include/boost/python/)
target_include_directories(GeoHierarchyTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeoHierarchyTest PUBLIC /usr/include/python2.7/)
target_include_directories(GeoHierarchyTest PUBLIC /usr/include/root/)
target_include_directories(GeoHierarchyTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeoHierarchyTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeoHierarchyTest PUBLIC /usr/include/boost/)
target_include_directories(GeoHierarchyTest PUBLIC /usr/include/boost/regex/)

