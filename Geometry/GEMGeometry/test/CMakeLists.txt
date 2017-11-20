add_library(GEMGeometryAnalyzer OBJECT 
  GEMGeometryAnalyzer.cc
)

target_include_directories(GEMGeometryAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(GEMGeometryAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GEMGeometryAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(GEMGeometryAnalyzer PUBLIC /usr/include/root/)
target_include_directories(GEMGeometryAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GEMGeometryAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GEMGeometryAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(GEMGeometryAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(ME0GeometryAnalyzer1EtaPart OBJECT 
  ME0GeometryAnalyzer.cc
)

target_include_directories(ME0GeometryAnalyzer1EtaPart PUBLIC /usr/include/boost/python/)
target_include_directories(ME0GeometryAnalyzer1EtaPart PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ME0GeometryAnalyzer1EtaPart PUBLIC /usr/include/python2.7/)
target_include_directories(ME0GeometryAnalyzer1EtaPart PUBLIC /usr/include/root/)
target_include_directories(ME0GeometryAnalyzer1EtaPart PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ME0GeometryAnalyzer1EtaPart PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ME0GeometryAnalyzer1EtaPart PUBLIC /usr/include/boost/)
target_include_directories(ME0GeometryAnalyzer1EtaPart PUBLIC /usr/include/boost/regex/)

add_library(ME0GeometryAnalyzer10EtaPart OBJECT 
  ME0GeometryAnalyzer10EtaPart.cc
)

target_include_directories(ME0GeometryAnalyzer10EtaPart PUBLIC /usr/include/boost/python/)
target_include_directories(ME0GeometryAnalyzer10EtaPart PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ME0GeometryAnalyzer10EtaPart PUBLIC /usr/include/python2.7/)
target_include_directories(ME0GeometryAnalyzer10EtaPart PUBLIC /usr/include/root/)
target_include_directories(ME0GeometryAnalyzer10EtaPart PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ME0GeometryAnalyzer10EtaPart PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ME0GeometryAnalyzer10EtaPart PUBLIC /usr/include/boost/)
target_include_directories(ME0GeometryAnalyzer10EtaPart PUBLIC /usr/include/boost/regex/)

