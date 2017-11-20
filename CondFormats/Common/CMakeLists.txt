add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsCommonsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/Common/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsCommonsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/Common/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/Common/src/classes.h /home/teemperor/cms/cmssw/CondFormats/Common/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsCommonsrcclassesh")

add_library(CondFormatsCommon OBJECT 
  src/Summary.cc
  src/FileBlob.cc
  src/DropBoxMetadata.cc
  src/MultiFileBlob.cc
  src/GenericSummary.cc
  src/ConfObject.cc
  src/T_EventSetup_BaseKeyed.cc
  src/FileBlobCollection.cc
  src/T_EventSetup_DropBoxMetadata.cc
  src/T_EventSetup_ConfObject.cc
  src/SmallWORMDict.cc
  src/hash64.cc
  src/T_EventSetup_FileBlob.cc
  src/Time.cc
  ${CMAKE_BINARY_DIR}/CondFormatsCommonsrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsCommon PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsCommon PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsCommon PUBLIC /usr/include/root/)
target_include_directories(CondFormatsCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsCommon PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsCommon PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsCommon PUBLIC /usr/include/boost/regex/)

