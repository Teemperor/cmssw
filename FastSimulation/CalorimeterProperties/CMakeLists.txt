add_library(FastSimulationCalorimeterProperties OBJECT 
  src/PreshowerLayer2Properties.cc
  src/ECALEndcapProperties.cc
  src/HCALProperties.cc
  src/PreshowerLayer1Properties.cc
  src/ECALBarrelProperties.cc
  src/Calorimeter.cc
)

target_include_directories(FastSimulationCalorimeterProperties PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationCalorimeterProperties PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationCalorimeterProperties PUBLIC /usr/include/boost/serialization/)
target_include_directories(FastSimulationCalorimeterProperties PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(FastSimulationCalorimeterProperties PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationCalorimeterProperties PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationCalorimeterProperties PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationCalorimeterProperties PUBLIC /usr/include/root/)
target_include_directories(FastSimulationCalorimeterProperties PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(FastSimulationCalorimeterProperties PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationCalorimeterProperties PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(FastSimulationCalorimeterProperties PUBLIC /usr/include/boost/regex/)

