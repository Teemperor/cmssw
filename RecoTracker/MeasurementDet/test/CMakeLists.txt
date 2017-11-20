add_library(RecoTrackerMeasurementDetTest OBJECT 
  MeasurementTrackerUpdator.cc
)

target_include_directories(RecoTrackerMeasurementDetTest PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerMeasurementDetTest PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerMeasurementDetTest PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerMeasurementDetTest PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerMeasurementDetTest PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerMeasurementDetTest PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerMeasurementDetTest PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerMeasurementDetTest PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerMeasurementDetTest PUBLIC /usr/include/boost/regex/)

add_library(MeasurementDetSize OBJECT 
  MeasurementDetSize.cpp
)

target_include_directories(MeasurementDetSize PUBLIC /usr/include/boost/python/)
target_include_directories(MeasurementDetSize PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MeasurementDetSize PUBLIC /usr/include/python2.7/)
target_include_directories(MeasurementDetSize PUBLIC /usr/include/root/)
target_include_directories(MeasurementDetSize PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MeasurementDetSize PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MeasurementDetSize PUBLIC /usr/include/boost/serialization/)
target_include_directories(MeasurementDetSize PUBLIC /usr/include/boost/)
target_include_directories(MeasurementDetSize PUBLIC /usr/include/boost/regex/)

