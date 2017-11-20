add_library(RecoTBCaloZDCTBAnalysis OBJECT 
  src/ZdcTBAnalyzer.cc
  src/ZdcTBAnalysis.cc
)

target_include_directories(RecoTBCaloZDCTBAnalysis PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTBCaloZDCTBAnalysis PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTBCaloZDCTBAnalysis PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTBCaloZDCTBAnalysis PUBLIC /usr/include/root/)
target_include_directories(RecoTBCaloZDCTBAnalysis PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTBCaloZDCTBAnalysis PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTBCaloZDCTBAnalysis PUBLIC /usr/include/boost/)
target_include_directories(RecoTBCaloZDCTBAnalysis PUBLIC /usr/include/boost/regex/)

