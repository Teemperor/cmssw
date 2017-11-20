add_library(EvtGenInterface OBJECT 
  EvtGenUserModels/EvtSLBaryonAmp.cpp
  EvtGenUserModels/EvtLb2plnuLCSR.cpp
  EvtGenUserModels/EvtModelUserReg.cpp
  EvtGenUserModels/EvtLb2plnuLCSRFF.cpp
  EvtGen/EvtGenInterface.cc
  myEvtRandomEngine.cc
)

target_include_directories(EvtGenInterface PUBLIC /usr/include/boost/python/)
target_include_directories(EvtGenInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EvtGenInterface PUBLIC /usr/include/python2.7/)
target_include_directories(EvtGenInterface PUBLIC /usr/include/root/)
target_include_directories(EvtGenInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EvtGenInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EvtGenInterface PUBLIC /usr/include/boost/)
target_include_directories(EvtGenInterface PUBLIC /usr/include/boost/regex/)
target_include_directories(EvtGenInterface PUBLIC /usr/include/Pythia8/)

add_library(GenDataCardFileWriter OBJECT 
  DataCardFileWriter.cc
)

target_include_directories(GenDataCardFileWriter PUBLIC /usr/include/boost/python/)
target_include_directories(GenDataCardFileWriter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GenDataCardFileWriter PUBLIC /usr/include/python2.7/)
target_include_directories(GenDataCardFileWriter PUBLIC /usr/include/root/)
target_include_directories(GenDataCardFileWriter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GenDataCardFileWriter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GenDataCardFileWriter PUBLIC /usr/include/boost/)
target_include_directories(GenDataCardFileWriter PUBLIC /usr/include/boost/regex/)

