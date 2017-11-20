add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsMETRecosrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/METReco/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsMETRecosrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/METReco/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/METReco/src/classes.h /home/teemperor/cms/cmssw/DataFormats/METReco/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsMETRecosrcclassesh")

add_library(DataFormatsMETReco OBJECT 
  src/BeamHaloSummary.cc
  src/CaloMET.cc
  src/HaloClusterCandidateECAL.cc
  src/SigInputObj.cc
  src/PUSubMETData.cc
  src/HcalHaloData.cc
  src/PFClusterMET.cc
  src/HcalNoiseRBX.cc
  src/PFMET.cc
  src/EcalHaloData.cc
  src/HcalNoiseSummary.cc
  src/HcalCaloFlagTool.cc
  src/HaloClusterCandidateHCAL.cc
  src/GenMET.cc
  src/CSCHaloData.cc
  src/PhiWedge.cc
  src/MET.cc
  src/HcalNoiseHPD.cc
  src/GlobalHaloData.cc
  ${CMAKE_BINARY_DIR}/DataFormatsMETRecosrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsMETReco PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsMETReco PUBLIC /usr/include/root/)
target_include_directories(DataFormatsMETReco PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsMETReco PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsMETReco PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsMETReco PUBLIC /usr/include/boost/regex/)

