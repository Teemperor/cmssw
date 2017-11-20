add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsEgammaObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/EgammaObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsEgammaObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/EgammaObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/EgammaObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/EgammaObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsEgammaObjectssrcclassesh")

add_library(CondFormatsEgammaObjects OBJECT 
  src/T_EventSetup_GBRDWrapper.cc
  src/T_EventSetup_ElectronPdfCalibration.cc
  src/GBRTreeD.cc
  src/GBRForestD.cc
  src/T_EventSetup_GBRWrapper.cc
  src/GBRForest.cxx
  src/GBRForest2D.cxx
  src/GBRTree2D.cxx
  src/GBRTree.cxx
  ${CMAKE_BINARY_DIR}/CondFormatsEgammaObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsEgammaObjects PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CondFormatsEgammaObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsEgammaObjects PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CondFormatsEgammaObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsEgammaObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsEgammaObjects PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CondFormatsEgammaObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsEgammaObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsEgammaObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsEgammaObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsEgammaObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsEgammaObjects PUBLIC /usr/include/boost/regex/)

