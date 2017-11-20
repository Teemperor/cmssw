add_library(testDataFormatsMuonReco OBJECT 
  testMuon.cc
  testRunner.cpp
)

target_include_directories(testDataFormatsMuonReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDataFormatsMuonReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDataFormatsMuonReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDataFormatsMuonReco PUBLIC /usr/include/boost/)
target_include_directories(testDataFormatsMuonReco PUBLIC /usr/include/root/)
target_include_directories(testDataFormatsMuonReco PUBLIC /usr/include/boost/regex/)

