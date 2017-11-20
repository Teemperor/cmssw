add_library(DQMCollector OBJECT 
  DQMCollector.cpp
)

target_include_directories(DQMCollector PUBLIC /usr/include/boost/python/)
target_include_directories(DQMCollector PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMCollector PUBLIC /usr/include/python2.7/)
target_include_directories(DQMCollector PUBLIC /usr/include/root/)
target_include_directories(DQMCollector PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMCollector PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMCollector PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMCollector PUBLIC /usr/include/boost/)
target_include_directories(DQMCollector PUBLIC /usr/include/boost/regex/)

add_library(DQMDumpFile OBJECT 
  DumpFile.cpp
)

target_include_directories(DQMDumpFile PUBLIC /usr/include/boost/python/)
target_include_directories(DQMDumpFile PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMDumpFile PUBLIC /usr/include/python2.7/)
target_include_directories(DQMDumpFile PUBLIC /usr/include/root/)
target_include_directories(DQMDumpFile PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMDumpFile PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMDumpFile PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMDumpFile PUBLIC /usr/include/boost/)
target_include_directories(DQMDumpFile PUBLIC /usr/include/boost/regex/)

add_library(DQMMergeFile OBJECT 
  MergeFile.cpp
)

target_include_directories(DQMMergeFile PUBLIC /usr/include/boost/python/)
target_include_directories(DQMMergeFile PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMMergeFile PUBLIC /usr/include/python2.7/)
target_include_directories(DQMMergeFile PUBLIC /usr/include/root/)
target_include_directories(DQMMergeFile PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMMergeFile PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMMergeFile PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMMergeFile PUBLIC /usr/include/boost/)
target_include_directories(DQMMergeFile PUBLIC /usr/include/boost/regex/)

