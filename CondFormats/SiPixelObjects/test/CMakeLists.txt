add_library(SiPixelObjectsTest OBJECT 
  SiPixelFedCablingMapTestWriter.cc
  SiPixelTestSummary.cc
  SiPixelFedCablingMapAnalyzer.cc
)

target_include_directories(SiPixelObjectsTest PUBLIC /usr/include/python2.7/)
target_include_directories(SiPixelObjectsTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SiPixelObjectsTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(SiPixelObjectsTest PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(SiPixelObjectsTest PUBLIC /usr/include/boost/)
target_include_directories(SiPixelObjectsTest PUBLIC /usr/include/boost/python/)
target_include_directories(SiPixelObjectsTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SiPixelObjectsTest PUBLIC /usr/include/root/)
target_include_directories(SiPixelObjectsTest PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(SiPixelObjectsTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SiPixelObjectsTest PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(SiPixelObjectsTest PUBLIC /usr/include/boost/regex/)

add_library(testSerializationSiPixelObjects OBJECT 
  testSerializationSiPixelObjects.cpp
)

target_include_directories(testSerializationSiPixelObjects PUBLIC /usr/include/python2.7/)
target_include_directories(testSerializationSiPixelObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSerializationSiPixelObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(testSerializationSiPixelObjects PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testSerializationSiPixelObjects PUBLIC /usr/include/boost/)
target_include_directories(testSerializationSiPixelObjects PUBLIC /usr/include/boost/python/)
target_include_directories(testSerializationSiPixelObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSerializationSiPixelObjects PUBLIC /usr/include/root/)
target_include_directories(testSerializationSiPixelObjects PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testSerializationSiPixelObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSerializationSiPixelObjects PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testSerializationSiPixelObjects PUBLIC /usr/include/boost/regex/)

