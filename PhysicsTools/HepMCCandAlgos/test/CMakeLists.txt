add_library(DummyHepMCAnalyzer OBJECT 
  DummyHepMCAnalyzer.cc
)

target_include_directories(DummyHepMCAnalyzer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DummyHepMCAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(DummyHepMCAnalyzer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DummyHepMCAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DummyHepMCAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(DummyHepMCAnalyzer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DummyHepMCAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(DummyHepMCAnalyzer PUBLIC /usr/include/eigen3/)
target_include_directories(DummyHepMCAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(DummyHepMCAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DummyHepMCAnalyzer PUBLIC /usr/include/root/)
target_include_directories(DummyHepMCAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DummyHepMCAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(HZZ4muTestAnalyzer OBJECT 
  HZZ4muAnalyzer.cc
)

target_include_directories(HZZ4muTestAnalyzer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(HZZ4muTestAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(HZZ4muTestAnalyzer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HZZ4muTestAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HZZ4muTestAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(HZZ4muTestAnalyzer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HZZ4muTestAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(HZZ4muTestAnalyzer PUBLIC /usr/include/eigen3/)
target_include_directories(HZZ4muTestAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(HZZ4muTestAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HZZ4muTestAnalyzer PUBLIC /usr/include/root/)
target_include_directories(HZZ4muTestAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HZZ4muTestAnalyzer PUBLIC /usr/include/boost/regex/)

