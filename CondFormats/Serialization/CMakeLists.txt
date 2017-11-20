add_subdirectory(test)
add_library(CondFormatsSerialization OBJECT 
  src/templateInstantiations.cc
)

target_include_directories(CondFormatsSerialization PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsSerialization PUBLIC /usr/include/boost/serialization/)

