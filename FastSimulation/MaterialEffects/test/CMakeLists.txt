add_library(testMaterialEffects OBJECT 
  testMaterialEffects.cc
)

target_include_directories(testMaterialEffects PUBLIC /usr/include/boost/python/)
target_include_directories(testMaterialEffects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testMaterialEffects PUBLIC /usr/include/python2.7/)
target_include_directories(testMaterialEffects PUBLIC /usr/include/root/)
target_include_directories(testMaterialEffects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testMaterialEffects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testMaterialEffects PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(testMaterialEffects PUBLIC /usr/include/boost/)
target_include_directories(testMaterialEffects PUBLIC /usr/include/Geant4/)
target_include_directories(testMaterialEffects PUBLIC /usr/include/boost/regex/)

add_library(testNuclearInteractions OBJECT 
  testNuclearInteractions.cc
)

target_include_directories(testNuclearInteractions PUBLIC /usr/include/boost/python/)
target_include_directories(testNuclearInteractions PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testNuclearInteractions PUBLIC /usr/include/python2.7/)
target_include_directories(testNuclearInteractions PUBLIC /usr/include/root/)
target_include_directories(testNuclearInteractions PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testNuclearInteractions PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testNuclearInteractions PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(testNuclearInteractions PUBLIC /usr/include/boost/)
target_include_directories(testNuclearInteractions PUBLIC /usr/include/Geant4/)
target_include_directories(testNuclearInteractions PUBLIC /usr/include/boost/regex/)

