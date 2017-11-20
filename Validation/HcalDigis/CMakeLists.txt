add_library(ValidationHcalDigis OBJECT 
  src/ZDCDigiStudy.cc
  src/HcalDigiTester.cc
  src/Digi2Raw2Digi.cc
  src/HcalDigisValidation.cc
  src/HcalSubdetDigiMonitor.cc
  src/HcalDigisClient.cc
)

target_include_directories(ValidationHcalDigis PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationHcalDigis PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationHcalDigis PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationHcalDigis PUBLIC /usr/include/root/)
target_include_directories(ValidationHcalDigis PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationHcalDigis PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationHcalDigis PUBLIC /usr/include/boost/serialization/)
target_include_directories(ValidationHcalDigis PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationHcalDigis PUBLIC /usr/include/boost/)
target_include_directories(ValidationHcalDigis PUBLIC /usr/include/boost/regex/)

