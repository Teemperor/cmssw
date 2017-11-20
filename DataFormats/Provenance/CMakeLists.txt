add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsProvenancesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/Provenance/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsProvenancesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/Provenance/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/Provenance/src/classes.h /home/teemperor/cms/cmssw/DataFormats/Provenance/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsProvenancesrcclassesh")

add_library(DataFormatsProvenance OBJECT 
  src/ThinnedAssociationsHelper.cc
  src/LuminosityBlockRange.cc
  src/LuminosityBlockID.cc
  src/BranchIDListHelper.cc
  src/Timestamp.cc
  src/StableProvenance.cc
  src/LuminosityBlockAux.cc
  src/ProductProvenance.cc
  src/EventRange.cc
  src/RunLumiEntryInfo.cc
  src/Hash.cc
  src/ViewTypeChecker.cc
  src/ProcessHistory.cc
  src/ModuleDescription.cc
  src/ParameterSetBlob.cc
  src/BranchType.cc
  src/IndexIntoFile.cc
  src/FileIndex.cc
  src/ESRecordAuxiliary.cc
  src/EventID.cc
  src/RunAux.cc
  src/ProcessConfiguration.cc
  src/ProductIDToBranchID.cc
  src/ProductProvenanceRetriever.cc
  src/ProcessHistoryRegistry.cc
  src/SubProcessParentageHelper.cc
  src/LuminosityBlockAuxiliary.cc
  src/EventAuxiliary.cc
  src/BranchDescription.cc
  src/Provenance.cc
  src/ParentageRegistry.cc
  src/RunID.cc
  src/EventAux.cc
  src/ProductID.cc
  src/BranchChildren.cc
  src/History.cc
  src/ProductResolverIndexHelper.cc
  src/EventEntryInfo.cc
  src/RunAuxiliary.cc
  src/FileFormatVersion.cc
  src/BranchID.cc
  src/ProductRegistry.cc
  src/BranchKey.cc
  src/Parentage.cc
  src/FileID.cc
  src/EventEntryDescription.cc
  ${CMAKE_BINARY_DIR}/DataFormatsProvenancesrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsProvenance PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsProvenance PUBLIC /usr/include/root/)
target_include_directories(DataFormatsProvenance PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsProvenance PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsProvenance PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsProvenance PUBLIC /usr/include/boost/regex/)

