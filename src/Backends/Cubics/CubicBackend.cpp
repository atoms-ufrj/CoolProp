#include "CubicBackend.h"

void CoolProp::AbstractCubicBackend::setup(){
	// Reset the residual Helmholtz energy class
	residual_helmholtz.reset(new CubicResidualHelmholtz(this));
	// If pure, set the mole fractions to be unity
	if (is_pure_or_pseudopure){
		mole_fractions = std::vector<CoolPropDbl>(1, 1.0);
	}
}