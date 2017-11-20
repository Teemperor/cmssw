add_subdirectory(plugins)
add_library(PhysicsToolsCondLiteIO OBJECT 
  src/RecordWriter.cc
)

target_include_directories(PhysicsToolsCondLiteIO PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsCondLiteIO PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsCondLiteIO PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsCondLiteIO PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsCondLiteIO PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsCondLiteIO PUBLIC /usr/include/boost/regex/)

