add_subdirectory(plugins)
add_library(GeometryCSCGeometryBuilder OBJECT 
  src/CSCGeometryBuilderFromDDD.cc
  src/CSCGeometryBuilder.cc
  src/CSCGeometryParsFromDD.cc
)

target_include_directories(GeometryCSCGeometryBuilder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryCSCGeometryBuilder PUBLIC /usr/include/root/)
target_include_directories(GeometryCSCGeometryBuilder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryCSCGeometryBuilder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryCSCGeometryBuilder PUBLIC /usr/include/boost/)
target_include_directories(GeometryCSCGeometryBuilder PUBLIC /usr/include/boost/regex/)

