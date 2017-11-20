add_library(RecoBTagSecondaryVertexProducer OBJECT 
  TemplatedSecondaryVertexProducer.cc
  BVertexFilter.cc
  BtoCharmDecayVertexMerger.cc
  BoostedDoubleSVProducer.cc
)

target_include_directories(RecoBTagSecondaryVertexProducer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoBTagSecondaryVertexProducer PUBLIC /usr/include/python2.7/)
target_include_directories(RecoBTagSecondaryVertexProducer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoBTagSecondaryVertexProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoBTagSecondaryVertexProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoBTagSecondaryVertexProducer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoBTagSecondaryVertexProducer PUBLIC /usr/include/boost/)
target_include_directories(RecoBTagSecondaryVertexProducer PUBLIC /usr/include/boost/python/)
target_include_directories(RecoBTagSecondaryVertexProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoBTagSecondaryVertexProducer PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(RecoBTagSecondaryVertexProducer PUBLIC /usr/include/root/)
target_include_directories(RecoBTagSecondaryVertexProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoBTagSecondaryVertexProducer PUBLIC /usr/include/boost/regex/)

add_library(RecoBTagSecondaryVertexESProducers OBJECT 
  JetTagESProducers.cc
)

target_include_directories(RecoBTagSecondaryVertexESProducers PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoBTagSecondaryVertexESProducers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoBTagSecondaryVertexESProducers PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoBTagSecondaryVertexESProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoBTagSecondaryVertexESProducers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoBTagSecondaryVertexESProducers PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoBTagSecondaryVertexESProducers PUBLIC /usr/include/boost/)
target_include_directories(RecoBTagSecondaryVertexESProducers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoBTagSecondaryVertexESProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoBTagSecondaryVertexESProducers PUBLIC /usr/include/root/)
target_include_directories(RecoBTagSecondaryVertexESProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoBTagSecondaryVertexESProducers PUBLIC /usr/include/boost/regex/)

