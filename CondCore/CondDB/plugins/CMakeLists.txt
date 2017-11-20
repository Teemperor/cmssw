add_library(CondDBV2PyInterface OBJECT 
  CondDBPyWrappers.cc
)

target_include_directories(CondDBV2PyInterface PUBLIC /usr/include/boost/python/)
target_include_directories(CondDBV2PyInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondDBV2PyInterface PUBLIC /usr/include/python2.7/)
target_include_directories(CondDBV2PyInterface PUBLIC /usr/include/root/)
target_include_directories(CondDBV2PyInterface PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondDBV2PyInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondDBV2PyInterface PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondDBV2PyInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondDBV2PyInterface PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondDBV2PyInterface PUBLIC /usr/include/boost/)
target_include_directories(CondDBV2PyInterface PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondDBV2PyInterface PUBLIC /usr/include/boost/regex/)

add_library(CondCoreCondDBXMLAuthenticationService OBJECT 
  XMLAuthenticationService.cc
)

target_include_directories(CondCoreCondDBXMLAuthenticationService PUBLIC /usr/include/boost/python/)
target_include_directories(CondCoreCondDBXMLAuthenticationService PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondCoreCondDBXMLAuthenticationService PUBLIC /usr/include/python2.7/)
target_include_directories(CondCoreCondDBXMLAuthenticationService PUBLIC /usr/include/root/)
target_include_directories(CondCoreCondDBXMLAuthenticationService PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondCoreCondDBXMLAuthenticationService PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondCoreCondDBXMLAuthenticationService PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondCoreCondDBXMLAuthenticationService PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondCoreCondDBXMLAuthenticationService PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondCoreCondDBXMLAuthenticationService PUBLIC /usr/include/boost/)
target_include_directories(CondCoreCondDBXMLAuthenticationService PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondCoreCondDBXMLAuthenticationService PUBLIC /usr/include/boost/regex/)

add_library(CondCoreCondDBRelationalAuthenticationService OBJECT 
  RelationalAuthenticationService.cc
)

target_include_directories(CondCoreCondDBRelationalAuthenticationService PUBLIC /usr/include/boost/python/)
target_include_directories(CondCoreCondDBRelationalAuthenticationService PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondCoreCondDBRelationalAuthenticationService PUBLIC /usr/include/python2.7/)
target_include_directories(CondCoreCondDBRelationalAuthenticationService PUBLIC /usr/include/root/)
target_include_directories(CondCoreCondDBRelationalAuthenticationService PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondCoreCondDBRelationalAuthenticationService PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondCoreCondDBRelationalAuthenticationService PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondCoreCondDBRelationalAuthenticationService PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondCoreCondDBRelationalAuthenticationService PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondCoreCondDBRelationalAuthenticationService PUBLIC /usr/include/boost/)
target_include_directories(CondCoreCondDBRelationalAuthenticationService PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondCoreCondDBRelationalAuthenticationService PUBLIC /usr/include/boost/regex/)

