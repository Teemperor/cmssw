add_library(CondFormatsPhysicsToolsObjectsTest OBJECT 
  SiStripDeDx2DReader.cc
  SiStripDeDx3DBuilder.cc
  SiStripDeDx3DReader.cc
  SiStripDeDxMipBuilder.cc
  SiStripDeDx2DBuilder.cc
  TGraphWriter.cc
  TFormulaWriter.cc
  SiStripDeDxMipReader.cc
)

target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /usr/include/root/)
target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondFormatsPhysicsToolsObjectsTest PUBLIC /usr/include/boost/regex/)

add_library(testSerializationPhysicsToolsObjects OBJECT 
  testSerializationPhysicsToolsObjects.cpp
)

target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /usr/include/python2.7/)
target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /usr/include/boost/)
target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /usr/include/boost/python/)
target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /usr/include/root/)
target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testSerializationPhysicsToolsObjects PUBLIC /usr/include/boost/regex/)

