add_library(DQMSiPixelPhase1Summary OBJECT 
  src/SiPixelPhase1Summary.cc
)

target_include_directories(DQMSiPixelPhase1Summary PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiPixelPhase1Summary PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiPixelPhase1Summary PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiPixelPhase1Summary PUBLIC /usr/include/root/)
target_include_directories(DQMSiPixelPhase1Summary PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiPixelPhase1Summary PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiPixelPhase1Summary PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMSiPixelPhase1Summary PUBLIC /usr/include/boost/)
target_include_directories(DQMSiPixelPhase1Summary PUBLIC /usr/include/boost/regex/)

