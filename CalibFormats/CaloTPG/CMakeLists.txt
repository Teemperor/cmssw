add_library(CalibFormatsCaloTPG OBJECT 
  src/CaloTPGRecord.cc
  src/ES_EcalTPGScale.cc
  src/ES_HcalTPGScale.cc
  src/CaloTPGTranscoder.cc
  src/EcalTPGCompressor.cc
  src/ES_CaloTPGTranscoder.cc
  src/HcalTPGCompressor.cc
)

target_include_directories(CalibFormatsCaloTPG PUBLIC /usr/include/boost/python/)
target_include_directories(CalibFormatsCaloTPG PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibFormatsCaloTPG PUBLIC /usr/include/python2.7/)
target_include_directories(CalibFormatsCaloTPG PUBLIC /usr/include/root/)
target_include_directories(CalibFormatsCaloTPG PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibFormatsCaloTPG PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibFormatsCaloTPG PUBLIC /usr/include/boost/)
target_include_directories(CalibFormatsCaloTPG PUBLIC /usr/include/boost/regex/)

