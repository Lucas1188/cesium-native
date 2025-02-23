// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/ExtensibleObject.h"
#include "CesiumGltf/FeatureTable.h"
#include "CesiumGltf/FeatureTexture.h"
#include "CesiumGltf/Library.h"
#include "CesiumGltf/Schema.h"
#include "CesiumGltf/Statistics.h"
#include <optional>
#include <string>
#include <unordered_map>

namespace CesiumGltf {
/**
 * @brief glTF extension that assigns metadata to features in a model.
 */
struct CESIUMGLTF_API ModelEXT_feature_metadata final
    : public ExtensibleObject {
  static inline constexpr const char* TypeName = "ModelEXT_feature_metadata";
  static inline constexpr const char* ExtensionName = "EXT_feature_metadata";

  /**
   * @brief An object defining classes and enums.
   */
  std::optional<Schema> schema;

  /**
   * @brief A uri to an external schema file.
   */
  std::optional<std::string> schemaUri;

  /**
   * @brief An object containing statistics about features.
   */
  std::optional<Statistics> statistics;

  /**
   * @brief A dictionary, where each key is a feature table ID and each value is
   * an object defining the feature table.
   */
  std::unordered_map<std::string, FeatureTable> featureTables;

  /**
   * @brief A dictionary, where each key is a feature texture ID and each value
   * is an object defining the feature texture.
   */
  std::unordered_map<std::string, FeatureTexture> featureTextures;
};
} // namespace CesiumGltf
