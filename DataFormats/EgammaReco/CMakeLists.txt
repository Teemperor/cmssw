add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsEgammaRecosrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/EgammaReco/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsEgammaRecosrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/EgammaReco/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/EgammaReco/src/classes.h /home/teemperor/cms/cmssw/DataFormats/EgammaReco/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsEgammaRecosrcclassesh")

add_library(DataFormatsEgammaReco OBJECT 
  src/HFEMClusterShape.cc
  src/ElectronSeed.cc
  src/BasicCluster.cc
  src/ClusterShape.cc
  src/PreshowerCluster.cc
  src/SuperCluster.cc
  src/EgammaTrigger.cc
  src/PreshowerClusterShape.cc
  ${CMAKE_BINARY_DIR}/DataFormatsEgammaRecosrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsEgammaReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsEgammaReco PUBLIC /usr/include/root/)
target_include_directories(DataFormatsEgammaReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsEgammaReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsEgammaReco PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsEgammaReco PUBLIC /usr/include/boost/regex/)

