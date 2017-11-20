add_library(RecoBTagBTagTools OBJECT 
  src/SignedDecayLength3D.cc
  src/SignedTransverseImpactParameter.cc
  src/SignedImpactParameter3D.cc
)

target_include_directories(RecoBTagBTagTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoBTagBTagTools PUBLIC /usr/include/root/)
target_include_directories(RecoBTagBTagTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoBTagBTagTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoBTagBTagTools PUBLIC /usr/include/boost/)
target_include_directories(RecoBTagBTagTools PUBLIC /usr/include/boost/regex/)

