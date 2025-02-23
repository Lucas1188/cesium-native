// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/Library.h"
#include "CesiumGltf/NamedObject.h"
#include <cstdint>
#include <optional>

namespace CesiumGltf {
/**
 * @brief A view into a buffer generally representing a subset of the buffer.
 */
struct CESIUMGLTF_API BufferView final : public NamedObject {
  static inline constexpr const char* TypeName = "BufferView";

  /**
   * @brief The target that the GPU buffer should be bound to.
   */
  enum class Target {
    ARRAY_BUFFER = 34962,

    ELEMENT_ARRAY_BUFFER = 34963
  };

  /**
   * @brief The index of the buffer.
   */
  int32_t buffer = -1;

  /**
   * @brief The offset into the buffer in bytes.
   */
  int64_t byteOffset = 0;

  /**
   * @brief The length of the bufferView in bytes.
   */
  int64_t byteLength = int64_t();

  /**
   * @brief The stride, in bytes.
   *
   * The stride, in bytes, between vertex attributes.  When this is not defined,
   * data is tightly packed. When two or more accessors use the same bufferView,
   * this field must be defined.
   */
  std::optional<int64_t> byteStride;

  /**
   * @brief The target that the GPU buffer should be bound to.
   */
  std::optional<Target> target;
};
} // namespace CesiumGltf
