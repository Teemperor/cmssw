add_subdirectory(test)
add_library(DetectorDescriptionParser OBJECT 
  src/DDLRotationSequence.cc
  src/DDLSAX2Handler.cc
  src/DDLParser.cc
  src/DDLCone.cc
  src/DDLPolyGenerator.cc
  src/DDLShapelessSolid.cc
  src/DDLAlgorithm.cc
  src/DDLBooleanSolid.cc
  src/DDLMaterial.cc
  src/DDLReflectionSolid.cc
  src/DDLSAX2ConfigHandler.cc
  src/DDLLogicalPart.cc
  src/DDLSolid.cc
  src/DDLParallelepiped.cc
  src/DDDividedGeometryObject.cc
  src/DDLCompositeMaterial.cc
  src/DDXMLElement.cc
  src/DDLMap.cc
  src/DDLElementRegistry.cc
  src/DDDividedTrd.cc
  src/DDLSpecPar.cc
  src/DDLSAX2FileHandler.cc
  src/DDLSphere.cc
  src/DDLBox.cc
  src/DDLVector.cc
  src/DDLRotationAndReflection.cc
  src/DDDividedTubs.cc
  src/DDLPseudoTrap.cc
  src/DDLTorus.cc
  src/DDLMultiUnionSolid.cc
  src/DDDividedPolycone.cc
  src/DDLTubs.cc
  src/DDLPosPart.cc
  src/DDLSAX2ExpressionHandler.cc
  src/DDDividedBox.cc
  src/DDLNumeric.cc
  src/DDLTrapezoid.cc
  src/DDLEllipsoid.cc
  src/DDDividedPolyhedra.cc
  src/DDLEllipticalTube.cc
  src/DDLRotationByAxis.cc
  src/DDLPgonGenerator.cc
  src/DDLOrb.cc
  src/FIPConfiguration.cc
  src/DDLElementaryMaterial.cc
  src/DDDividedCons.cc
  src/DDLString.cc
  src/DDLDivision.cc
)

target_include_directories(DetectorDescriptionParser PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DetectorDescriptionParser PUBLIC /usr/include/root/)
target_include_directories(DetectorDescriptionParser PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DetectorDescriptionParser PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DetectorDescriptionParser PUBLIC /usr/include/boost/)
target_include_directories(DetectorDescriptionParser PUBLIC /usr/include/boost/regex/)

