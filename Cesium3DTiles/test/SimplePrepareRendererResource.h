#pragma once

#include "Cesium3DTiles/IPrepareRendererResources.h"
#include "Cesium3DTiles/RasterOverlayTile.h"
#include "Cesium3DTiles/Tile.h"

class SimplePrepareRendererResource
    : public Cesium3DTiles::IPrepareRendererResources {
public:
  struct LoadThreadResult {};

  struct MainThreadResult {};

  struct LoadThreadRasterResult {};

  struct MainThreadRasterResult {};

  virtual void* prepareInLoadThread(
      const CesiumGltf::Model& /*model*/,
      const glm::dmat4& /*transform*/) override {
    return new LoadThreadResult{};
  }

  virtual void* prepareInMainThread(
      Cesium3DTiles::Tile& /*tile*/,
      void* /*pLoadThreadResult*/) override {
    return new MainThreadResult{};
  }

  virtual void free(
      Cesium3DTiles::Tile& /*tile*/,
      void* pLoadThreadResult,
      void* pMainThreadResult) noexcept override {
    if (pMainThreadResult) {
      MainThreadResult* mainThreadResult =
          reinterpret_cast<MainThreadResult*>(pMainThreadResult);
      delete mainThreadResult;
    }

    if (pLoadThreadResult) {
      LoadThreadResult* loadThreadResult =
          reinterpret_cast<LoadThreadResult*>(pLoadThreadResult);
      delete loadThreadResult;
    }
  }

  virtual void*
  prepareRasterInLoadThread(const CesiumGltf::ImageCesium& /*image*/) override {
    return new LoadThreadRasterResult{};
  }

  virtual void* prepareRasterInMainThread(
      const Cesium3DTiles::RasterOverlayTile& /*rasterTile*/,
      void* /*pLoadThreadResult*/) override {
    return new MainThreadRasterResult{};
  }

  virtual void freeRaster(
      const Cesium3DTiles::RasterOverlayTile& /*rasterTile*/,
      void* pLoadThreadResult,
      void* pMainThreadResult) noexcept override {
    if (pMainThreadResult) {
      MainThreadRasterResult* mainThreadResult =
          reinterpret_cast<MainThreadRasterResult*>(pMainThreadResult);
      delete mainThreadResult;
    }

    if (pLoadThreadResult) {
      LoadThreadRasterResult* loadThreadResult =
          reinterpret_cast<LoadThreadRasterResult*>(pLoadThreadResult);
      delete loadThreadResult;
    }
  }

  virtual void attachRasterInMainThread(
      const Cesium3DTiles::Tile& /*tile*/,
      uint32_t /*overlayTextureCoordinateID*/,
      const Cesium3DTiles::RasterOverlayTile& /*rasterTile*/,
      void* /*pMainThreadRendererResources*/,
      const CesiumGeometry::Rectangle& /*textureCoordinateRectangle*/,
      const glm::dvec2& /*translation*/,
      const glm::dvec2& /*scale*/) override {}

  virtual void detachRasterInMainThread(
      const Cesium3DTiles::Tile& /*tile*/,
      uint32_t /*overlayTextureCoordinateID*/,
      const Cesium3DTiles::RasterOverlayTile& /*rasterTile*/,
      void* /*pMainThreadRendererResources*/,
      const CesiumGeometry::Rectangle& /*textureCoordinateRectangle*/) noexcept
      override {}
};
