add_library(KullbackLeiblerDistance_t OBJECT 
  KullbackLeiblerDistance_t.cpp
)

target_include_directories(KullbackLeiblerDistance_t PUBLIC /usr/include/boost/python/)
target_include_directories(KullbackLeiblerDistance_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(KullbackLeiblerDistance_t PUBLIC /usr/include/python2.7/)
target_include_directories(KullbackLeiblerDistance_t PUBLIC /usr/include/root/)
target_include_directories(KullbackLeiblerDistance_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(KullbackLeiblerDistance_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(KullbackLeiblerDistance_t PUBLIC /usr/include/boost/)
target_include_directories(KullbackLeiblerDistance_t PUBLIC /usr/include/boost/regex/)

add_library(traceSymMult_t OBJECT 
  traceSymMult_t.cpp
)

target_include_directories(traceSymMult_t PUBLIC /usr/include/boost/python/)
target_include_directories(traceSymMult_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(traceSymMult_t PUBLIC /usr/include/python2.7/)
target_include_directories(traceSymMult_t PUBLIC /usr/include/root/)
target_include_directories(traceSymMult_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(traceSymMult_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(traceSymMult_t PUBLIC /usr/include/boost/)
target_include_directories(traceSymMult_t PUBLIC /usr/include/boost/regex/)

add_library(Gauss_t OBJECT 
  Gauss_t.cpp
)

target_include_directories(Gauss_t PUBLIC /usr/include/boost/python/)
target_include_directories(Gauss_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Gauss_t PUBLIC /usr/include/python2.7/)
target_include_directories(Gauss_t PUBLIC /usr/include/root/)
target_include_directories(Gauss_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Gauss_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Gauss_t PUBLIC /usr/include/boost/)
target_include_directories(Gauss_t PUBLIC /usr/include/boost/regex/)

