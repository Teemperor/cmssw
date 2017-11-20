add_library(FastSimDataFormatsL1GlobalMuonTrigger OBJECT 
  src/SimpleL1MuGMTCand.cc
)

target_include_directories(FastSimDataFormatsL1GlobalMuonTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimDataFormatsL1GlobalMuonTrigger PUBLIC /usr/include/root/)
target_include_directories(FastSimDataFormatsL1GlobalMuonTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimDataFormatsL1GlobalMuonTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimDataFormatsL1GlobalMuonTrigger PUBLIC /usr/include/boost/)
target_include_directories(FastSimDataFormatsL1GlobalMuonTrigger PUBLIC /usr/include/boost/regex/)

