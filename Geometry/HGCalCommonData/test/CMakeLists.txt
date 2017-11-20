add_library(testHGCGeometry OBJECT 
  HGCGeometryTester.cc
)

target_include_directories(testHGCGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(testHGCGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testHGCGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(testHGCGeometry PUBLIC /usr/include/root/)
target_include_directories(testHGCGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testHGCGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testHGCGeometry PUBLIC /usr/include/boost/)
target_include_directories(testHGCGeometry PUBLIC /usr/include/boost/regex/)

add_library(testHGCalNumbering OBJECT 
  HGCalNumberingTester.cc
)

target_include_directories(testHGCalNumbering PUBLIC /usr/include/boost/python/)
target_include_directories(testHGCalNumbering PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testHGCalNumbering PUBLIC /usr/include/python2.7/)
target_include_directories(testHGCalNumbering PUBLIC /usr/include/root/)
target_include_directories(testHGCalNumbering PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testHGCalNumbering PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testHGCalNumbering PUBLIC /usr/include/boost/)
target_include_directories(testHGCalNumbering PUBLIC /usr/include/boost/regex/)

add_library(testFastTimeNumbering OBJECT 
  FastTimeNumberingTester.cc
)

target_include_directories(testFastTimeNumbering PUBLIC /usr/include/boost/python/)
target_include_directories(testFastTimeNumbering PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testFastTimeNumbering PUBLIC /usr/include/python2.7/)
target_include_directories(testFastTimeNumbering PUBLIC /usr/include/root/)
target_include_directories(testFastTimeNumbering PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testFastTimeNumbering PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testFastTimeNumbering PUBLIC /usr/include/boost/)
target_include_directories(testFastTimeNumbering PUBLIC /usr/include/boost/regex/)

add_library(HGCalParametersAnalyzer OBJECT 
  HGCalParametersAnalyzer.cc
)

target_include_directories(HGCalParametersAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(HGCalParametersAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HGCalParametersAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(HGCalParametersAnalyzer PUBLIC /usr/include/root/)
target_include_directories(HGCalParametersAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HGCalParametersAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HGCalParametersAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(HGCalParametersAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(HGCalParametersAnalyzer PUBLIC /usr/include/boost/regex/)

