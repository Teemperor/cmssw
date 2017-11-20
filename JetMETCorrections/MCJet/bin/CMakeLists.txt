add_library(ReadTree OBJECT 
  ReadTree.cc
)

target_include_directories(ReadTree PUBLIC /usr/include/boost/python/)
target_include_directories(ReadTree PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ReadTree PUBLIC /usr/include/python2.7/)
target_include_directories(ReadTree PUBLIC /usr/include/root/)
target_include_directories(ReadTree PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ReadTree PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ReadTree PUBLIC /usr/include/boost/)
target_include_directories(ReadTree PUBLIC /usr/include/boost/regex/)

add_library(ResponseFitter OBJECT 
  ResponseFitter.cc
)

target_include_directories(ResponseFitter PUBLIC /usr/include/boost/python/)
target_include_directories(ResponseFitter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ResponseFitter PUBLIC /usr/include/python2.7/)
target_include_directories(ResponseFitter PUBLIC /usr/include/root/)
target_include_directories(ResponseFitter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ResponseFitter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ResponseFitter PUBLIC /usr/include/boost/)
target_include_directories(ResponseFitter PUBLIC /usr/include/boost/regex/)

add_library(L3Correction OBJECT 
  L3Correction.cc
)

target_include_directories(L3Correction PUBLIC /usr/include/boost/python/)
target_include_directories(L3Correction PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L3Correction PUBLIC /usr/include/python2.7/)
target_include_directories(L3Correction PUBLIC /usr/include/root/)
target_include_directories(L3Correction PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L3Correction PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L3Correction PUBLIC /usr/include/boost/)
target_include_directories(L3Correction PUBLIC /usr/include/boost/regex/)

add_library(L2Correction OBJECT 
  L2Correction.cc
)

target_include_directories(L2Correction PUBLIC /usr/include/boost/python/)
target_include_directories(L2Correction PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L2Correction PUBLIC /usr/include/python2.7/)
target_include_directories(L2Correction PUBLIC /usr/include/root/)
target_include_directories(L2Correction PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L2Correction PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L2Correction PUBLIC /usr/include/boost/)
target_include_directories(L2Correction PUBLIC /usr/include/boost/regex/)

