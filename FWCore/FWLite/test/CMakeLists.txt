add_library(testFWCoreFWLite OBJECT 
  ref_t.cppunit.cpp
)

target_include_directories(testFWCoreFWLite PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testFWCoreFWLite PUBLIC /usr/include/root/)
target_include_directories(testFWCoreFWLite PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testFWCoreFWLite PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testFWCoreFWLite PUBLIC /usr/include/boost/)
target_include_directories(testFWCoreFWLite PUBLIC /usr/include/boost/regex/)

add_library(TestRunnerFWCoreFWLite OBJECT 
  TestRunnerFWCoreFWLite.cpp
)

target_include_directories(TestRunnerFWCoreFWLite PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestRunnerFWCoreFWLite PUBLIC /usr/include/root/)
target_include_directories(TestRunnerFWCoreFWLite PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestRunnerFWCoreFWLite PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestRunnerFWCoreFWLite PUBLIC /usr/include/boost/)
target_include_directories(TestRunnerFWCoreFWLite PUBLIC /usr/include/boost/regex/)

