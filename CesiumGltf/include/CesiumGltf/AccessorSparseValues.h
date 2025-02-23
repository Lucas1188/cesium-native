// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/ExtensibleObject.h"
#include "CesiumGltf/Library.h"
#include <cstdint>

namespace CesiumGltf {
/**
 * @brief Array of size `accessor.sparse.count` times number of components
 * storing the displaced accessor attributes pointed by
 * `accessor.sparse.indices`.
 */
struct CESIUMGLTF_API AccessorSparseValues final : public ExtensibleObject {
  static inline constexpr const char* TypeName = "AccessorSparseValues";

  /**
   * @brief The index of the bufferView with sparse values. Referenced
   * bufferView can't have ARRAY_BUFFER or ELEMENT_ARRAY_BUFFER target.
   */
  int32_t bufferView = -1;

  /**
   * @brief The offset relative to the start of the bufferView in bytes. Must be
   * aligned.
   */
  int64_t byteOffset = 0;
};
} // namespace CesiumGltf
