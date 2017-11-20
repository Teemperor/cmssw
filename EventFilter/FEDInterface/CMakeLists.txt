add_subdirectory(plugins)
add_library(EventFilterFEDInterface OBJECT 
  src/FEDHeader.cc
  src/GlobalEventNumber.cc
  src/FEDTrailer.cc
)


