add_library(Geant4ePropagatorAnalyzer OBJECT 
  Geant4ePropagatorAnalyzer.cc
)

target_include_directories(Geant4ePropagatorAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(Geant4ePropagatorAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Geant4ePropagatorAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(Geant4ePropagatorAnalyzer PUBLIC /usr/include/root/)
target_include_directories(Geant4ePropagatorAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Geant4ePropagatorAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Geant4ePropagatorAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(Geant4ePropagatorAnalyzer PUBLIC /usr/include/Geant4/)
target_include_directories(Geant4ePropagatorAnalyzer PUBLIC /usr/include/boost/regex/)

