add_library(GeneratorInterfaceLHEProducer OBJECT 
  LHEFilter.cc
  LHE2HepMCConverter.cc
  ExternalLHEProducer.cc
  ExternalLHEAsciiDumper.cc
)

target_include_directories(GeneratorInterfaceLHEProducer PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceLHEProducer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceLHEProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceLHEProducer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceLHEProducer PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceLHEProducer PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceLHEProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceLHEProducer PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceLHEProducer PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceLHEProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceLHEProducer PUBLIC /usr/include/boost/regex/)

add_library(GeneratorInterfaceLHEIO OBJECT 
  LHESource.cc
  LHEProvenanceHelper.cc
  LHEWriter.cc
)

target_include_directories(GeneratorInterfaceLHEIO PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceLHEIO PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceLHEIO PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceLHEIO PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceLHEIO PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceLHEIO PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceLHEIO PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceLHEIO PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceLHEIO PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceLHEIO PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceLHEIO PUBLIC /usr/include/boost/regex/)

add_library(GeneratorInterfaceLHECOMWeightProducer OBJECT 
  LHECOMWeightProducer.cc
)

target_include_directories(GeneratorInterfaceLHECOMWeightProducer PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfaceLHECOMWeightProducer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(GeneratorInterfaceLHECOMWeightProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfaceLHECOMWeightProducer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(GeneratorInterfaceLHECOMWeightProducer PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfaceLHECOMWeightProducer PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfaceLHECOMWeightProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfaceLHECOMWeightProducer PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(GeneratorInterfaceLHECOMWeightProducer PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfaceLHECOMWeightProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfaceLHECOMWeightProducer PUBLIC /usr/include/boost/regex/)

