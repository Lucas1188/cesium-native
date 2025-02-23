// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/Library.h"
#include "CesiumGltf/TextureInfo.h"

namespace CesiumGltf {
/**
 * @brief undefined
 */
struct CESIUMGLTF_API MaterialOcclusionTextureInfo final : public TextureInfo {
  static inline constexpr const char* TypeName = "MaterialOcclusionTextureInfo";

  /**
   * @brief A scalar multiplier controlling the amount of occlusion applied.
   *
   * A value of 0.0 means no occlusion. A value of 1.0 means full occlusion.
   * This value affects the resulting color using the formula: `occludedColor =
   * lerp(color, color * <sampled occlusion texture value>, <occlusion
   * strength>)`. This value is ignored if the corresponding texture is not
   * specified. This value is linear.
   */
  double strength = 1;
};
} // namespace CesiumGltf
