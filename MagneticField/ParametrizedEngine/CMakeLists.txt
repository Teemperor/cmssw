add_subdirectory(plugins)
add_library(MagneticFieldParametrizedEngine OBJECT 
  src/rz_poly.cc
  src/OAEParametrizedMagneticField.cc
  src/BFit3D.cc
  src/rz_harm_poly.cc
  src/HarmBasis3DCyl.cc
  src/ParametrizedMagneticFieldFactory.cc
  src/ParabolicParametrizedMagneticField.cc
  src/poly2d_base.cc
  src/TkBfield.cc
  src/BFit.cc
  src/PolyFit2DParametrizedMagneticField.cc
)

target_include_directories(MagneticFieldParametrizedEngine PUBLIC /usr/include/boost/python/)
target_include_directories(MagneticFieldParametrizedEngine PUBLIC /usr/include/boost/filesystem/)
target_include_directories(MagneticFieldParametrizedEngine PUBLIC /usr/include/python2.7/)
target_include_directories(MagneticFieldParametrizedEngine PUBLIC /usr/include/root/)
target_include_directories(MagneticFieldParametrizedEngine PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(MagneticFieldParametrizedEngine PUBLIC /home/teemperor/cms/md5/)
target_include_directories(MagneticFieldParametrizedEngine PUBLIC /usr/include/boost/)
target_include_directories(MagneticFieldParametrizedEngine PUBLIC /usr/include/boost/regex/)

