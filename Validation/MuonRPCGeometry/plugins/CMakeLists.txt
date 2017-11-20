add_library(ValidationMuonRPCGeometryPlugins OBJECT 
  RPCPhiEff.cc
  Module.cc
  RPCGeometryServTest.cc
)

target_include_directories(ValidationMuonRPCGeometryPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationMuonRPCGeometryPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationMuonRPCGeometryPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationMuonRPCGeometryPlugins PUBLIC /usr/include/root/)
target_include_directories(ValidationMuonRPCGeometryPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationMuonRPCGeometryPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationMuonRPCGeometryPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(ValidationMuonRPCGeometryPlugins PUBLIC /usr/include/boost/)
target_include_directories(ValidationMuonRPCGeometryPlugins PUBLIC /usr/include/boost/regex/)

