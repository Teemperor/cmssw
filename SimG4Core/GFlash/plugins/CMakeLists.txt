add_library(SimG4CoreGFlashPlugins OBJECT 
  GflashG4Watcher.cc
  GFlash.cc
)

target_include_directories(SimG4CoreGFlashPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CoreGFlashPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreGFlashPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CoreGFlashPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CoreGFlashPlugins PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreGFlashPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreGFlashPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreGFlashPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CoreGFlashPlugins PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreGFlashPlugins PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreGFlashPlugins PUBLIC /usr/include/boost/regex/)

