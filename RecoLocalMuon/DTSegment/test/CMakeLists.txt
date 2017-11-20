add_library(DTAnalyzerDetailed OBJECT 
  DTSegmentResidual.cc
  DTMeanTimer.cc
  DTAnalyzerDetailed.cc
)

target_include_directories(DTAnalyzerDetailed PUBLIC /usr/include/boost/python/)
target_include_directories(DTAnalyzerDetailed PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DTAnalyzerDetailed PUBLIC /usr/include/python2.7/)
target_include_directories(DTAnalyzerDetailed PUBLIC /usr/include/root/)
target_include_directories(DTAnalyzerDetailed PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DTAnalyzerDetailed PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DTAnalyzerDetailed PUBLIC /usr/include/boost/serialization/)
target_include_directories(DTAnalyzerDetailed PUBLIC /usr/include/boost/)
target_include_directories(DTAnalyzerDetailed PUBLIC /usr/include/boost/regex/)

add_library(DTSegAnalyzer OBJECT 
  DTSegmentResidual.cc
  DTMeanTimer.cc
  DTSegAnalyzer.cc
)

target_include_directories(DTSegAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(DTSegAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DTSegAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(DTSegAnalyzer PUBLIC /usr/include/root/)
target_include_directories(DTSegAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DTSegAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DTSegAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(DTSegAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(DTSegAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(DTEffAnalyzer OBJECT 
  DTEffAnalyzer.cc
)

target_include_directories(DTEffAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(DTEffAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DTEffAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(DTEffAnalyzer PUBLIC /usr/include/root/)
target_include_directories(DTEffAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DTEffAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DTEffAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(DTEffAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(DTEffAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(DTClusAnalyzer OBJECT 
  DTClusAnalyzer.cc
)

target_include_directories(DTClusAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(DTClusAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DTClusAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(DTClusAnalyzer PUBLIC /usr/include/root/)
target_include_directories(DTClusAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DTClusAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DTClusAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(DTClusAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(DTClusAnalyzer PUBLIC /usr/include/boost/regex/)

add_library(STAnalyzer OBJECT 
  STAnalyzer.cc
)

target_include_directories(STAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(STAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(STAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(STAnalyzer PUBLIC /usr/include/root/)
target_include_directories(STAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(STAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(STAnalyzer PUBLIC /usr/include/boost/serialization/)
target_include_directories(STAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(STAnalyzer PUBLIC /usr/include/boost/regex/)

