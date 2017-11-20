add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsBTauObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/BTauObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsBTauObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/BTauObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/BTauObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/BTauObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsBTauObjectssrcclassesh")

add_library(CondFormatsBTauObjects OBJECT 
  src/T_EventSetup_CombinedSVCategoryData.cc
  src/T_EventSetup_CombinedSVCalibration.cc
  src/BTagEntry.cc
  src/T_EventSetup_TrackProbabilityCategoryData.cc
  src/T_EventSetup_TrackProbabilityCalibration.cc
  src/T_EventSetup_CombinedTauTagCalibration.cc
  src/T_EventSetup_BTagCalibration.cc
  src/BTagCalibration.cc
  src/T_EventSetup_CombinedTauTagCategoryData.cc
  src/T_EventSetup_BTagEntry.cc
  ${CMAKE_BINARY_DIR}/CondFormatsBTauObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsBTauObjects PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CondFormatsBTauObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsBTauObjects PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CondFormatsBTauObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsBTauObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsBTauObjects PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CondFormatsBTauObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsBTauObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsBTauObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsBTauObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsBTauObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsBTauObjects PUBLIC /usr/include/boost/regex/)

