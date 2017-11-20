add_subdirectory(test)
add_library(FastSimulationCaloGeometryTools OBJECT 
  src/CaloGeometryHelper.cc
  src/Crystal.cc
  src/CaloDirectionOperations.cc
  src/CrystalPad.cc
  src/CrystalWindowMap.cc
  src/CaloSegment.cc
  src/BaseCrystal.cc
  src/Transform3DPJ.cc
  src/DistanceToCell.cc
  src/CaloPoint.cc
)

target_include_directories(FastSimulationCaloGeometryTools PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationCaloGeometryTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationCaloGeometryTools PUBLIC /usr/include/boost/serialization/)
target_include_directories(FastSimulationCaloGeometryTools PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(FastSimulationCaloGeometryTools PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationCaloGeometryTools PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationCaloGeometryTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationCaloGeometryTools PUBLIC /usr/include/root/)
target_include_directories(FastSimulationCaloGeometryTools PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(FastSimulationCaloGeometryTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationCaloGeometryTools PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(FastSimulationCaloGeometryTools PUBLIC /usr/include/boost/regex/)

