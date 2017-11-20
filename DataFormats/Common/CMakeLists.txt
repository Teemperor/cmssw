add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsCommonsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/Common/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsCommonsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/Common/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/Common/src/classes.h /home/teemperor/cms/cmssw/DataFormats/Common/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsCommonsrcclassesh")

add_library(DataFormatsCommon OBJECT 
  src/MergeableCounter.cc
  src/View.cc
  src/RefCoreWithIndex.cc
  src/OrphanHandleBase.cc
  src/MultiAssociation.cc
  src/traits.cc
  src/DataFrameContainer.cc
  src/DetSetVectorNew.cc
  src/EDProductGetter.cc
  src/HandleBase.cc
  src/RefCore.cc
  src/ConvertHandle.cc
  src/RefCoreStreamer.cc
  src/CommonExceptions.cc
  src/PtrVectorBase.cc
  src/ThinnedAssociation.cc
  src/WrapperBase.cc
  src/HandleExceptionFactory.cc
  src/ProductData.cc
  ${CMAKE_BINARY_DIR}/DataFormatsCommonsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsCommon PUBLIC /usr/include/root/)
target_include_directories(DataFormatsCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsCommon PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsCommon PUBLIC /usr/include/boost/regex/)

