add_library(SimG4CoreWatcherTest OBJECT 
  IntSimProducer.cc
)

target_include_directories(SimG4CoreWatcherTest PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CoreWatcherTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreWatcherTest PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CoreWatcherTest PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreWatcherTest PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CoreWatcherTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreWatcherTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreWatcherTest PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CoreWatcherTest PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreWatcherTest PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreWatcherTest PUBLIC /usr/include/boost/regex/)

