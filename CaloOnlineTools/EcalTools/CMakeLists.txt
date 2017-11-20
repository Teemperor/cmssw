add_subdirectory(bin)
add_subdirectory(plugins)
add_library(CaloOnlineToolsEcalTools OBJECT 
  src/EcalFedMap.cc
)

target_include_directories(CaloOnlineToolsEcalTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CaloOnlineToolsEcalTools PUBLIC /usr/include/root/)

