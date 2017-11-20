add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsHistogramssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/Histograms/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsHistogramssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/Histograms/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/Histograms/src/classes.h /home/teemperor/cms/cmssw/DataFormats/Histograms/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsHistogramssrcclassesh")

add_library(DataFormatsHistograms OBJECT 
  ${CMAKE_BINARY_DIR}/DataFormatsHistogramssrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsHistograms PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsHistograms PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsHistograms PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsHistograms PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsHistograms PUBLIC /usr/include/root/)
target_include_directories(DataFormatsHistograms PUBLIC /usr/include/boost/regex/)

