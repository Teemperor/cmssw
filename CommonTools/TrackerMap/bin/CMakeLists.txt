add_library(print_TrackerMap OBJECT 
  print_TrackerMap.cc
)

target_include_directories(print_TrackerMap PUBLIC /usr/include/boost/python/)
target_include_directories(print_TrackerMap PUBLIC /usr/include/boost/filesystem/)
target_include_directories(print_TrackerMap PUBLIC /usr/include/python2.7/)
target_include_directories(print_TrackerMap PUBLIC /usr/include/root/)
target_include_directories(print_TrackerMap PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(print_TrackerMap PUBLIC /home/teemperor/cms/md5/)
target_include_directories(print_TrackerMap PUBLIC /usr/include/boost/serialization/)
target_include_directories(print_TrackerMap PUBLIC /usr/include/boost/)
target_include_directories(print_TrackerMap PUBLIC /usr/include/boost/regex/)

