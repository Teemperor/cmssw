add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsBTauRecosrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/BTauReco/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsBTauRecosrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/BTauReco/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/BTauReco/src/classes.h /home/teemperor/cms/cmssw/DataFormats/BTauReco/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsBTauRecosrcclassesh")

add_library(DataFormatsBTauReco OBJECT 
  src/TauImpactParameterInfo.cc
  src/IsolatedTauTagInfo.cc
  src/TauMassTagInfo.cc
  src/VertexTypes.cc
  src/TaggingVariable.cc
  src/TemplatedSoftLeptonTagInfo.cc
  ${CMAKE_BINARY_DIR}/DataFormatsBTauRecosrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsBTauReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsBTauReco PUBLIC /usr/include/root/)
target_include_directories(DataFormatsBTauReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsBTauReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsBTauReco PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsBTauReco PUBLIC /usr/include/boost/regex/)

