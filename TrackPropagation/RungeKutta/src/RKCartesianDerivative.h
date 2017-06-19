#ifndef RKCartesianDerivative_H
#define RKCartesianDerivative_H

#include "FWCore/Utilities/interface/Visibility.h"

class CartesianState;

class dso_internal RKCartesianDerivative {
public:
 
  virtual ~RKCartesianDerivative() {}

  virtual CartesianState operator()( double step, const CartesianState& start) const = 0;

};

#endif
