add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsBeamSpotObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/BeamSpotObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsBeamSpotObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/BeamSpotObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/BeamSpotObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/BeamSpotObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsBeamSpotObjectssrcclassesh")

add_library(CondFormatsBeamSpotObjects OBJECT 
  src/BeamSpotObjects.cc
  src/T_EventSetup_SimBeamSpotObjects.cc
  src/SimBeamSpotObjects.cc
  src/T_EventSetup_BeamSpotObjects.cc
  ${CMAKE_BINARY_DIR}/CondFormatsBeamSpotObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsBeamSpotObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsBeamSpotObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsBeamSpotObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsBeamSpotObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsBeamSpotObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsBeamSpotObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsBeamSpotObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsBeamSpotObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsBeamSpotObjects PUBLIC /usr/include/boost/regex/)

