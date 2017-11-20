add_library(IOVPayloadAnalyze OBJECT 
  stubs/IOVPayloadAnalyzer.cc
)

target_include_directories(IOVPayloadAnalyze PUBLIC /usr/include/python2.7/)
target_include_directories(IOVPayloadAnalyze PUBLIC /home/teemperor/cms/md5/)
target_include_directories(IOVPayloadAnalyze PUBLIC /usr/include/boost/serialization/)
target_include_directories(IOVPayloadAnalyze PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(IOVPayloadAnalyze PUBLIC /usr/include/boost/)
target_include_directories(IOVPayloadAnalyze PUBLIC /usr/include/boost/python/)
target_include_directories(IOVPayloadAnalyze PUBLIC /usr/include/boost/filesystem/)
target_include_directories(IOVPayloadAnalyze PUBLIC /usr/include/root/)
target_include_directories(IOVPayloadAnalyze PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(IOVPayloadAnalyze PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IOVPayloadAnalyze PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(IOVPayloadAnalyze PUBLIC /usr/include/boost/regex/)

add_library(writeMultipleRecords OBJECT 
  stubs/writeMultipleRecords.cc
)

target_include_directories(writeMultipleRecords PUBLIC /usr/include/python2.7/)
target_include_directories(writeMultipleRecords PUBLIC /home/teemperor/cms/md5/)
target_include_directories(writeMultipleRecords PUBLIC /usr/include/boost/serialization/)
target_include_directories(writeMultipleRecords PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(writeMultipleRecords PUBLIC /usr/include/boost/)
target_include_directories(writeMultipleRecords PUBLIC /usr/include/boost/python/)
target_include_directories(writeMultipleRecords PUBLIC /usr/include/boost/filesystem/)
target_include_directories(writeMultipleRecords PUBLIC /usr/include/root/)
target_include_directories(writeMultipleRecords PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(writeMultipleRecords PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(writeMultipleRecords PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(writeMultipleRecords PUBLIC /usr/include/boost/regex/)

add_library(writeBlob OBJECT 
  stubs/writeBlob.cc
)

target_include_directories(writeBlob PUBLIC /usr/include/python2.7/)
target_include_directories(writeBlob PUBLIC /home/teemperor/cms/md5/)
target_include_directories(writeBlob PUBLIC /usr/include/boost/serialization/)
target_include_directories(writeBlob PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(writeBlob PUBLIC /usr/include/boost/)
target_include_directories(writeBlob PUBLIC /usr/include/boost/python/)
target_include_directories(writeBlob PUBLIC /usr/include/boost/filesystem/)
target_include_directories(writeBlob PUBLIC /usr/include/root/)
target_include_directories(writeBlob PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(writeBlob PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(writeBlob PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(writeBlob PUBLIC /usr/include/boost/regex/)

add_library(writeBlobComplex OBJECT 
  stubs/writeBlobComplex.cc
)

target_include_directories(writeBlobComplex PUBLIC /usr/include/python2.7/)
target_include_directories(writeBlobComplex PUBLIC /home/teemperor/cms/md5/)
target_include_directories(writeBlobComplex PUBLIC /usr/include/boost/serialization/)
target_include_directories(writeBlobComplex PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(writeBlobComplex PUBLIC /usr/include/boost/)
target_include_directories(writeBlobComplex PUBLIC /usr/include/boost/python/)
target_include_directories(writeBlobComplex PUBLIC /usr/include/boost/filesystem/)
target_include_directories(writeBlobComplex PUBLIC /usr/include/root/)
target_include_directories(writeBlobComplex PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(writeBlobComplex PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(writeBlobComplex PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(writeBlobComplex PUBLIC /usr/include/boost/regex/)

add_library(IOVPayloadEndOfJob OBJECT 
  stubs/IOVPayloadEndOfJob.cc
)

target_include_directories(IOVPayloadEndOfJob PUBLIC /usr/include/python2.7/)
target_include_directories(IOVPayloadEndOfJob PUBLIC /home/teemperor/cms/md5/)
target_include_directories(IOVPayloadEndOfJob PUBLIC /usr/include/boost/serialization/)
target_include_directories(IOVPayloadEndOfJob PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(IOVPayloadEndOfJob PUBLIC /usr/include/boost/)
target_include_directories(IOVPayloadEndOfJob PUBLIC /usr/include/boost/python/)
target_include_directories(IOVPayloadEndOfJob PUBLIC /usr/include/boost/filesystem/)
target_include_directories(IOVPayloadEndOfJob PUBLIC /usr/include/root/)
target_include_directories(IOVPayloadEndOfJob PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(IOVPayloadEndOfJob PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IOVPayloadEndOfJob PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(IOVPayloadEndOfJob PUBLIC /usr/include/boost/regex/)

add_library(MyDataAnalyzer OBJECT 
  stubs/MyDataAnalyzer.cc
)

target_include_directories(MyDataAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(MyDataAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MyDataAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(MyDataAnalyzer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(MyDataAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(MyDataAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(MyDataAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MyDataAnalyzer PUBLIC /usr/include/root/)
target_include_directories(MyDataAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(MyDataAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MyDataAnalyzer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(MyDataAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(Timestamp OBJECT 
  stubs/Timestamp.cc
)

target_include_directories(Timestamp PUBLIC /usr/include/python2.7/)
target_include_directories(Timestamp PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Timestamp PUBLIC /usr/include/boost/serialization/)
target_include_directories(Timestamp PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(Timestamp PUBLIC /usr/include/boost/)
target_include_directories(Timestamp PUBLIC /usr/include/boost/python/)
target_include_directories(Timestamp PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Timestamp PUBLIC /usr/include/root/)
target_include_directories(Timestamp PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(Timestamp PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Timestamp PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(Timestamp PUBLIC /usr/include/boost/regex/)

add_library(writeKeyed OBJECT 
  stubs/writeKeyed.cc
)

target_include_directories(writeKeyed PUBLIC /usr/include/python2.7/)
target_include_directories(writeKeyed PUBLIC /home/teemperor/cms/md5/)
target_include_directories(writeKeyed PUBLIC /usr/include/boost/serialization/)
target_include_directories(writeKeyed PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(writeKeyed PUBLIC /usr/include/boost/)
target_include_directories(writeKeyed PUBLIC /usr/include/boost/python/)
target_include_directories(writeKeyed PUBLIC /usr/include/boost/filesystem/)
target_include_directories(writeKeyed PUBLIC /usr/include/root/)
target_include_directories(writeKeyed PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(writeKeyed PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(writeKeyed PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(writeKeyed PUBLIC /usr/include/boost/regex/)

add_library(writeInt OBJECT 
  stubs/writeInt.cc
)

target_include_directories(writeInt PUBLIC /usr/include/python2.7/)
target_include_directories(writeInt PUBLIC /usr/include/boost/serialization/)
target_include_directories(writeInt PUBLIC /home/teemperor/cms/md5/)
target_include_directories(writeInt PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(writeInt PUBLIC /usr/include/boost/)
target_include_directories(writeInt PUBLIC /usr/include/boost/python/)
target_include_directories(writeInt PUBLIC /usr/include/boost/filesystem/)
target_include_directories(writeInt PUBLIC /usr/include/root/)
target_include_directories(writeInt PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(writeInt PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(writeInt PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(writeInt PUBLIC /usr/include/boost/regex/)

