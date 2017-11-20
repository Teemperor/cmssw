add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/IOPoolTFileAdaptorsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/IOPool/TFileAdaptor/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/IOPoolTFileAdaptorsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/IOPool/TFileAdaptor/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/IOPool/TFileAdaptor/src/classes.h /home/teemperor/cms/cmssw/IOPool/TFileAdaptor/src/classes_def.xml
  COMMENT "Generating ROOT dict IOPoolTFileAdaptorsrcclassesh")

add_library(IOPoolTFileAdaptor OBJECT 
  src/TStorageFactoryFile.cc
  src/TStorageFactorySystem.cc
  src/TFileAdaptor.cc
  src/ReadRepacker.cc
  ${CMAKE_BINARY_DIR}/IOPoolTFileAdaptorsrcclassesh_rflx.cpp
)

target_include_directories(IOPoolTFileAdaptor PUBLIC /usr/include/boost/python/)
target_include_directories(IOPoolTFileAdaptor PUBLIC /usr/include/boost/filesystem/)
target_include_directories(IOPoolTFileAdaptor PUBLIC /usr/include/python2.7/)
target_include_directories(IOPoolTFileAdaptor PUBLIC /usr/include/root/)
target_include_directories(IOPoolTFileAdaptor PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IOPoolTFileAdaptor PUBLIC /home/teemperor/cms/md5/)
target_include_directories(IOPoolTFileAdaptor PUBLIC /usr/include/boost/)
target_include_directories(IOPoolTFileAdaptor PUBLIC /usr/include/boost/regex/)

