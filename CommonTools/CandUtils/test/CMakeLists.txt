add_library(testCommonToolsCandUtils OBJECT 
  testMakeCompositeCandidate.cc
  testMakeCompositePtrCandidate.cc
)

target_include_directories(testCommonToolsCandUtils PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCommonToolsCandUtils PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCommonToolsCandUtils PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCommonToolsCandUtils PUBLIC /usr/include/boost/)
target_include_directories(testCommonToolsCandUtils PUBLIC /usr/include/root/)
target_include_directories(testCommonToolsCandUtils PUBLIC /usr/include/boost/regex/)

