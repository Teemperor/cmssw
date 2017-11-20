add_library(FastCircle_t OBJECT 
  FastCircle_t.cpp
)

target_include_directories(FastCircle_t PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FastCircle_t PUBLIC /usr/include/python2.7/)
target_include_directories(FastCircle_t PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FastCircle_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastCircle_t PUBLIC /usr/include/boost/serialization/)
target_include_directories(FastCircle_t PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FastCircle_t PUBLIC /usr/include/boost/)
target_include_directories(FastCircle_t PUBLIC /usr/include/eigen3/)
target_include_directories(FastCircle_t PUBLIC /usr/include/boost/python/)
target_include_directories(FastCircle_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastCircle_t PUBLIC /usr/include/root/)
target_include_directories(FastCircle_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastCircle_t PUBLIC /usr/include/boost/regex/)

add_library(FastCircleFit_t OBJECT 
  FastCircleFit_t.cpp
)

target_include_directories(FastCircleFit_t PUBLIC /usr/include/boost/iostreams/)
target_include_directories(FastCircleFit_t PUBLIC /usr/include/python2.7/)
target_include_directories(FastCircleFit_t PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(FastCircleFit_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastCircleFit_t PUBLIC /usr/include/boost/serialization/)
target_include_directories(FastCircleFit_t PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(FastCircleFit_t PUBLIC /usr/include/boost/)
target_include_directories(FastCircleFit_t PUBLIC /usr/include/eigen3/)
target_include_directories(FastCircleFit_t PUBLIC /usr/include/boost/python/)
target_include_directories(FastCircleFit_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastCircleFit_t PUBLIC /usr/include/root/)
target_include_directories(FastCircleFit_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastCircleFit_t PUBLIC /usr/include/boost/regex/)

