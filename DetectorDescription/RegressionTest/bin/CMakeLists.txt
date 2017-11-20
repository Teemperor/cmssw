add_library(DOMCount OBJECT 
  DOMCount.cpp
)

target_include_directories(DOMCount PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DOMCount PUBLIC /usr/include/root/)
target_include_directories(DOMCount PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DOMCount PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DOMCount PUBLIC /usr/include/boost/)
target_include_directories(DOMCount PUBLIC /usr/include/boost/regex/)

add_library(DDErrorReport OBJECT 
  DDErrorReport.cpp
)

target_include_directories(DDErrorReport PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DDErrorReport PUBLIC /usr/include/root/)
target_include_directories(DDErrorReport PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DDErrorReport PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DDErrorReport PUBLIC /usr/include/boost/program_options/)
target_include_directories(DDErrorReport PUBLIC /usr/include/boost/)
target_include_directories(DDErrorReport PUBLIC /usr/include/boost/regex/)

