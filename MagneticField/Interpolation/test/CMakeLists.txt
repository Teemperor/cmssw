add_library(Grid1D_t OBJECT 
  Grid1D_t.cpp
)

target_include_directories(Grid1D_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Grid1D_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Grid1D_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Grid1D_t PUBLIC /usr/include/boost/)
target_include_directories(Grid1D_t PUBLIC /usr/include/root/)
target_include_directories(Grid1D_t PUBLIC /usr/include/boost/regex/)

add_library(Grid3D_t OBJECT 
  Grid3D_t.cpp
)

target_include_directories(Grid3D_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(Grid3D_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(Grid3D_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(Grid3D_t PUBLIC /usr/include/boost/)
target_include_directories(Grid3D_t PUBLIC /usr/include/root/)
target_include_directories(Grid3D_t PUBLIC /usr/include/boost/regex/)

add_library(GridFileReader OBJECT 
  BinaryTablesGeneration/GridFileReader.cpp
)

target_include_directories(GridFileReader PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GridFileReader PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GridFileReader PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GridFileReader PUBLIC /usr/include/boost/)
target_include_directories(GridFileReader PUBLIC /usr/include/root/)
target_include_directories(GridFileReader PUBLIC /usr/include/boost/regex/)

add_library(prepareFieldTable OBJECT 
  BinaryTablesGeneration/prepareFieldTable.cpp
)

target_include_directories(prepareFieldTable PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(prepareFieldTable PUBLIC /home/teemperor/cms/md5/)
target_include_directories(prepareFieldTable PUBLIC /usr/include/boost/filesystem/)
target_include_directories(prepareFieldTable PUBLIC /usr/include/boost/)
target_include_directories(prepareFieldTable PUBLIC /usr/include/root/)
target_include_directories(prepareFieldTable PUBLIC /usr/include/boost/regex/)

