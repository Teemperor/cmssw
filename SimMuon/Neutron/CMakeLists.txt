add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimMuonNeutronsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimMuon/Neutron/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimMuonNeutronsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimMuon/Neutron/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimMuon/Neutron/src/classes.h /home/teemperor/cms/cmssw/SimMuon/Neutron/src/classes_def.xml
  COMMENT "Generating ROOT dict SimMuonNeutronsrcclassesh")

add_library(SimMuonNeutron OBJECT 
  src/AsciiNeutronReader.cc
  src/RootNeutronWriter.cc
  src/RootChamberWriter.cc
  src/SubsystemNeutronWriter.cc
  src/RootChamberReader.cc
  src/EDMNeutronWriter.cc
  src/RootNeutronReader.cc
  src/RootSimHit.cc
  src/AsciiNeutronWriter.cc
  src/SubsystemNeutronReader.cc
  ${CMAKE_BINARY_DIR}/SimMuonNeutronsrcclassesh_rflx.cpp
)

target_include_directories(SimMuonNeutron PUBLIC /usr/include/boost/python/)
target_include_directories(SimMuonNeutron PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimMuonNeutron PUBLIC /usr/include/python2.7/)
target_include_directories(SimMuonNeutron PUBLIC /usr/include/root/)
target_include_directories(SimMuonNeutron PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimMuonNeutron PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimMuonNeutron PUBLIC /usr/include/boost/)
target_include_directories(SimMuonNeutron PUBLIC /usr/include/boost/regex/)

