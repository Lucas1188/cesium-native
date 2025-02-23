// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "AnimationChannelJsonHandler.h"
#include "AnimationSamplerJsonHandler.h"
#include "CesiumGltf/Animation.h"
#include "CesiumGltf/ReaderContext.h"
#include "CesiumJsonReader/ArrayJsonHandler.h"
#include "NamedObjectJsonHandler.h"

namespace CesiumGltf {
struct ReaderContext;

class AnimationJsonHandler : public NamedObjectJsonHandler {
public:
  using ValueType = Animation;

  AnimationJsonHandler(const ReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentHandler, Animation* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyAnimation(
      const std::string& objectType,
      const std::string_view& str,
      Animation& o);

private:
  Animation* _pObject = nullptr;
  CesiumJsonReader::
      ArrayJsonHandler<AnimationChannel, AnimationChannelJsonHandler>
          _channels;
  CesiumJsonReader::
      ArrayJsonHandler<AnimationSampler, AnimationSamplerJsonHandler>
          _samplers;
};
} // namespace CesiumGltf
