add_subdirectory(test)
add_library(SimG4CoreMagneticField OBJECT 
  src/G4MonopoleEquation.cc
  src/FieldBuilder.cc
  src/Field.cc
  src/LocalFieldManager.cc
  src/ChordFinderSetter.cc
  src/CMSFieldManager.cc
  src/FieldStepper.cc
)

target_include_directories(SimG4CoreMagneticField PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreMagneticField PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreMagneticField PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreMagneticField PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreMagneticField PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreMagneticField PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreMagneticField PUBLIC /usr/include/boost/regex/)

