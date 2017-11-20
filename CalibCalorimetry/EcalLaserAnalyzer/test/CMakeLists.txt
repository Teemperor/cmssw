add_library(print_ecal_geom OBJECT 
  print_ecal_geom.cc
)

target_include_directories(print_ecal_geom PUBLIC /usr/include/boost/python/)
target_include_directories(print_ecal_geom PUBLIC /usr/include/boost/filesystem/)
target_include_directories(print_ecal_geom PUBLIC /usr/include/python2.7/)
target_include_directories(print_ecal_geom PUBLIC /usr/include/root/)
target_include_directories(print_ecal_geom PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(print_ecal_geom PUBLIC /home/teemperor/cms/md5/)
target_include_directories(print_ecal_geom PUBLIC /usr/include/boost/)
target_include_directories(print_ecal_geom PUBLIC /usr/include/boost/regex/)

