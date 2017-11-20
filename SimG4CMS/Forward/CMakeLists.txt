add_subdirectory(plugins)
add_library(SimG4CMSForward OBJECT 
  src/TotemT2OrganizationGem.cc
  src/Bcm1fSD.cc
  src/BscNumberingScheme.cc
  src/BSCG4Hit.cc
  src/BHMNumberingScheme.cc
  src/CastorTestAnalysis.cc
  src/BscTest.cc
  src/TotemRPOrganization.cc
  src/DoCastorAnalysis.cc
  src/TotemRPNumberingScheme.cc
  src/TotemT1Organization.cc
  src/CastorNumberingScheme.cc
  src/BHMSD.cc
  src/TotemT1NumberingScheme.cc
  src/TotemTestGem.cc
  src/PltSD.cc
  src/ZdcTestAnalysis.cc
  src/TotemT2NumberingSchemeGem.cc
  src/BscSD.cc
  src/ZdcNumberingScheme.cc
  src/ZdcShowerLibrary.cc
  src/TotemG4Hit.cc
  src/ZdcSD.cc
  src/FastTimerSD.cc
  src/CastorSD.cc
  src/CastorShowerLibrary.cc
  src/TotemSD.cc
  src/TotemNumberMerger.cc
)

target_include_directories(SimG4CMSForward PUBLIC /usr/include/boost/iostreams/)
target_include_directories(SimG4CMSForward PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CMSForward PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CMSForward PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CMSForward PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CMSForward PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimG4CMSForward PUBLIC /usr/include/boost/)
target_include_directories(SimG4CMSForward PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CMSForward PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CMSForward PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CMSForward PUBLIC /usr/include/root/)
target_include_directories(SimG4CMSForward PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CMSForward PUBLIC /usr/include/boost/regex/)

