add_library(IsolationExample OBJECT 
  IsolationExample.cc
)

target_include_directories(IsolationExample PUBLIC /usr/include/boost/python/)
target_include_directories(IsolationExample PUBLIC /usr/include/boost/filesystem/)
target_include_directories(IsolationExample PUBLIC /usr/include/python2.7/)
target_include_directories(IsolationExample PUBLIC /usr/include/root/)
target_include_directories(IsolationExample PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(IsolationExample PUBLIC /home/teemperor/cms/md5/)
target_include_directories(IsolationExample PUBLIC /usr/include/boost/)
target_include_directories(IsolationExample PUBLIC /usr/include/boost/regex/)

add_library(MuIsoDepositAnalyzer OBJECT 
  MuIsoDepositAnalyzer.cc
)

target_include_directories(MuIsoDepositAnalyzer PUBLIC /usr/include/boost/python/)
target_include_directories(MuIsoDepositAnalyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MuIsoDepositAnalyzer PUBLIC /usr/include/python2.7/)
target_include_directories(MuIsoDepositAnalyzer PUBLIC /usr/include/root/)
target_include_directories(MuIsoDepositAnalyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MuIsoDepositAnalyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MuIsoDepositAnalyzer PUBLIC /usr/include/boost/)
target_include_directories(MuIsoDepositAnalyzer PUBLIC /usr/include/boost/regex/)

