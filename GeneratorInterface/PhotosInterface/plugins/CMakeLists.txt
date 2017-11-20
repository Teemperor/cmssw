add_library(PhotosInterfaceDefault OBJECT 
  PhotosInterface.cc
)

target_include_directories(PhotosInterfaceDefault PUBLIC /usr/include/boost/python/)
target_include_directories(PhotosInterfaceDefault PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhotosInterfaceDefault PUBLIC /usr/include/python2.7/)
target_include_directories(PhotosInterfaceDefault PUBLIC /usr/include/root/)
target_include_directories(PhotosInterfaceDefault PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhotosInterfaceDefault PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhotosInterfaceDefault PUBLIC /usr/include/boost/)
target_include_directories(PhotosInterfaceDefault PUBLIC /usr/include/boost/regex/)

add_library(PhotosppInterface OBJECT 
  PhotosppInterface.cc
)

target_include_directories(PhotosppInterface PUBLIC /usr/include/boost/python/)
target_include_directories(PhotosppInterface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhotosppInterface PUBLIC /usr/include/python2.7/)
target_include_directories(PhotosppInterface PUBLIC /usr/include/root/)
target_include_directories(PhotosppInterface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhotosppInterface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhotosppInterface PUBLIC /usr/include/boost/)
target_include_directories(PhotosppInterface PUBLIC /usr/include/boost/regex/)

