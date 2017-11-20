add_library(GenABIO OBJECT 
  GenABIO.cc
)

target_include_directories(GenABIO PUBLIC /usr/include/boost/python/)
target_include_directories(GenABIO PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GenABIO PUBLIC /usr/include/python2.7/)
target_include_directories(GenABIO PUBLIC /usr/include/root/)
target_include_directories(GenABIO PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GenABIO PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GenABIO PUBLIC /usr/include/boost/serialization/)
target_include_directories(GenABIO PUBLIC /usr/include/boost/)
target_include_directories(GenABIO PUBLIC /usr/include/boost/regex/)

add_library(recycleTccEmu OBJECT 
  recycleTccEmu.cc
)

target_include_directories(recycleTccEmu PUBLIC /usr/include/boost/python/)
target_include_directories(recycleTccEmu PUBLIC /usr/include/boost/filesystem/)
target_include_directories(recycleTccEmu PUBLIC /usr/include/python2.7/)
target_include_directories(recycleTccEmu PUBLIC /usr/include/root/)
target_include_directories(recycleTccEmu PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(recycleTccEmu PUBLIC /home/teemperor/cms/md5/)
target_include_directories(recycleTccEmu PUBLIC /usr/include/boost/serialization/)
target_include_directories(recycleTccEmu PUBLIC /usr/include/boost/)
target_include_directories(recycleTccEmu PUBLIC /usr/include/boost/regex/)

