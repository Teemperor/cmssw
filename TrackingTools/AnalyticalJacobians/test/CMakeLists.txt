add_library(Jacobian_t OBJECT 
  Jacobian_t.cpp
)

target_include_directories(Jacobian_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Jacobian_t PUBLIC /usr/include/root/)
target_include_directories(Jacobian_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Jacobian_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Jacobian_t PUBLIC /usr/include/boost/)
target_include_directories(Jacobian_t PUBLIC /usr/include/boost/regex/)

add_library(ErrorProp_t OBJECT 
  ErrorProp_t.cpp
)

target_include_directories(ErrorProp_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ErrorProp_t PUBLIC /usr/include/root/)
target_include_directories(ErrorProp_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ErrorProp_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ErrorProp_t PUBLIC /usr/include/boost/)
target_include_directories(ErrorProp_t PUBLIC /usr/include/boost/regex/)

add_library(ErrorPropOri_t OBJECT 
  ErrorPropOri_t.cpp
)

target_include_directories(ErrorPropOri_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ErrorPropOri_t PUBLIC /usr/include/root/)
target_include_directories(ErrorPropOri_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ErrorPropOri_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ErrorPropOri_t PUBLIC /usr/include/boost/)
target_include_directories(ErrorPropOri_t PUBLIC /usr/include/boost/regex/)

