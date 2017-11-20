add_subdirectory(plugins)
add_library(GeneratorInterfacePhotosInterface OBJECT 
  src/PhotosFactory.cc
  src/PhotosInterfaceBase.cc
)

target_include_directories(GeneratorInterfacePhotosInterface PUBLIC /usr/include/boost/python/)
target_include_directories(GeneratorInterfacePhotosInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeneratorInterfacePhotosInterface PUBLIC /usr/include/python2.7/)
target_include_directories(GeneratorInterfacePhotosInterface PUBLIC /usr/include/root/)
target_include_directories(GeneratorInterfacePhotosInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeneratorInterfacePhotosInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeneratorInterfacePhotosInterface PUBLIC /usr/include/boost/)
target_include_directories(GeneratorInterfacePhotosInterface PUBLIC /usr/include/boost/regex/)

