add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsHeavyIonEventsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/HeavyIonEvent/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsHeavyIonEventsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/HeavyIonEvent/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/HeavyIonEvent/src/classes.h /home/teemperor/cms/cmssw/DataFormats/HeavyIonEvent/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsHeavyIonEventsrcclassesh")

add_library(DataFormatsHeavyIonEvent OBJECT 
  src/Centrality.cc
  src/ClusterCompatibility.cc
  src/HeavyIon.cc
  src/EvtPlane.cc
  src/CentralityBins.cc
  src/VoronoiBackground.cc
  ${CMAKE_BINARY_DIR}/DataFormatsHeavyIonEventsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsHeavyIonEvent PUBLIC /usr/include/boost/python/)
target_include_directories(DataFormatsHeavyIonEvent PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsHeavyIonEvent PUBLIC /usr/include/python2.7/)
target_include_directories(DataFormatsHeavyIonEvent PUBLIC /usr/include/root/)
target_include_directories(DataFormatsHeavyIonEvent PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsHeavyIonEvent PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsHeavyIonEvent PUBLIC /usr/include/boost/serialization/)
target_include_directories(DataFormatsHeavyIonEvent PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsHeavyIonEvent PUBLIC /usr/include/boost/regex/)

