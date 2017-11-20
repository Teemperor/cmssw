add_library(testTkHistoMap OBJECT 
  plugins/testTkHistoMap.cc
)

target_include_directories(testTkHistoMap PUBLIC /usr/include/boost/python/)
target_include_directories(testTkHistoMap PUBLIC /usr/include/boost/filesystem/)
target_include_directories(testTkHistoMap PUBLIC /usr/include/python2.7/)
target_include_directories(testTkHistoMap PUBLIC /usr/include/root/)
target_include_directories(testTkHistoMap PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(testTkHistoMap PUBLIC /home/teemperor/cms/md5/)
target_include_directories(testTkHistoMap PUBLIC /usr/include/boost/serialization/)
target_include_directories(testTkHistoMap PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(testTkHistoMap PUBLIC /usr/include/boost/)
target_include_directories(testTkHistoMap PUBLIC /usr/include/boost/regex/)

add_library(Test_SiStrip_HistId OBJECT 
  plugins/Test_SiStrip_HistId.cc
)

target_include_directories(Test_SiStrip_HistId PUBLIC /usr/include/boost/python/)
target_include_directories(Test_SiStrip_HistId PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Test_SiStrip_HistId PUBLIC /usr/include/python2.7/)
target_include_directories(Test_SiStrip_HistId PUBLIC /usr/include/root/)
target_include_directories(Test_SiStrip_HistId PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Test_SiStrip_HistId PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Test_SiStrip_HistId PUBLIC /usr/include/boost/serialization/)
target_include_directories(Test_SiStrip_HistId PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(Test_SiStrip_HistId PUBLIC /usr/include/boost/)
target_include_directories(Test_SiStrip_HistId PUBLIC /usr/include/boost/regex/)

