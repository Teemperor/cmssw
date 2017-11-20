add_library(testDriftTimeParam OBJECT 
  testDriftTimeParam.cpp
)

target_include_directories(testDriftTimeParam PUBLIC /usr/include/boost/python/)
target_include_directories(testDriftTimeParam PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDriftTimeParam PUBLIC /usr/include/python2.7/)
target_include_directories(testDriftTimeParam PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testDriftTimeParam PUBLIC /usr/include/root/)
target_include_directories(testDriftTimeParam PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDriftTimeParam PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDriftTimeParam PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testDriftTimeParam PUBLIC /usr/include/boost/)
target_include_directories(testDriftTimeParam PUBLIC /usr/include/boost/regex/)

add_library(testSimMuonDTDigitizer OBJECT 
  stubs/Utils.cc
  stubs/oldParametrization.cc
  stubs/computeRange.cc
  stubs/DTBNormParam.cc
  stubs/DTAngleParam.cc
  stubs/DTDriftTimeParametrization.cc
  stubs/DTTime2DriftParametrization.cc
)

target_include_directories(testSimMuonDTDigitizer PUBLIC /usr/include/boost/python/)
target_include_directories(testSimMuonDTDigitizer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSimMuonDTDigitizer PUBLIC /usr/include/python2.7/)
target_include_directories(testSimMuonDTDigitizer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testSimMuonDTDigitizer PUBLIC /usr/include/root/)
target_include_directories(testSimMuonDTDigitizer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSimMuonDTDigitizer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSimMuonDTDigitizer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testSimMuonDTDigitizer PUBLIC /usr/include/boost/)
target_include_directories(testSimMuonDTDigitizer PUBLIC /usr/include/boost/regex/)

add_library(testDTDigiAnalyzer OBJECT 
  DTDigiAnalyzer.cc
)

target_include_directories(testDTDigiAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(testDTDigiAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testDTDigiAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(testDTDigiAnalyzer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testDTDigiAnalyzer PUBLIC /usr/include/root/)
target_include_directories(testDTDigiAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testDTDigiAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testDTDigiAnalyzer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testDTDigiAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(testDTDigiAnalyzer PUBLIC /usr/include/boost/regex/)

