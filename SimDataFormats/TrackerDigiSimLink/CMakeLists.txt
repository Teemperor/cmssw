add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsTrackerDigiSimLinksrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/TrackerDigiSimLink/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsTrackerDigiSimLinksrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/TrackerDigiSimLink/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/TrackerDigiSimLink/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/TrackerDigiSimLink/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsTrackerDigiSimLinksrcclassesh")

add_library(SimDataFormatsTrackerDigiSimLink OBJECT 
  src/StripDigiSimLink.cc
  src/StripCompactDigiSimLinks.cc
  src/PixelDigiSimLink.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsTrackerDigiSimLinksrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsTrackerDigiSimLink PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsTrackerDigiSimLink PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsTrackerDigiSimLink PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsTrackerDigiSimLink PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsTrackerDigiSimLink PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsTrackerDigiSimLink PUBLIC /usr/include/boost/regex/)

