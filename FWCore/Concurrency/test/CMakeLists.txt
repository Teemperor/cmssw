add_library(testFWCoreConcurrency OBJECT 
  serialtaskqueue_t.cppunit.cpp
  serialtaskqueuechain_t.cppunit.cpp
  waitingtasklist_t.cppunit.cpp
)


add_library(test_xercesInitialize OBJECT 
  test_xercesInitialize.cpp
)


add_library(test_threadSafeOutputFileStream OBJECT 
  test_threadSafeOutputFileStream.cpp
)


add_library(ThreadSafeAddOnlyContainer_t OBJECT 
  ThreadSafeAddOnlyContainer_t.cpp
)


add_library(TestFWCoreConcurrencyDriver OBJECT 
  TestFWCoreConcurrencyDriver.cpp
)

target_include_directories(TestFWCoreConcurrencyDriver PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestFWCoreConcurrencyDriver PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestFWCoreConcurrencyDriver PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestFWCoreConcurrencyDriver PUBLIC /usr/include/boost/)
target_include_directories(TestFWCoreConcurrencyDriver PUBLIC /usr/include/root/)
target_include_directories(TestFWCoreConcurrencyDriver PUBLIC /usr/include/boost/regex/)

