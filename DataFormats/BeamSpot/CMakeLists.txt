add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsBeamSpotsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/BeamSpot/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsBeamSpotsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/BeamSpot/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/BeamSpot/src/classes.h /home/teemperor/cms/cmssw/DataFormats/BeamSpot/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsBeamSpotsrcclassesh")

add_library(DataFormatsBeamSpot OBJECT 
  src/BeamSpot.cc
  ${CMAKE_BINARY_DIR}/DataFormatsBeamSpotsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsBeamSpot PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsBeamSpot PUBLIC /usr/include/root/)
target_include_directories(DataFormatsBeamSpot PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsBeamSpot PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsBeamSpot PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsBeamSpot PUBLIC /usr/include/boost/regex/)

