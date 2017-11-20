add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsCastorRecosrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/CastorReco/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsCastorRecosrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/CastorReco/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/CastorReco/src/classes.h /home/teemperor/cms/cmssw/DataFormats/CastorReco/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsCastorRecosrcclassesh")

add_library(DataFormatsCastorReco OBJECT 
  src/CastorEgamma.cc
  src/CastorCell.cc
  src/CastorJet.cc
  src/CastorTower.cc
  src/CastorCluster.cc
  ${CMAKE_BINARY_DIR}/DataFormatsCastorRecosrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsCastorReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsCastorReco PUBLIC /usr/include/root/)
target_include_directories(DataFormatsCastorReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsCastorReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsCastorReco PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsCastorReco PUBLIC /usr/include/boost/regex/)

