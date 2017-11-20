add_subdirectory(test)
add_library(GeometryCommonTopologies OBJECT 
  src/CSCRadialStripTopology.cc
  src/RectangularStripTopology.cc
  src/SurfaceDeformationFactory.cc
  src/RadialStripTopology.cc
  src/TwoBowedSurfacesDeformation.cc
  src/BowedSurfaceDeformation.cc
  src/Topology.cc
  src/TrapezoidalStripTopology.cc
  src/PixelTopology.cc
  src/TkRadialStripTopology.cc
  src/StripTopology.cc
)

target_include_directories(GeometryCommonTopologies PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryCommonTopologies PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryCommonTopologies PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryCommonTopologies PUBLIC /usr/include/boost/)
target_include_directories(GeometryCommonTopologies PUBLIC /usr/include/root/)
target_include_directories(GeometryCommonTopologies PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/CSCRadialStripTopology.cc
  src/RectangularStripTopology.cc
  src/SurfaceDeformationFactory.cc
  src/RadialStripTopology.cc
  src/TwoBowedSurfacesDeformation.cc
  src/BowedSurfaceDeformation.cc
  src/Topology.cc
  src/TrapezoidalStripTopology.cc
  src/PixelTopology.cc
  src/TkRadialStripTopology.cc
  src/StripTopology.cc
PROPERTIES COMPILE_FLAGS "-O3 -ffast-math -funsafe-loop-optimizations")

