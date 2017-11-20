add_subdirectory(test)
add_library(SimG4CoreGeometry OBJECT 
  src/G4CheckOverlap.cc
  src/DDDWorld.cc
  src/SensitiveDetectorCatalog.cc
  src/DDG4Builder.cc
  src/DDG4SensitiveConverter.cc
  src/DDGeometryReturnType.cc
  src/DDG4SolidConverter.cc
)

target_include_directories(SimG4CoreGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CoreGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CoreGeometry PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreGeometry PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreGeometry PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreGeometry PUBLIC /usr/include/boost/regex/)

