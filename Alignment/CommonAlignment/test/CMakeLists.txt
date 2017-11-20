add_library(test_AlignableObjectId OBJECT 
  test_AlignableObjectId.cc
)

target_include_directories(test_AlignableObjectId PUBLIC /usr/include/boost/python/)
target_include_directories(test_AlignableObjectId PUBLIC /usr/include/boost/filesystem/)
target_include_directories(test_AlignableObjectId PUBLIC /usr/include/python2.7/)
target_include_directories(test_AlignableObjectId PUBLIC /usr/include/root/)
target_include_directories(test_AlignableObjectId PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(test_AlignableObjectId PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(test_AlignableObjectId PUBLIC /home/teemperor/cms/md5/)
target_include_directories(test_AlignableObjectId PUBLIC /usr/include/boost/serialization/)
target_include_directories(test_AlignableObjectId PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(test_AlignableObjectId PUBLIC /usr/include/boost/)
target_include_directories(test_AlignableObjectId PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(test_AlignableObjectId PUBLIC /usr/include/boost/regex/)

