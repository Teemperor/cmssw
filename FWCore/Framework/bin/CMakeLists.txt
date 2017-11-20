add_library(cmsRunGlibC OBJECT 
  cmsRun.cpp
)

target_include_directories(cmsRunGlibC PUBLIC /usr/include/boost/python/)
target_include_directories(cmsRunGlibC PUBLIC /usr/include/boost/filesystem/)
target_include_directories(cmsRunGlibC PUBLIC /usr/include/python2.7/)
target_include_directories(cmsRunGlibC PUBLIC /usr/include/root/)
target_include_directories(cmsRunGlibC PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(cmsRunGlibC PUBLIC /home/teemperor/cms/md5/)
target_include_directories(cmsRunGlibC PUBLIC /usr/include/boost/program_options/)
target_include_directories(cmsRunGlibC PUBLIC /usr/include/boost/)
target_include_directories(cmsRunGlibC PUBLIC /usr/include/boost/regex/)

add_library(cmsRunTC OBJECT 
  cmsRun.cpp
)

target_include_directories(cmsRunTC PUBLIC /usr/include/boost/python/)
target_include_directories(cmsRunTC PUBLIC /usr/include/boost/filesystem/)
target_include_directories(cmsRunTC PUBLIC /usr/include/python2.7/)
target_include_directories(cmsRunTC PUBLIC /usr/include/root/)
target_include_directories(cmsRunTC PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(cmsRunTC PUBLIC /home/teemperor/cms/md5/)
target_include_directories(cmsRunTC PUBLIC /usr/include/boost/program_options/)
target_include_directories(cmsRunTC PUBLIC /usr/include/boost/)
target_include_directories(cmsRunTC PUBLIC /usr/include/boost/regex/)

add_library(cmsRun OBJECT 
  cmsRun.cpp
)

target_include_directories(cmsRun PUBLIC /usr/include/boost/python/)
target_include_directories(cmsRun PUBLIC /usr/include/boost/filesystem/)
target_include_directories(cmsRun PUBLIC /usr/include/python2.7/)
target_include_directories(cmsRun PUBLIC /usr/include/root/)
target_include_directories(cmsRun PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(cmsRun PUBLIC /home/teemperor/cms/md5/)
target_include_directories(cmsRun PUBLIC /usr/include/boost/program_options/)
target_include_directories(cmsRun PUBLIC /usr/include/boost/)
target_include_directories(cmsRun PUBLIC /usr/include/boost/regex/)

add_library(cmsRunVDT OBJECT 
  cmsRun.cpp
)

target_include_directories(cmsRunVDT PUBLIC /usr/include/boost/python/)
target_include_directories(cmsRunVDT PUBLIC /usr/include/boost/filesystem/)
target_include_directories(cmsRunVDT PUBLIC /usr/include/python2.7/)
target_include_directories(cmsRunVDT PUBLIC /usr/include/root/)
target_include_directories(cmsRunVDT PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(cmsRunVDT PUBLIC /home/teemperor/cms/md5/)
target_include_directories(cmsRunVDT PUBLIC /usr/include/boost/program_options/)
target_include_directories(cmsRunVDT PUBLIC /usr/include/boost/)
target_include_directories(cmsRunVDT PUBLIC /usr/include/boost/regex/)

add_library(cmsRunJE OBJECT 
  cmsRun.cpp
)

target_include_directories(cmsRunJE PUBLIC /usr/include/boost/python/)
target_include_directories(cmsRunJE PUBLIC /usr/include/boost/filesystem/)
target_include_directories(cmsRunJE PUBLIC /usr/include/python2.7/)
target_include_directories(cmsRunJE PUBLIC /usr/include/root/)
target_include_directories(cmsRunJE PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(cmsRunJE PUBLIC /home/teemperor/cms/md5/)
target_include_directories(cmsRunJE PUBLIC /usr/include/boost/program_options/)
target_include_directories(cmsRunJE PUBLIC /usr/include/boost/)
target_include_directories(cmsRunJE PUBLIC /usr/include/boost/regex/)

