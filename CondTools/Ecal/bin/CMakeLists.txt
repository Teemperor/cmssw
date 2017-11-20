add_library(array2xmlEB OBJECT 
  array2xmlEB.cc
)

target_include_directories(array2xmlEB PUBLIC /usr/include/python2.7/)
target_include_directories(array2xmlEB PUBLIC /usr/include/boost/serialization/)
target_include_directories(array2xmlEB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(array2xmlEB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(array2xmlEB PUBLIC /usr/include/boost/)
target_include_directories(array2xmlEB PUBLIC /usr/include/boost/python/)
target_include_directories(array2xmlEB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(array2xmlEB PUBLIC /usr/include/root/)
target_include_directories(array2xmlEB PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(array2xmlEB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(array2xmlEB PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(array2xmlEB PUBLIC /usr/include/boost/regex/)

