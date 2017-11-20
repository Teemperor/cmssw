add_library(EventFilterESDigiToRaw OBJECT 
  src/ESDataFormatterV1_1.cc
  src/SealModule.cc
  src/ESDataFormatter.cc
  src/ESDataFormatterV4.cc
  src/ESDigiToRaw.cc
)

target_include_directories(EventFilterESDigiToRaw PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterESDigiToRaw PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterESDigiToRaw PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterESDigiToRaw PUBLIC /usr/include/root/)
target_include_directories(EventFilterESDigiToRaw PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterESDigiToRaw PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterESDigiToRaw PUBLIC /usr/include/boost/)
target_include_directories(EventFilterESDigiToRaw PUBLIC /usr/include/boost/regex/)

