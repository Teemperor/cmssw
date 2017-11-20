add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsFWLitesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/FWLite/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsFWLitesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/FWLite/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/FWLite/src/classes.h /home/teemperor/cms/cmssw/DataFormats/FWLite/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsFWLitesrcclassesh")

add_library(DataFormatsFWLite OBJECT 
  src/Record.cc
  src/EntryFinder.cc
  src/RunHistoryGetter.cc
  src/RunFactory.cc
  src/ESHandle.cc
  src/HistoryGetterBase.cc
  src/Event.cc
  src/EventHistoryGetter.cc
  src/LumiHistoryGetter.cc
  src/IOVSyncValue.cc
  src/Run.cc
  src/MultiChainEvent.cc
  src/EventBase.cc
  src/format_type_name.cc
  src/DataGetterHelper.cc
  src/ChainEvent.cc
  src/EventSetup.cc
  src/LuminosityBlockBase.cc
  src/RunBase.cc
  src/LuminosityBlock.cc
  src/ErrorThrower.cc
  ${CMAKE_BINARY_DIR}/DataFormatsFWLitesrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsFWLite PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsFWLite PUBLIC /usr/include/root/)
target_include_directories(DataFormatsFWLite PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsFWLite PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsFWLite PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsFWLite PUBLIC /usr/include/boost/regex/)

