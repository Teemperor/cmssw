add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/FireworksFWInterfacesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/Fireworks/FWInterface/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/FireworksFWInterfacesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/Fireworks/FWInterface/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/Fireworks/FWInterface/src/classes.h /home/teemperor/cms/cmssw/Fireworks/FWInterface/src/classes_def.xml
  COMMENT "Generating ROOT dict FireworksFWInterfacesrcclassesh")

add_library(FireworksFWInterface OBJECT 
  src/FWFFService.cc
  src/FWPathsPopup.cc
  src/FWFFMetadataManager.cc
  src/FWFFHelper.cc
  src/FWPSetTableManager.cc
  src/FWPSetCellEditor.cc
  src/FWFFLooper.cc
  src/FWFFNavigator.cc
  ${CMAKE_BINARY_DIR}/FireworksFWInterfacesrcclassesh_rflx.cpp
)

target_include_directories(FireworksFWInterface PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FireworksFWInterface PUBLIC /usr/include/python2.7/)
target_include_directories(FireworksFWInterface PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(FireworksFWInterface PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FireworksFWInterface PUBLIC /usr/include/boost/program_options/)
target_include_directories(FireworksFWInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FireworksFWInterface PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FireworksFWInterface PUBLIC /usr/include/boost/serialization/)
target_include_directories(FireworksFWInterface PUBLIC /usr/include/boost/)
target_include_directories(FireworksFWInterface PUBLIC /usr/include/boost/python/)
target_include_directories(FireworksFWInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FireworksFWInterface PUBLIC /usr/include/root/)
target_include_directories(FireworksFWInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FireworksFWInterface PUBLIC /usr/include/boost/system/)
target_include_directories(FireworksFWInterface PUBLIC /usr/include/boost/regex/)

