add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsWrappedStdDictionariessrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/WrappedStdDictionaries/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsWrappedStdDictionariessrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/WrappedStdDictionaries/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/WrappedStdDictionaries/src/classes.h /home/teemperor/cms/cmssw/DataFormats/WrappedStdDictionaries/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsWrappedStdDictionariessrcclassesh")

add_library(DataFormatsWrappedStdDictionaries OBJECT 
  ${CMAKE_BINARY_DIR}/DataFormatsWrappedStdDictionariessrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsWrappedStdDictionaries PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsWrappedStdDictionaries PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsWrappedStdDictionaries PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsWrappedStdDictionaries PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsWrappedStdDictionaries PUBLIC /usr/include/root/)
target_include_directories(DataFormatsWrappedStdDictionaries PUBLIC /usr/include/boost/regex/)

