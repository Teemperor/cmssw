add_library(testMVATrainer OBJECT 
  testMVATrainer.cpp
)

target_include_directories(testMVATrainer PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testMVATrainer PUBLIC /usr/include/python2.7/)
target_include_directories(testMVATrainer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testMVATrainer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testMVATrainer PUBLIC /usr/include/boost/serialization/)
target_include_directories(testMVATrainer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testMVATrainer PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testMVATrainer PUBLIC /usr/include/boost/)
target_include_directories(testMVATrainer PUBLIC /usr/include/boost/python/)
target_include_directories(testMVATrainer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testMVATrainer PUBLIC /usr/include/root/)
target_include_directories(testMVATrainer PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testMVATrainer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testMVATrainer PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testMVATrainer PUBLIC /usr/include/boost/regex/)

add_library(testMVATrainerLooper OBJECT 
  testMVATrainerLooper.cc
)

target_include_directories(testMVATrainerLooper PUBLIC /usr/include/boost/iostreams/)
target_include_directories(testMVATrainerLooper PUBLIC /usr/include/python2.7/)
target_include_directories(testMVATrainerLooper PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(testMVATrainerLooper PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testMVATrainerLooper PUBLIC /usr/include/boost/serialization/)
target_include_directories(testMVATrainerLooper PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(testMVATrainerLooper PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(testMVATrainerLooper PUBLIC /usr/include/boost/)
target_include_directories(testMVATrainerLooper PUBLIC /usr/include/boost/python/)
target_include_directories(testMVATrainerLooper PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testMVATrainerLooper PUBLIC /usr/include/root/)
target_include_directories(testMVATrainerLooper PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(testMVATrainerLooper PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testMVATrainerLooper PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(testMVATrainerLooper PUBLIC /usr/include/boost/regex/)

