add_library(ValidationCheckOverlap OBJECT 
  src/module.cc
  src/CheckOverlap.cc
)

target_include_directories(ValidationCheckOverlap PUBLIC /usr/include/boost/python/)
target_include_directories(ValidationCheckOverlap PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ValidationCheckOverlap PUBLIC /usr/include/python2.7/)
target_include_directories(ValidationCheckOverlap PUBLIC /usr/include/root/)
target_include_directories(ValidationCheckOverlap PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(ValidationCheckOverlap PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ValidationCheckOverlap PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ValidationCheckOverlap PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(ValidationCheckOverlap PUBLIC /usr/include/boost/)
target_include_directories(ValidationCheckOverlap PUBLIC /usr/include/Geant4/)
target_include_directories(ValidationCheckOverlap PUBLIC /usr/include/boost/regex/)

