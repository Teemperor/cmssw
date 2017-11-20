add_library(testDataFormatsFWLiteMakeInput OBJECT 
  TestRunnerDataFormatsFWLite.cpp
)

target_include_directories(testDataFormatsFWLiteMakeInput PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDataFormatsFWLiteMakeInput PUBLIC /usr/include/root/)
target_include_directories(testDataFormatsFWLiteMakeInput PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDataFormatsFWLiteMakeInput PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDataFormatsFWLiteMakeInput PUBLIC /usr/include/boost/)
target_include_directories(testDataFormatsFWLiteMakeInput PUBLIC /usr/include/boost/regex/)

add_library(testDataFormatsFWLite OBJECT 
  test.cppunit.cpp
  format_type_name.cppunit.cpp
)

target_include_directories(testDataFormatsFWLite PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDataFormatsFWLite PUBLIC /usr/include/root/)
target_include_directories(testDataFormatsFWLite PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDataFormatsFWLite PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDataFormatsFWLite PUBLIC /usr/include/boost/)
target_include_directories(testDataFormatsFWLite PUBLIC /usr/include/boost/regex/)

add_library(TestRunnerDataFormatsFWLite OBJECT 
  TestRunnerDataFormatsFWLite.cpp
)

target_include_directories(TestRunnerDataFormatsFWLite PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestRunnerDataFormatsFWLite PUBLIC /usr/include/root/)
target_include_directories(TestRunnerDataFormatsFWLite PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestRunnerDataFormatsFWLite PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestRunnerDataFormatsFWLite PUBLIC /usr/include/boost/)
target_include_directories(TestRunnerDataFormatsFWLite PUBLIC /usr/include/boost/regex/)

