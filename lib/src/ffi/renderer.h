#ifndef ___APRIORI2_RENDERER_H___
#define ___APRIORI2_RENDERER_H___

#include <vulkan/vulkan.h>
#include "ffi/export/vulkan_instance.h"

struct RendererQueues {
    uint32_t graphics_family_idx;
    uint32_t present_family_idx;
    uint32_t graphics_local_idx;
    uint32_t present_local_idx;

    VkQueue graphics;
    VkQueue present;
};

struct RendererPools {
    struct {
        VkCommandPool graphics;
        VkCommandPool present;
    } cmd;
};

struct RendererBuffers {
    struct {
        VkCommandBuffer *graphics;
        VkCommandBuffer *present;
    } cmd;
};

struct RendererFFI {
    VulkanInstance vk_instance;
    VkDevice gpu;
    VkSurfaceKHR surface;
    uint32_t images_count;
    struct RendererQueues queues;
    struct RendererPools pools;
    struct RendererBuffers buffers;
};

#endif // ___APRIORI2_RENDERER_H___
