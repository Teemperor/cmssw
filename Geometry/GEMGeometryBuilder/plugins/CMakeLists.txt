add_library(GEMGeometryESModule OBJECT 
  GEMGeometryESModule.cc
)

target_include_directories(GEMGeometryESModule PUBLIC /usr/include/boost/python/)
target_include_directories(GEMGeometryESModule PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GEMGeometryESModule PUBLIC /usr/include/python2.7/)
target_include_directories(GEMGeometryESModule PUBLIC /usr/include/root/)
target_include_directories(GEMGeometryESModule PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GEMGeometryESModule PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GEMGeometryESModule PUBLIC /usr/include/boost/serialization/)
target_include_directories(GEMGeometryESModule PUBLIC /usr/include/boost/)
target_include_directories(GEMGeometryESModule PUBLIC /usr/include/boost/regex/)

add_library(ME0GeometryESModule OBJECT 
  ME0GeometryESModule.cc
)

target_include_directories(ME0GeometryESModule PUBLIC /usr/include/boost/python/)
target_include_directories(ME0GeometryESModule PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ME0GeometryESModule PUBLIC /usr/include/python2.7/)
target_include_directories(ME0GeometryESModule PUBLIC /usr/include/root/)
target_include_directories(ME0GeometryESModule PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ME0GeometryESModule PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ME0GeometryESModule PUBLIC /usr/include/boost/serialization/)
target_include_directories(ME0GeometryESModule PUBLIC /usr/include/boost/)
target_include_directories(ME0GeometryESModule PUBLIC /usr/include/boost/regex/)

