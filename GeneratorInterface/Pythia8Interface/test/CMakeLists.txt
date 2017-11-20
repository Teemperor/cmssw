add_library(AnalyserHepMC OBJECT 
  analyserhepmc/LeptonAnalyserHepMC.cc
)

target_include_directories(AnalyserHepMC PUBLIC /usr/include/boost/iostreams/)
target_include_directories(AnalyserHepMC PUBLIC /usr/include/python2.7/)
target_include_directories(AnalyserHepMC PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(AnalyserHepMC PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AnalyserHepMC PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(AnalyserHepMC PUBLIC /usr/include/boost/serialization/)
target_include_directories(AnalyserHepMC PUBLIC /usr/include/boost/)
target_include_directories(AnalyserHepMC PUBLIC /usr/include/boost/python/)
target_include_directories(AnalyserHepMC PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AnalyserHepMC PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(AnalyserHepMC PUBLIC /usr/include/root/)
target_include_directories(AnalyserHepMC PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AnalyserHepMC PUBLIC /usr/include/boost/regex/)
target_include_directories(AnalyserHepMC PUBLIC /usr/include/Pythia8/)

add_library(ZJetsTestAnalyzer OBJECT 
  ZJetsAnalyzer.cc
  analyserhepmc/LeptonAnalyserHepMC.cc
  analyserhepmc/JetInputHepMC.cc
)

target_include_directories(ZJetsTestAnalyzer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ZJetsTestAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(ZJetsTestAnalyzer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ZJetsTestAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ZJetsTestAnalyzer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ZJetsTestAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(ZJetsTestAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(ZJetsTestAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(ZJetsTestAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ZJetsTestAnalyzer PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(ZJetsTestAnalyzer PUBLIC /usr/include/root/)
target_include_directories(ZJetsTestAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ZJetsTestAnalyzer PUBLIC /usr/include/boost/regex/)
target_include_directories(ZJetsTestAnalyzer PUBLIC /usr/include/Pythia8/)

