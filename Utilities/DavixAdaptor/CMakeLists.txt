add_subdirectory(test)
add_subdirectory(plugins)
add_library(UtilitiesDavixAdaptor OBJECT 
  src/DavixFile.cc
)

target_include_directories(UtilitiesDavixAdaptor PUBLIC /usr/include/boost/python/)
target_include_directories(UtilitiesDavixAdaptor PUBLIC /usr/include/boost/filesystem/)
target_include_directories(UtilitiesDavixAdaptor PUBLIC /usr/include/python2.7/)
target_include_directories(UtilitiesDavixAdaptor PUBLIC /usr/include/root/)
target_include_directories(UtilitiesDavixAdaptor PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(UtilitiesDavixAdaptor PUBLIC /home/teemperor/cms/md5/)
target_include_directories(UtilitiesDavixAdaptor PUBLIC /usr/include/davix/)
target_include_directories(UtilitiesDavixAdaptor PUBLIC /usr/include/boost/)
target_include_directories(UtilitiesDavixAdaptor PUBLIC /usr/include/boost/regex/)

