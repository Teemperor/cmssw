add_library(exCondTime OBJECT 
  exTime.cpp
)

target_include_directories(exCondTime PUBLIC /usr/include/python2.7/)
target_include_directories(exCondTime PUBLIC /usr/include/boost/serialization/)
target_include_directories(exCondTime PUBLIC /home/teemperor/cms/md5/)
target_include_directories(exCondTime PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(exCondTime PUBLIC /usr/include/boost/)
target_include_directories(exCondTime PUBLIC /usr/include/boost/python/)
target_include_directories(exCondTime PUBLIC /usr/include/boost/filesystem/)
target_include_directories(exCondTime PUBLIC /usr/include/root/)
target_include_directories(exCondTime PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(exCondTime PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(exCondTime PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(exCondTime PUBLIC /usr/include/boost/regex/)

add_library(hash64_t OBJECT 
  hash64_t.cpp
)

target_include_directories(hash64_t PUBLIC /usr/include/python2.7/)
target_include_directories(hash64_t PUBLIC /usr/include/boost/serialization/)
target_include_directories(hash64_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(hash64_t PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(hash64_t PUBLIC /usr/include/boost/)
target_include_directories(hash64_t PUBLIC /usr/include/boost/python/)
target_include_directories(hash64_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(hash64_t PUBLIC /usr/include/root/)
target_include_directories(hash64_t PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(hash64_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(hash64_t PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(hash64_t PUBLIC /usr/include/boost/regex/)

add_library(SmallWORMDict_t OBJECT 
  SmallWORMDict_t.cpp
)

target_include_directories(SmallWORMDict_t PUBLIC /usr/include/python2.7/)
target_include_directories(SmallWORMDict_t PUBLIC /usr/include/boost/serialization/)
target_include_directories(SmallWORMDict_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SmallWORMDict_t PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(SmallWORMDict_t PUBLIC /usr/include/boost/)
target_include_directories(SmallWORMDict_t PUBLIC /usr/include/boost/python/)
target_include_directories(SmallWORMDict_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SmallWORMDict_t PUBLIC /usr/include/root/)
target_include_directories(SmallWORMDict_t PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(SmallWORMDict_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SmallWORMDict_t PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(SmallWORMDict_t PUBLIC /usr/include/boost/regex/)

add_library(CondFormatsCommonTest OBJECT 
  ProduceDropBoxMetadata.cc
)

target_include_directories(CondFormatsCommonTest PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsCommonTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsCommonTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsCommonTest PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondFormatsCommonTest PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsCommonTest PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsCommonTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsCommonTest PUBLIC /usr/include/root/)
target_include_directories(CondFormatsCommonTest PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondFormatsCommonTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsCommonTest PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondFormatsCommonTest PUBLIC /usr/include/boost/regex/)

add_library(testSerializationCommon OBJECT 
  testSerializationCommon.cpp
)

target_include_directories(testSerializationCommon PUBLIC /usr/include/python2.7/)
target_include_directories(testSerializationCommon PUBLIC /usr/include/boost/serialization/)
target_include_directories(testSerializationCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSerializationCommon PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testSerializationCommon PUBLIC /usr/include/boost/)
target_include_directories(testSerializationCommon PUBLIC /usr/include/boost/python/)
target_include_directories(testSerializationCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSerializationCommon PUBLIC /usr/include/root/)
target_include_directories(testSerializationCommon PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testSerializationCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSerializationCommon PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testSerializationCommon PUBLIC /usr/include/boost/regex/)

