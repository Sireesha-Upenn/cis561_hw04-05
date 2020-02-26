#include "diffusearealight.h"

// Returns the energy emitted along _w_ from a point on our surface _isect_
// If _twoSided_ is false, then we must check if _w_ is in the same direction
// as the surface normal of _isect_. If we are looking at the back side of the
// light, then this function returns zero color
Color3f DiffuseAreaLight::L(const Intersection &isect, const Vector3f &w) const
{
    if(!twoSided)
    {
        return glm::dot(isect.normalGeometric, w) > 0.f ? emittedLight : Color3f(0.f);
    }

}
