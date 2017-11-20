add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/RecoEgammaPhotonIdentificationsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/RecoEgamma/PhotonIdentification/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/RecoEgammaPhotonIdentificationsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/RecoEgamma/PhotonIdentification/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/RecoEgamma/PhotonIdentification/src/classes.h /home/teemperor/cms/cmssw/RecoEgamma/PhotonIdentification/src/classes_def.xml
  COMMENT "Generating ROOT dict RecoEgammaPhotonIdentificationsrcclassesh")

add_library(RecoEgammaPhotonIdentification OBJECT 
  src/PhotonMIPHaloTagger.cc
  src/CutBasedPhotonIDAlgo.cc
  src/PhotonIsolationCalculator.cc
  src/PFPhotonIsolationCalculator.cc
  ${CMAKE_BINARY_DIR}/RecoEgammaPhotonIdentificationsrcclassesh_rflx.cpp
)

target_include_directories(RecoEgammaPhotonIdentification PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /usr/include/boost/)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /usr/include/root/)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoEgammaPhotonIdentification PUBLIC /usr/include/boost/regex/)

