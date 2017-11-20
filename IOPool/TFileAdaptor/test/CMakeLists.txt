add_library(test_TFileAdaptor_TFile OBJECT 
  tfileTest.cpp
)

target_include_directories(test_TFileAdaptor_TFile PUBLIC /usr/include/boost/python/)
target_include_directories(test_TFileAdaptor_TFile PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_TFileAdaptor_TFile PUBLIC /usr/include/python2.7/)
target_include_directories(test_TFileAdaptor_TFile PUBLIC /usr/include/root/)
target_include_directories(test_TFileAdaptor_TFile PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_TFileAdaptor_TFile PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_TFileAdaptor_TFile PUBLIC /usr/include/boost/)
target_include_directories(test_TFileAdaptor_TFile PUBLIC /usr/include/boost/regex/)

