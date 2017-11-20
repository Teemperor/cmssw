add_library(testWriteMVAComputerCondDB OBJECT 
  testWriteMVAComputerCondDB.cc
)

target_include_directories(testWriteMVAComputerCondDB PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testWriteMVAComputerCondDB PUBLIC /usr/include/python2.7/)
target_include_directories(testWriteMVAComputerCondDB PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testWriteMVAComputerCondDB PUBLIC /usr/include/boost/serialization/)
target_include_directories(testWriteMVAComputerCondDB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testWriteMVAComputerCondDB PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testWriteMVAComputerCondDB PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testWriteMVAComputerCondDB PUBLIC /usr/include/boost/)
target_include_directories(testWriteMVAComputerCondDB PUBLIC /usr/include/boost/python/)
target_include_directories(testWriteMVAComputerCondDB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testWriteMVAComputerCondDB PUBLIC /usr/include/root/)
target_include_directories(testWriteMVAComputerCondDB PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testWriteMVAComputerCondDB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testWriteMVAComputerCondDB PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testWriteMVAComputerCondDB PUBLIC /usr/include/boost/regex/)

add_library(testReadMVAComputerCondDB OBJECT 
  testReadMVAComputerCondDB.cc
)

target_include_directories(testReadMVAComputerCondDB PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testReadMVAComputerCondDB PUBLIC /usr/include/python2.7/)
target_include_directories(testReadMVAComputerCondDB PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testReadMVAComputerCondDB PUBLIC /usr/include/boost/serialization/)
target_include_directories(testReadMVAComputerCondDB PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testReadMVAComputerCondDB PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testReadMVAComputerCondDB PUBLIC /usr/include/boost/)
target_include_directories(testReadMVAComputerCondDB PUBLIC /usr/include/boost/python/)
target_include_directories(testReadMVAComputerCondDB PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testReadMVAComputerCondDB PUBLIC /usr/include/root/)
target_include_directories(testReadMVAComputerCondDB PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testReadMVAComputerCondDB PUBLIC /usr/include/boost/regex/)

add_library(testReadMVAComputerEvaluate OBJECT 
  testMVAComputerEvaluate.cc
)

target_include_directories(testReadMVAComputerEvaluate PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testReadMVAComputerEvaluate PUBLIC /usr/include/python2.7/)
target_include_directories(testReadMVAComputerEvaluate PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testReadMVAComputerEvaluate PUBLIC /usr/include/boost/serialization/)
target_include_directories(testReadMVAComputerEvaluate PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testReadMVAComputerEvaluate PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testReadMVAComputerEvaluate PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testReadMVAComputerEvaluate PUBLIC /usr/include/boost/)
target_include_directories(testReadMVAComputerEvaluate PUBLIC /usr/include/boost/python/)
target_include_directories(testReadMVAComputerEvaluate PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testReadMVAComputerEvaluate PUBLIC /usr/include/root/)
target_include_directories(testReadMVAComputerEvaluate PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testReadMVAComputerEvaluate PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testReadMVAComputerEvaluate PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testReadMVAComputerEvaluate PUBLIC /usr/include/boost/regex/)

add_library(testPhysicsToolsMVAComputer OBJECT 
  testMVAComputer.cppunit.cc
)

target_include_directories(testPhysicsToolsMVAComputer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testPhysicsToolsMVAComputer PUBLIC /usr/include/python2.7/)
target_include_directories(testPhysicsToolsMVAComputer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testPhysicsToolsMVAComputer PUBLIC /usr/include/boost/serialization/)
target_include_directories(testPhysicsToolsMVAComputer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testPhysicsToolsMVAComputer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testPhysicsToolsMVAComputer PUBLIC /usr/include/boost/)
target_include_directories(testPhysicsToolsMVAComputer PUBLIC /usr/include/boost/python/)
target_include_directories(testPhysicsToolsMVAComputer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testPhysicsToolsMVAComputer PUBLIC /usr/include/root/)
target_include_directories(testPhysicsToolsMVAComputer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testPhysicsToolsMVAComputer PUBLIC /usr/include/boost/regex/)

