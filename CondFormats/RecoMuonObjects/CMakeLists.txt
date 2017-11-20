add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsRecoMuonObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/RecoMuonObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsRecoMuonObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/RecoMuonObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/RecoMuonObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/RecoMuonObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsRecoMuonObjectssrcclassesh")

add_library(CondFormatsRecoMuonObjects OBJECT 
  src/T_EventSetup_MuScleFitDBobject.cc
  src/T_EventSetup_DYTParamsObject.cc
  src/T_EventSetup_DYTThrObject.cc
  src/T_EventSetup_MuonSystemAging.cc
  src/DYTParamObject.cc
  ${CMAKE_BINARY_DIR}/CondFormatsRecoMuonObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsRecoMuonObjects PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CondFormatsRecoMuonObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsRecoMuonObjects PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CondFormatsRecoMuonObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsRecoMuonObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsRecoMuonObjects PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CondFormatsRecoMuonObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsRecoMuonObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsRecoMuonObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsRecoMuonObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsRecoMuonObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsRecoMuonObjects PUBLIC /usr/include/boost/regex/)

