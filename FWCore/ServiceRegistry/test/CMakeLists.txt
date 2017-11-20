add_library(FWCoreServiceRegistryTestDummyService OBJECT 
  stubs/DummyService.cc
  stubs/DummyServiceE0.cc
  stubs/DependsOnDummyService.cc
  stubs/DummyStoreConfigService.cc
)

target_include_directories(FWCoreServiceRegistryTestDummyService PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreServiceRegistryTestDummyService PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreServiceRegistryTestDummyService PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreServiceRegistryTestDummyService PUBLIC /usr/include/root/)
target_include_directories(FWCoreServiceRegistryTestDummyService PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreServiceRegistryTestDummyService PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreServiceRegistryTestDummyService PUBLIC /usr/include/boost/)
target_include_directories(FWCoreServiceRegistryTestDummyService PUBLIC /usr/include/boost/regex/)

add_library(FWCoreServiceRegistryTestDummyServicePlugin OBJECT 
  stubs/Modules.cc
)

target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC /usr/include/root/)
target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC /usr/include/boost/)
target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC /usr/include/boost/regex/)

add_library(testServiceRegistry OBJECT 
  serviceregistry_t.cppunit.cpp
  servicesmanager_t.cppunit.cc
  connect_but_block_self_t.cppunit.cc
)

target_include_directories(testServiceRegistry PUBLIC /usr/include/boost/python/)
target_include_directories(testServiceRegistry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testServiceRegistry PUBLIC /usr/include/python2.7/)
target_include_directories(testServiceRegistry PUBLIC /usr/include/root/)
target_include_directories(testServiceRegistry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testServiceRegistry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testServiceRegistry PUBLIC /usr/include/boost/)
target_include_directories(testServiceRegistry PUBLIC /usr/include/boost/regex/)

add_library(servicesmanager_order OBJECT 
  servicesmanager_order.cpp
)

target_include_directories(servicesmanager_order PUBLIC /usr/include/boost/python/)
target_include_directories(servicesmanager_order PUBLIC /usr/include/boost/filesystem/)
target_include_directories(servicesmanager_order PUBLIC /usr/include/python2.7/)
target_include_directories(servicesmanager_order PUBLIC /usr/include/root/)
target_include_directories(servicesmanager_order PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(servicesmanager_order PUBLIC /home/teemperor/cms/md5/)
target_include_directories(servicesmanager_order PUBLIC /usr/include/boost/)
target_include_directories(servicesmanager_order PUBLIC /usr/include/boost/regex/)

