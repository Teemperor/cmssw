add_subdirectory(plugins)
add_library(SimG4CorePhysicsLists OBJECT 
  src/CMSG4mplIonisation.cc
  src/HadronPhysicsQGSPCMS_FTFP_BERT.cc
  src/CMSEmStandardPhysics95.cc
  src/G4MonopoleTransportation.cc
  src/EmParticleList.cc
  src/HadronPhysicsCMS.cc
  src/DummyEMPhysics.cc
  src/CMSEmStandardPhysics95msc93.cc
  src/CMSMonopolePhysics.cc
  src/CMSThermalNeutrons.cc
  src/CMSFTFPPiKBuilder.cc
  src/CMSEmStandardPhysicsLPM.cc
  src/CMSEmStandardPhysics.cc
  src/CMSFTFPProtonBuilder.cc
  src/UrbanMscModel93.cc
  src/CMSEmNoDeltaRay.cc
  src/CMSFTFPNeutronBuilder.cc
  src/CMSEmStandardPhysicsXS.cc
  src/CMSHadronPhysicsFTFP_BERT_ATL.cc
)

target_include_directories(SimG4CorePhysicsLists PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CorePhysicsLists PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CorePhysicsLists PUBLIC /usr/include/root/)
target_include_directories(SimG4CorePhysicsLists PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CorePhysicsLists PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CorePhysicsLists PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CorePhysicsLists PUBLIC /usr/include/boost/)
target_include_directories(SimG4CorePhysicsLists PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CorePhysicsLists PUBLIC /usr/include/boost/regex/)

