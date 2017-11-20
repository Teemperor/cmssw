add_library(AlignmentCommonAlignmentParametrization OBJECT 
  src/RigidBodyAlignmentParameters.cc
  src/RigidBodyAlignmentParameters4D.cc
  src/CompositeAlignmentParameters.cc
  src/TwoBowedSurfacesAlignmentParameters.cc
  src/SegmentAlignmentDerivatives4D.cc
  src/BowedSurfaceAlignmentDerivatives.cc
  src/KarimakiAlignmentDerivatives.cc
  src/BowedSurfaceAlignmentParameters.cc
  src/BeamSpotAlignmentParameters.cc
  src/AlignmentParametersFactory.cc
  src/BeamSpotAlignmentDerivatives.cc
  src/ParametersToParametersDerivatives.cc
  src/FrameToFrameDerivative.cc
  src/CompositeAlignmentDerivativesExtractor.cc
)

target_include_directories(AlignmentCommonAlignmentParametrization PUBLIC /usr/include/boost/python/)
target_include_directories(AlignmentCommonAlignmentParametrization PUBLIC /usr/include/boost/filesystem/)
target_include_directories(AlignmentCommonAlignmentParametrization PUBLIC /usr/include/python2.7/)
target_include_directories(AlignmentCommonAlignmentParametrization PUBLIC /usr/include/root/)
target_include_directories(AlignmentCommonAlignmentParametrization PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(AlignmentCommonAlignmentParametrization PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(AlignmentCommonAlignmentParametrization PUBLIC /home/teemperor/cms/md5/)
target_include_directories(AlignmentCommonAlignmentParametrization PUBLIC /usr/include/boost/serialization/)
target_include_directories(AlignmentCommonAlignmentParametrization PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(AlignmentCommonAlignmentParametrization PUBLIC /usr/include/boost/)
target_include_directories(AlignmentCommonAlignmentParametrization PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(AlignmentCommonAlignmentParametrization PUBLIC /usr/include/boost/regex/)

