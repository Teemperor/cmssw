add_library(edmToFriendlyClassName OBJECT 
  edmToFriendlyClassName.cc
)

target_include_directories(edmToFriendlyClassName PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(edmToFriendlyClassName PUBLIC /home/teemperor/cms/md5/)
target_include_directories(edmToFriendlyClassName PUBLIC /usr/include/boost/filesystem/)
target_include_directories(edmToFriendlyClassName PUBLIC /usr/include/boost/)
target_include_directories(edmToFriendlyClassName PUBLIC /usr/include/root/)
target_include_directories(edmToFriendlyClassName PUBLIC /usr/include/boost/regex/)

add_library(cms_adler32 OBJECT 
  adler32.c
)

target_include_directories(cms_adler32 PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(cms_adler32 PUBLIC /home/teemperor/cms/md5/)
target_include_directories(cms_adler32 PUBLIC /usr/include/boost/filesystem/)
target_include_directories(cms_adler32 PUBLIC /usr/include/boost/)
target_include_directories(cms_adler32 PUBLIC /usr/include/root/)
target_include_directories(cms_adler32 PUBLIC /usr/include/boost/regex/)

