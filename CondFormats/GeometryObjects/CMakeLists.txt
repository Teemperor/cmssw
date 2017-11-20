add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsGeometryObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/GeometryObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsGeometryObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/GeometryObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/GeometryObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/GeometryObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsGeometryObjectssrcclassesh")

add_library(CondFormatsGeometryObjects OBJECT 
  src/T_EventSetup_HcalParameters.cc
  src/T_EventSetup_PHGCalParameters.cc
  src/T_EventSetup_CSCRecoDigiParameters.cc
  src/T_EventSetup_PGeometricDet.cc
  src/T_EventSetup_PTrackerParameters.cc
  src/T_EventSetup_PGeometricDetExtra.cc
  src/T_EventSetup_RecoIdealGeometry.cc
  src/T_EventSetup_PCaloGeometry.cc
  src/PCaloGeometry.cc
  ${CMAKE_BINARY_DIR}/CondFormatsGeometryObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsGeometryObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsGeometryObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsGeometryObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsGeometryObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsGeometryObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsGeometryObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsGeometryObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsGeometryObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsGeometryObjects PUBLIC /usr/include/boost/regex/)

