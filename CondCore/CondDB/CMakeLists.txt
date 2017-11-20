add_subdirectory(test)
add_subdirectory(plugins)
add_library(CondCoreCondDB OBJECT 
  src/GTEditor.cc
  src/Cipher.cc
  src/Exception.cc
  src/IOVProxy.cc
  src/RunInfoProxy.cc
  src/PayloadReader.cc
  src/SessionImpl.cc
  src/CoralServiceManager.cc
  src/Binary.cc
  src/ConnectionPool.cc
  src/T_EventSetup_KeyList.cc
  src/IOVSchema.cc
  src/CoralServiceFactory.cc
  src/CredentialStore.cc
  src/IOVEditor.cc
  src/RunInfoSchema.cc
  src/blowfish.cc
  src/GTProxy.cc
  src/DecodingKey.cc
  src/GTSchema.cc
  src/base64.cc
  src/FileUtils.cc
  src/Session.cc
  src/Serialization.cc
  src/Types.cc
  src/KeyList.cc
  src/RunInfoEditor.cc
  src/PayloadProxy.cc
  src/DbConnectionString.cc
  src/Time.cc
)

target_include_directories(CondCoreCondDB PUBLIC /usr/include/boost/python/)
target_include_directories(CondCoreCondDB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondCoreCondDB PUBLIC /usr/include/python2.7/)
target_include_directories(CondCoreCondDB PUBLIC /usr/include/root/)
target_include_directories(CondCoreCondDB PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondCoreCondDB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondCoreCondDB PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondCoreCondDB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondCoreCondDB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondCoreCondDB PUBLIC /usr/include/boost/)
target_include_directories(CondCoreCondDB PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondCoreCondDB PUBLIC /usr/include/boost/regex/)

