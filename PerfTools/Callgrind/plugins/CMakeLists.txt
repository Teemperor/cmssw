add_library(PerfToolsCallgrindOriginalAnalyzer OBJECT 
  CallgrindAnalyzer.cc
)

target_include_directories(PerfToolsCallgrindOriginalAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(PerfToolsCallgrindOriginalAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PerfToolsCallgrindOriginalAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(PerfToolsCallgrindOriginalAnalyzer PUBLIC /usr/include/root/)
target_include_directories(PerfToolsCallgrindOriginalAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PerfToolsCallgrindOriginalAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PerfToolsCallgrindOriginalAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(PerfToolsCallgrindOriginalAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(PerfToolsCallgrindService OBJECT 
  ProfilerServicePlugin.cc
)

target_include_directories(PerfToolsCallgrindService PUBLIC /usr/include/boost/python/)
target_include_directories(PerfToolsCallgrindService PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PerfToolsCallgrindService PUBLIC /usr/include/python2.7/)
target_include_directories(PerfToolsCallgrindService PUBLIC /usr/include/root/)
target_include_directories(PerfToolsCallgrindService PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PerfToolsCallgrindService PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PerfToolsCallgrindService PUBLIC /usr/include/boost/)
target_include_directories(PerfToolsCallgrindService PUBLIC /usr/include/boost/regex/)

add_library(PerfToolsCallgrindAnalyzer OBJECT 
  ProfilerAnalyzer.cc
)

target_include_directories(PerfToolsCallgrindAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(PerfToolsCallgrindAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PerfToolsCallgrindAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(PerfToolsCallgrindAnalyzer PUBLIC /usr/include/root/)
target_include_directories(PerfToolsCallgrindAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PerfToolsCallgrindAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PerfToolsCallgrindAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(PerfToolsCallgrindAnalyzer PUBLIC /usr/include/boost/regex/)

