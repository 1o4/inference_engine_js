#ifndef INFERENCE_ENGINE_ADDON_IE_LAYER_H
#define INFERENCE_ENGINE_ADDON_IE_LAYER_H

#include <napi.h>

#include <ie_core.hpp>
#include <inference_engine.hpp>

namespace InferenceEngineJS {
    class CNNLayer : public Napi::ObjectWrap<CNNLayer> {
    public:
        static Napi::Object Init(Napi::Env env, Napi::Object exports);

        explicit CNNLayer(const Napi::CallbackInfo &info);

        static Napi::FunctionReference constructor;

        Napi::Value getParamAsString(const Napi::CallbackInfo &info);


    private:

        InferenceEngine::CNNLayerPtr _ieCNNLayer;
    };
}
#endif //INFERENCE_ENGINE_ADDON_IE_LAYER_H