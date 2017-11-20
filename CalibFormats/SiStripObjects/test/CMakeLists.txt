add_library(testCalibFormatsSiStripObjectsPlugins OBJECT 
  plugins/module.cc
  plugins/testSiStripHashedDetId.cc
)

target_include_directories(testCalibFormatsSiStripObjectsPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(testCalibFormatsSiStripObjectsPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testCalibFormatsSiStripObjectsPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(testCalibFormatsSiStripObjectsPlugins PUBLIC /usr/include/root/)
target_include_directories(testCalibFormatsSiStripObjectsPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testCalibFormatsSiStripObjectsPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testCalibFormatsSiStripObjectsPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(testCalibFormatsSiStripObjectsPlugins PUBLIC /usr/include/boost/)
target_include_directories(testCalibFormatsSiStripObjectsPlugins PUBLIC /usr/include/boost/regex/)

add_library(TestCalibFormatsSiStripObjects OBJECT 
  UnitTests/TestSiStripGain.cc
)

target_include_directories(TestCalibFormatsSiStripObjects PUBLIC /usr/include/boost/python/)
target_include_directories(TestCalibFormatsSiStripObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestCalibFormatsSiStripObjects PUBLIC /usr/include/python2.7/)
target_include_directories(TestCalibFormatsSiStripObjects PUBLIC /usr/include/root/)
target_include_directories(TestCalibFormatsSiStripObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestCalibFormatsSiStripObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestCalibFormatsSiStripObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(TestCalibFormatsSiStripObjects PUBLIC /usr/include/boost/)
target_include_directories(TestCalibFormatsSiStripObjects PUBLIC /usr/include/boost/regex/)

