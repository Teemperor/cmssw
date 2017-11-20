add_library(HcalTBWriter OBJECT 
  HcalTBWriter.cc
)

target_include_directories(HcalTBWriter PUBLIC /usr/include/boost/python/)
target_include_directories(HcalTBWriter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HcalTBWriter PUBLIC /usr/include/python2.7/)
target_include_directories(HcalTBWriter PUBLIC /usr/include/root/)
target_include_directories(HcalTBWriter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HcalTBWriter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HcalTBWriter PUBLIC /usr/include/boost/)
target_include_directories(HcalTBWriter PUBLIC /usr/include/boost/regex/)

add_library(HcalTBSource.cc OBJECT 
  HcalTBSource.cc
)

target_include_directories(HcalTBSource.cc PUBLIC /usr/include/boost/python/)
target_include_directories(HcalTBSource.cc PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HcalTBSource.cc PUBLIC /usr/include/python2.7/)
target_include_directories(HcalTBSource.cc PUBLIC /usr/include/root/)
target_include_directories(HcalTBSource.cc PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HcalTBSource.cc PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HcalTBSource.cc PUBLIC /usr/include/boost/)
target_include_directories(HcalTBSource.cc PUBLIC /usr/include/boost/regex/)

