add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsFP420Clustersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/FP420Cluster/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsFP420Clustersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/FP420Cluster/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/FP420Cluster/src/classes.h /home/teemperor/cms/cmssw/DataFormats/FP420Cluster/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsFP420Clustersrcclassesh")

add_library(DataFormatsFP420Cluster OBJECT 
  src/ClusterCollectionFP420.cc
  src/TrackCollectionFP420.cc
  src/ClusterFP420.cc
  src/RecoCollectionFP420.cc
  ${CMAKE_BINARY_DIR}/DataFormatsFP420Clustersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsFP420Cluster PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsFP420Cluster PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsFP420Cluster PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsFP420Cluster PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsFP420Cluster PUBLIC /usr/include/root/)
target_include_directories(DataFormatsFP420Cluster PUBLIC /usr/include/boost/regex/)

