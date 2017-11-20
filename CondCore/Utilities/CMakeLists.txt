add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondCoreUtilitiessrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondCore/Utilities/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondCoreUtilitiessrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondCore/Utilities/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondCore/Utilities/src/classes.h /home/teemperor/cms/cmssw/CondCore/Utilities/src/classes_def.xml
  COMMENT "Generating ROOT dict CondCoreUtilitiessrcclassesh")

add_library(CondCoreUtilities OBJECT 
  src/Utilities.cc
  src/CondDBImport.cc
  src/CondDBTools.cc
  src/CondDBFetch.cc
  src/PayloadInspector.cc
  ${CMAKE_BINARY_DIR}/CondCoreUtilitiessrcclassesh_rflx.cpp
)

target_include_directories(CondCoreUtilities PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CondCoreUtilities PUBLIC /usr/include/python2.7/)
target_include_directories(CondCoreUtilities PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CondCoreUtilities PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CondCoreUtilities PUBLIC /usr/include/boost/program_options/)
target_include_directories(CondCoreUtilities PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondCoreUtilities PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondCoreUtilities PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CondCoreUtilities PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondCoreUtilities PUBLIC /usr/include/boost/)
target_include_directories(CondCoreUtilities PUBLIC /usr/include/boost/python/)
target_include_directories(CondCoreUtilities PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondCoreUtilities PUBLIC /usr/include/root/)
target_include_directories(CondCoreUtilities PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondCoreUtilities PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondCoreUtilities PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondCoreUtilities PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/Utilities.cc
  src/CondDBImport.cc
  src/CondDBTools.cc
  src/CondDBFetch.cc
  src/PayloadInspector.cc
  ${CMAKE_BINARY_DIR}/CondCoreUtilitiessrcclassesh_rflx.cpp
PROPERTIES COMPILE_FLAGS "-Wno-sign-compare -Wno-unused-variable -Os")

