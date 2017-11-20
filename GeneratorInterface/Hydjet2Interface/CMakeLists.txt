add_subdirectory(test)
add_subdirectory(plugins)
add_library(GeneratorInterfaceHydjet2Interface OBJECT 
  src/GrandCanonical.cc
  src/StrangeDensity.cc
  src/DatabasePDG.cc
  src/RandArrayFunction.cc
  src/HankelFunction.cc
  src/ParticlePDG.cc
  src/UKUtility.cc
  src/HadronDecayer.cc
  src/Particle.cc
  src/DecayChannel.cc
  src/StrangePotential.cc
  src/InitialState.cc
  src/ParticleTable.cc
  src/Hydjet2Hadronizer.cc
  src/EquationSolver.cc
)

target_include_directories(GeneratorInterfaceHydjet2Interface PUBLIC /usr/include/boost/iostreams/)
target_include_directories(GeneratorInterfaceHydjet2Interface PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceHydjet2Interface PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceHydjet2Interface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceHydjet2Interface PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceHydjet2Interface PUBLIC /usr/include/boost/serialization/)
target_include_directories(GeneratorInterfaceHydjet2Interface PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceHydjet2Interface PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceHydjet2Interface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceHydjet2Interface PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceHydjet2Interface PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceHydjet2Interface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceHydjet2Interface PUBLIC /usr/include/boost/regex/)

