add_subdirectory(plugins)
add_library(FireworksGeometry OBJECT 
  src/FWRecoGeometryESProducer.cc
  src/FWTGeoRecoGeometryESProducer.cc
  src/TGeoMgrFromDdd.cc
  src/ES_FWRecoGeometry.cc
  src/FWRecoGeometryRecord.cc
  src/DisplayPluginFactory.cc
  src/FWTGeoRecoGeometryRecord.cc
  src/Reg_TGeoManager.cc
  src/DisplayGeomRecord.cc
  src/DisplayPlugin.cc
  src/ES_FWTGeoRecoGeometry.cc
  src/TGeoFromDddService.cc
  src/FWTGeoRecoGeometry.cc
)

target_include_directories(FireworksGeometry PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksGeometry PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksGeometry PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksGeometry PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksGeometry PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksGeometry PUBLIC /usr/include/boost/)
target_include_directories(FireworksGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksGeometry PUBLIC /usr/include/root/)
target_include_directories(FireworksGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksGeometry PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksGeometry PUBLIC /usr/include/boost/regex/)

