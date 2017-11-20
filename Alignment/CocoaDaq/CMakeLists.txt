add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/AlignmentCocoaDaqsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/Alignment/CocoaDaq/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/AlignmentCocoaDaqsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/Alignment/CocoaDaq/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/Alignment/CocoaDaq/src/classes.h /home/teemperor/cms/cmssw/Alignment/CocoaDaq/src/classes_def.xml
  COMMENT "Generating ROOT dict AlignmentCocoaDaqsrcclassesh")

add_library(AlignmentCocoaDaq OBJECT 
  src/CocoaDaqRootEvent.cc
  src/CocoaDaqReader.cc
  ${CMAKE_BINARY_DIR}/AlignmentCocoaDaqsrcclassesh_rflx.cpp
)

target_include_directories(AlignmentCocoaDaq PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentCocoaDaq PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentCocoaDaq PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentCocoaDaq PUBLIC /usr/include/root/)
target_include_directories(AlignmentCocoaDaq PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentCocoaDaq PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentCocoaDaq PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentCocoaDaq PUBLIC /usr/include/boost/)
target_include_directories(AlignmentCocoaDaq PUBLIC /usr/include/boost/regex/)

