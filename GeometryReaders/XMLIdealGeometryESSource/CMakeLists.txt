add_subdirectory(test)
add_library(GeometryReadersXMLIdealGeometryESSource OBJECT 
  src/GeometryConfiguration.cc
  src/XMLIdealGeometryESProducer.cc
  src/XMLIdealMagneticFieldGeometryESProducer.cc
  src/XMLIdealGeometryESSource.cc
)

target_include_directories(GeometryReadersXMLIdealGeometryESSource PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryReadersXMLIdealGeometryESSource PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryReadersXMLIdealGeometryESSource PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryReadersXMLIdealGeometryESSource PUBLIC /usr/include/root/)
target_include_directories(GeometryReadersXMLIdealGeometryESSource PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryReadersXMLIdealGeometryESSource PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryReadersXMLIdealGeometryESSource PUBLIC /usr/include/boost/serialization/)
target_include_directories(GeometryReadersXMLIdealGeometryESSource PUBLIC /usr/include/boost/)
target_include_directories(GeometryReadersXMLIdealGeometryESSource PUBLIC /usr/include/boost/regex/)

