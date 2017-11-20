add_library(LaserSeqToDB OBJECT 
  LaserSeqToDB.cpp
)

target_include_directories(LaserSeqToDB PUBLIC /usr/include/boost/python/)
target_include_directories(LaserSeqToDB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(LaserSeqToDB PUBLIC /usr/include/python2.7/)
target_include_directories(LaserSeqToDB PUBLIC /usr/include/root/)
target_include_directories(LaserSeqToDB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(LaserSeqToDB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(LaserSeqToDB PUBLIC /usr/include/boost/)
target_include_directories(LaserSeqToDB PUBLIC /usr/include/boost/regex/)

add_library(TestLMF2010-temp OBJECT 
  TestLMF2010-temp.cpp
)

target_include_directories(TestLMF2010-temp PUBLIC /usr/include/boost/python/)
target_include_directories(TestLMF2010-temp PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestLMF2010-temp PUBLIC /usr/include/python2.7/)
target_include_directories(TestLMF2010-temp PUBLIC /usr/include/root/)
target_include_directories(TestLMF2010-temp PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestLMF2010-temp PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestLMF2010-temp PUBLIC /usr/include/boost/)
target_include_directories(TestLMF2010-temp PUBLIC /usr/include/boost/regex/)

add_library(GetDelays OBJECT 
  GetDelays.cpp
)

target_include_directories(GetDelays PUBLIC /usr/include/boost/python/)
target_include_directories(GetDelays PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GetDelays PUBLIC /usr/include/python2.7/)
target_include_directories(GetDelays PUBLIC /usr/include/root/)
target_include_directories(GetDelays PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GetDelays PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GetDelays PUBLIC /usr/include/boost/)
target_include_directories(GetDelays PUBLIC /usr/include/boost/regex/)

add_library(TestLMF2010-write OBJECT 
  TestLMF2010-write.cpp
)

target_include_directories(TestLMF2010-write PUBLIC /usr/include/boost/python/)
target_include_directories(TestLMF2010-write PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestLMF2010-write PUBLIC /usr/include/python2.7/)
target_include_directories(TestLMF2010-write PUBLIC /usr/include/root/)
target_include_directories(TestLMF2010-write PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestLMF2010-write PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestLMF2010-write PUBLIC /usr/include/boost/)
target_include_directories(TestLMF2010-write PUBLIC /usr/include/boost/regex/)

add_library(TestLMF2010-read OBJECT 
  TestLMF2010-read.cpp
)

target_include_directories(TestLMF2010-read PUBLIC /usr/include/boost/python/)
target_include_directories(TestLMF2010-read PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestLMF2010-read PUBLIC /usr/include/python2.7/)
target_include_directories(TestLMF2010-read PUBLIC /usr/include/root/)
target_include_directories(TestLMF2010-read PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestLMF2010-read PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestLMF2010-read PUBLIC /usr/include/boost/)
target_include_directories(TestLMF2010-read PUBLIC /usr/include/boost/regex/)

add_library(TestLMF2010-getPrimitives OBJECT 
  TestLMF2010-getPrimitives.cpp
)

target_include_directories(TestLMF2010-getPrimitives PUBLIC /usr/include/boost/python/)
target_include_directories(TestLMF2010-getPrimitives PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestLMF2010-getPrimitives PUBLIC /usr/include/python2.7/)
target_include_directories(TestLMF2010-getPrimitives PUBLIC /usr/include/root/)
target_include_directories(TestLMF2010-getPrimitives PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestLMF2010-getPrimitives PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestLMF2010-getPrimitives PUBLIC /usr/include/boost/)
target_include_directories(TestLMF2010-getPrimitives PUBLIC /usr/include/boost/regex/)

add_library(DumpLaserDB OBJECT 
  DumpLaserDB.cpp
)

target_include_directories(DumpLaserDB PUBLIC /usr/include/boost/python/)
target_include_directories(DumpLaserDB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DumpLaserDB PUBLIC /usr/include/python2.7/)
target_include_directories(DumpLaserDB PUBLIC /usr/include/root/)
target_include_directories(DumpLaserDB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DumpLaserDB PUBLIC /usr/include/boost/program_options/)
target_include_directories(DumpLaserDB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DumpLaserDB PUBLIC /usr/include/boost/)
target_include_directories(DumpLaserDB PUBLIC /usr/include/boost/regex/)

