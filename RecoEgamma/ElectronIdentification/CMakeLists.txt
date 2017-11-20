add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/RecoEgammaElectronIdentificationsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/RecoEgamma/ElectronIdentification/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/RecoEgammaElectronIdentificationsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/RecoEgamma/ElectronIdentification/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/RecoEgamma/ElectronIdentification/src/classes.h /home/teemperor/cms/cmssw/RecoEgamma/ElectronIdentification/src/classes_def.xml
  COMMENT "Generating ROOT dict RecoEgammaElectronIdentificationsrcclassesh")

add_library(RecoEgammaElectronIdentification OBJECT 
  src/ElectronNeuralNet.cc
  src/ClassBasedElectronID.cc
  src/ElectronMVAEstimatorRun2Spring16GeneralPurpose.cc
  src/ElectronLikelihood.cc
  src/LikelihoodSpecies.cc
  src/LikelihoodPdfProduct.cc
  src/ElectronMVAEstimator.cc
  src/ElectronIDAlgo.cc
  src/CutBasedElectronID.cc
  src/SoftElectronMVAEstimator.cc
  src/ElectronMVAEstimatorRun2Spring16HZZ.cc
  src/LikelihoodPdf.cc
  src/T_ElectronLikelihood.cc
  src/PTDRElectronID.cc
  ${CMAKE_BINARY_DIR}/RecoEgammaElectronIdentificationsrcclassesh_rflx.cpp
)

target_include_directories(RecoEgammaElectronIdentification PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /usr/include/boost/)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /usr/include/root/)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoEgammaElectronIdentification PUBLIC /usr/include/boost/regex/)

