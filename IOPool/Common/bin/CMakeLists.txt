add_library(edmProvDump OBJECT 
  EdmProvDump.cc
)

target_include_directories(edmProvDump PUBLIC /usr/include/boost/python/)
target_include_directories(edmProvDump PUBLIC /usr/include/boost/filesystem/)
target_include_directories(edmProvDump PUBLIC /usr/include/python2.7/)
target_include_directories(edmProvDump PUBLIC /usr/include/root/)
target_include_directories(edmProvDump PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(edmProvDump PUBLIC /usr/include/boost/program_options/)
target_include_directories(edmProvDump PUBLIC /home/teemperor/cms/md5/)
target_include_directories(edmProvDump PUBLIC /usr/include/boost/)
target_include_directories(edmProvDump PUBLIC /usr/include/boost/regex/)

add_library(edmFileUtil OBJECT 
  EdmFileUtil.cpp
  CollUtil.cc
)

target_include_directories(edmFileUtil PUBLIC /usr/include/boost/python/)
target_include_directories(edmFileUtil PUBLIC /usr/include/boost/filesystem/)
target_include_directories(edmFileUtil PUBLIC /usr/include/python2.7/)
target_include_directories(edmFileUtil PUBLIC /usr/include/root/)
target_include_directories(edmFileUtil PUBLIC /usr/include/boost/program_options/)
target_include_directories(edmFileUtil PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(edmFileUtil PUBLIC /home/teemperor/cms/md5/)
target_include_directories(edmFileUtil PUBLIC /usr/include/boost/)
target_include_directories(edmFileUtil PUBLIC /usr/include/boost/regex/)

add_library(edmCopyUtil OBJECT 
  EdmCopyUtil.cpp
)

target_include_directories(edmCopyUtil PUBLIC /usr/include/boost/python/)
target_include_directories(edmCopyUtil PUBLIC /usr/include/boost/filesystem/)
target_include_directories(edmCopyUtil PUBLIC /usr/include/python2.7/)
target_include_directories(edmCopyUtil PUBLIC /usr/include/root/)
target_include_directories(edmCopyUtil PUBLIC /usr/include/boost/program_options/)
target_include_directories(edmCopyUtil PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(edmCopyUtil PUBLIC /home/teemperor/cms/md5/)
target_include_directories(edmCopyUtil PUBLIC /usr/include/boost/)
target_include_directories(edmCopyUtil PUBLIC /usr/include/boost/regex/)

