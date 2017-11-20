add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsPileupSummaryInfosrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/PileupSummaryInfo/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsPileupSummaryInfosrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/PileupSummaryInfo/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/PileupSummaryInfo/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/PileupSummaryInfo/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsPileupSummaryInfosrcclassesh")

add_library(SimDataFormatsPileupSummaryInfo OBJECT 
  src/PileupSummaryInfo.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsPileupSummaryInfosrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsPileupSummaryInfo PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsPileupSummaryInfo PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsPileupSummaryInfo PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsPileupSummaryInfo PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsPileupSummaryInfo PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsPileupSummaryInfo PUBLIC /usr/include/boost/regex/)

