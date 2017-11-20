add_library(EcalDigiDumperModule OBJECT 
  stubs/EcalDigiDumperModule.cc
)

target_include_directories(EcalDigiDumperModule PUBLIC /usr/include/boost/python/)
target_include_directories(EcalDigiDumperModule PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EcalDigiDumperModule PUBLIC /usr/include/python2.7/)
target_include_directories(EcalDigiDumperModule PUBLIC /usr/include/root/)
target_include_directories(EcalDigiDumperModule PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EcalDigiDumperModule PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EcalDigiDumperModule PUBLIC /usr/include/boost/)
target_include_directories(EcalDigiDumperModule PUBLIC /usr/include/boost/regex/)

add_library(EcalDCCHeaderDumperModule OBJECT 
  stubs/EcalDCCHeaderDumperModule.cc
)

target_include_directories(EcalDCCHeaderDumperModule PUBLIC /usr/include/boost/python/)
target_include_directories(EcalDCCHeaderDumperModule PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EcalDCCHeaderDumperModule PUBLIC /usr/include/python2.7/)
target_include_directories(EcalDCCHeaderDumperModule PUBLIC /usr/include/root/)
target_include_directories(EcalDCCHeaderDumperModule PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EcalDCCHeaderDumperModule PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EcalDCCHeaderDumperModule PUBLIC /usr/include/boost/)
target_include_directories(EcalDCCHeaderDumperModule PUBLIC /usr/include/boost/regex/)

add_library(EcalHexDumperModule OBJECT 
  stubs/EcalHexDumperModule.cc
)

target_include_directories(EcalHexDumperModule PUBLIC /usr/include/boost/python/)
target_include_directories(EcalHexDumperModule PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EcalHexDumperModule PUBLIC /usr/include/python2.7/)
target_include_directories(EcalHexDumperModule PUBLIC /usr/include/root/)
target_include_directories(EcalHexDumperModule PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EcalHexDumperModule PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EcalHexDumperModule PUBLIC /usr/include/boost/)
target_include_directories(EcalHexDumperModule PUBLIC /usr/include/boost/regex/)

add_library(EcalMatacqHist OBJECT 
  stubs/EcalMatacqHist.cc
)

target_include_directories(EcalMatacqHist PUBLIC /usr/include/boost/python/)
target_include_directories(EcalMatacqHist PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EcalMatacqHist PUBLIC /usr/include/python2.7/)
target_include_directories(EcalMatacqHist PUBLIC /usr/include/root/)
target_include_directories(EcalMatacqHist PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EcalMatacqHist PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EcalMatacqHist PUBLIC /usr/include/boost/)
target_include_directories(EcalMatacqHist PUBLIC /usr/include/boost/regex/)

add_library(EcalGraphDumperModule OBJECT 
  stubs/EcalGraphDumperModule.cc
)

target_include_directories(EcalGraphDumperModule PUBLIC /usr/include/boost/python/)
target_include_directories(EcalGraphDumperModule PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EcalGraphDumperModule PUBLIC /usr/include/python2.7/)
target_include_directories(EcalGraphDumperModule PUBLIC /usr/include/root/)
target_include_directories(EcalGraphDumperModule PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EcalGraphDumperModule PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EcalGraphDumperModule PUBLIC /usr/include/boost/)
target_include_directories(EcalGraphDumperModule PUBLIC /usr/include/boost/regex/)

add_library(EcalPnGraphDumperModule OBJECT 
  stubs/EcalPnGraphDumperModule.cc
)

target_include_directories(EcalPnGraphDumperModule PUBLIC /usr/include/boost/python/)
target_include_directories(EcalPnGraphDumperModule PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EcalPnGraphDumperModule PUBLIC /usr/include/python2.7/)
target_include_directories(EcalPnGraphDumperModule PUBLIC /usr/include/root/)
target_include_directories(EcalPnGraphDumperModule PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EcalPnGraphDumperModule PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EcalPnGraphDumperModule PUBLIC /usr/include/boost/)
target_include_directories(EcalPnGraphDumperModule PUBLIC /usr/include/boost/regex/)

