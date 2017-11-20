add_library(FastSimulationCTPPSFastGeometry OBJECT 
  src/CTPPSToFDetector.cc
  src/CTPPSTrkDetector.cc
)

target_include_directories(FastSimulationCTPPSFastGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationCTPPSFastGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationCTPPSFastGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationCTPPSFastGeometry PUBLIC /usr/include/root/)
target_include_directories(FastSimulationCTPPSFastGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationCTPPSFastGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationCTPPSFastGeometry PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationCTPPSFastGeometry PUBLIC /usr/include/boost/regex/)

