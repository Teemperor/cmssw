add_library(CalibCalorimetryHcalTPGAlgos OBJECT 
  src/XMLProcessor.cc
  src/HcalEmap.cc
  src/HcaluLUTTPGCoder.cc
  src/XMLDOMBlock.cc
  src/LutXml.cc
)

target_include_directories(CalibCalorimetryHcalTPGAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(CalibCalorimetryHcalTPGAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CalibCalorimetryHcalTPGAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(CalibCalorimetryHcalTPGAlgos PUBLIC /usr/include/root/)
target_include_directories(CalibCalorimetryHcalTPGAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CalibCalorimetryHcalTPGAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(CalibCalorimetryHcalTPGAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CalibCalorimetryHcalTPGAlgos PUBLIC /usr/include/boost/)
target_include_directories(CalibCalorimetryHcalTPGAlgos PUBLIC /usr/include/boost/regex/)

