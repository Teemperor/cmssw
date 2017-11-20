add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsOptAlignObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/OptAlignObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsOptAlignObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/OptAlignObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/OptAlignObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/OptAlignObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsOptAlignObjectssrcclassesh")

add_library(CondFormatsOptAlignObjects OBJECT 
  src/T_EventSetup_OpticalAlignments.cc
  src/OpticalAlignments.cc
  src/OpticalAlignInfo.cc
  src/Inclinometers.cc
  src/OpticalAlignMeasurements.cc
  src/OpticalAlignMeasurementInfo.cc
  src/PXsensors.cc
  ${CMAKE_BINARY_DIR}/CondFormatsOptAlignObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsOptAlignObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsOptAlignObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsOptAlignObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsOptAlignObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsOptAlignObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsOptAlignObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsOptAlignObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsOptAlignObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsOptAlignObjects PUBLIC /usr/include/boost/regex/)

