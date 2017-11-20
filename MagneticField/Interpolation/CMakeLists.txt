add_subdirectory(test)
add_library(MagneticFieldInterpolation OBJECT 
  src/CylinderFromSectorMFGrid.cc
  src/binary_ifstream.cc
  src/RectangularCylindricalMFGrid.cc
  src/RectangularCartesianMFGrid.cc
  src/TrapezoidalCartesianMFGrid.cc
  src/SpecialCylindricalMFGrid.cc
  src/gridTesters.cc
  src/GlobalGridWrapper.cc
  src/TrapezoidalCylindricalMFGrid.cc
  src/VectorFieldInterpolation.cc
  src/MFGrid3D.cc
  src/MFGridFactory.cc
  src/ZReflectedMFGrid.cc
  src/binary_ofstream.cc
  src/MagneticFieldGrid.cc
  src/LinearGridInterpolator3D.cc
  src/InterpolationDebug.cc
  src/Grid3D.cc
)

target_include_directories(MagneticFieldInterpolation PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MagneticFieldInterpolation PUBLIC /usr/include/root/)
target_include_directories(MagneticFieldInterpolation PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MagneticFieldInterpolation PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MagneticFieldInterpolation PUBLIC /usr/include/boost/)
target_include_directories(MagneticFieldInterpolation PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/CylinderFromSectorMFGrid.cc
  src/binary_ifstream.cc
  src/RectangularCylindricalMFGrid.cc
  src/RectangularCartesianMFGrid.cc
  src/TrapezoidalCartesianMFGrid.cc
  src/SpecialCylindricalMFGrid.cc
  src/gridTesters.cc
  src/GlobalGridWrapper.cc
  src/TrapezoidalCylindricalMFGrid.cc
  src/VectorFieldInterpolation.cc
  src/MFGrid3D.cc
  src/MFGridFactory.cc
  src/ZReflectedMFGrid.cc
  src/binary_ofstream.cc
  src/MagneticFieldGrid.cc
  src/LinearGridInterpolator3D.cc
  src/InterpolationDebug.cc
  src/Grid3D.cc
PROPERTIES COMPILE_FLAGS "-Wno-format -Wno-format-contains-nul")

