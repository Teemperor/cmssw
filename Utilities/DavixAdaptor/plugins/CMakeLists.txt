add_library(UtilitiesDavixAdaptorPlugin OBJECT 
  DavixStorageMaker.cc
)

target_include_directories(UtilitiesDavixAdaptorPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(UtilitiesDavixAdaptorPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(UtilitiesDavixAdaptorPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(UtilitiesDavixAdaptorPlugin PUBLIC /usr/include/root/)
target_include_directories(UtilitiesDavixAdaptorPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(UtilitiesDavixAdaptorPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(UtilitiesDavixAdaptorPlugin PUBLIC /usr/include/davix/)
target_include_directories(UtilitiesDavixAdaptorPlugin PUBLIC /usr/include/boost/)
target_include_directories(UtilitiesDavixAdaptorPlugin PUBLIC /usr/include/boost/regex/)

