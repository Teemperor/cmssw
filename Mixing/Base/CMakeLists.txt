add_library(MixingBase OBJECT 
  src/BMixingModule.cc
  src/SecondaryEventProvider.cc
  src/PileUp.cc
)

target_include_directories(MixingBase PUBLIC /usr/include/boost/python/)
target_include_directories(MixingBase PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MixingBase PUBLIC /usr/include/python2.7/)
target_include_directories(MixingBase PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(MixingBase PUBLIC /usr/include/root/)
target_include_directories(MixingBase PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MixingBase PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MixingBase PUBLIC /usr/include/boost/serialization/)
target_include_directories(MixingBase PUBLIC /usr/include/boost/)
target_include_directories(MixingBase PUBLIC /usr/include/boost/regex/)

