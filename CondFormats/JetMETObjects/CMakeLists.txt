add_subdirectory(bin)
add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsJetMETObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/JetMETObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsJetMETObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/JetMETObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/JetMETObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/JetMETObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsJetMETObjectssrcclassesh")

add_library(CondFormatsJetMETObjects OBJECT 
  src/FFTJetCorrectorParameters.cc
  src/JetCorrectorParameters.cc
  src/QGLikelihoodObject.cc
  src/JetResolution.cc
  src/SimpleJetCorrectionUncertainty.cc
  src/JetCorrectionUncertainty.cc
  src/MEtXYcorrectParameters.cc
  src/SimpleJetCorrector.cc
  src/FactorizedJetCorrector.cc
  src/JetResolutionObject.cc
  src/FactorizedJetCorrectorCalculator.cc
  src/METCorrectorParameters.cc
  src/JetCorrectorParametersHelper.cc
  ${CMAKE_BINARY_DIR}/CondFormatsJetMETObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsJetMETObjects PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CondFormatsJetMETObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsJetMETObjects PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CondFormatsJetMETObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsJetMETObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsJetMETObjects PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CondFormatsJetMETObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsJetMETObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsJetMETObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsJetMETObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsJetMETObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsJetMETObjects PUBLIC /usr/include/boost/regex/)

