add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/FastSimDataFormatsCTPPSFastSimsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/FastSimDataFormats/CTPPSFastSim/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/FastSimDataFormatsCTPPSFastSimsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/FastSimDataFormats/CTPPSFastSim/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/FastSimDataFormats/CTPPSFastSim/src/classes.h /home/teemperor/cms/cmssw/FastSimDataFormats/CTPPSFastSim/src/classes_def.xml
  COMMENT "Generating ROOT dict FastSimDataFormatsCTPPSFastSimsrcclassesh")

add_library(FastSimDataFormatsCTPPSFastSim OBJECT 
  src/CTPPSFastTrack.cc
  src/CTPPSFastRecHit.cc
  ${CMAKE_BINARY_DIR}/FastSimDataFormatsCTPPSFastSimsrcclassesh_rflx.cpp
)

target_include_directories(FastSimDataFormatsCTPPSFastSim PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimDataFormatsCTPPSFastSim PUBLIC /usr/include/root/)
target_include_directories(FastSimDataFormatsCTPPSFastSim PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimDataFormatsCTPPSFastSim PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimDataFormatsCTPPSFastSim PUBLIC /usr/include/boost/)
target_include_directories(FastSimDataFormatsCTPPSFastSim PUBLIC /usr/include/boost/regex/)

