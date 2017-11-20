add_library(cmsShow.exe OBJECT 
  cmsShow.cc
)

target_include_directories(cmsShow.exe PUBLIC /usr/include/boost/python/)
target_include_directories(cmsShow.exe PUBLIC /usr/include/boost/iostreams/)
target_include_directories(cmsShow.exe PUBLIC /usr/include/boost/filesystem/)
target_include_directories(cmsShow.exe PUBLIC /usr/include/python2.7/)
target_include_directories(cmsShow.exe PUBLIC /usr/include/root/)
target_include_directories(cmsShow.exe PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(cmsShow.exe PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(cmsShow.exe PUBLIC /home/teemperor/cms/md5/)
target_include_directories(cmsShow.exe PUBLIC /usr/include/boost/program_options/)
target_include_directories(cmsShow.exe PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(cmsShow.exe PUBLIC /usr/include/boost/serialization/)
target_include_directories(cmsShow.exe PUBLIC /usr/include/boost/)
target_include_directories(cmsShow.exe PUBLIC /usr/include/boost/system/)
target_include_directories(cmsShow.exe PUBLIC /usr/include/boost/regex/)

add_library(cmsShowSendReport OBJECT 
  cmsShowSendReport.cc
)

target_include_directories(cmsShowSendReport PUBLIC /usr/include/boost/python/)
target_include_directories(cmsShowSendReport PUBLIC /usr/include/boost/iostreams/)
target_include_directories(cmsShowSendReport PUBLIC /usr/include/boost/filesystem/)
target_include_directories(cmsShowSendReport PUBLIC /usr/include/python2.7/)
target_include_directories(cmsShowSendReport PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(cmsShowSendReport PUBLIC /usr/include/root/)
target_include_directories(cmsShowSendReport PUBLIC /usr/include/boost/program_options/)
target_include_directories(cmsShowSendReport PUBLIC /home/teemperor/cms/md5/)
target_include_directories(cmsShowSendReport PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(cmsShowSendReport PUBLIC /usr/include/boost/serialization/)
target_include_directories(cmsShowSendReport PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(cmsShowSendReport PUBLIC /usr/include/boost/)
target_include_directories(cmsShowSendReport PUBLIC /usr/include/boost/system/)
target_include_directories(cmsShowSendReport PUBLIC /usr/include/boost/regex/)

