add_library(Phase2DigiValid OBJECT 
  Phase2TrackerValidateDigi.cc
)

target_include_directories(Phase2DigiValid PUBLIC /usr/include/boost/python/)
target_include_directories(Phase2DigiValid PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Phase2DigiValid PUBLIC /usr/include/python2.7/)
target_include_directories(Phase2DigiValid PUBLIC /usr/include/root/)
target_include_directories(Phase2DigiValid PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Phase2DigiValid PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Phase2DigiValid PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(Phase2DigiValid PUBLIC /usr/include/boost/serialization/)
target_include_directories(Phase2DigiValid PUBLIC /usr/include/boost/)
target_include_directories(Phase2DigiValid PUBLIC /usr/include/boost/regex/)

add_library(SiPhase2DigiMon OBJECT 
  Phase2TrackerMonitorDigi.cc
)

target_include_directories(SiPhase2DigiMon PUBLIC /usr/include/boost/python/)
target_include_directories(SiPhase2DigiMon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SiPhase2DigiMon PUBLIC /usr/include/python2.7/)
target_include_directories(SiPhase2DigiMon PUBLIC /usr/include/root/)
target_include_directories(SiPhase2DigiMon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SiPhase2DigiMon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SiPhase2DigiMon PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(SiPhase2DigiMon PUBLIC /usr/include/boost/serialization/)
target_include_directories(SiPhase2DigiMon PUBLIC /usr/include/boost/)
target_include_directories(SiPhase2DigiMon PUBLIC /usr/include/boost/regex/)

