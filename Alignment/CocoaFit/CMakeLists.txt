add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/AlignmentCocoaFitsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/Alignment/CocoaFit/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/AlignmentCocoaFitsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/Alignment/CocoaFit/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/Alignment/CocoaFit/src/classes.h /home/teemperor/cms/cmssw/Alignment/CocoaFit/src/classes_def.xml
  COMMENT "Generating ROOT dict AlignmentCocoaFitsrcclassesh")

add_library(AlignmentCocoaFit OBJECT 
  src/MatrixMeschach.cc
  src/FittedEntriesSet.cc
  src/FittedEntriesManager.cc
  src/NtupleObjects.cc
  src/CocoaDBMgr.cc
  src/Fit.cc
  src/NtupleManager.cc
  src/HistoDef.cc
  src/FittedEntry.cc
  ${CMAKE_BINARY_DIR}/AlignmentCocoaFitsrcclassesh_rflx.cpp
)

target_include_directories(AlignmentCocoaFit PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentCocoaFit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentCocoaFit PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentCocoaFit PUBLIC /usr/include/meschach/)
target_include_directories(AlignmentCocoaFit PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentCocoaFit PUBLIC /usr/include/boost/)
target_include_directories(AlignmentCocoaFit PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentCocoaFit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentCocoaFit PUBLIC /usr/include/root/)
target_include_directories(AlignmentCocoaFit PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentCocoaFit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentCocoaFit PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentCocoaFit PUBLIC /usr/include/boost/regex/)

