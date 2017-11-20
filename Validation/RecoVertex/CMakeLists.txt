add_subdirectory(bin)
add_library(ValidationRecoVertex OBJECT 
  src/SealModule.cc
  src/MCVerticesAnalyzer.cc
  src/VertexWeighter.cc
  src/V0Validator.cc
  src/MCVerticesWeight.cc
  src/BeamSpotAnalyzer.cc
  src/BSvsPVAnalyzer.cc
  src/BSvsPVHistogramMaker.cc
  src/TrackParameterAnalyzer.cc
  src/VertexHistogramMaker.cc
  src/PrimaryVertexAnalyzer4PUSlimmed.cc
  src/MCvsRecoVerticesAnalyzer.cc
  src/AnotherPrimaryVertexAnalyzer.cc
  src/BeamSpotHistogramMaker.cc
)

target_include_directories(ValidationRecoVertex PUBLIC /usr/include/boost/iostreams/)
target_include_directories(ValidationRecoVertex PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationRecoVertex PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ValidationRecoVertex PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(ValidationRecoVertex PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationRecoVertex PUBLIC /usr/include/boost/serialization/)
target_include_directories(ValidationRecoVertex PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ValidationRecoVertex PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(ValidationRecoVertex PUBLIC /usr/include/boost/)
target_include_directories(ValidationRecoVertex PUBLIC /usr/include/eigen3/)
target_include_directories(ValidationRecoVertex PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationRecoVertex PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationRecoVertex PUBLIC /usr/include/root/)
target_include_directories(ValidationRecoVertex PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(ValidationRecoVertex PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationRecoVertex PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(ValidationRecoVertex PUBLIC /usr/include/boost/regex/)

