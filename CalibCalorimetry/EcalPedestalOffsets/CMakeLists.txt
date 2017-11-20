add_library(CalibCalorimetryEcalPedestalOffsets OBJECT 
  src/SealModule.cc
  src/EcalPedOffset.cc
  src/TSinglePedEntry.cc
  src/testChannel.cc
  src/TPedValues.cc
)

target_include_directories(CalibCalorimetryEcalPedestalOffsets PUBLIC /usr/include/boost/python/)
target_include_directories(CalibCalorimetryEcalPedestalOffsets PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibCalorimetryEcalPedestalOffsets PUBLIC /usr/include/python2.7/)
target_include_directories(CalibCalorimetryEcalPedestalOffsets PUBLIC /usr/include/root/)
target_include_directories(CalibCalorimetryEcalPedestalOffsets PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibCalorimetryEcalPedestalOffsets PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibCalorimetryEcalPedestalOffsets PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibCalorimetryEcalPedestalOffsets PUBLIC /usr/include/boost/)
target_include_directories(CalibCalorimetryEcalPedestalOffsets PUBLIC /usr/include/eigen3/)
target_include_directories(CalibCalorimetryEcalPedestalOffsets PUBLIC /usr/include/boost/regex/)

