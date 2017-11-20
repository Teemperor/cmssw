add_subdirectory(test)
add_library(SimG4CoreWatcher OBJECT 
  src/SimWatcherFactory.cc
)

target_include_directories(SimG4CoreWatcher PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreWatcher PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CoreWatcher PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreWatcher PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreWatcher PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreWatcher PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CoreWatcher PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreWatcher PUBLIC /usr/include/boost/regex/)

