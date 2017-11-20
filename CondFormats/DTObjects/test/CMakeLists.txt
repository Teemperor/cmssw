add_library(testDTBufferTree OBJECT 
  testDTBufferTree.cc
)

target_include_directories(testDTBufferTree PUBLIC /usr/include/python2.7/)
target_include_directories(testDTBufferTree PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDTBufferTree PUBLIC /usr/include/boost/serialization/)
target_include_directories(testDTBufferTree PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testDTBufferTree PUBLIC /usr/include/boost/)
target_include_directories(testDTBufferTree PUBLIC /usr/include/boost/python/)
target_include_directories(testDTBufferTree PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDTBufferTree PUBLIC /usr/include/root/)
target_include_directories(testDTBufferTree PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testDTBufferTree PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDTBufferTree PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testDTBufferTree PUBLIC /usr/include/boost/regex/)

add_library(CondFormatsDTObjectsTest OBJECT 
  stubs/DTDeadUpdate.cc
  stubs/DTConfigWrite.cc
  stubs/DTMapWrite.cc
  stubs/DTFullMapPrint.cc
  stubs/DTRangeT0Print.cc
  stubs/DTRangeT0Write.cc
  stubs/DTConfigPrint.cc
  stubs/DTT0Print.cc
  stubs/DTTtrigPrint.cc
  stubs/DTDeadPrint.cc
  stubs/DTDeadWrite.cc
  stubs/DTMapPrint.cc
  stubs/DTT0Write.cc
)

target_include_directories(CondFormatsDTObjectsTest PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsDTObjectsTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsDTObjectsTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsDTObjectsTest PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondFormatsDTObjectsTest PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsDTObjectsTest PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsDTObjectsTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsDTObjectsTest PUBLIC /usr/include/root/)
target_include_directories(CondFormatsDTObjectsTest PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondFormatsDTObjectsTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsDTObjectsTest PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondFormatsDTObjectsTest PUBLIC /usr/include/boost/regex/)

add_library(testSerializationDTObjects OBJECT 
  testSerializationDTObjects.cpp
)

target_include_directories(testSerializationDTObjects PUBLIC /usr/include/python2.7/)
target_include_directories(testSerializationDTObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSerializationDTObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(testSerializationDTObjects PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testSerializationDTObjects PUBLIC /usr/include/boost/)
target_include_directories(testSerializationDTObjects PUBLIC /usr/include/boost/python/)
target_include_directories(testSerializationDTObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSerializationDTObjects PUBLIC /usr/include/root/)
target_include_directories(testSerializationDTObjects PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testSerializationDTObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSerializationDTObjects PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testSerializationDTObjects PUBLIC /usr/include/boost/regex/)

