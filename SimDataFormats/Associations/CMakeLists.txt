add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimDataFormatsAssociationssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimDataFormats/Associations/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimDataFormatsAssociationssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimDataFormats/Associations/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimDataFormats/Associations/src/classes.h /home/teemperor/cms/cmssw/SimDataFormats/Associations/src/classes_def.xml
  COMMENT "Generating ROOT dict SimDataFormatsAssociationssrcclassesh")

add_library(SimDataFormatsAssociations OBJECT 
  src/VertexToTrackingVertexAssociator.cc
  src/MuonToTrackingParticleAssociatorBaseImpl.cc
  src/TrackToGenParticleAssociatorBaseImpl.cc
  src/TrackToTrackingParticleAssociatorBaseImpl.cc
  src/TrackToGenParticleAssociator.cc
  src/MuonToTrackingParticleAssociator.cc
  src/TrackToTrackingParticleAssociator.cc
  src/VertexToTrackingVertexAssociatorBaseImpl.cc
  ${CMAKE_BINARY_DIR}/SimDataFormatsAssociationssrcclassesh_rflx.cpp
)

target_include_directories(SimDataFormatsAssociations PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimDataFormatsAssociations PUBLIC /usr/include/root/)
target_include_directories(SimDataFormatsAssociations PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimDataFormatsAssociations PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimDataFormatsAssociations PUBLIC /usr/include/boost/)
target_include_directories(SimDataFormatsAssociations PUBLIC /usr/include/boost/regex/)

