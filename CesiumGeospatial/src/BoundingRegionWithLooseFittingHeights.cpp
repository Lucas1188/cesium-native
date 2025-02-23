#include "CesiumGeospatial/BoundingRegionWithLooseFittingHeights.h"

namespace CesiumGeospatial {

BoundingRegionWithLooseFittingHeights::BoundingRegionWithLooseFittingHeights(
    const BoundingRegion& boundingRegion)
    : _region(boundingRegion) {}

double BoundingRegionWithLooseFittingHeights::
    computeConservativeDistanceSquaredToPosition(
        const glm::dvec3& position,
        const Ellipsoid& ellipsoid) const noexcept {
  return this->_region.computeDistanceSquaredToPosition(position, ellipsoid);
}

double BoundingRegionWithLooseFittingHeights::
    computeConservativeDistanceSquaredToPosition(
        const Cartographic& position,
        const Ellipsoid& ellipsoid) const noexcept {
  return this->_region.computeDistanceSquaredToPosition(position, ellipsoid);
}

double BoundingRegionWithLooseFittingHeights::
    computeConservativeDistanceSquaredToPosition(
        const Cartographic& cartographicPosition,
        const glm::dvec3& cartesianPosition) const noexcept {
  return this->_region.computeDistanceSquaredToPosition(
      cartographicPosition,
      cartesianPosition);
}
} // namespace CesiumGeospatial
