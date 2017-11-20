add_library(H4muExampleAnalyzer OBJECT 
  H4muAnalyzer.cc
)

target_include_directories(H4muExampleAnalyzer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(H4muExampleAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(H4muExampleAnalyzer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(H4muExampleAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(H4muExampleAnalyzer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(H4muExampleAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(H4muExampleAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(H4muExampleAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(H4muExampleAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(H4muExampleAnalyzer PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(H4muExampleAnalyzer PUBLIC /usr/include/root/)
target_include_directories(H4muExampleAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(H4muExampleAnalyzer PUBLIC /usr/include/boost/regex/)

