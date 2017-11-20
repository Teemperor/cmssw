add_library(SimG4CoreCountProcesses OBJECT 
  src/module.cc
  src/CountProcessesAction.cc
)

target_include_directories(SimG4CoreCountProcesses PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreCountProcesses PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreCountProcesses PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CoreCountProcesses PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreCountProcesses PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreCountProcesses PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CoreCountProcesses PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreCountProcesses PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreCountProcesses PUBLIC /usr/include/boost/regex/)

