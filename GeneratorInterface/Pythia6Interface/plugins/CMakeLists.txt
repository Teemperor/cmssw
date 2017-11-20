add_library(GeneratorInterfacePythia6Filters OBJECT 
  Pythia6GeneratorFilter.cc
  Pythia6HadronizerFilter.cc
  Pythia6Hadronizer.cc
  pythia_stophadron.f
  pythia_gluinohadron.f
)

target_include_directories(GeneratorInterfacePythia6Filters PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfacePythia6Filters PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfacePythia6Filters PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfacePythia6Filters PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfacePythia6Filters PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfacePythia6Filters PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfacePythia6Filters PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfacePythia6Filters PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfacePythia6Filters PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfacePythia6Filters PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfacePythia6Filters PUBLIC /usr/include/boost/regex/)
target_include_directories(GeneratorInterfacePythia6Filters PUBLIC /usr/include/Pythia8/)

add_library(GeneratorInterfacePythia6Guns OBJECT 
  Pythia6ParticleGun.cc
  Pythia6PartonEGun.cc
  Pythia6EGun.cc
  Pythia6PartonPtGun.cc
  Pythia6PartonGun.cc
  Pythia6Gun.cc
  Pythia6PtYDistGun.cc
  Pythia6PtGun.cc
  Pythia6JetGun.cc
)

target_include_directories(GeneratorInterfacePythia6Guns PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfacePythia6Guns PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfacePythia6Guns PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfacePythia6Guns PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfacePythia6Guns PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfacePythia6Guns PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfacePythia6Guns PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfacePythia6Guns PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfacePythia6Guns PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfacePythia6Guns PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfacePythia6Guns PUBLIC /usr/include/boost/regex/)

