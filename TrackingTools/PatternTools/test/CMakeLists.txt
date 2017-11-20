add_library(ClosestApproachInRPhi_t OBJECT 
  ClosestApproachInRPhi_t.cpp
)

target_include_directories(ClosestApproachInRPhi_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(ClosestApproachInRPhi_t PUBLIC /usr/include/root/)
target_include_directories(ClosestApproachInRPhi_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(ClosestApproachInRPhi_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(ClosestApproachInRPhi_t PUBLIC /usr/include/boost/)
target_include_directories(ClosestApproachInRPhi_t PUBLIC /usr/include/boost/regex/)

add_library(TrajSizes_t OBJECT 
  TrajSizes_t.cpp
)

target_include_directories(TrajSizes_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrajSizes_t PUBLIC /usr/include/root/)
target_include_directories(TrajSizes_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrajSizes_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrajSizes_t PUBLIC /usr/include/boost/)
target_include_directories(TrajSizes_t PUBLIC /usr/include/boost/regex/)

add_library(bqueue_t OBJECT 
  bqueue_t.cpp
)

target_include_directories(bqueue_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(bqueue_t PUBLIC /usr/include/root/)
target_include_directories(bqueue_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(bqueue_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(bqueue_t PUBLIC /usr/include/boost/)
target_include_directories(bqueue_t PUBLIC /usr/include/boost/regex/)

