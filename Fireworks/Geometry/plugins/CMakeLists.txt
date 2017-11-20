add_library(FireworksDisplayGeomPlugin OBJECT 
  DisplayGeom.cc
)

target_include_directories(FireworksDisplayGeomPlugin PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksDisplayGeomPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksDisplayGeomPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(FireworksDisplayGeomPlugin PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksDisplayGeomPlugin PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksDisplayGeomPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksDisplayGeomPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksDisplayGeomPlugin PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksDisplayGeomPlugin PUBLIC /usr/include/boost/)
target_include_directories(FireworksDisplayGeomPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksDisplayGeomPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksDisplayGeomPlugin PUBLIC /usr/include/root/)
target_include_directories(FireworksDisplayGeomPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksDisplayGeomPlugin PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksDisplayGeomPlugin PUBLIC /usr/include/boost/regex/)

add_library(FireworksGeometryPlugins OBJECT 
  EveDisplayPlugin.cc
)

target_include_directories(FireworksGeometryPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksGeometryPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksGeometryPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksGeometryPlugins PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksGeometryPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksGeometryPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksGeometryPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksGeometryPlugins PUBLIC /usr/include/boost/)
target_include_directories(FireworksGeometryPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksGeometryPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksGeometryPlugins PUBLIC /usr/include/root/)
target_include_directories(FireworksGeometryPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksGeometryPlugins PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksGeometryPlugins PUBLIC /usr/include/boost/regex/)

add_library(FireworksGeometryDumpSimGeometryPlugin OBJECT 
  DumpSimGeometry.cc
)

target_include_directories(FireworksGeometryDumpSimGeometryPlugin PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksGeometryDumpSimGeometryPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksGeometryDumpSimGeometryPlugin PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksGeometryDumpSimGeometryPlugin PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksGeometryDumpSimGeometryPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksGeometryDumpSimGeometryPlugin PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksGeometryDumpSimGeometryPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksGeometryDumpSimGeometryPlugin PUBLIC /usr/include/boost/)
target_include_directories(FireworksGeometryDumpSimGeometryPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksGeometryDumpSimGeometryPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksGeometryDumpSimGeometryPlugin PUBLIC /usr/include/root/)
target_include_directories(FireworksGeometryDumpSimGeometryPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksGeometryDumpSimGeometryPlugin PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksGeometryDumpSimGeometryPlugin PUBLIC /usr/include/boost/regex/)

add_library(FireworksGeometryMFProducerPlugin OBJECT 
  MFProducer.cc
)

target_include_directories(FireworksGeometryMFProducerPlugin PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksGeometryMFProducerPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksGeometryMFProducerPlugin PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksGeometryMFProducerPlugin PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksGeometryMFProducerPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksGeometryMFProducerPlugin PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksGeometryMFProducerPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksGeometryMFProducerPlugin PUBLIC /usr/include/boost/)
target_include_directories(FireworksGeometryMFProducerPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksGeometryMFProducerPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksGeometryMFProducerPlugin PUBLIC /usr/include/root/)
target_include_directories(FireworksGeometryMFProducerPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksGeometryMFProducerPlugin PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksGeometryMFProducerPlugin PUBLIC /usr/include/boost/regex/)

add_library(FireworksGeometryDumpFWRecoGeometryPlugin OBJECT 
  DumpFWRecoGeometry.cc
)

target_include_directories(FireworksGeometryDumpFWRecoGeometryPlugin PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksGeometryDumpFWRecoGeometryPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksGeometryDumpFWRecoGeometryPlugin PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksGeometryDumpFWRecoGeometryPlugin PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksGeometryDumpFWRecoGeometryPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksGeometryDumpFWRecoGeometryPlugin PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksGeometryDumpFWRecoGeometryPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksGeometryDumpFWRecoGeometryPlugin PUBLIC /usr/include/boost/)
target_include_directories(FireworksGeometryDumpFWRecoGeometryPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksGeometryDumpFWRecoGeometryPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksGeometryDumpFWRecoGeometryPlugin PUBLIC /usr/include/root/)
target_include_directories(FireworksGeometryDumpFWRecoGeometryPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksGeometryDumpFWRecoGeometryPlugin PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksGeometryDumpFWRecoGeometryPlugin PUBLIC /usr/include/boost/regex/)

add_library(FireworksGeometryDumpFWTGeoRecoGeometryPlugin OBJECT 
  DumpFWTGeoRecoGeometry.cc
)

target_include_directories(FireworksGeometryDumpFWTGeoRecoGeometryPlugin PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksGeometryDumpFWTGeoRecoGeometryPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksGeometryDumpFWTGeoRecoGeometryPlugin PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksGeometryDumpFWTGeoRecoGeometryPlugin PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksGeometryDumpFWTGeoRecoGeometryPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksGeometryDumpFWTGeoRecoGeometryPlugin PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksGeometryDumpFWTGeoRecoGeometryPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksGeometryDumpFWTGeoRecoGeometryPlugin PUBLIC /usr/include/boost/)
target_include_directories(FireworksGeometryDumpFWTGeoRecoGeometryPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksGeometryDumpFWTGeoRecoGeometryPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksGeometryDumpFWTGeoRecoGeometryPlugin PUBLIC /usr/include/root/)
target_include_directories(FireworksGeometryDumpFWTGeoRecoGeometryPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksGeometryDumpFWTGeoRecoGeometryPlugin PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksGeometryDumpFWTGeoRecoGeometryPlugin PUBLIC /usr/include/boost/regex/)

add_library(FireworksGeometryValidateGeometryPlugin OBJECT 
  ValidateGeometry.cc
)

target_include_directories(FireworksGeometryValidateGeometryPlugin PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksGeometryValidateGeometryPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksGeometryValidateGeometryPlugin PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksGeometryValidateGeometryPlugin PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksGeometryValidateGeometryPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksGeometryValidateGeometryPlugin PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksGeometryValidateGeometryPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksGeometryValidateGeometryPlugin PUBLIC /usr/include/boost/)
target_include_directories(FireworksGeometryValidateGeometryPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksGeometryValidateGeometryPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksGeometryValidateGeometryPlugin PUBLIC /usr/include/root/)
target_include_directories(FireworksGeometryValidateGeometryPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksGeometryValidateGeometryPlugin PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksGeometryValidateGeometryPlugin PUBLIC /usr/include/boost/regex/)

add_library(FireworksGeometryTGeoMgrFromDddPlugin OBJECT 
  TGeoMgrFromDddPlugin.cc
)

target_include_directories(FireworksGeometryTGeoMgrFromDddPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksGeometryTGeoMgrFromDddPlugin PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksGeometryTGeoMgrFromDddPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksGeometryTGeoMgrFromDddPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksGeometryTGeoMgrFromDddPlugin PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksGeometryTGeoMgrFromDddPlugin PUBLIC /usr/include/root/)
target_include_directories(FireworksGeometryTGeoMgrFromDddPlugin PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksGeometryTGeoMgrFromDddPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksGeometryTGeoMgrFromDddPlugin PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksGeometryTGeoMgrFromDddPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksGeometryTGeoMgrFromDddPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksGeometryTGeoMgrFromDddPlugin PUBLIC /usr/include/boost/)
target_include_directories(FireworksGeometryTGeoMgrFromDddPlugin PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksGeometryTGeoMgrFromDddPlugin PUBLIC /usr/include/boost/regex/)

add_library(FireworksGeometryFWRecoGeometryESProducerPlugin OBJECT 
  FWRecoGeometryESProducerPlugin.cc
)

target_include_directories(FireworksGeometryFWRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksGeometryFWRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksGeometryFWRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksGeometryFWRecoGeometryESProducerPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksGeometryFWRecoGeometryESProducerPlugin PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksGeometryFWRecoGeometryESProducerPlugin PUBLIC /usr/include/root/)
target_include_directories(FireworksGeometryFWRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksGeometryFWRecoGeometryESProducerPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksGeometryFWRecoGeometryESProducerPlugin PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksGeometryFWRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksGeometryFWRecoGeometryESProducerPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksGeometryFWRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/)
target_include_directories(FireworksGeometryFWRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksGeometryFWRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/regex/)

add_library(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin OBJECT 
  FWTGeoRecoGeometryESProducerPlugin.cc
)

target_include_directories(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin PUBLIC /usr/include/root/)
target_include_directories(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/)
target_include_directories(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin PUBLIC /usr/include/boost/regex/)

