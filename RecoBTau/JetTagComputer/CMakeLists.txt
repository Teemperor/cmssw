add_subdirectory(plugins)
add_library(RecoBTauJetTagComputer OBJECT 
  src/GenericMVAJetTagComputer.cc
  src/GenericMVAComputer.cc
  src/GenericMVAComputerCache.cc
  src/JetTagComputerRecord.cc
  src/JetTagComputer.cc
  src/TagInfoMVACategorySelector.cc
)

target_include_directories(RecoBTauJetTagComputer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoBTauJetTagComputer PUBLIC /usr/include/python2.7/)
target_include_directories(RecoBTauJetTagComputer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoBTauJetTagComputer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoBTauJetTagComputer PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoBTauJetTagComputer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoBTauJetTagComputer PUBLIC /usr/include/boost/)
target_include_directories(RecoBTauJetTagComputer PUBLIC /usr/include/boost/python/)
target_include_directories(RecoBTauJetTagComputer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoBTauJetTagComputer PUBLIC /usr/include/root/)
target_include_directories(RecoBTauJetTagComputer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoBTauJetTagComputer PUBLIC /usr/include/boost/regex/)

