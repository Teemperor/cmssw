add_library(EgammaTowerIso_t OBJECT 
  EgammaTowerIso_t.cpp
)

target_include_directories(EgammaTowerIso_t PUBLIC /usr/include/boost/python/)
target_include_directories(EgammaTowerIso_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EgammaTowerIso_t PUBLIC /usr/include/python2.7/)
target_include_directories(EgammaTowerIso_t PUBLIC /usr/include/root/)
target_include_directories(EgammaTowerIso_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EgammaTowerIso_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EgammaTowerIso_t PUBLIC /usr/include/boost/serialization/)
target_include_directories(EgammaTowerIso_t PUBLIC /usr/include/boost/)
target_include_directories(EgammaTowerIso_t PUBLIC /usr/include/eigen3/)
target_include_directories(EgammaTowerIso_t PUBLIC /usr/include/boost/regex/)

add_library(TestEgammaTowerIso OBJECT 
  TestEgammaTowerIso.cc
)

target_include_directories(TestEgammaTowerIso PUBLIC /usr/include/boost/python/)
target_include_directories(TestEgammaTowerIso PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TestEgammaTowerIso PUBLIC /usr/include/python2.7/)
target_include_directories(TestEgammaTowerIso PUBLIC /usr/include/root/)
target_include_directories(TestEgammaTowerIso PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TestEgammaTowerIso PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TestEgammaTowerIso PUBLIC /usr/include/boost/serialization/)
target_include_directories(TestEgammaTowerIso PUBLIC /usr/include/boost/)
target_include_directories(TestEgammaTowerIso PUBLIC /usr/include/eigen3/)
target_include_directories(TestEgammaTowerIso PUBLIC /usr/include/boost/regex/)

