add_library(EcalLaserTestAnalyzer OBJECT 
  EcalLaserTestAnalyzer.cc
)

target_include_directories(EcalLaserTestAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(EcalLaserTestAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EcalLaserTestAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(EcalLaserTestAnalyzer PUBLIC /usr/include/root/)
target_include_directories(EcalLaserTestAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EcalLaserTestAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EcalLaserTestAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(EcalLaserTestAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(EcalLaserTestAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(EcalLaserDbAnalyzer OBJECT 
  EcalLaserDbAnalyzer.cc
)

target_include_directories(EcalLaserDbAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(EcalLaserDbAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EcalLaserDbAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(EcalLaserDbAnalyzer PUBLIC /usr/include/root/)
target_include_directories(EcalLaserDbAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EcalLaserDbAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EcalLaserDbAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(EcalLaserDbAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(EcalLaserDbAnalyzer PUBLIC /usr/include/boost/regex/)

