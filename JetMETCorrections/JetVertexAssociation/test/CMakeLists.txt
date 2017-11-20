add_library(AnalysisJV OBJECT 
  AnalysisJV.cc
)

target_include_directories(AnalysisJV PUBLIC /usr/include/boost/python/)
target_include_directories(AnalysisJV PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AnalysisJV PUBLIC /usr/include/python2.7/)
target_include_directories(AnalysisJV PUBLIC /usr/include/root/)
target_include_directories(AnalysisJV PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AnalysisJV PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AnalysisJV PUBLIC /usr/include/boost/)
target_include_directories(AnalysisJV PUBLIC /usr/include/boost/regex/)

