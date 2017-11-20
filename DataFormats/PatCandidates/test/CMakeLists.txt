add_library(testDataFormatsPatCandidates OBJECT 
  testPackedCandidate.cc
  testPackedGenParticle.cc
  testMiniFloat.cpp
  testlogintpack.cpp
  testRunner.cpp
)

target_include_directories(testDataFormatsPatCandidates PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDataFormatsPatCandidates PUBLIC /usr/include/root/)
target_include_directories(testDataFormatsPatCandidates PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDataFormatsPatCandidates PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDataFormatsPatCandidates PUBLIC /usr/include/boost/serialization/)
target_include_directories(testDataFormatsPatCandidates PUBLIC /usr/include/boost/)
target_include_directories(testDataFormatsPatCandidates PUBLIC /usr/include/boost/regex/)

add_library(testKinResolutions OBJECT 
  testKinParametrizations.cc
  testKinResolutions.cc
  testRunner.cpp
)

target_include_directories(testKinResolutions PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testKinResolutions PUBLIC /usr/include/root/)
target_include_directories(testKinResolutions PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testKinResolutions PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testKinResolutions PUBLIC /usr/include/boost/serialization/)
target_include_directories(testKinResolutions PUBLIC /usr/include/boost/)
target_include_directories(testKinResolutions PUBLIC /usr/include/boost/regex/)

