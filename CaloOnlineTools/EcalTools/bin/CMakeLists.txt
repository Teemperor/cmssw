add_library(TPGTreeReader OBJECT 
  TPGTreeReader.cpp
)

target_include_directories(TPGTreeReader PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TPGTreeReader PUBLIC /usr/include/root/)

