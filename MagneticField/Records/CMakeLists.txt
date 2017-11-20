add_library(MagneticFieldRecords OBJECT 
  src/IdealMagneticFieldRecord.cc
)

target_include_directories(MagneticFieldRecords PUBLIC /usr/include/boost/python/)
target_include_directories(MagneticFieldRecords PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MagneticFieldRecords PUBLIC /usr/include/python2.7/)
target_include_directories(MagneticFieldRecords PUBLIC /usr/include/root/)
target_include_directories(MagneticFieldRecords PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MagneticFieldRecords PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MagneticFieldRecords PUBLIC /usr/include/boost/)
target_include_directories(MagneticFieldRecords PUBLIC /usr/include/boost/regex/)

