add_library(testHcalParametersAnalyzer OBJECT 
  HcalParametersAnalyzer.cc
)

target_include_directories(testHcalParametersAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(testHcalParametersAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testHcalParametersAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(testHcalParametersAnalyzer PUBLIC /usr/include/root/)
target_include_directories(testHcalParametersAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testHcalParametersAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testHcalParametersAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(testHcalParametersAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(testHcalParametersAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(testHcalSimNumberingTester OBJECT 
  HcalSimNumberingTester.cc
)

target_include_directories(testHcalSimNumberingTester PUBLIC /usr/include/boost/python/)
target_include_directories(testHcalSimNumberingTester PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testHcalSimNumberingTester PUBLIC /usr/include/python2.7/)
target_include_directories(testHcalSimNumberingTester PUBLIC /usr/include/root/)
target_include_directories(testHcalSimNumberingTester PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testHcalSimNumberingTester PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testHcalSimNumberingTester PUBLIC /usr/include/boost/serialization/)
target_include_directories(testHcalSimNumberingTester PUBLIC /usr/include/boost/)
target_include_directories(testHcalSimNumberingTester PUBLIC /usr/include/boost/regex/)

add_library(testHcalRecNumberingTester OBJECT 
  HcalRecNumberingTester.cc
)

target_include_directories(testHcalRecNumberingTester PUBLIC /usr/include/boost/python/)
target_include_directories(testHcalRecNumberingTester PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testHcalRecNumberingTester PUBLIC /usr/include/python2.7/)
target_include_directories(testHcalRecNumberingTester PUBLIC /usr/include/root/)
target_include_directories(testHcalRecNumberingTester PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testHcalRecNumberingTester PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testHcalRecNumberingTester PUBLIC /usr/include/boost/serialization/)
target_include_directories(testHcalRecNumberingTester PUBLIC /usr/include/boost/)
target_include_directories(testHcalRecNumberingTester PUBLIC /usr/include/boost/regex/)

