add_subdirectory(plugins)
add_library(CaloOnlineToolsHcalOnlineDb OBJECT 
  src/HcalLutManager.cc
  src/xdaq_compat.cc
  src/HcalAssistant.cc
  src/RooGKCounter.cc
  src/ConfigurationDatabase.cc
  src/XMLLUTLoader.cc
  src/HCALConfigDB.cc
  src/ConnectionManager.cc
  src/ConfigurationDatabaseStandardXMLParser.cc
  src/ConfigurationDatabaseImpl.cc
  src/HcalChannelIterator.cc
  src/ConfigurationDatabaseImplOracle.cc
  src/HcalQIEManager.cc
  src/PluginManager.cc
  src/HcalLutGenerator.cc
  src/ConfigurationDatabaseImplXMLFile.cc
  src/LMap.cc
  src/ZdcLut.cc
)

target_include_directories(CaloOnlineToolsHcalOnlineDb PUBLIC /usr/include/python2.7/)
target_include_directories(CaloOnlineToolsHcalOnlineDb PUBLIC /usr/include/boost/serialization/)
target_include_directories(CaloOnlineToolsHcalOnlineDb PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CaloOnlineToolsHcalOnlineDb PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CaloOnlineToolsHcalOnlineDb PUBLIC /usr/include/boost/)
target_include_directories(CaloOnlineToolsHcalOnlineDb PUBLIC /usr/include/boost/python/)
target_include_directories(CaloOnlineToolsHcalOnlineDb PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CaloOnlineToolsHcalOnlineDb PUBLIC /usr/include/root/)
target_include_directories(CaloOnlineToolsHcalOnlineDb PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CaloOnlineToolsHcalOnlineDb PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CaloOnlineToolsHcalOnlineDb PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CaloOnlineToolsHcalOnlineDb PUBLIC /usr/include/boost/regex/)

