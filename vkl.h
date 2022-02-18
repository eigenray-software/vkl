#ifndef A21E2F7E_5464_4B27_8400_EC0EB967B70B
#define A21E2F7E_5464_4B27_8400_EC0EB967B70B
#include <assert.h>
#include <vulkan/vulkan.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef float f32;
typedef double f64;



#ifdef __cplusplus
extern "C" {
#endif



VkResult vkl_init(PFN_vkGetInstanceProcAddr);
void vkl_load_instance_functions(VkInstance instance);
void vkl_load_device_functions(VkDevice device, struct VklDeviceFunctions* fnptrs);


struct VklDeviceFunctions {
	VkDevice handle;
	PFN_vkCmdDispatch pfn_vkCmdDispatch;
	PFN_vkDeviceWaitIdle pfn_vkDeviceWaitIdle;
	PFN_vkDestroyRenderPass pfn_vkDestroyRenderPass;
	PFN_vkCmdWaitEvents pfn_vkCmdWaitEvents;
	PFN_vkCmdSetDepthCompareOp pfn_vkCmdSetDepthCompareOp;
	PFN_vkCmdSetRasterizerDiscardEnable pfn_vkCmdSetRasterizerDiscardEnable;
	PFN_vkCmdClearColorImage pfn_vkCmdClearColorImage;
	PFN_vkQueueSubmit2 pfn_vkQueueSubmit2;
	PFN_vkGetBufferDeviceAddress pfn_vkGetBufferDeviceAddress;
	PFN_vkCmdSetDepthBias pfn_vkCmdSetDepthBias;
	PFN_vkBindBufferMemory2 pfn_vkBindBufferMemory2;
	PFN_vkGetDeviceImageSparseMemoryRequirements pfn_vkGetDeviceImageSparseMemoryRequirements;
	PFN_vkCmdCopyImage pfn_vkCmdCopyImage;
	PFN_vkDestroyImage pfn_vkDestroyImage;
	PFN_vkQueueBindSparse pfn_vkQueueBindSparse;
	PFN_vkCmdExecuteCommands pfn_vkCmdExecuteCommands;
	PFN_vkWaitSemaphores pfn_vkWaitSemaphores;
	PFN_vkCmdDrawIndirectCount pfn_vkCmdDrawIndirectCount;
	PFN_vkCmdCopyQueryPoolResults pfn_vkCmdCopyQueryPoolResults;
	PFN_vkGetDeviceBufferMemoryRequirements pfn_vkGetDeviceBufferMemoryRequirements;
	PFN_vkCmdCopyBuffer pfn_vkCmdCopyBuffer;
	PFN_vkCreateBuffer pfn_vkCreateBuffer;
	PFN_vkCmdBindPipeline pfn_vkCmdBindPipeline;
	PFN_vkDestroyDescriptorPool pfn_vkDestroyDescriptorPool;
	PFN_vkCmdCopyBufferToImage pfn_vkCmdCopyBufferToImage;
	PFN_vkDestroyEvent pfn_vkDestroyEvent;
	PFN_vkCreatePrivateDataSlot pfn_vkCreatePrivateDataSlot;
	PFN_vkGetImageMemoryRequirements2 pfn_vkGetImageMemoryRequirements2;
	PFN_vkCmdClearAttachments pfn_vkCmdClearAttachments;
	PFN_vkCmdSetStencilReference pfn_vkCmdSetStencilReference;
	PFN_vkCmdSetCullMode pfn_vkCmdSetCullMode;
	PFN_vkCreateSampler pfn_vkCreateSampler;
	PFN_vkCmdResetQueryPool pfn_vkCmdResetQueryPool;
	PFN_vkDestroyDescriptorUpdateTemplate pfn_vkDestroyDescriptorUpdateTemplate;
	PFN_vkCmdSetBlendConstants pfn_vkCmdSetBlendConstants;
	PFN_vkGetImageSparseMemoryRequirements pfn_vkGetImageSparseMemoryRequirements;
	PFN_vkCmdResetEvent2 pfn_vkCmdResetEvent2;
	PFN_vkSetEvent pfn_vkSetEvent;
	PFN_vkResetEvent pfn_vkResetEvent;
	PFN_vkCreateSamplerYcbcrConversion pfn_vkCreateSamplerYcbcrConversion;
	PFN_vkGetBufferMemoryRequirements pfn_vkGetBufferMemoryRequirements;
	PFN_vkCmdSetLineWidth pfn_vkCmdSetLineWidth;
	PFN_vkCmdCopyBufferToImage2 pfn_vkCmdCopyBufferToImage2;
	PFN_vkResetCommandPool pfn_vkResetCommandPool;
	PFN_vkTrimCommandPool pfn_vkTrimCommandPool;
	PFN_vkCmdWriteTimestamp pfn_vkCmdWriteTimestamp;
	PFN_vkGetDeviceGroupPeerMemoryFeatures pfn_vkGetDeviceGroupPeerMemoryFeatures;
	PFN_vkCreateGraphicsPipelines pfn_vkCreateGraphicsPipelines;
	PFN_vkDestroyImageView pfn_vkDestroyImageView;
	PFN_vkGetImageSparseMemoryRequirements2 pfn_vkGetImageSparseMemoryRequirements2;
	PFN_vkCmdCopyBuffer2 pfn_vkCmdCopyBuffer2;
	PFN_vkCmdSetScissor pfn_vkCmdSetScissor;
	PFN_vkCreateDescriptorUpdateTemplate pfn_vkCreateDescriptorUpdateTemplate;
	PFN_vkCmdUpdateBuffer pfn_vkCmdUpdateBuffer;
	PFN_vkCreatePipelineCache pfn_vkCreatePipelineCache;
	PFN_vkBeginCommandBuffer pfn_vkBeginCommandBuffer;
	PFN_vkBindBufferMemory pfn_vkBindBufferMemory;
	PFN_vkCmdPipelineBarrier pfn_vkCmdPipelineBarrier;
	PFN_vkUpdateDescriptorSetWithTemplate pfn_vkUpdateDescriptorSetWithTemplate;
	PFN_vkCmdNextSubpass2 pfn_vkCmdNextSubpass2;
	PFN_vkCmdCopyImageToBuffer pfn_vkCmdCopyImageToBuffer;
	PFN_vkCmdDispatchIndirect pfn_vkCmdDispatchIndirect;
	PFN_vkCmdEndQuery pfn_vkCmdEndQuery;
	PFN_vkCmdSetFrontFace pfn_vkCmdSetFrontFace;
	PFN_vkResetFences pfn_vkResetFences;
	PFN_vkAllocateMemory pfn_vkAllocateMemory;
	PFN_vkSetPrivateData pfn_vkSetPrivateData;
	PFN_vkCreateImage pfn_vkCreateImage;
	PFN_vkCmdSetStencilCompareMask pfn_vkCmdSetStencilCompareMask;
	PFN_vkQueueSubmit pfn_vkQueueSubmit;
	PFN_vkCreateRenderPass2 pfn_vkCreateRenderPass2;
	PFN_vkCreateQueryPool pfn_vkCreateQueryPool;
	PFN_vkDestroyBuffer pfn_vkDestroyBuffer;
	PFN_vkCmdSetDepthBounds pfn_vkCmdSetDepthBounds;
	PFN_vkDestroyDevice pfn_vkDestroyDevice;
	PFN_vkCmdBeginRendering pfn_vkCmdBeginRendering;
	PFN_vkResetQueryPool pfn_vkResetQueryPool;
	PFN_vkCmdBindIndexBuffer pfn_vkCmdBindIndexBuffer;
	PFN_vkMergePipelineCaches pfn_vkMergePipelineCaches;
	PFN_vkFreeCommandBuffers pfn_vkFreeCommandBuffers;
	PFN_vkQueueWaitIdle pfn_vkQueueWaitIdle;
	PFN_vkDestroyPipeline pfn_vkDestroyPipeline;
	PFN_vkCreateBufferView pfn_vkCreateBufferView;
	PFN_vkGetQueryPoolResults pfn_vkGetQueryPoolResults;
	PFN_vkGetDeviceMemoryOpaqueCaptureAddress pfn_vkGetDeviceMemoryOpaqueCaptureAddress;
	PFN_vkCmdDrawIndexedIndirect pfn_vkCmdDrawIndexedIndirect;
	PFN_vkCmdEndRenderPass pfn_vkCmdEndRenderPass;
	PFN_vkMapMemory pfn_vkMapMemory;
	PFN_vkFlushMappedMemoryRanges pfn_vkFlushMappedMemoryRanges;
	PFN_vkCmdSetViewport pfn_vkCmdSetViewport;
	PFN_vkUpdateDescriptorSets pfn_vkUpdateDescriptorSets;
	PFN_vkCreateDescriptorSetLayout pfn_vkCreateDescriptorSetLayout;
	PFN_vkCmdDrawIndirect pfn_vkCmdDrawIndirect;
	PFN_vkGetDeviceImageMemoryRequirements pfn_vkGetDeviceImageMemoryRequirements;
	PFN_vkCmdResolveImage2 pfn_vkCmdResolveImage2;
	PFN_vkCmdClearDepthStencilImage pfn_vkCmdClearDepthStencilImage;
	PFN_vkDestroyPipelineLayout pfn_vkDestroyPipelineLayout;
	PFN_vkCmdNextSubpass pfn_vkCmdNextSubpass;
	PFN_vkCmdSetEvent pfn_vkCmdSetEvent;
	PFN_vkDestroyPrivateDataSlot pfn_vkDestroyPrivateDataSlot;
	PFN_vkCmdCopyImageToBuffer2 pfn_vkCmdCopyImageToBuffer2;
	PFN_vkDestroyFramebuffer pfn_vkDestroyFramebuffer;
	PFN_vkCmdDrawIndexed pfn_vkCmdDrawIndexed;
	PFN_vkDestroyCommandPool pfn_vkDestroyCommandPool;
	PFN_vkCreateImageView pfn_vkCreateImageView;
	PFN_vkCmdEndRendering pfn_vkCmdEndRendering;
	PFN_vkGetDeviceQueue2 pfn_vkGetDeviceQueue2;
	PFN_vkDestroyShaderModule pfn_vkDestroyShaderModule;
	PFN_vkCmdWaitEvents2 pfn_vkCmdWaitEvents2;
	PFN_vkCmdBindVertexBuffers pfn_vkCmdBindVertexBuffers;
	PFN_vkCmdBlitImage2 pfn_vkCmdBlitImage2;
	PFN_vkInvalidateMappedMemoryRanges pfn_vkInvalidateMappedMemoryRanges;
	PFN_vkCreateShaderModule pfn_vkCreateShaderModule;
	PFN_vkCmdSetStencilTestEnable pfn_vkCmdSetStencilTestEnable;
	PFN_vkGetRenderAreaGranularity pfn_vkGetRenderAreaGranularity;
	PFN_vkDestroySampler pfn_vkDestroySampler;
	PFN_vkGetPrivateData pfn_vkGetPrivateData;
	PFN_vkUnmapMemory pfn_vkUnmapMemory;
	PFN_vkGetImageMemoryRequirements pfn_vkGetImageMemoryRequirements;
	PFN_vkCreateFramebuffer pfn_vkCreateFramebuffer;
	PFN_vkDestroySamplerYcbcrConversion pfn_vkDestroySamplerYcbcrConversion;
	PFN_vkCmdBeginRenderPass2 pfn_vkCmdBeginRenderPass2;
	PFN_vkGetImageSubresourceLayout pfn_vkGetImageSubresourceLayout;
	PFN_vkEndCommandBuffer pfn_vkEndCommandBuffer;
	PFN_vkBindImageMemory pfn_vkBindImageMemory;
	PFN_vkCmdSetScissorWithCount pfn_vkCmdSetScissorWithCount;
	PFN_vkDestroySemaphore pfn_vkDestroySemaphore;
	PFN_vkDestroyDescriptorSetLayout pfn_vkDestroyDescriptorSetLayout;
	PFN_vkGetDeviceQueue pfn_vkGetDeviceQueue;
	PFN_vkDestroyFence pfn_vkDestroyFence;
	PFN_vkCmdFillBuffer pfn_vkCmdFillBuffer;
	PFN_vkCreatePipelineLayout pfn_vkCreatePipelineLayout;
	PFN_vkCmdBeginRenderPass pfn_vkCmdBeginRenderPass;
	PFN_vkCmdResolveImage pfn_vkCmdResolveImage;
	PFN_vkCmdBeginQuery pfn_vkCmdBeginQuery;
	PFN_vkSignalSemaphore pfn_vkSignalSemaphore;
	PFN_vkCmdSetEvent2 pfn_vkCmdSetEvent2;
	PFN_vkDestroyPipelineCache pfn_vkDestroyPipelineCache;
	PFN_vkCmdDrawIndexedIndirectCount pfn_vkCmdDrawIndexedIndirectCount;
	PFN_vkCmdBindVertexBuffers2 pfn_vkCmdBindVertexBuffers2;
	PFN_vkCmdPushConstants pfn_vkCmdPushConstants;
	PFN_vkGetEventStatus pfn_vkGetEventStatus;
	PFN_vkGetBufferMemoryRequirements2 pfn_vkGetBufferMemoryRequirements2;
	PFN_vkResetDescriptorPool pfn_vkResetDescriptorPool;
	PFN_vkCreateEvent pfn_vkCreateEvent;
	PFN_vkCmdSetDepthWriteEnable pfn_vkCmdSetDepthWriteEnable;
	PFN_vkCmdSetPrimitiveRestartEnable pfn_vkCmdSetPrimitiveRestartEnable;
	PFN_vkDestroyBufferView pfn_vkDestroyBufferView;
	PFN_vkCmdDraw pfn_vkCmdDraw;
	PFN_vkCmdSetPrimitiveTopology pfn_vkCmdSetPrimitiveTopology;
	PFN_vkCmdEndRenderPass2 pfn_vkCmdEndRenderPass2;
	PFN_vkFreeDescriptorSets pfn_vkFreeDescriptorSets;
	PFN_vkCmdSetStencilOp pfn_vkCmdSetStencilOp;
	PFN_vkCreateSemaphore pfn_vkCreateSemaphore;
	PFN_vkCreateFence pfn_vkCreateFence;
	PFN_vkGetPipelineCacheData pfn_vkGetPipelineCacheData;
	PFN_vkWaitForFences pfn_vkWaitForFences;
	PFN_vkCmdSetViewportWithCount pfn_vkCmdSetViewportWithCount;
	PFN_vkCmdCopyImage2 pfn_vkCmdCopyImage2;
	PFN_vkBindImageMemory2 pfn_vkBindImageMemory2;
	PFN_vkCmdSetDepthTestEnable pfn_vkCmdSetDepthTestEnable;
	PFN_vkCreateDescriptorPool pfn_vkCreateDescriptorPool;
	PFN_vkAllocateDescriptorSets pfn_vkAllocateDescriptorSets;
	PFN_vkCmdBindDescriptorSets pfn_vkCmdBindDescriptorSets;
	PFN_vkGetBufferOpaqueCaptureAddress pfn_vkGetBufferOpaqueCaptureAddress;
	PFN_vkGetDescriptorSetLayoutSupport pfn_vkGetDescriptorSetLayoutSupport;
	PFN_vkCreateRenderPass pfn_vkCreateRenderPass;
	PFN_vkFreeMemory pfn_vkFreeMemory;
	PFN_vkCmdBlitImage pfn_vkCmdBlitImage;
	PFN_vkGetDeviceMemoryCommitment pfn_vkGetDeviceMemoryCommitment;
	PFN_vkResetCommandBuffer pfn_vkResetCommandBuffer;
	PFN_vkDestroyQueryPool pfn_vkDestroyQueryPool;
	PFN_vkGetFenceStatus pfn_vkGetFenceStatus;
	PFN_vkCmdResetEvent pfn_vkCmdResetEvent;
	PFN_vkAllocateCommandBuffers pfn_vkAllocateCommandBuffers;
	PFN_vkCmdDispatchBase pfn_vkCmdDispatchBase;
	PFN_vkCmdSetDeviceMask pfn_vkCmdSetDeviceMask;
	PFN_vkCreateComputePipelines pfn_vkCreateComputePipelines;
	PFN_vkCmdSetDepthBiasEnable pfn_vkCmdSetDepthBiasEnable;
	PFN_vkCreateCommandPool pfn_vkCreateCommandPool;
	PFN_vkCmdPipelineBarrier2 pfn_vkCmdPipelineBarrier2;
	PFN_vkCmdSetDepthBoundsTestEnable pfn_vkCmdSetDepthBoundsTestEnable;
	PFN_vkCmdSetStencilWriteMask pfn_vkCmdSetStencilWriteMask;
	PFN_vkGetSemaphoreCounterValue pfn_vkGetSemaphoreCounterValue;
	PFN_vkCmdWriteTimestamp2 pfn_vkCmdWriteTimestamp2;
#ifdef VK_AMD_shader_info
	PFN_vkGetShaderInfoAMD pfn_vkGetShaderInfoAMD;
#endif
#ifdef VK_AMD_buffer_marker
	PFN_vkCmdWriteBufferMarkerAMD pfn_vkCmdWriteBufferMarkerAMD;
#endif
#ifdef VK_KHR_external_fence_fd
	PFN_vkImportFenceFdKHR pfn_vkImportFenceFdKHR;
	PFN_vkGetFenceFdKHR pfn_vkGetFenceFdKHR;
#endif
#ifdef VK_EXT_debug_marker
	PFN_vkDebugMarkerSetObjectTagEXT pfn_vkDebugMarkerSetObjectTagEXT;
	PFN_vkDebugMarkerSetObjectNameEXT pfn_vkDebugMarkerSetObjectNameEXT;
	PFN_vkCmdDebugMarkerBeginEXT pfn_vkCmdDebugMarkerBeginEXT;
	PFN_vkCmdDebugMarkerEndEXT pfn_vkCmdDebugMarkerEndEXT;
	PFN_vkCmdDebugMarkerInsertEXT pfn_vkCmdDebugMarkerInsertEXT;
#endif
#ifdef VK_KHR_shared_presentable_image
	PFN_vkGetSwapchainStatusKHR pfn_vkGetSwapchainStatusKHR;
#endif
#ifdef VK_NV_shading_rate_image
	PFN_vkCmdBindShadingRateImageNV pfn_vkCmdBindShadingRateImageNV;
	PFN_vkCmdSetViewportShadingRatePaletteNV pfn_vkCmdSetViewportShadingRatePaletteNV;
	PFN_vkCmdSetCoarseSampleOrderNV pfn_vkCmdSetCoarseSampleOrderNV;
#endif
#ifdef VK_INTEL_performance_query
	PFN_vkInitializePerformanceApiINTEL pfn_vkInitializePerformanceApiINTEL;
	PFN_vkUninitializePerformanceApiINTEL pfn_vkUninitializePerformanceApiINTEL;
	PFN_vkCmdSetPerformanceMarkerINTEL pfn_vkCmdSetPerformanceMarkerINTEL;
	PFN_vkCmdSetPerformanceStreamMarkerINTEL pfn_vkCmdSetPerformanceStreamMarkerINTEL;
	PFN_vkCmdSetPerformanceOverrideINTEL pfn_vkCmdSetPerformanceOverrideINTEL;
	PFN_vkAcquirePerformanceConfigurationINTEL pfn_vkAcquirePerformanceConfigurationINTEL;
	PFN_vkReleasePerformanceConfigurationINTEL pfn_vkReleasePerformanceConfigurationINTEL;
	PFN_vkQueueSetPerformanceConfigurationINTEL pfn_vkQueueSetPerformanceConfigurationINTEL;
	PFN_vkGetPerformanceParameterINTEL pfn_vkGetPerformanceParameterINTEL;
#endif
#ifdef VK_ANDROID_external_memory_android_hardware_buffer
	PFN_vkGetAndroidHardwareBufferPropertiesANDROID pfn_vkGetAndroidHardwareBufferPropertiesANDROID;
	PFN_vkGetMemoryAndroidHardwareBufferANDROID pfn_vkGetMemoryAndroidHardwareBufferANDROID;
#endif
#ifdef VK_NV_scissor_exclusive
	PFN_vkCmdSetExclusiveScissorNV pfn_vkCmdSetExclusiveScissorNV;
#endif
#ifdef VK_KHR_pipeline_executable_properties
	PFN_vkGetPipelineExecutablePropertiesKHR pfn_vkGetPipelineExecutablePropertiesKHR;
	PFN_vkGetPipelineExecutableStatisticsKHR pfn_vkGetPipelineExecutableStatisticsKHR;
	PFN_vkGetPipelineExecutableInternalRepresentationsKHR pfn_vkGetPipelineExecutableInternalRepresentationsKHR;
#endif
#ifdef VK_KHR_video_encode_queue
	PFN_vkCmdEncodeVideoKHR pfn_vkCmdEncodeVideoKHR;
#endif
#ifdef VK_EXT_display_control
	PFN_vkDisplayPowerControlEXT pfn_vkDisplayPowerControlEXT;
	PFN_vkRegisterDeviceEventEXT pfn_vkRegisterDeviceEventEXT;
	PFN_vkRegisterDisplayEventEXT pfn_vkRegisterDisplayEventEXT;
	PFN_vkGetSwapchainCounterEXT pfn_vkGetSwapchainCounterEXT;
#endif
#ifdef VK_FUCHSIA_external_memory
	PFN_vkGetMemoryZirconHandleFUCHSIA pfn_vkGetMemoryZirconHandleFUCHSIA;
	PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA pfn_vkGetMemoryZirconHandlePropertiesFUCHSIA;
#endif
#ifdef VK_HUAWEI_subpass_shading
	PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI pfn_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI;
	PFN_vkCmdSubpassShadingHUAWEI pfn_vkCmdSubpassShadingHUAWEI;
#endif
#ifdef VK_EXT_conditional_rendering
	PFN_vkCmdBeginConditionalRenderingEXT pfn_vkCmdBeginConditionalRenderingEXT;
	PFN_vkCmdEndConditionalRenderingEXT pfn_vkCmdEndConditionalRenderingEXT;
#endif
#ifdef VK_NV_clip_space_w_scaling
	PFN_vkCmdSetViewportWScalingNV pfn_vkCmdSetViewportWScalingNV;
#endif
#ifdef VK_NV_fragment_shading_rate_enums
	PFN_vkCmdSetFragmentShadingRateEnumNV pfn_vkCmdSetFragmentShadingRateEnumNV;
#endif
#ifdef VK_AMD_display_native_hdr
	PFN_vkSetLocalDimmingAMD pfn_vkSetLocalDimmingAMD;
#endif
#ifdef VK_KHR_fragment_shading_rate
	PFN_vkCmdSetFragmentShadingRateKHR pfn_vkCmdSetFragmentShadingRateKHR;
#endif
#ifdef VK_NVX_image_view_handle
	PFN_vkGetImageViewHandleNVX pfn_vkGetImageViewHandleNVX;
	PFN_vkGetImageViewAddressNVX pfn_vkGetImageViewAddressNVX;
#endif
#ifdef VK_KHR_external_fence_win32
	PFN_vkImportFenceWin32HandleKHR pfn_vkImportFenceWin32HandleKHR;
	PFN_vkGetFenceWin32HandleKHR pfn_vkGetFenceWin32HandleKHR;
#endif
#ifdef VK_FUCHSIA_external_semaphore
	PFN_vkImportSemaphoreZirconHandleFUCHSIA pfn_vkImportSemaphoreZirconHandleFUCHSIA;
	PFN_vkGetSemaphoreZirconHandleFUCHSIA pfn_vkGetSemaphoreZirconHandleFUCHSIA;
#endif
#ifdef VK_HUAWEI_invocation_mask
	PFN_vkCmdBindInvocationMaskHUAWEI pfn_vkCmdBindInvocationMaskHUAWEI;
#endif
#ifdef VK_KHR_push_descriptor
	PFN_vkCmdPushDescriptorSetKHR pfn_vkCmdPushDescriptorSetKHR;
	PFN_vkCmdPushDescriptorSetWithTemplateKHR pfn_vkCmdPushDescriptorSetWithTemplateKHR;
#endif
#ifdef VK_EXT_hdr_metadata
	PFN_vkSetHdrMetadataEXT pfn_vkSetHdrMetadataEXT;
#endif
#ifdef VK_KHR_performance_query
	PFN_vkAcquireProfilingLockKHR pfn_vkAcquireProfilingLockKHR;
	PFN_vkReleaseProfilingLockKHR pfn_vkReleaseProfilingLockKHR;
#endif
#ifdef VK_EXT_multi_draw
	PFN_vkCmdDrawMultiEXT pfn_vkCmdDrawMultiEXT;
	PFN_vkCmdDrawMultiIndexedEXT pfn_vkCmdDrawMultiIndexedEXT;
#endif
#ifdef VK_EXT_sample_locations
	PFN_vkCmdSetSampleLocationsEXT pfn_vkCmdSetSampleLocationsEXT;
#endif
#ifdef VK_KHR_external_semaphore_fd
	PFN_vkImportSemaphoreFdKHR pfn_vkImportSemaphoreFdKHR;
	PFN_vkGetSemaphoreFdKHR pfn_vkGetSemaphoreFdKHR;
#endif
#ifdef VK_KHR_synchronization2
	PFN_vkCmdWriteBufferMarker2AMD pfn_vkCmdWriteBufferMarker2AMD;
	PFN_vkGetQueueCheckpointData2NV pfn_vkGetQueueCheckpointData2NV;
#endif
#ifdef VK_EXT_extended_dynamic_state2
	PFN_vkCmdSetPatchControlPointsEXT pfn_vkCmdSetPatchControlPointsEXT;
	PFN_vkCmdSetLogicOpEXT pfn_vkCmdSetLogicOpEXT;
#endif
#ifdef VK_EXT_calibrated_timestamps
	PFN_vkGetCalibratedTimestampsEXT pfn_vkGetCalibratedTimestampsEXT;
#endif
#ifdef VK_EXT_external_memory_host
	PFN_vkGetMemoryHostPointerPropertiesEXT pfn_vkGetMemoryHostPointerPropertiesEXT;
#endif
#ifdef VK_NVX_binary_import
	PFN_vkCreateCuModuleNVX pfn_vkCreateCuModuleNVX;
	PFN_vkCreateCuFunctionNVX pfn_vkCreateCuFunctionNVX;
	PFN_vkDestroyCuModuleNVX pfn_vkDestroyCuModuleNVX;
	PFN_vkDestroyCuFunctionNVX pfn_vkDestroyCuFunctionNVX;
	PFN_vkCmdCuLaunchKernelNVX pfn_vkCmdCuLaunchKernelNVX;
#endif
#ifdef VK_EXT_line_rasterization
	PFN_vkCmdSetLineStippleEXT pfn_vkCmdSetLineStippleEXT;
#endif
#ifdef VK_KHR_external_memory_win32
	PFN_vkGetMemoryWin32HandleKHR pfn_vkGetMemoryWin32HandleKHR;
	PFN_vkGetMemoryWin32HandlePropertiesKHR pfn_vkGetMemoryWin32HandlePropertiesKHR;
#endif
#ifdef VK_EXT_validation_cache
	PFN_vkCreateValidationCacheEXT pfn_vkCreateValidationCacheEXT;
	PFN_vkDestroyValidationCacheEXT pfn_vkDestroyValidationCacheEXT;
	PFN_vkMergeValidationCachesEXT pfn_vkMergeValidationCachesEXT;
	PFN_vkGetValidationCacheDataEXT pfn_vkGetValidationCacheDataEXT;
#endif
#ifdef VK_KHR_acceleration_structure
	PFN_vkCreateAccelerationStructureKHR pfn_vkCreateAccelerationStructureKHR;
	PFN_vkDestroyAccelerationStructureKHR pfn_vkDestroyAccelerationStructureKHR;
	PFN_vkCmdBuildAccelerationStructuresKHR pfn_vkCmdBuildAccelerationStructuresKHR;
	PFN_vkCmdBuildAccelerationStructuresIndirectKHR pfn_vkCmdBuildAccelerationStructuresIndirectKHR;
	PFN_vkBuildAccelerationStructuresKHR pfn_vkBuildAccelerationStructuresKHR;
	PFN_vkCopyAccelerationStructureKHR pfn_vkCopyAccelerationStructureKHR;
	PFN_vkCopyAccelerationStructureToMemoryKHR pfn_vkCopyAccelerationStructureToMemoryKHR;
	PFN_vkCopyMemoryToAccelerationStructureKHR pfn_vkCopyMemoryToAccelerationStructureKHR;
	PFN_vkWriteAccelerationStructuresPropertiesKHR pfn_vkWriteAccelerationStructuresPropertiesKHR;
	PFN_vkCmdCopyAccelerationStructureKHR pfn_vkCmdCopyAccelerationStructureKHR;
	PFN_vkCmdCopyAccelerationStructureToMemoryKHR pfn_vkCmdCopyAccelerationStructureToMemoryKHR;
	PFN_vkCmdCopyMemoryToAccelerationStructureKHR pfn_vkCmdCopyMemoryToAccelerationStructureKHR;
	PFN_vkGetAccelerationStructureDeviceAddressKHR pfn_vkGetAccelerationStructureDeviceAddressKHR;
	PFN_vkCmdWriteAccelerationStructuresPropertiesKHR pfn_vkCmdWriteAccelerationStructuresPropertiesKHR;
	PFN_vkGetDeviceAccelerationStructureCompatibilityKHR pfn_vkGetDeviceAccelerationStructureCompatibilityKHR;
	PFN_vkGetAccelerationStructureBuildSizesKHR pfn_vkGetAccelerationStructureBuildSizesKHR;
#endif
#ifdef VK_KHR_swapchain
	PFN_vkCreateSwapchainKHR pfn_vkCreateSwapchainKHR;
	PFN_vkDestroySwapchainKHR pfn_vkDestroySwapchainKHR;
	PFN_vkGetSwapchainImagesKHR pfn_vkGetSwapchainImagesKHR;
	PFN_vkAcquireNextImageKHR pfn_vkAcquireNextImageKHR;
	PFN_vkQueuePresentKHR pfn_vkQueuePresentKHR;
	PFN_vkGetDeviceGroupPresentCapabilitiesKHR pfn_vkGetDeviceGroupPresentCapabilitiesKHR;
	PFN_vkGetDeviceGroupSurfacePresentModesKHR pfn_vkGetDeviceGroupSurfacePresentModesKHR;
	PFN_vkAcquireNextImage2KHR pfn_vkAcquireNextImage2KHR;
#endif
#ifdef VK_NV_ray_tracing
	PFN_vkCreateAccelerationStructureNV pfn_vkCreateAccelerationStructureNV;
	PFN_vkDestroyAccelerationStructureNV pfn_vkDestroyAccelerationStructureNV;
	PFN_vkGetAccelerationStructureMemoryRequirementsNV pfn_vkGetAccelerationStructureMemoryRequirementsNV;
	PFN_vkBindAccelerationStructureMemoryNV pfn_vkBindAccelerationStructureMemoryNV;
	PFN_vkCmdBuildAccelerationStructureNV pfn_vkCmdBuildAccelerationStructureNV;
	PFN_vkCmdCopyAccelerationStructureNV pfn_vkCmdCopyAccelerationStructureNV;
	PFN_vkCmdTraceRaysNV pfn_vkCmdTraceRaysNV;
	PFN_vkCreateRayTracingPipelinesNV pfn_vkCreateRayTracingPipelinesNV;
	PFN_vkGetAccelerationStructureHandleNV pfn_vkGetAccelerationStructureHandleNV;
	PFN_vkCmdWriteAccelerationStructuresPropertiesNV pfn_vkCmdWriteAccelerationStructuresPropertiesNV;
	PFN_vkCompileDeferredNV pfn_vkCompileDeferredNV;
#endif
#ifdef VK_EXT_discard_rectangles
	PFN_vkCmdSetDiscardRectangleEXT pfn_vkCmdSetDiscardRectangleEXT;
#endif
#ifdef VK_EXT_color_write_enable
	PFN_vkCmdSetColorWriteEnableEXT pfn_vkCmdSetColorWriteEnableEXT;
#endif
#ifdef VK_NV_external_memory_win32
	PFN_vkGetMemoryWin32HandleNV pfn_vkGetMemoryWin32HandleNV;
#endif
#ifdef VK_KHR_deferred_host_operations
	PFN_vkCreateDeferredOperationKHR pfn_vkCreateDeferredOperationKHR;
	PFN_vkDestroyDeferredOperationKHR pfn_vkDestroyDeferredOperationKHR;
	PFN_vkGetDeferredOperationMaxConcurrencyKHR pfn_vkGetDeferredOperationMaxConcurrencyKHR;
	PFN_vkGetDeferredOperationResultKHR pfn_vkGetDeferredOperationResultKHR;
	PFN_vkDeferredOperationJoinKHR pfn_vkDeferredOperationJoinKHR;
#endif
#ifdef VK_NV_external_memory_rdma
	PFN_vkGetMemoryRemoteAddressNV pfn_vkGetMemoryRemoteAddressNV;
#endif
#ifdef VK_NV_device_generated_commands
	PFN_vkGetGeneratedCommandsMemoryRequirementsNV pfn_vkGetGeneratedCommandsMemoryRequirementsNV;
	PFN_vkCmdPreprocessGeneratedCommandsNV pfn_vkCmdPreprocessGeneratedCommandsNV;
	PFN_vkCmdExecuteGeneratedCommandsNV pfn_vkCmdExecuteGeneratedCommandsNV;
	PFN_vkCmdBindPipelineShaderGroupNV pfn_vkCmdBindPipelineShaderGroupNV;
	PFN_vkCreateIndirectCommandsLayoutNV pfn_vkCreateIndirectCommandsLayoutNV;
	PFN_vkDestroyIndirectCommandsLayoutNV pfn_vkDestroyIndirectCommandsLayoutNV;
#endif
#ifdef VK_KHR_display_swapchain
	PFN_vkCreateSharedSwapchainsKHR pfn_vkCreateSharedSwapchainsKHR;
#endif
#ifdef VK_EXT_debug_utils
	PFN_vkSetDebugUtilsObjectNameEXT pfn_vkSetDebugUtilsObjectNameEXT;
	PFN_vkSetDebugUtilsObjectTagEXT pfn_vkSetDebugUtilsObjectTagEXT;
	PFN_vkQueueBeginDebugUtilsLabelEXT pfn_vkQueueBeginDebugUtilsLabelEXT;
	PFN_vkQueueEndDebugUtilsLabelEXT pfn_vkQueueEndDebugUtilsLabelEXT;
	PFN_vkQueueInsertDebugUtilsLabelEXT pfn_vkQueueInsertDebugUtilsLabelEXT;
	PFN_vkCmdBeginDebugUtilsLabelEXT pfn_vkCmdBeginDebugUtilsLabelEXT;
	PFN_vkCmdEndDebugUtilsLabelEXT pfn_vkCmdEndDebugUtilsLabelEXT;
	PFN_vkCmdInsertDebugUtilsLabelEXT pfn_vkCmdInsertDebugUtilsLabelEXT;
#endif
#ifdef VK_KHR_video_decode_queue
	PFN_vkCmdDecodeVideoKHR pfn_vkCmdDecodeVideoKHR;
#endif
#ifdef VK_NV_device_diagnostic_checkpoints
	PFN_vkCmdSetCheckpointNV pfn_vkCmdSetCheckpointNV;
	PFN_vkGetQueueCheckpointDataNV pfn_vkGetQueueCheckpointDataNV;
#endif
#ifdef VK_EXT_full_screen_exclusive
	PFN_vkAcquireFullScreenExclusiveModeEXT pfn_vkAcquireFullScreenExclusiveModeEXT;
	PFN_vkReleaseFullScreenExclusiveModeEXT pfn_vkReleaseFullScreenExclusiveModeEXT;
	PFN_vkGetDeviceGroupSurfacePresentModes2EXT pfn_vkGetDeviceGroupSurfacePresentModes2EXT;
#endif
#ifdef VK_ANDROID_native_buffer
	PFN_vkGetSwapchainGrallocUsageANDROID pfn_vkGetSwapchainGrallocUsageANDROID;
	PFN_vkAcquireImageANDROID pfn_vkAcquireImageANDROID;
	PFN_vkQueueSignalReleaseImageANDROID pfn_vkQueueSignalReleaseImageANDROID;
	PFN_vkGetSwapchainGrallocUsage2ANDROID pfn_vkGetSwapchainGrallocUsage2ANDROID;
#endif
#ifdef VK_EXT_pageable_device_local_memory
	PFN_vkSetDeviceMemoryPriorityEXT pfn_vkSetDeviceMemoryPriorityEXT;
#endif
#ifdef VK_KHR_external_semaphore_win32
	PFN_vkImportSemaphoreWin32HandleKHR pfn_vkImportSemaphoreWin32HandleKHR;
	PFN_vkGetSemaphoreWin32HandleKHR pfn_vkGetSemaphoreWin32HandleKHR;
#endif
#ifdef VK_NV_mesh_shader
	PFN_vkCmdDrawMeshTasksNV pfn_vkCmdDrawMeshTasksNV;
	PFN_vkCmdDrawMeshTasksIndirectNV pfn_vkCmdDrawMeshTasksIndirectNV;
	PFN_vkCmdDrawMeshTasksIndirectCountNV pfn_vkCmdDrawMeshTasksIndirectCountNV;
#endif
#ifdef VK_KHR_ray_tracing_pipeline
	PFN_vkCmdTraceRaysKHR pfn_vkCmdTraceRaysKHR;
	PFN_vkCreateRayTracingPipelinesKHR pfn_vkCreateRayTracingPipelinesKHR;
	PFN_vkGetRayTracingShaderGroupHandlesKHR pfn_vkGetRayTracingShaderGroupHandlesKHR;
	PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR;
	PFN_vkCmdTraceRaysIndirectKHR pfn_vkCmdTraceRaysIndirectKHR;
	PFN_vkGetRayTracingShaderGroupStackSizeKHR pfn_vkGetRayTracingShaderGroupStackSizeKHR;
	PFN_vkCmdSetRayTracingPipelineStackSizeKHR pfn_vkCmdSetRayTracingPipelineStackSizeKHR;
#endif
#ifdef VK_KHR_external_memory_fd
	PFN_vkGetMemoryFdKHR pfn_vkGetMemoryFdKHR;
	PFN_vkGetMemoryFdPropertiesKHR pfn_vkGetMemoryFdPropertiesKHR;
#endif
#ifdef VK_EXT_image_drm_format_modifier
	PFN_vkGetImageDrmFormatModifierPropertiesEXT pfn_vkGetImageDrmFormatModifierPropertiesEXT;
#endif
#ifdef VK_FUCHSIA_buffer_collection
	PFN_vkCreateBufferCollectionFUCHSIA pfn_vkCreateBufferCollectionFUCHSIA;
	PFN_vkSetBufferCollectionImageConstraintsFUCHSIA pfn_vkSetBufferCollectionImageConstraintsFUCHSIA;
	PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA pfn_vkSetBufferCollectionBufferConstraintsFUCHSIA;
	PFN_vkDestroyBufferCollectionFUCHSIA pfn_vkDestroyBufferCollectionFUCHSIA;
	PFN_vkGetBufferCollectionPropertiesFUCHSIA pfn_vkGetBufferCollectionPropertiesFUCHSIA;
#endif
#ifdef VK_EXT_transform_feedback
	PFN_vkCmdBindTransformFeedbackBuffersEXT pfn_vkCmdBindTransformFeedbackBuffersEXT;
	PFN_vkCmdBeginTransformFeedbackEXT pfn_vkCmdBeginTransformFeedbackEXT;
	PFN_vkCmdEndTransformFeedbackEXT pfn_vkCmdEndTransformFeedbackEXT;
	PFN_vkCmdBeginQueryIndexedEXT pfn_vkCmdBeginQueryIndexedEXT;
	PFN_vkCmdEndQueryIndexedEXT pfn_vkCmdEndQueryIndexedEXT;
	PFN_vkCmdDrawIndirectByteCountEXT pfn_vkCmdDrawIndirectByteCountEXT;
#endif
#ifdef VK_KHR_video_queue
	PFN_vkCreateVideoSessionKHR pfn_vkCreateVideoSessionKHR;
	PFN_vkDestroyVideoSessionKHR pfn_vkDestroyVideoSessionKHR;
	PFN_vkGetVideoSessionMemoryRequirementsKHR pfn_vkGetVideoSessionMemoryRequirementsKHR;
	PFN_vkBindVideoSessionMemoryKHR pfn_vkBindVideoSessionMemoryKHR;
	PFN_vkCreateVideoSessionParametersKHR pfn_vkCreateVideoSessionParametersKHR;
	PFN_vkUpdateVideoSessionParametersKHR pfn_vkUpdateVideoSessionParametersKHR;
	PFN_vkDestroyVideoSessionParametersKHR pfn_vkDestroyVideoSessionParametersKHR;
	PFN_vkCmdBeginVideoCodingKHR pfn_vkCmdBeginVideoCodingKHR;
	PFN_vkCmdEndVideoCodingKHR pfn_vkCmdEndVideoCodingKHR;
	PFN_vkCmdControlVideoCodingKHR pfn_vkCmdControlVideoCodingKHR;
#endif
#ifdef VK_EXT_vertex_input_dynamic_state
	PFN_vkCmdSetVertexInputEXT pfn_vkCmdSetVertexInputEXT;
#endif
#ifdef VK_GOOGLE_display_timing
	PFN_vkGetRefreshCycleDurationGOOGLE pfn_vkGetRefreshCycleDurationGOOGLE;
	PFN_vkGetPastPresentationTimingGOOGLE pfn_vkGetPastPresentationTimingGOOGLE;
#endif
#ifdef VK_KHR_present_wait
	PFN_vkWaitForPresentKHR pfn_vkWaitForPresentKHR;
#endif
#ifdef __cplusplus
	VkResult DeviceWaitIdle() {
		assert(pfn_vkDeviceWaitIdle && "vkDeviceWaitIdle is not loaded");
		return pfn_vkDeviceWaitIdle(this->handle);
	}

	void DestroyRenderPass(VkRenderPass renderPass, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyRenderPass && "vkDestroyRenderPass is not loaded");
		pfn_vkDestroyRenderPass(this->handle, renderPass, pAllocator);
	}

	VkDeviceAddress GetBufferDeviceAddress(const  VkBufferDeviceAddressInfo * pInfo) {
		assert(pfn_vkGetBufferDeviceAddress && "vkGetBufferDeviceAddress is not loaded");
		return pfn_vkGetBufferDeviceAddress(this->handle, pInfo);
	}

	VkResult BindBufferMemory2(uint32_t bindInfoCount, const  VkBindBufferMemoryInfo * pBindInfos) {
		assert(pfn_vkBindBufferMemory2 && "vkBindBufferMemory2 is not loaded");
		return pfn_vkBindBufferMemory2(this->handle, bindInfoCount, pBindInfos);
	}

	void GetDeviceImageSparseMemoryRequirements(const  VkDeviceImageMemoryRequirements * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements) {
		assert(pfn_vkGetDeviceImageSparseMemoryRequirements && "vkGetDeviceImageSparseMemoryRequirements is not loaded");
		pfn_vkGetDeviceImageSparseMemoryRequirements(this->handle, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
	}

	void DestroyImage(VkImage image, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyImage && "vkDestroyImage is not loaded");
		pfn_vkDestroyImage(this->handle, image, pAllocator);
	}

	VkResult WaitSemaphores(const  VkSemaphoreWaitInfo * pWaitInfo, uint64_t timeout) {
		assert(pfn_vkWaitSemaphores && "vkWaitSemaphores is not loaded");
		return pfn_vkWaitSemaphores(this->handle, pWaitInfo, timeout);
	}

	void GetDeviceBufferMemoryRequirements(const  VkDeviceBufferMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
		assert(pfn_vkGetDeviceBufferMemoryRequirements && "vkGetDeviceBufferMemoryRequirements is not loaded");
		pfn_vkGetDeviceBufferMemoryRequirements(this->handle, pInfo, pMemoryRequirements);
	}

	VkResult CreateBuffer(const  VkBufferCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkBuffer * pBuffer) {
		assert(pfn_vkCreateBuffer && "vkCreateBuffer is not loaded");
		return pfn_vkCreateBuffer(this->handle, pCreateInfo, pAllocator, pBuffer);
	}

	void DestroyDescriptorPool(VkDescriptorPool descriptorPool, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyDescriptorPool && "vkDestroyDescriptorPool is not loaded");
		pfn_vkDestroyDescriptorPool(this->handle, descriptorPool, pAllocator);
	}

	void DestroyEvent(VkEvent event, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyEvent && "vkDestroyEvent is not loaded");
		pfn_vkDestroyEvent(this->handle, event, pAllocator);
	}

	VkResult CreatePrivateDataSlot(const  VkPrivateDataSlotCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkPrivateDataSlot * pPrivateDataSlot) {
		assert(pfn_vkCreatePrivateDataSlot && "vkCreatePrivateDataSlot is not loaded");
		return pfn_vkCreatePrivateDataSlot(this->handle, pCreateInfo, pAllocator, pPrivateDataSlot);
	}

	void GetImageMemoryRequirements2(const  VkImageMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
		assert(pfn_vkGetImageMemoryRequirements2 && "vkGetImageMemoryRequirements2 is not loaded");
		pfn_vkGetImageMemoryRequirements2(this->handle, pInfo, pMemoryRequirements);
	}

	VkResult CreateSampler(const  VkSamplerCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSampler * pSampler) {
		assert(pfn_vkCreateSampler && "vkCreateSampler is not loaded");
		return pfn_vkCreateSampler(this->handle, pCreateInfo, pAllocator, pSampler);
	}

	void DestroyDescriptorUpdateTemplate(VkDescriptorUpdateTemplate descriptorUpdateTemplate, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyDescriptorUpdateTemplate && "vkDestroyDescriptorUpdateTemplate is not loaded");
		pfn_vkDestroyDescriptorUpdateTemplate(this->handle, descriptorUpdateTemplate, pAllocator);
	}

	void GetImageSparseMemoryRequirements(VkImage image, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements * pSparseMemoryRequirements) {
		assert(pfn_vkGetImageSparseMemoryRequirements && "vkGetImageSparseMemoryRequirements is not loaded");
		pfn_vkGetImageSparseMemoryRequirements(this->handle, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
	}

	VkResult SetEvent(VkEvent event) {
		assert(pfn_vkSetEvent && "vkSetEvent is not loaded");
		return pfn_vkSetEvent(this->handle, event);
	}

	VkResult ResetEvent(VkEvent event) {
		assert(pfn_vkResetEvent && "vkResetEvent is not loaded");
		return pfn_vkResetEvent(this->handle, event);
	}

	VkResult CreateSamplerYcbcrConversion(const  VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion) {
		assert(pfn_vkCreateSamplerYcbcrConversion && "vkCreateSamplerYcbcrConversion is not loaded");
		return pfn_vkCreateSamplerYcbcrConversion(this->handle, pCreateInfo, pAllocator, pYcbcrConversion);
	}

	void GetBufferMemoryRequirements(VkBuffer buffer, VkMemoryRequirements * pMemoryRequirements) {
		assert(pfn_vkGetBufferMemoryRequirements && "vkGetBufferMemoryRequirements is not loaded");
		pfn_vkGetBufferMemoryRequirements(this->handle, buffer, pMemoryRequirements);
	}

	VkResult ResetCommandPool(VkCommandPool commandPool, VkCommandPoolResetFlags flags) {
		assert(pfn_vkResetCommandPool && "vkResetCommandPool is not loaded");
		return pfn_vkResetCommandPool(this->handle, commandPool, flags);
	}

	void TrimCommandPool(VkCommandPool commandPool, VkCommandPoolTrimFlags flags) {
		assert(pfn_vkTrimCommandPool && "vkTrimCommandPool is not loaded");
		pfn_vkTrimCommandPool(this->handle, commandPool, flags);
	}

	void GetDeviceGroupPeerMemoryFeatures(uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags * pPeerMemoryFeatures) {
		assert(pfn_vkGetDeviceGroupPeerMemoryFeatures && "vkGetDeviceGroupPeerMemoryFeatures is not loaded");
		pfn_vkGetDeviceGroupPeerMemoryFeatures(this->handle, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
	}

	VkResult CreateGraphicsPipelines(VkPipelineCache pipelineCache, uint32_t createInfoCount, const  VkGraphicsPipelineCreateInfo * pCreateInfos, const  VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {
		assert(pfn_vkCreateGraphicsPipelines && "vkCreateGraphicsPipelines is not loaded");
		return pfn_vkCreateGraphicsPipelines(this->handle, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
	}

	void DestroyImageView(VkImageView imageView, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyImageView && "vkDestroyImageView is not loaded");
		pfn_vkDestroyImageView(this->handle, imageView, pAllocator);
	}

	void GetImageSparseMemoryRequirements2(const  VkImageSparseMemoryRequirementsInfo2 * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements) {
		assert(pfn_vkGetImageSparseMemoryRequirements2 && "vkGetImageSparseMemoryRequirements2 is not loaded");
		pfn_vkGetImageSparseMemoryRequirements2(this->handle, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
	}

	VkResult CreateDescriptorUpdateTemplate(const  VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate) {
		assert(pfn_vkCreateDescriptorUpdateTemplate && "vkCreateDescriptorUpdateTemplate is not loaded");
		return pfn_vkCreateDescriptorUpdateTemplate(this->handle, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
	}

	VkResult CreatePipelineCache(const  VkPipelineCacheCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkPipelineCache * pPipelineCache) {
		assert(pfn_vkCreatePipelineCache && "vkCreatePipelineCache is not loaded");
		return pfn_vkCreatePipelineCache(this->handle, pCreateInfo, pAllocator, pPipelineCache);
	}

	VkResult BindBufferMemory(VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) {
		assert(pfn_vkBindBufferMemory && "vkBindBufferMemory is not loaded");
		return pfn_vkBindBufferMemory(this->handle, buffer, memory, memoryOffset);
	}

	void UpdateDescriptorSetWithTemplate(VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const  void * pData) {
		assert(pfn_vkUpdateDescriptorSetWithTemplate && "vkUpdateDescriptorSetWithTemplate is not loaded");
		pfn_vkUpdateDescriptorSetWithTemplate(this->handle, descriptorSet, descriptorUpdateTemplate, pData);
	}

	VkResult ResetFences(uint32_t fenceCount, const  VkFence * pFences) {
		assert(pfn_vkResetFences && "vkResetFences is not loaded");
		return pfn_vkResetFences(this->handle, fenceCount, pFences);
	}

	VkResult AllocateMemory(const  VkMemoryAllocateInfo * pAllocateInfo, const  VkAllocationCallbacks * pAllocator, VkDeviceMemory * pMemory) {
		assert(pfn_vkAllocateMemory && "vkAllocateMemory is not loaded");
		return pfn_vkAllocateMemory(this->handle, pAllocateInfo, pAllocator, pMemory);
	}

	VkResult SetPrivateData(VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t data) {
		assert(pfn_vkSetPrivateData && "vkSetPrivateData is not loaded");
		return pfn_vkSetPrivateData(this->handle, objectType, objectHandle, privateDataSlot, data);
	}

	VkResult CreateImage(const  VkImageCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkImage * pImage) {
		assert(pfn_vkCreateImage && "vkCreateImage is not loaded");
		return pfn_vkCreateImage(this->handle, pCreateInfo, pAllocator, pImage);
	}

	VkResult CreateRenderPass2(const  VkRenderPassCreateInfo2 * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass) {
		assert(pfn_vkCreateRenderPass2 && "vkCreateRenderPass2 is not loaded");
		return pfn_vkCreateRenderPass2(this->handle, pCreateInfo, pAllocator, pRenderPass);
	}

	VkResult CreateQueryPool(const  VkQueryPoolCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkQueryPool * pQueryPool) {
		assert(pfn_vkCreateQueryPool && "vkCreateQueryPool is not loaded");
		return pfn_vkCreateQueryPool(this->handle, pCreateInfo, pAllocator, pQueryPool);
	}

	void DestroyBuffer(VkBuffer buffer, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyBuffer && "vkDestroyBuffer is not loaded");
		pfn_vkDestroyBuffer(this->handle, buffer, pAllocator);
	}

	void DestroyDevice(const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyDevice && "vkDestroyDevice is not loaded");
		pfn_vkDestroyDevice(this->handle, pAllocator);
	}

	void ResetQueryPool(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
		assert(pfn_vkResetQueryPool && "vkResetQueryPool is not loaded");
		pfn_vkResetQueryPool(this->handle, queryPool, firstQuery, queryCount);
	}

	VkResult MergePipelineCaches(VkPipelineCache dstCache, uint32_t srcCacheCount, const  VkPipelineCache * pSrcCaches) {
		assert(pfn_vkMergePipelineCaches && "vkMergePipelineCaches is not loaded");
		return pfn_vkMergePipelineCaches(this->handle, dstCache, srcCacheCount, pSrcCaches);
	}

	void FreeCommandBuffers(VkCommandPool commandPool, uint32_t commandBufferCount, const  VkCommandBuffer * pCommandBuffers) {
		assert(pfn_vkFreeCommandBuffers && "vkFreeCommandBuffers is not loaded");
		pfn_vkFreeCommandBuffers(this->handle, commandPool, commandBufferCount, pCommandBuffers);
	}

	void DestroyPipeline(VkPipeline pipeline, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyPipeline && "vkDestroyPipeline is not loaded");
		pfn_vkDestroyPipeline(this->handle, pipeline, pAllocator);
	}

	VkResult CreateBufferView(const  VkBufferViewCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkBufferView * pView) {
		assert(pfn_vkCreateBufferView && "vkCreateBufferView is not loaded");
		return pfn_vkCreateBufferView(this->handle, pCreateInfo, pAllocator, pView);
	}

	VkResult GetQueryPoolResults(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void * pData, VkDeviceSize stride, VkQueryResultFlags flags) {
		assert(pfn_vkGetQueryPoolResults && "vkGetQueryPoolResults is not loaded");
		return pfn_vkGetQueryPoolResults(this->handle, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
	}

	uint64_t GetDeviceMemoryOpaqueCaptureAddress(const  VkDeviceMemoryOpaqueCaptureAddressInfo * pInfo) {
		assert(pfn_vkGetDeviceMemoryOpaqueCaptureAddress && "vkGetDeviceMemoryOpaqueCaptureAddress is not loaded");
		return pfn_vkGetDeviceMemoryOpaqueCaptureAddress(this->handle, pInfo);
	}

	VkResult MapMemory(VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void * * ppData) {
		assert(pfn_vkMapMemory && "vkMapMemory is not loaded");
		return pfn_vkMapMemory(this->handle, memory, offset, size, flags, ppData);
	}

	VkResult FlushMappedMemoryRanges(uint32_t memoryRangeCount, const  VkMappedMemoryRange * pMemoryRanges) {
		assert(pfn_vkFlushMappedMemoryRanges && "vkFlushMappedMemoryRanges is not loaded");
		return pfn_vkFlushMappedMemoryRanges(this->handle, memoryRangeCount, pMemoryRanges);
	}

	void UpdateDescriptorSets(uint32_t descriptorWriteCount, const  VkWriteDescriptorSet * pDescriptorWrites, uint32_t descriptorCopyCount, const  VkCopyDescriptorSet * pDescriptorCopies) {
		assert(pfn_vkUpdateDescriptorSets && "vkUpdateDescriptorSets is not loaded");
		pfn_vkUpdateDescriptorSets(this->handle, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
	}

	VkResult CreateDescriptorSetLayout(const  VkDescriptorSetLayoutCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkDescriptorSetLayout * pSetLayout) {
		assert(pfn_vkCreateDescriptorSetLayout && "vkCreateDescriptorSetLayout is not loaded");
		return pfn_vkCreateDescriptorSetLayout(this->handle, pCreateInfo, pAllocator, pSetLayout);
	}

	void GetDeviceImageMemoryRequirements(const  VkDeviceImageMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
		assert(pfn_vkGetDeviceImageMemoryRequirements && "vkGetDeviceImageMemoryRequirements is not loaded");
		pfn_vkGetDeviceImageMemoryRequirements(this->handle, pInfo, pMemoryRequirements);
	}

	void DestroyPipelineLayout(VkPipelineLayout pipelineLayout, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyPipelineLayout && "vkDestroyPipelineLayout is not loaded");
		pfn_vkDestroyPipelineLayout(this->handle, pipelineLayout, pAllocator);
	}

	void DestroyPrivateDataSlot(VkPrivateDataSlot privateDataSlot, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyPrivateDataSlot && "vkDestroyPrivateDataSlot is not loaded");
		pfn_vkDestroyPrivateDataSlot(this->handle, privateDataSlot, pAllocator);
	}

	void DestroyFramebuffer(VkFramebuffer framebuffer, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyFramebuffer && "vkDestroyFramebuffer is not loaded");
		pfn_vkDestroyFramebuffer(this->handle, framebuffer, pAllocator);
	}

	void DestroyCommandPool(VkCommandPool commandPool, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyCommandPool && "vkDestroyCommandPool is not loaded");
		pfn_vkDestroyCommandPool(this->handle, commandPool, pAllocator);
	}

	VkResult CreateImageView(const  VkImageViewCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkImageView * pView) {
		assert(pfn_vkCreateImageView && "vkCreateImageView is not loaded");
		return pfn_vkCreateImageView(this->handle, pCreateInfo, pAllocator, pView);
	}

	void GetDeviceQueue2(const  VkDeviceQueueInfo2 * pQueueInfo, VkQueue * pQueue) {
		assert(pfn_vkGetDeviceQueue2 && "vkGetDeviceQueue2 is not loaded");
		pfn_vkGetDeviceQueue2(this->handle, pQueueInfo, pQueue);
	}

	void DestroyShaderModule(VkShaderModule shaderModule, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyShaderModule && "vkDestroyShaderModule is not loaded");
		pfn_vkDestroyShaderModule(this->handle, shaderModule, pAllocator);
	}

	VkResult InvalidateMappedMemoryRanges(uint32_t memoryRangeCount, const  VkMappedMemoryRange * pMemoryRanges) {
		assert(pfn_vkInvalidateMappedMemoryRanges && "vkInvalidateMappedMemoryRanges is not loaded");
		return pfn_vkInvalidateMappedMemoryRanges(this->handle, memoryRangeCount, pMemoryRanges);
	}

	VkResult CreateShaderModule(const  VkShaderModuleCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkShaderModule * pShaderModule) {
		assert(pfn_vkCreateShaderModule && "vkCreateShaderModule is not loaded");
		return pfn_vkCreateShaderModule(this->handle, pCreateInfo, pAllocator, pShaderModule);
	}

	void GetRenderAreaGranularity(VkRenderPass renderPass, VkExtent2D * pGranularity) {
		assert(pfn_vkGetRenderAreaGranularity && "vkGetRenderAreaGranularity is not loaded");
		pfn_vkGetRenderAreaGranularity(this->handle, renderPass, pGranularity);
	}

	void DestroySampler(VkSampler sampler, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroySampler && "vkDestroySampler is not loaded");
		pfn_vkDestroySampler(this->handle, sampler, pAllocator);
	}

	void GetPrivateData(VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t * pData) {
		assert(pfn_vkGetPrivateData && "vkGetPrivateData is not loaded");
		pfn_vkGetPrivateData(this->handle, objectType, objectHandle, privateDataSlot, pData);
	}

	void UnmapMemory(VkDeviceMemory memory) {
		assert(pfn_vkUnmapMemory && "vkUnmapMemory is not loaded");
		pfn_vkUnmapMemory(this->handle, memory);
	}

	void GetImageMemoryRequirements(VkImage image, VkMemoryRequirements * pMemoryRequirements) {
		assert(pfn_vkGetImageMemoryRequirements && "vkGetImageMemoryRequirements is not loaded");
		pfn_vkGetImageMemoryRequirements(this->handle, image, pMemoryRequirements);
	}

	VkResult CreateFramebuffer(const  VkFramebufferCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkFramebuffer * pFramebuffer) {
		assert(pfn_vkCreateFramebuffer && "vkCreateFramebuffer is not loaded");
		return pfn_vkCreateFramebuffer(this->handle, pCreateInfo, pAllocator, pFramebuffer);
	}

	void DestroySamplerYcbcrConversion(VkSamplerYcbcrConversion ycbcrConversion, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroySamplerYcbcrConversion && "vkDestroySamplerYcbcrConversion is not loaded");
		pfn_vkDestroySamplerYcbcrConversion(this->handle, ycbcrConversion, pAllocator);
	}

	void GetImageSubresourceLayout(VkImage image, const  VkImageSubresource * pSubresource, VkSubresourceLayout * pLayout) {
		assert(pfn_vkGetImageSubresourceLayout && "vkGetImageSubresourceLayout is not loaded");
		pfn_vkGetImageSubresourceLayout(this->handle, image, pSubresource, pLayout);
	}

	VkResult BindImageMemory(VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) {
		assert(pfn_vkBindImageMemory && "vkBindImageMemory is not loaded");
		return pfn_vkBindImageMemory(this->handle, image, memory, memoryOffset);
	}

	void DestroySemaphore(VkSemaphore semaphore, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroySemaphore && "vkDestroySemaphore is not loaded");
		pfn_vkDestroySemaphore(this->handle, semaphore, pAllocator);
	}

	void DestroyDescriptorSetLayout(VkDescriptorSetLayout descriptorSetLayout, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyDescriptorSetLayout && "vkDestroyDescriptorSetLayout is not loaded");
		pfn_vkDestroyDescriptorSetLayout(this->handle, descriptorSetLayout, pAllocator);
	}

	void GetDeviceQueue(uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue * pQueue) {
		assert(pfn_vkGetDeviceQueue && "vkGetDeviceQueue is not loaded");
		pfn_vkGetDeviceQueue(this->handle, queueFamilyIndex, queueIndex, pQueue);
	}

	void DestroyFence(VkFence fence, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyFence && "vkDestroyFence is not loaded");
		pfn_vkDestroyFence(this->handle, fence, pAllocator);
	}

	VkResult CreatePipelineLayout(const  VkPipelineLayoutCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkPipelineLayout * pPipelineLayout) {
		assert(pfn_vkCreatePipelineLayout && "vkCreatePipelineLayout is not loaded");
		return pfn_vkCreatePipelineLayout(this->handle, pCreateInfo, pAllocator, pPipelineLayout);
	}

	VkResult SignalSemaphore(const  VkSemaphoreSignalInfo * pSignalInfo) {
		assert(pfn_vkSignalSemaphore && "vkSignalSemaphore is not loaded");
		return pfn_vkSignalSemaphore(this->handle, pSignalInfo);
	}

	void DestroyPipelineCache(VkPipelineCache pipelineCache, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyPipelineCache && "vkDestroyPipelineCache is not loaded");
		pfn_vkDestroyPipelineCache(this->handle, pipelineCache, pAllocator);
	}

	VkResult GetEventStatus(VkEvent event) {
		assert(pfn_vkGetEventStatus && "vkGetEventStatus is not loaded");
		return pfn_vkGetEventStatus(this->handle, event);
	}

	void GetBufferMemoryRequirements2(const  VkBufferMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
		assert(pfn_vkGetBufferMemoryRequirements2 && "vkGetBufferMemoryRequirements2 is not loaded");
		pfn_vkGetBufferMemoryRequirements2(this->handle, pInfo, pMemoryRequirements);
	}

	VkResult ResetDescriptorPool(VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags) {
		assert(pfn_vkResetDescriptorPool && "vkResetDescriptorPool is not loaded");
		return pfn_vkResetDescriptorPool(this->handle, descriptorPool, flags);
	}

	VkResult CreateEvent(const  VkEventCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkEvent * pEvent) {
		assert(pfn_vkCreateEvent && "vkCreateEvent is not loaded");
		return pfn_vkCreateEvent(this->handle, pCreateInfo, pAllocator, pEvent);
	}

	void DestroyBufferView(VkBufferView bufferView, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyBufferView && "vkDestroyBufferView is not loaded");
		pfn_vkDestroyBufferView(this->handle, bufferView, pAllocator);
	}

	VkResult FreeDescriptorSets(VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const  VkDescriptorSet * pDescriptorSets) {
		assert(pfn_vkFreeDescriptorSets && "vkFreeDescriptorSets is not loaded");
		return pfn_vkFreeDescriptorSets(this->handle, descriptorPool, descriptorSetCount, pDescriptorSets);
	}

	VkResult CreateSemaphore(const  VkSemaphoreCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSemaphore * pSemaphore) {
		assert(pfn_vkCreateSemaphore && "vkCreateSemaphore is not loaded");
		return pfn_vkCreateSemaphore(this->handle, pCreateInfo, pAllocator, pSemaphore);
	}

	VkResult CreateFence(const  VkFenceCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkFence * pFence) {
		assert(pfn_vkCreateFence && "vkCreateFence is not loaded");
		return pfn_vkCreateFence(this->handle, pCreateInfo, pAllocator, pFence);
	}

	VkResult GetPipelineCacheData(VkPipelineCache pipelineCache, size_t * pDataSize, void * pData) {
		assert(pfn_vkGetPipelineCacheData && "vkGetPipelineCacheData is not loaded");
		return pfn_vkGetPipelineCacheData(this->handle, pipelineCache, pDataSize, pData);
	}

	VkResult WaitForFences(uint32_t fenceCount, const  VkFence * pFences, VkBool32 waitAll, uint64_t timeout) {
		assert(pfn_vkWaitForFences && "vkWaitForFences is not loaded");
		return pfn_vkWaitForFences(this->handle, fenceCount, pFences, waitAll, timeout);
	}

	VkResult BindImageMemory2(uint32_t bindInfoCount, const  VkBindImageMemoryInfo * pBindInfos) {
		assert(pfn_vkBindImageMemory2 && "vkBindImageMemory2 is not loaded");
		return pfn_vkBindImageMemory2(this->handle, bindInfoCount, pBindInfos);
	}

	VkResult CreateDescriptorPool(const  VkDescriptorPoolCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkDescriptorPool * pDescriptorPool) {
		assert(pfn_vkCreateDescriptorPool && "vkCreateDescriptorPool is not loaded");
		return pfn_vkCreateDescriptorPool(this->handle, pCreateInfo, pAllocator, pDescriptorPool);
	}

	VkResult AllocateDescriptorSets(const  VkDescriptorSetAllocateInfo * pAllocateInfo, VkDescriptorSet * pDescriptorSets) {
		assert(pfn_vkAllocateDescriptorSets && "vkAllocateDescriptorSets is not loaded");
		return pfn_vkAllocateDescriptorSets(this->handle, pAllocateInfo, pDescriptorSets);
	}

	uint64_t GetBufferOpaqueCaptureAddress(const  VkBufferDeviceAddressInfo * pInfo) {
		assert(pfn_vkGetBufferOpaqueCaptureAddress && "vkGetBufferOpaqueCaptureAddress is not loaded");
		return pfn_vkGetBufferOpaqueCaptureAddress(this->handle, pInfo);
	}

	void GetDescriptorSetLayoutSupport(const  VkDescriptorSetLayoutCreateInfo * pCreateInfo, VkDescriptorSetLayoutSupport * pSupport) {
		assert(pfn_vkGetDescriptorSetLayoutSupport && "vkGetDescriptorSetLayoutSupport is not loaded");
		pfn_vkGetDescriptorSetLayoutSupport(this->handle, pCreateInfo, pSupport);
	}

	VkResult CreateRenderPass(const  VkRenderPassCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass) {
		assert(pfn_vkCreateRenderPass && "vkCreateRenderPass is not loaded");
		return pfn_vkCreateRenderPass(this->handle, pCreateInfo, pAllocator, pRenderPass);
	}

	void FreeMemory(VkDeviceMemory memory, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkFreeMemory && "vkFreeMemory is not loaded");
		pfn_vkFreeMemory(this->handle, memory, pAllocator);
	}

	void GetDeviceMemoryCommitment(VkDeviceMemory memory, VkDeviceSize * pCommittedMemoryInBytes) {
		assert(pfn_vkGetDeviceMemoryCommitment && "vkGetDeviceMemoryCommitment is not loaded");
		pfn_vkGetDeviceMemoryCommitment(this->handle, memory, pCommittedMemoryInBytes);
	}

	void DestroyQueryPool(VkQueryPool queryPool, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyQueryPool && "vkDestroyQueryPool is not loaded");
		pfn_vkDestroyQueryPool(this->handle, queryPool, pAllocator);
	}

	VkResult GetFenceStatus(VkFence fence) {
		assert(pfn_vkGetFenceStatus && "vkGetFenceStatus is not loaded");
		return pfn_vkGetFenceStatus(this->handle, fence);
	}

	VkResult AllocateCommandBuffers(const  VkCommandBufferAllocateInfo * pAllocateInfo, VkCommandBuffer * pCommandBuffers) {
		assert(pfn_vkAllocateCommandBuffers && "vkAllocateCommandBuffers is not loaded");
		return pfn_vkAllocateCommandBuffers(this->handle, pAllocateInfo, pCommandBuffers);
	}

	VkResult CreateComputePipelines(VkPipelineCache pipelineCache, uint32_t createInfoCount, const  VkComputePipelineCreateInfo * pCreateInfos, const  VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {
		assert(pfn_vkCreateComputePipelines && "vkCreateComputePipelines is not loaded");
		return pfn_vkCreateComputePipelines(this->handle, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
	}

	VkResult CreateCommandPool(const  VkCommandPoolCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkCommandPool * pCommandPool) {
		assert(pfn_vkCreateCommandPool && "vkCreateCommandPool is not loaded");
		return pfn_vkCreateCommandPool(this->handle, pCreateInfo, pAllocator, pCommandPool);
	}

	VkResult GetSemaphoreCounterValue(VkSemaphore semaphore, uint64_t * pValue) {
		assert(pfn_vkGetSemaphoreCounterValue && "vkGetSemaphoreCounterValue is not loaded");
		return pfn_vkGetSemaphoreCounterValue(this->handle, semaphore, pValue);
	}

#ifdef VK_AMD_shader_info
	VkResult GetShaderInfoAMD(VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t * pInfoSize, void * pInfo) {
		assert(pfn_vkGetShaderInfoAMD && "vkGetShaderInfoAMD is not loaded");
		return pfn_vkGetShaderInfoAMD(this->handle, pipeline, shaderStage, infoType, pInfoSize, pInfo);
	}

#endif
#ifdef VK_KHR_external_fence_fd
	VkResult ImportFenceFdKHR(const  VkImportFenceFdInfoKHR * pImportFenceFdInfo) {
		assert(pfn_vkImportFenceFdKHR && "vkImportFenceFdKHR is not loaded");
		return pfn_vkImportFenceFdKHR(this->handle, pImportFenceFdInfo);
	}

	VkResult GetFenceFdKHR(const  VkFenceGetFdInfoKHR * pGetFdInfo, int * pFd) {
		assert(pfn_vkGetFenceFdKHR && "vkGetFenceFdKHR is not loaded");
		return pfn_vkGetFenceFdKHR(this->handle, pGetFdInfo, pFd);
	}

#endif
#ifdef VK_EXT_debug_marker
	VkResult DebugMarkerSetObjectTagEXT(const  VkDebugMarkerObjectTagInfoEXT * pTagInfo) {
		assert(pfn_vkDebugMarkerSetObjectTagEXT && "vkDebugMarkerSetObjectTagEXT is not loaded");
		return pfn_vkDebugMarkerSetObjectTagEXT(this->handle, pTagInfo);
	}

	VkResult DebugMarkerSetObjectNameEXT(const  VkDebugMarkerObjectNameInfoEXT * pNameInfo) {
		assert(pfn_vkDebugMarkerSetObjectNameEXT && "vkDebugMarkerSetObjectNameEXT is not loaded");
		return pfn_vkDebugMarkerSetObjectNameEXT(this->handle, pNameInfo);
	}

#endif
#ifdef VK_KHR_shared_presentable_image
	VkResult GetSwapchainStatusKHR(VkSwapchainKHR swapchain) {
		assert(pfn_vkGetSwapchainStatusKHR && "vkGetSwapchainStatusKHR is not loaded");
		return pfn_vkGetSwapchainStatusKHR(this->handle, swapchain);
	}

#endif
#ifdef VK_INTEL_performance_query
	VkResult InitializePerformanceApiINTEL(const  VkInitializePerformanceApiInfoINTEL * pInitializeInfo) {
		assert(pfn_vkInitializePerformanceApiINTEL && "vkInitializePerformanceApiINTEL is not loaded");
		return pfn_vkInitializePerformanceApiINTEL(this->handle, pInitializeInfo);
	}

	void UninitializePerformanceApiINTEL() {
		assert(pfn_vkUninitializePerformanceApiINTEL && "vkUninitializePerformanceApiINTEL is not loaded");
		pfn_vkUninitializePerformanceApiINTEL(this->handle);
	}

	VkResult AcquirePerformanceConfigurationINTEL(const  VkPerformanceConfigurationAcquireInfoINTEL * pAcquireInfo, VkPerformanceConfigurationINTEL * pConfiguration) {
		assert(pfn_vkAcquirePerformanceConfigurationINTEL && "vkAcquirePerformanceConfigurationINTEL is not loaded");
		return pfn_vkAcquirePerformanceConfigurationINTEL(this->handle, pAcquireInfo, pConfiguration);
	}

	VkResult ReleasePerformanceConfigurationINTEL(VkPerformanceConfigurationINTEL configuration) {
		assert(pfn_vkReleasePerformanceConfigurationINTEL && "vkReleasePerformanceConfigurationINTEL is not loaded");
		return pfn_vkReleasePerformanceConfigurationINTEL(this->handle, configuration);
	}

	VkResult GetPerformanceParameterINTEL(VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL * pValue) {
		assert(pfn_vkGetPerformanceParameterINTEL && "vkGetPerformanceParameterINTEL is not loaded");
		return pfn_vkGetPerformanceParameterINTEL(this->handle, parameter, pValue);
	}

#endif
#ifdef VK_ANDROID_external_memory_android_hardware_buffer
	VkResult GetAndroidHardwareBufferPropertiesANDROID(const struct AHardwareBuffer * buffer, VkAndroidHardwareBufferPropertiesANDROID * pProperties) {
		assert(pfn_vkGetAndroidHardwareBufferPropertiesANDROID && "vkGetAndroidHardwareBufferPropertiesANDROID is not loaded");
		return pfn_vkGetAndroidHardwareBufferPropertiesANDROID(this->handle, buffer, pProperties);
	}

	VkResult GetMemoryAndroidHardwareBufferANDROID(const  VkMemoryGetAndroidHardwareBufferInfoANDROID * pInfo, struct AHardwareBuffer * * pBuffer) {
		assert(pfn_vkGetMemoryAndroidHardwareBufferANDROID && "vkGetMemoryAndroidHardwareBufferANDROID is not loaded");
		return pfn_vkGetMemoryAndroidHardwareBufferANDROID(this->handle, pInfo, pBuffer);
	}

#endif
#ifdef VK_KHR_pipeline_executable_properties
	VkResult GetPipelineExecutablePropertiesKHR(const  VkPipelineInfoKHR * pPipelineInfo, uint32_t * pExecutableCount, VkPipelineExecutablePropertiesKHR * pProperties) {
		assert(pfn_vkGetPipelineExecutablePropertiesKHR && "vkGetPipelineExecutablePropertiesKHR is not loaded");
		return pfn_vkGetPipelineExecutablePropertiesKHR(this->handle, pPipelineInfo, pExecutableCount, pProperties);
	}

	VkResult GetPipelineExecutableStatisticsKHR(const  VkPipelineExecutableInfoKHR * pExecutableInfo, uint32_t * pStatisticCount, VkPipelineExecutableStatisticKHR * pStatistics) {
		assert(pfn_vkGetPipelineExecutableStatisticsKHR && "vkGetPipelineExecutableStatisticsKHR is not loaded");
		return pfn_vkGetPipelineExecutableStatisticsKHR(this->handle, pExecutableInfo, pStatisticCount, pStatistics);
	}

	VkResult GetPipelineExecutableInternalRepresentationsKHR(const  VkPipelineExecutableInfoKHR * pExecutableInfo, uint32_t * pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR * pInternalRepresentations) {
		assert(pfn_vkGetPipelineExecutableInternalRepresentationsKHR && "vkGetPipelineExecutableInternalRepresentationsKHR is not loaded");
		return pfn_vkGetPipelineExecutableInternalRepresentationsKHR(this->handle, pExecutableInfo, pInternalRepresentationCount, pInternalRepresentations);
	}

#endif
#ifdef VK_EXT_display_control
	VkResult DisplayPowerControlEXT(VkDisplayKHR display, const  VkDisplayPowerInfoEXT * pDisplayPowerInfo) {
		assert(pfn_vkDisplayPowerControlEXT && "vkDisplayPowerControlEXT is not loaded");
		return pfn_vkDisplayPowerControlEXT(this->handle, display, pDisplayPowerInfo);
	}

	VkResult RegisterDeviceEventEXT(const  VkDeviceEventInfoEXT * pDeviceEventInfo, const  VkAllocationCallbacks * pAllocator, VkFence * pFence) {
		assert(pfn_vkRegisterDeviceEventEXT && "vkRegisterDeviceEventEXT is not loaded");
		return pfn_vkRegisterDeviceEventEXT(this->handle, pDeviceEventInfo, pAllocator, pFence);
	}

	VkResult RegisterDisplayEventEXT(VkDisplayKHR display, const  VkDisplayEventInfoEXT * pDisplayEventInfo, const  VkAllocationCallbacks * pAllocator, VkFence * pFence) {
		assert(pfn_vkRegisterDisplayEventEXT && "vkRegisterDisplayEventEXT is not loaded");
		return pfn_vkRegisterDisplayEventEXT(this->handle, display, pDisplayEventInfo, pAllocator, pFence);
	}

	VkResult GetSwapchainCounterEXT(VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t * pCounterValue) {
		assert(pfn_vkGetSwapchainCounterEXT && "vkGetSwapchainCounterEXT is not loaded");
		return pfn_vkGetSwapchainCounterEXT(this->handle, swapchain, counter, pCounterValue);
	}

#endif
#ifdef VK_FUCHSIA_external_memory
	VkResult GetMemoryZirconHandleFUCHSIA(const  VkMemoryGetZirconHandleInfoFUCHSIA * pGetZirconHandleInfo, zx_handle_t * pZirconHandle) {
		assert(pfn_vkGetMemoryZirconHandleFUCHSIA && "vkGetMemoryZirconHandleFUCHSIA is not loaded");
		return pfn_vkGetMemoryZirconHandleFUCHSIA(this->handle, pGetZirconHandleInfo, pZirconHandle);
	}

	VkResult GetMemoryZirconHandlePropertiesFUCHSIA(VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle, VkMemoryZirconHandlePropertiesFUCHSIA * pMemoryZirconHandleProperties) {
		assert(pfn_vkGetMemoryZirconHandlePropertiesFUCHSIA && "vkGetMemoryZirconHandlePropertiesFUCHSIA is not loaded");
		return pfn_vkGetMemoryZirconHandlePropertiesFUCHSIA(this->handle, handleType, zirconHandle, pMemoryZirconHandleProperties);
	}

#endif
#ifdef VK_HUAWEI_subpass_shading
	VkResult GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(VkRenderPass renderpass, VkExtent2D * pMaxWorkgroupSize) {
		assert(pfn_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI && "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI is not loaded");
		return pfn_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(this->handle, renderpass, pMaxWorkgroupSize);
	}

#endif
#ifdef VK_AMD_display_native_hdr
	void SetLocalDimmingAMD(VkSwapchainKHR swapChain, VkBool32 localDimmingEnable) {
		assert(pfn_vkSetLocalDimmingAMD && "vkSetLocalDimmingAMD is not loaded");
		pfn_vkSetLocalDimmingAMD(this->handle, swapChain, localDimmingEnable);
	}

#endif
#ifdef VK_NVX_image_view_handle
	uint32_t GetImageViewHandleNVX(const  VkImageViewHandleInfoNVX * pInfo) {
		assert(pfn_vkGetImageViewHandleNVX && "vkGetImageViewHandleNVX is not loaded");
		return pfn_vkGetImageViewHandleNVX(this->handle, pInfo);
	}

	VkResult GetImageViewAddressNVX(VkImageView imageView, VkImageViewAddressPropertiesNVX * pProperties) {
		assert(pfn_vkGetImageViewAddressNVX && "vkGetImageViewAddressNVX is not loaded");
		return pfn_vkGetImageViewAddressNVX(this->handle, imageView, pProperties);
	}

#endif
#ifdef VK_KHR_external_fence_win32
	VkResult ImportFenceWin32HandleKHR(const  VkImportFenceWin32HandleInfoKHR * pImportFenceWin32HandleInfo) {
		assert(pfn_vkImportFenceWin32HandleKHR && "vkImportFenceWin32HandleKHR is not loaded");
		return pfn_vkImportFenceWin32HandleKHR(this->handle, pImportFenceWin32HandleInfo);
	}

	VkResult GetFenceWin32HandleKHR(const  VkFenceGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle) {
		assert(pfn_vkGetFenceWin32HandleKHR && "vkGetFenceWin32HandleKHR is not loaded");
		return pfn_vkGetFenceWin32HandleKHR(this->handle, pGetWin32HandleInfo, pHandle);
	}

#endif
#ifdef VK_FUCHSIA_external_semaphore
	VkResult ImportSemaphoreZirconHandleFUCHSIA(const  VkImportSemaphoreZirconHandleInfoFUCHSIA * pImportSemaphoreZirconHandleInfo) {
		assert(pfn_vkImportSemaphoreZirconHandleFUCHSIA && "vkImportSemaphoreZirconHandleFUCHSIA is not loaded");
		return pfn_vkImportSemaphoreZirconHandleFUCHSIA(this->handle, pImportSemaphoreZirconHandleInfo);
	}

	VkResult GetSemaphoreZirconHandleFUCHSIA(const  VkSemaphoreGetZirconHandleInfoFUCHSIA * pGetZirconHandleInfo, zx_handle_t * pZirconHandle) {
		assert(pfn_vkGetSemaphoreZirconHandleFUCHSIA && "vkGetSemaphoreZirconHandleFUCHSIA is not loaded");
		return pfn_vkGetSemaphoreZirconHandleFUCHSIA(this->handle, pGetZirconHandleInfo, pZirconHandle);
	}

#endif
#ifdef VK_EXT_hdr_metadata
	void SetHdrMetadataEXT(uint32_t swapchainCount, const  VkSwapchainKHR * pSwapchains, const  VkHdrMetadataEXT * pMetadata) {
		assert(pfn_vkSetHdrMetadataEXT && "vkSetHdrMetadataEXT is not loaded");
		pfn_vkSetHdrMetadataEXT(this->handle, swapchainCount, pSwapchains, pMetadata);
	}

#endif
#ifdef VK_KHR_performance_query
	VkResult AcquireProfilingLockKHR(const  VkAcquireProfilingLockInfoKHR * pInfo) {
		assert(pfn_vkAcquireProfilingLockKHR && "vkAcquireProfilingLockKHR is not loaded");
		return pfn_vkAcquireProfilingLockKHR(this->handle, pInfo);
	}

	void ReleaseProfilingLockKHR() {
		assert(pfn_vkReleaseProfilingLockKHR && "vkReleaseProfilingLockKHR is not loaded");
		pfn_vkReleaseProfilingLockKHR(this->handle);
	}

#endif
#ifdef VK_KHR_external_semaphore_fd
	VkResult ImportSemaphoreFdKHR(const  VkImportSemaphoreFdInfoKHR * pImportSemaphoreFdInfo) {
		assert(pfn_vkImportSemaphoreFdKHR && "vkImportSemaphoreFdKHR is not loaded");
		return pfn_vkImportSemaphoreFdKHR(this->handle, pImportSemaphoreFdInfo);
	}

	VkResult GetSemaphoreFdKHR(const  VkSemaphoreGetFdInfoKHR * pGetFdInfo, int * pFd) {
		assert(pfn_vkGetSemaphoreFdKHR && "vkGetSemaphoreFdKHR is not loaded");
		return pfn_vkGetSemaphoreFdKHR(this->handle, pGetFdInfo, pFd);
	}

#endif
#ifdef VK_EXT_calibrated_timestamps
	VkResult GetCalibratedTimestampsEXT(uint32_t timestampCount, const  VkCalibratedTimestampInfoEXT * pTimestampInfos, uint64_t * pTimestamps, uint64_t * pMaxDeviation) {
		assert(pfn_vkGetCalibratedTimestampsEXT && "vkGetCalibratedTimestampsEXT is not loaded");
		return pfn_vkGetCalibratedTimestampsEXT(this->handle, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
	}

#endif
#ifdef VK_EXT_external_memory_host
	VkResult GetMemoryHostPointerPropertiesEXT(VkExternalMemoryHandleTypeFlagBits handleType, const  void * pHostPointer, VkMemoryHostPointerPropertiesEXT * pMemoryHostPointerProperties) {
		assert(pfn_vkGetMemoryHostPointerPropertiesEXT && "vkGetMemoryHostPointerPropertiesEXT is not loaded");
		return pfn_vkGetMemoryHostPointerPropertiesEXT(this->handle, handleType, pHostPointer, pMemoryHostPointerProperties);
	}

#endif
#ifdef VK_NVX_binary_import
	VkResult CreateCuModuleNVX(const  VkCuModuleCreateInfoNVX * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkCuModuleNVX * pModule) {
		assert(pfn_vkCreateCuModuleNVX && "vkCreateCuModuleNVX is not loaded");
		return pfn_vkCreateCuModuleNVX(this->handle, pCreateInfo, pAllocator, pModule);
	}

	VkResult CreateCuFunctionNVX(const  VkCuFunctionCreateInfoNVX * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkCuFunctionNVX * pFunction) {
		assert(pfn_vkCreateCuFunctionNVX && "vkCreateCuFunctionNVX is not loaded");
		return pfn_vkCreateCuFunctionNVX(this->handle, pCreateInfo, pAllocator, pFunction);
	}

	void DestroyCuModuleNVX(VkCuModuleNVX module, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyCuModuleNVX && "vkDestroyCuModuleNVX is not loaded");
		pfn_vkDestroyCuModuleNVX(this->handle, module, pAllocator);
	}

	void DestroyCuFunctionNVX(VkCuFunctionNVX function, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyCuFunctionNVX && "vkDestroyCuFunctionNVX is not loaded");
		pfn_vkDestroyCuFunctionNVX(this->handle, function, pAllocator);
	}

#endif
#ifdef VK_KHR_external_memory_win32
	VkResult GetMemoryWin32HandleKHR(const  VkMemoryGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle) {
		assert(pfn_vkGetMemoryWin32HandleKHR && "vkGetMemoryWin32HandleKHR is not loaded");
		return pfn_vkGetMemoryWin32HandleKHR(this->handle, pGetWin32HandleInfo, pHandle);
	}

	VkResult GetMemoryWin32HandlePropertiesKHR(VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR * pMemoryWin32HandleProperties) {
		assert(pfn_vkGetMemoryWin32HandlePropertiesKHR && "vkGetMemoryWin32HandlePropertiesKHR is not loaded");
		return pfn_vkGetMemoryWin32HandlePropertiesKHR(this->handle, handleType, handle, pMemoryWin32HandleProperties);
	}

#endif
#ifdef VK_EXT_validation_cache
	VkResult CreateValidationCacheEXT(const  VkValidationCacheCreateInfoEXT * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkValidationCacheEXT * pValidationCache) {
		assert(pfn_vkCreateValidationCacheEXT && "vkCreateValidationCacheEXT is not loaded");
		return pfn_vkCreateValidationCacheEXT(this->handle, pCreateInfo, pAllocator, pValidationCache);
	}

	void DestroyValidationCacheEXT(VkValidationCacheEXT validationCache, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyValidationCacheEXT && "vkDestroyValidationCacheEXT is not loaded");
		pfn_vkDestroyValidationCacheEXT(this->handle, validationCache, pAllocator);
	}

	VkResult MergeValidationCachesEXT(VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const  VkValidationCacheEXT * pSrcCaches) {
		assert(pfn_vkMergeValidationCachesEXT && "vkMergeValidationCachesEXT is not loaded");
		return pfn_vkMergeValidationCachesEXT(this->handle, dstCache, srcCacheCount, pSrcCaches);
	}

	VkResult GetValidationCacheDataEXT(VkValidationCacheEXT validationCache, size_t * pDataSize, void * pData) {
		assert(pfn_vkGetValidationCacheDataEXT && "vkGetValidationCacheDataEXT is not loaded");
		return pfn_vkGetValidationCacheDataEXT(this->handle, validationCache, pDataSize, pData);
	}

#endif
#ifdef VK_KHR_acceleration_structure
	VkResult CreateAccelerationStructureKHR(const  VkAccelerationStructureCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkAccelerationStructureKHR * pAccelerationStructure) {
		assert(pfn_vkCreateAccelerationStructureKHR && "vkCreateAccelerationStructureKHR is not loaded");
		return pfn_vkCreateAccelerationStructureKHR(this->handle, pCreateInfo, pAllocator, pAccelerationStructure);
	}

	void DestroyAccelerationStructureKHR(VkAccelerationStructureKHR accelerationStructure, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyAccelerationStructureKHR && "vkDestroyAccelerationStructureKHR is not loaded");
		pfn_vkDestroyAccelerationStructureKHR(this->handle, accelerationStructure, pAllocator);
	}

	VkResult BuildAccelerationStructuresKHR(VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const  VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const  VkAccelerationStructureBuildRangeInfoKHR * const * ppBuildRangeInfos) {
		assert(pfn_vkBuildAccelerationStructuresKHR && "vkBuildAccelerationStructuresKHR is not loaded");
		return pfn_vkBuildAccelerationStructuresKHR(this->handle, deferredOperation, infoCount, pInfos, ppBuildRangeInfos);
	}

	VkResult CopyAccelerationStructureKHR(VkDeferredOperationKHR deferredOperation, const  VkCopyAccelerationStructureInfoKHR * pInfo) {
		assert(pfn_vkCopyAccelerationStructureKHR && "vkCopyAccelerationStructureKHR is not loaded");
		return pfn_vkCopyAccelerationStructureKHR(this->handle, deferredOperation, pInfo);
	}

	VkResult CopyAccelerationStructureToMemoryKHR(VkDeferredOperationKHR deferredOperation, const  VkCopyAccelerationStructureToMemoryInfoKHR * pInfo) {
		assert(pfn_vkCopyAccelerationStructureToMemoryKHR && "vkCopyAccelerationStructureToMemoryKHR is not loaded");
		return pfn_vkCopyAccelerationStructureToMemoryKHR(this->handle, deferredOperation, pInfo);
	}

	VkResult CopyMemoryToAccelerationStructureKHR(VkDeferredOperationKHR deferredOperation, const  VkCopyMemoryToAccelerationStructureInfoKHR * pInfo) {
		assert(pfn_vkCopyMemoryToAccelerationStructureKHR && "vkCopyMemoryToAccelerationStructureKHR is not loaded");
		return pfn_vkCopyMemoryToAccelerationStructureKHR(this->handle, deferredOperation, pInfo);
	}

	VkResult WriteAccelerationStructuresPropertiesKHR(uint32_t accelerationStructureCount, const  VkAccelerationStructureKHR * pAccelerationStructures, VkQueryType queryType, size_t dataSize, void * pData, size_t stride) {
		assert(pfn_vkWriteAccelerationStructuresPropertiesKHR && "vkWriteAccelerationStructuresPropertiesKHR is not loaded");
		return pfn_vkWriteAccelerationStructuresPropertiesKHR(this->handle, accelerationStructureCount, pAccelerationStructures, queryType, dataSize, pData, stride);
	}

	VkDeviceAddress GetAccelerationStructureDeviceAddressKHR(const  VkAccelerationStructureDeviceAddressInfoKHR * pInfo) {
		assert(pfn_vkGetAccelerationStructureDeviceAddressKHR && "vkGetAccelerationStructureDeviceAddressKHR is not loaded");
		return pfn_vkGetAccelerationStructureDeviceAddressKHR(this->handle, pInfo);
	}

	void GetDeviceAccelerationStructureCompatibilityKHR(const  VkAccelerationStructureVersionInfoKHR * pVersionInfo, VkAccelerationStructureCompatibilityKHR * pCompatibility) {
		assert(pfn_vkGetDeviceAccelerationStructureCompatibilityKHR && "vkGetDeviceAccelerationStructureCompatibilityKHR is not loaded");
		pfn_vkGetDeviceAccelerationStructureCompatibilityKHR(this->handle, pVersionInfo, pCompatibility);
	}

	void GetAccelerationStructureBuildSizesKHR(VkAccelerationStructureBuildTypeKHR buildType, const  VkAccelerationStructureBuildGeometryInfoKHR * pBuildInfo, const  uint32_t * pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR * pSizeInfo) {
		assert(pfn_vkGetAccelerationStructureBuildSizesKHR && "vkGetAccelerationStructureBuildSizesKHR is not loaded");
		pfn_vkGetAccelerationStructureBuildSizesKHR(this->handle, buildType, pBuildInfo, pMaxPrimitiveCounts, pSizeInfo);
	}

#endif
#ifdef VK_KHR_swapchain
	VkResult CreateSwapchainKHR(const  VkSwapchainCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchain) {
		assert(pfn_vkCreateSwapchainKHR && "vkCreateSwapchainKHR is not loaded");
		return pfn_vkCreateSwapchainKHR(this->handle, pCreateInfo, pAllocator, pSwapchain);
	}

	void DestroySwapchainKHR(VkSwapchainKHR swapchain, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroySwapchainKHR && "vkDestroySwapchainKHR is not loaded");
		pfn_vkDestroySwapchainKHR(this->handle, swapchain, pAllocator);
	}

	VkResult GetSwapchainImagesKHR(VkSwapchainKHR swapchain, uint32_t * pSwapchainImageCount, VkImage * pSwapchainImages) {
		assert(pfn_vkGetSwapchainImagesKHR && "vkGetSwapchainImagesKHR is not loaded");
		return pfn_vkGetSwapchainImagesKHR(this->handle, swapchain, pSwapchainImageCount, pSwapchainImages);
	}

	VkResult AcquireNextImageKHR(VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t * pImageIndex) {
		assert(pfn_vkAcquireNextImageKHR && "vkAcquireNextImageKHR is not loaded");
		return pfn_vkAcquireNextImageKHR(this->handle, swapchain, timeout, semaphore, fence, pImageIndex);
	}

	VkResult GetDeviceGroupPresentCapabilitiesKHR(VkDeviceGroupPresentCapabilitiesKHR * pDeviceGroupPresentCapabilities) {
		assert(pfn_vkGetDeviceGroupPresentCapabilitiesKHR && "vkGetDeviceGroupPresentCapabilitiesKHR is not loaded");
		return pfn_vkGetDeviceGroupPresentCapabilitiesKHR(this->handle, pDeviceGroupPresentCapabilities);
	}

	VkResult GetDeviceGroupSurfacePresentModesKHR(VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR * pModes) {
		assert(pfn_vkGetDeviceGroupSurfacePresentModesKHR && "vkGetDeviceGroupSurfacePresentModesKHR is not loaded");
		return pfn_vkGetDeviceGroupSurfacePresentModesKHR(this->handle, surface, pModes);
	}

	VkResult AcquireNextImage2KHR(const  VkAcquireNextImageInfoKHR * pAcquireInfo, uint32_t * pImageIndex) {
		assert(pfn_vkAcquireNextImage2KHR && "vkAcquireNextImage2KHR is not loaded");
		return pfn_vkAcquireNextImage2KHR(this->handle, pAcquireInfo, pImageIndex);
	}

#endif
#ifdef VK_NV_ray_tracing
	VkResult CreateAccelerationStructureNV(const  VkAccelerationStructureCreateInfoNV * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkAccelerationStructureNV * pAccelerationStructure) {
		assert(pfn_vkCreateAccelerationStructureNV && "vkCreateAccelerationStructureNV is not loaded");
		return pfn_vkCreateAccelerationStructureNV(this->handle, pCreateInfo, pAllocator, pAccelerationStructure);
	}

	void DestroyAccelerationStructureNV(VkAccelerationStructureNV accelerationStructure, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyAccelerationStructureNV && "vkDestroyAccelerationStructureNV is not loaded");
		pfn_vkDestroyAccelerationStructureNV(this->handle, accelerationStructure, pAllocator);
	}

	void GetAccelerationStructureMemoryRequirementsNV(const  VkAccelerationStructureMemoryRequirementsInfoNV * pInfo, VkMemoryRequirements2KHR * pMemoryRequirements) {
		assert(pfn_vkGetAccelerationStructureMemoryRequirementsNV && "vkGetAccelerationStructureMemoryRequirementsNV is not loaded");
		pfn_vkGetAccelerationStructureMemoryRequirementsNV(this->handle, pInfo, pMemoryRequirements);
	}

	VkResult BindAccelerationStructureMemoryNV(uint32_t bindInfoCount, const  VkBindAccelerationStructureMemoryInfoNV * pBindInfos) {
		assert(pfn_vkBindAccelerationStructureMemoryNV && "vkBindAccelerationStructureMemoryNV is not loaded");
		return pfn_vkBindAccelerationStructureMemoryNV(this->handle, bindInfoCount, pBindInfos);
	}

	VkResult CreateRayTracingPipelinesNV(VkPipelineCache pipelineCache, uint32_t createInfoCount, const  VkRayTracingPipelineCreateInfoNV * pCreateInfos, const  VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {
		assert(pfn_vkCreateRayTracingPipelinesNV && "vkCreateRayTracingPipelinesNV is not loaded");
		return pfn_vkCreateRayTracingPipelinesNV(this->handle, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
	}

	VkResult GetAccelerationStructureHandleNV(VkAccelerationStructureNV accelerationStructure, size_t dataSize, void * pData) {
		assert(pfn_vkGetAccelerationStructureHandleNV && "vkGetAccelerationStructureHandleNV is not loaded");
		return pfn_vkGetAccelerationStructureHandleNV(this->handle, accelerationStructure, dataSize, pData);
	}

	VkResult CompileDeferredNV(VkPipeline pipeline, uint32_t shader) {
		assert(pfn_vkCompileDeferredNV && "vkCompileDeferredNV is not loaded");
		return pfn_vkCompileDeferredNV(this->handle, pipeline, shader);
	}

#endif
#ifdef VK_NV_external_memory_win32
	VkResult GetMemoryWin32HandleNV(VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE * pHandle) {
		assert(pfn_vkGetMemoryWin32HandleNV && "vkGetMemoryWin32HandleNV is not loaded");
		return pfn_vkGetMemoryWin32HandleNV(this->handle, memory, handleType, pHandle);
	}

#endif
#ifdef VK_KHR_deferred_host_operations
	VkResult CreateDeferredOperationKHR(const  VkAllocationCallbacks * pAllocator, VkDeferredOperationKHR * pDeferredOperation) {
		assert(pfn_vkCreateDeferredOperationKHR && "vkCreateDeferredOperationKHR is not loaded");
		return pfn_vkCreateDeferredOperationKHR(this->handle, pAllocator, pDeferredOperation);
	}

	void DestroyDeferredOperationKHR(VkDeferredOperationKHR operation, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyDeferredOperationKHR && "vkDestroyDeferredOperationKHR is not loaded");
		pfn_vkDestroyDeferredOperationKHR(this->handle, operation, pAllocator);
	}

	uint32_t GetDeferredOperationMaxConcurrencyKHR(VkDeferredOperationKHR operation) {
		assert(pfn_vkGetDeferredOperationMaxConcurrencyKHR && "vkGetDeferredOperationMaxConcurrencyKHR is not loaded");
		return pfn_vkGetDeferredOperationMaxConcurrencyKHR(this->handle, operation);
	}

	VkResult GetDeferredOperationResultKHR(VkDeferredOperationKHR operation) {
		assert(pfn_vkGetDeferredOperationResultKHR && "vkGetDeferredOperationResultKHR is not loaded");
		return pfn_vkGetDeferredOperationResultKHR(this->handle, operation);
	}

	VkResult DeferredOperationJoinKHR(VkDeferredOperationKHR operation) {
		assert(pfn_vkDeferredOperationJoinKHR && "vkDeferredOperationJoinKHR is not loaded");
		return pfn_vkDeferredOperationJoinKHR(this->handle, operation);
	}

#endif
#ifdef VK_NV_external_memory_rdma
	VkResult GetMemoryRemoteAddressNV(const  VkMemoryGetRemoteAddressInfoNV * pMemoryGetRemoteAddressInfo, VkRemoteAddressNV * pAddress) {
		assert(pfn_vkGetMemoryRemoteAddressNV && "vkGetMemoryRemoteAddressNV is not loaded");
		return pfn_vkGetMemoryRemoteAddressNV(this->handle, pMemoryGetRemoteAddressInfo, pAddress);
	}

#endif
#ifdef VK_NV_device_generated_commands
	void GetGeneratedCommandsMemoryRequirementsNV(const  VkGeneratedCommandsMemoryRequirementsInfoNV * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
		assert(pfn_vkGetGeneratedCommandsMemoryRequirementsNV && "vkGetGeneratedCommandsMemoryRequirementsNV is not loaded");
		pfn_vkGetGeneratedCommandsMemoryRequirementsNV(this->handle, pInfo, pMemoryRequirements);
	}

	VkResult CreateIndirectCommandsLayoutNV(const  VkIndirectCommandsLayoutCreateInfoNV * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkIndirectCommandsLayoutNV * pIndirectCommandsLayout) {
		assert(pfn_vkCreateIndirectCommandsLayoutNV && "vkCreateIndirectCommandsLayoutNV is not loaded");
		return pfn_vkCreateIndirectCommandsLayoutNV(this->handle, pCreateInfo, pAllocator, pIndirectCommandsLayout);
	}

	void DestroyIndirectCommandsLayoutNV(VkIndirectCommandsLayoutNV indirectCommandsLayout, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyIndirectCommandsLayoutNV && "vkDestroyIndirectCommandsLayoutNV is not loaded");
		pfn_vkDestroyIndirectCommandsLayoutNV(this->handle, indirectCommandsLayout, pAllocator);
	}

#endif
#ifdef VK_KHR_display_swapchain
	VkResult CreateSharedSwapchainsKHR(uint32_t swapchainCount, const  VkSwapchainCreateInfoKHR * pCreateInfos, const  VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchains) {
		assert(pfn_vkCreateSharedSwapchainsKHR && "vkCreateSharedSwapchainsKHR is not loaded");
		return pfn_vkCreateSharedSwapchainsKHR(this->handle, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
	}

#endif
#ifdef VK_EXT_debug_utils
	VkResult SetDebugUtilsObjectNameEXT(const  VkDebugUtilsObjectNameInfoEXT * pNameInfo) {
		assert(pfn_vkSetDebugUtilsObjectNameEXT && "vkSetDebugUtilsObjectNameEXT is not loaded");
		return pfn_vkSetDebugUtilsObjectNameEXT(this->handle, pNameInfo);
	}

	VkResult SetDebugUtilsObjectTagEXT(const  VkDebugUtilsObjectTagInfoEXT * pTagInfo) {
		assert(pfn_vkSetDebugUtilsObjectTagEXT && "vkSetDebugUtilsObjectTagEXT is not loaded");
		return pfn_vkSetDebugUtilsObjectTagEXT(this->handle, pTagInfo);
	}

#endif
#ifdef VK_EXT_full_screen_exclusive
	VkResult AcquireFullScreenExclusiveModeEXT(VkSwapchainKHR swapchain) {
		assert(pfn_vkAcquireFullScreenExclusiveModeEXT && "vkAcquireFullScreenExclusiveModeEXT is not loaded");
		return pfn_vkAcquireFullScreenExclusiveModeEXT(this->handle, swapchain);
	}

	VkResult ReleaseFullScreenExclusiveModeEXT(VkSwapchainKHR swapchain) {
		assert(pfn_vkReleaseFullScreenExclusiveModeEXT && "vkReleaseFullScreenExclusiveModeEXT is not loaded");
		return pfn_vkReleaseFullScreenExclusiveModeEXT(this->handle, swapchain);
	}

	VkResult GetDeviceGroupSurfacePresentModes2EXT(const  VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR * pModes) {
		assert(pfn_vkGetDeviceGroupSurfacePresentModes2EXT && "vkGetDeviceGroupSurfacePresentModes2EXT is not loaded");
		return pfn_vkGetDeviceGroupSurfacePresentModes2EXT(this->handle, pSurfaceInfo, pModes);
	}

#endif
#ifdef VK_ANDROID_native_buffer
	VkResult GetSwapchainGrallocUsageANDROID(VkFormat format, VkImageUsageFlags imageUsage, int * grallocUsage) {
		assert(pfn_vkGetSwapchainGrallocUsageANDROID && "vkGetSwapchainGrallocUsageANDROID is not loaded");
		return pfn_vkGetSwapchainGrallocUsageANDROID(this->handle, format, imageUsage, grallocUsage);
	}

	VkResult AcquireImageANDROID(VkImage image, int nativeFenceFd, VkSemaphore semaphore, VkFence fence) {
		assert(pfn_vkAcquireImageANDROID && "vkAcquireImageANDROID is not loaded");
		return pfn_vkAcquireImageANDROID(this->handle, image, nativeFenceFd, semaphore, fence);
	}

	VkResult GetSwapchainGrallocUsage2ANDROID(VkFormat format, VkImageUsageFlags imageUsage, VkSwapchainImageUsageFlagsANDROID swapchainImageUsage, uint64_t * grallocConsumerUsage, uint64_t * grallocProducerUsage) {
		assert(pfn_vkGetSwapchainGrallocUsage2ANDROID && "vkGetSwapchainGrallocUsage2ANDROID is not loaded");
		return pfn_vkGetSwapchainGrallocUsage2ANDROID(this->handle, format, imageUsage, swapchainImageUsage, grallocConsumerUsage, grallocProducerUsage);
	}

#endif
#ifdef VK_EXT_pageable_device_local_memory
	void SetDeviceMemoryPriorityEXT(VkDeviceMemory memory, float priority) {
		assert(pfn_vkSetDeviceMemoryPriorityEXT && "vkSetDeviceMemoryPriorityEXT is not loaded");
		pfn_vkSetDeviceMemoryPriorityEXT(this->handle, memory, priority);
	}

#endif
#ifdef VK_KHR_external_semaphore_win32
	VkResult ImportSemaphoreWin32HandleKHR(const  VkImportSemaphoreWin32HandleInfoKHR * pImportSemaphoreWin32HandleInfo) {
		assert(pfn_vkImportSemaphoreWin32HandleKHR && "vkImportSemaphoreWin32HandleKHR is not loaded");
		return pfn_vkImportSemaphoreWin32HandleKHR(this->handle, pImportSemaphoreWin32HandleInfo);
	}

	VkResult GetSemaphoreWin32HandleKHR(const  VkSemaphoreGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle) {
		assert(pfn_vkGetSemaphoreWin32HandleKHR && "vkGetSemaphoreWin32HandleKHR is not loaded");
		return pfn_vkGetSemaphoreWin32HandleKHR(this->handle, pGetWin32HandleInfo, pHandle);
	}

#endif
#ifdef VK_KHR_ray_tracing_pipeline
	VkResult CreateRayTracingPipelinesKHR(VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, uint32_t createInfoCount, const  VkRayTracingPipelineCreateInfoKHR * pCreateInfos, const  VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {
		assert(pfn_vkCreateRayTracingPipelinesKHR && "vkCreateRayTracingPipelinesKHR is not loaded");
		return pfn_vkCreateRayTracingPipelinesKHR(this->handle, deferredOperation, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
	}

	VkResult GetRayTracingShaderGroupHandlesKHR(VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData) {
		assert(pfn_vkGetRayTracingShaderGroupHandlesKHR && "vkGetRayTracingShaderGroupHandlesKHR is not loaded");
		return pfn_vkGetRayTracingShaderGroupHandlesKHR(this->handle, pipeline, firstGroup, groupCount, dataSize, pData);
	}

	VkResult GetRayTracingCaptureReplayShaderGroupHandlesKHR(VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData) {
		assert(pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR && "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR is not loaded");
		return pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(this->handle, pipeline, firstGroup, groupCount, dataSize, pData);
	}

	VkDeviceSize GetRayTracingShaderGroupStackSizeKHR(VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader) {
		assert(pfn_vkGetRayTracingShaderGroupStackSizeKHR && "vkGetRayTracingShaderGroupStackSizeKHR is not loaded");
		return pfn_vkGetRayTracingShaderGroupStackSizeKHR(this->handle, pipeline, group, groupShader);
	}

#endif
#ifdef VK_KHR_external_memory_fd
	VkResult GetMemoryFdKHR(const  VkMemoryGetFdInfoKHR * pGetFdInfo, int * pFd) {
		assert(pfn_vkGetMemoryFdKHR && "vkGetMemoryFdKHR is not loaded");
		return pfn_vkGetMemoryFdKHR(this->handle, pGetFdInfo, pFd);
	}

	VkResult GetMemoryFdPropertiesKHR(VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR * pMemoryFdProperties) {
		assert(pfn_vkGetMemoryFdPropertiesKHR && "vkGetMemoryFdPropertiesKHR is not loaded");
		return pfn_vkGetMemoryFdPropertiesKHR(this->handle, handleType, fd, pMemoryFdProperties);
	}

#endif
#ifdef VK_EXT_image_drm_format_modifier
	VkResult GetImageDrmFormatModifierPropertiesEXT(VkImage image, VkImageDrmFormatModifierPropertiesEXT * pProperties) {
		assert(pfn_vkGetImageDrmFormatModifierPropertiesEXT && "vkGetImageDrmFormatModifierPropertiesEXT is not loaded");
		return pfn_vkGetImageDrmFormatModifierPropertiesEXT(this->handle, image, pProperties);
	}

#endif
#ifdef VK_FUCHSIA_buffer_collection
	VkResult CreateBufferCollectionFUCHSIA(const  VkBufferCollectionCreateInfoFUCHSIA * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkBufferCollectionFUCHSIA * pCollection) {
		assert(pfn_vkCreateBufferCollectionFUCHSIA && "vkCreateBufferCollectionFUCHSIA is not loaded");
		return pfn_vkCreateBufferCollectionFUCHSIA(this->handle, pCreateInfo, pAllocator, pCollection);
	}

	VkResult SetBufferCollectionImageConstraintsFUCHSIA(VkBufferCollectionFUCHSIA collection, const  VkImageConstraintsInfoFUCHSIA * pImageConstraintsInfo) {
		assert(pfn_vkSetBufferCollectionImageConstraintsFUCHSIA && "vkSetBufferCollectionImageConstraintsFUCHSIA is not loaded");
		return pfn_vkSetBufferCollectionImageConstraintsFUCHSIA(this->handle, collection, pImageConstraintsInfo);
	}

	VkResult SetBufferCollectionBufferConstraintsFUCHSIA(VkBufferCollectionFUCHSIA collection, const  VkBufferConstraintsInfoFUCHSIA * pBufferConstraintsInfo) {
		assert(pfn_vkSetBufferCollectionBufferConstraintsFUCHSIA && "vkSetBufferCollectionBufferConstraintsFUCHSIA is not loaded");
		return pfn_vkSetBufferCollectionBufferConstraintsFUCHSIA(this->handle, collection, pBufferConstraintsInfo);
	}

	void DestroyBufferCollectionFUCHSIA(VkBufferCollectionFUCHSIA collection, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyBufferCollectionFUCHSIA && "vkDestroyBufferCollectionFUCHSIA is not loaded");
		pfn_vkDestroyBufferCollectionFUCHSIA(this->handle, collection, pAllocator);
	}

	VkResult GetBufferCollectionPropertiesFUCHSIA(VkBufferCollectionFUCHSIA collection, VkBufferCollectionPropertiesFUCHSIA * pProperties) {
		assert(pfn_vkGetBufferCollectionPropertiesFUCHSIA && "vkGetBufferCollectionPropertiesFUCHSIA is not loaded");
		return pfn_vkGetBufferCollectionPropertiesFUCHSIA(this->handle, collection, pProperties);
	}

#endif
#ifdef VK_KHR_video_queue
	VkResult CreateVideoSessionKHR(const  VkVideoSessionCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkVideoSessionKHR * pVideoSession) {
		assert(pfn_vkCreateVideoSessionKHR && "vkCreateVideoSessionKHR is not loaded");
		return pfn_vkCreateVideoSessionKHR(this->handle, pCreateInfo, pAllocator, pVideoSession);
	}

	void DestroyVideoSessionKHR(VkVideoSessionKHR videoSession, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyVideoSessionKHR && "vkDestroyVideoSessionKHR is not loaded");
		pfn_vkDestroyVideoSessionKHR(this->handle, videoSession, pAllocator);
	}

	VkResult GetVideoSessionMemoryRequirementsKHR(VkVideoSessionKHR videoSession, uint32_t * pVideoSessionMemoryRequirementsCount, VkVideoGetMemoryPropertiesKHR * pVideoSessionMemoryRequirements) {
		assert(pfn_vkGetVideoSessionMemoryRequirementsKHR && "vkGetVideoSessionMemoryRequirementsKHR is not loaded");
		return pfn_vkGetVideoSessionMemoryRequirementsKHR(this->handle, videoSession, pVideoSessionMemoryRequirementsCount, pVideoSessionMemoryRequirements);
	}

	VkResult BindVideoSessionMemoryKHR(VkVideoSessionKHR videoSession, uint32_t videoSessionBindMemoryCount, const  VkVideoBindMemoryKHR * pVideoSessionBindMemories) {
		assert(pfn_vkBindVideoSessionMemoryKHR && "vkBindVideoSessionMemoryKHR is not loaded");
		return pfn_vkBindVideoSessionMemoryKHR(this->handle, videoSession, videoSessionBindMemoryCount, pVideoSessionBindMemories);
	}

	VkResult CreateVideoSessionParametersKHR(const  VkVideoSessionParametersCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkVideoSessionParametersKHR * pVideoSessionParameters) {
		assert(pfn_vkCreateVideoSessionParametersKHR && "vkCreateVideoSessionParametersKHR is not loaded");
		return pfn_vkCreateVideoSessionParametersKHR(this->handle, pCreateInfo, pAllocator, pVideoSessionParameters);
	}

	VkResult UpdateVideoSessionParametersKHR(VkVideoSessionParametersKHR videoSessionParameters, const  VkVideoSessionParametersUpdateInfoKHR * pUpdateInfo) {
		assert(pfn_vkUpdateVideoSessionParametersKHR && "vkUpdateVideoSessionParametersKHR is not loaded");
		return pfn_vkUpdateVideoSessionParametersKHR(this->handle, videoSessionParameters, pUpdateInfo);
	}

	void DestroyVideoSessionParametersKHR(VkVideoSessionParametersKHR videoSessionParameters, const  VkAllocationCallbacks * pAllocator) {
		assert(pfn_vkDestroyVideoSessionParametersKHR && "vkDestroyVideoSessionParametersKHR is not loaded");
		pfn_vkDestroyVideoSessionParametersKHR(this->handle, videoSessionParameters, pAllocator);
	}

#endif
#ifdef VK_GOOGLE_display_timing
	VkResult GetRefreshCycleDurationGOOGLE(VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE * pDisplayTimingProperties) {
		assert(pfn_vkGetRefreshCycleDurationGOOGLE && "vkGetRefreshCycleDurationGOOGLE is not loaded");
		return pfn_vkGetRefreshCycleDurationGOOGLE(this->handle, swapchain, pDisplayTimingProperties);
	}

	VkResult GetPastPresentationTimingGOOGLE(VkSwapchainKHR swapchain, uint32_t * pPresentationTimingCount, VkPastPresentationTimingGOOGLE * pPresentationTimings) {
		assert(pfn_vkGetPastPresentationTimingGOOGLE && "vkGetPastPresentationTimingGOOGLE is not loaded");
		return pfn_vkGetPastPresentationTimingGOOGLE(this->handle, swapchain, pPresentationTimingCount, pPresentationTimings);
	}

#endif
#ifdef VK_KHR_present_wait
	VkResult WaitForPresentKHR(VkSwapchainKHR swapchain, uint64_t presentId, uint64_t timeout) {
		assert(pfn_vkWaitForPresentKHR && "vkWaitForPresentKHR is not loaded");
		return pfn_vkWaitForPresentKHR(this->handle, swapchain, presentId, timeout);
	}

#endif
#endif
};
#ifdef __cplusplus
struct VklCommandFunctions {
	VklDeviceFunctions* fnptrs;
	VkCommandBuffer handle;
	void Dispatch(uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
		assert(fnptrs->pfn_vkCmdDispatch && "vkCmdDispatch is not loaded");
		fnptrs->pfn_vkCmdDispatch(this->handle, groupCountX, groupCountY, groupCountZ);
	}

	void WaitEvents(uint32_t eventCount, const  VkEvent * pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const  VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const  VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const  VkImageMemoryBarrier * pImageMemoryBarriers) {
		assert(fnptrs->pfn_vkCmdWaitEvents && "vkCmdWaitEvents is not loaded");
		fnptrs->pfn_vkCmdWaitEvents(this->handle, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
	}

	void SetDepthCompareOp(VkCompareOp depthCompareOp) {
		assert(fnptrs->pfn_vkCmdSetDepthCompareOp && "vkCmdSetDepthCompareOp is not loaded");
		fnptrs->pfn_vkCmdSetDepthCompareOp(this->handle, depthCompareOp);
	}

	void SetRasterizerDiscardEnable(VkBool32 rasterizerDiscardEnable) {
		assert(fnptrs->pfn_vkCmdSetRasterizerDiscardEnable && "vkCmdSetRasterizerDiscardEnable is not loaded");
		fnptrs->pfn_vkCmdSetRasterizerDiscardEnable(this->handle, rasterizerDiscardEnable);
	}

	void ClearColorImage(VkImage image, VkImageLayout imageLayout, const  VkClearColorValue * pColor, uint32_t rangeCount, const  VkImageSubresourceRange * pRanges) {
		assert(fnptrs->pfn_vkCmdClearColorImage && "vkCmdClearColorImage is not loaded");
		fnptrs->pfn_vkCmdClearColorImage(this->handle, image, imageLayout, pColor, rangeCount, pRanges);
	}

	void SetDepthBias(float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) {
		assert(fnptrs->pfn_vkCmdSetDepthBias && "vkCmdSetDepthBias is not loaded");
		fnptrs->pfn_vkCmdSetDepthBias(this->handle, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
	}

	void CopyImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const  VkImageCopy * pRegions) {
		assert(fnptrs->pfn_vkCmdCopyImage && "vkCmdCopyImage is not loaded");
		fnptrs->pfn_vkCmdCopyImage(this->handle, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
	}

	void ExecuteCommands(uint32_t commandBufferCount, const  VkCommandBuffer * pCommandBuffers) {
		assert(fnptrs->pfn_vkCmdExecuteCommands && "vkCmdExecuteCommands is not loaded");
		fnptrs->pfn_vkCmdExecuteCommands(this->handle, commandBufferCount, pCommandBuffers);
	}

	void DrawIndirectCount(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
		assert(fnptrs->pfn_vkCmdDrawIndirectCount && "vkCmdDrawIndirectCount is not loaded");
		fnptrs->pfn_vkCmdDrawIndirectCount(this->handle, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
	}

	void CopyQueryPoolResults(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) {
		assert(fnptrs->pfn_vkCmdCopyQueryPoolResults && "vkCmdCopyQueryPoolResults is not loaded");
		fnptrs->pfn_vkCmdCopyQueryPoolResults(this->handle, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
	}

	void CopyBuffer(VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const  VkBufferCopy * pRegions) {
		assert(fnptrs->pfn_vkCmdCopyBuffer && "vkCmdCopyBuffer is not loaded");
		fnptrs->pfn_vkCmdCopyBuffer(this->handle, srcBuffer, dstBuffer, regionCount, pRegions);
	}

	void BindPipeline(VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) {
		assert(fnptrs->pfn_vkCmdBindPipeline && "vkCmdBindPipeline is not loaded");
		fnptrs->pfn_vkCmdBindPipeline(this->handle, pipelineBindPoint, pipeline);
	}

	void CopyBufferToImage(VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const  VkBufferImageCopy * pRegions) {
		assert(fnptrs->pfn_vkCmdCopyBufferToImage && "vkCmdCopyBufferToImage is not loaded");
		fnptrs->pfn_vkCmdCopyBufferToImage(this->handle, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
	}

	void ClearAttachments(uint32_t attachmentCount, const  VkClearAttachment * pAttachments, uint32_t rectCount, const  VkClearRect * pRects) {
		assert(fnptrs->pfn_vkCmdClearAttachments && "vkCmdClearAttachments is not loaded");
		fnptrs->pfn_vkCmdClearAttachments(this->handle, attachmentCount, pAttachments, rectCount, pRects);
	}

	void SetStencilReference(VkStencilFaceFlags faceMask, uint32_t reference) {
		assert(fnptrs->pfn_vkCmdSetStencilReference && "vkCmdSetStencilReference is not loaded");
		fnptrs->pfn_vkCmdSetStencilReference(this->handle, faceMask, reference);
	}

	void SetCullMode(VkCullModeFlags cullMode) {
		assert(fnptrs->pfn_vkCmdSetCullMode && "vkCmdSetCullMode is not loaded");
		fnptrs->pfn_vkCmdSetCullMode(this->handle, cullMode);
	}

	void ResetQueryPool(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
		assert(fnptrs->pfn_vkCmdResetQueryPool && "vkCmdResetQueryPool is not loaded");
		fnptrs->pfn_vkCmdResetQueryPool(this->handle, queryPool, firstQuery, queryCount);
	}

	void SetBlendConstants(const  float blendConstants[4]) {
		assert(fnptrs->pfn_vkCmdSetBlendConstants && "vkCmdSetBlendConstants is not loaded");
		fnptrs->pfn_vkCmdSetBlendConstants(this->handle, blendConstants);
	}

	void ResetEvent2(VkEvent event, VkPipelineStageFlags2 stageMask) {
		assert(fnptrs->pfn_vkCmdResetEvent2 && "vkCmdResetEvent2 is not loaded");
		fnptrs->pfn_vkCmdResetEvent2(this->handle, event, stageMask);
	}

	void SetLineWidth(float lineWidth) {
		assert(fnptrs->pfn_vkCmdSetLineWidth && "vkCmdSetLineWidth is not loaded");
		fnptrs->pfn_vkCmdSetLineWidth(this->handle, lineWidth);
	}

	void CopyBufferToImage2(const  VkCopyBufferToImageInfo2 * pCopyBufferToImageInfo) {
		assert(fnptrs->pfn_vkCmdCopyBufferToImage2 && "vkCmdCopyBufferToImage2 is not loaded");
		fnptrs->pfn_vkCmdCopyBufferToImage2(this->handle, pCopyBufferToImageInfo);
	}

	void WriteTimestamp(VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) {
		assert(fnptrs->pfn_vkCmdWriteTimestamp && "vkCmdWriteTimestamp is not loaded");
		fnptrs->pfn_vkCmdWriteTimestamp(this->handle, pipelineStage, queryPool, query);
	}

	void CopyBuffer2(const  VkCopyBufferInfo2 * pCopyBufferInfo) {
		assert(fnptrs->pfn_vkCmdCopyBuffer2 && "vkCmdCopyBuffer2 is not loaded");
		fnptrs->pfn_vkCmdCopyBuffer2(this->handle, pCopyBufferInfo);
	}

	void SetScissor(uint32_t firstScissor, uint32_t scissorCount, const  VkRect2D * pScissors) {
		assert(fnptrs->pfn_vkCmdSetScissor && "vkCmdSetScissor is not loaded");
		fnptrs->pfn_vkCmdSetScissor(this->handle, firstScissor, scissorCount, pScissors);
	}

	void UpdateBuffer(VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const  void * pData) {
		assert(fnptrs->pfn_vkCmdUpdateBuffer && "vkCmdUpdateBuffer is not loaded");
		fnptrs->pfn_vkCmdUpdateBuffer(this->handle, dstBuffer, dstOffset, dataSize, pData);
	}

	VkResult Begin(const  VkCommandBufferBeginInfo * pBeginInfo) {
		assert(fnptrs->pfn_vkBeginCommandBuffer && "vkBeginCommandBuffer is not loaded");
		return fnptrs->pfn_vkBeginCommandBuffer(this->handle, pBeginInfo);
	}

	void PipelineBarrier(VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const  VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const  VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const  VkImageMemoryBarrier * pImageMemoryBarriers) {
		assert(fnptrs->pfn_vkCmdPipelineBarrier && "vkCmdPipelineBarrier is not loaded");
		fnptrs->pfn_vkCmdPipelineBarrier(this->handle, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
	}

	void NextSubpass2(const  VkSubpassBeginInfo * pSubpassBeginInfo, const  VkSubpassEndInfo * pSubpassEndInfo) {
		assert(fnptrs->pfn_vkCmdNextSubpass2 && "vkCmdNextSubpass2 is not loaded");
		fnptrs->pfn_vkCmdNextSubpass2(this->handle, pSubpassBeginInfo, pSubpassEndInfo);
	}

	void CopyImageToBuffer(VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const  VkBufferImageCopy * pRegions) {
		assert(fnptrs->pfn_vkCmdCopyImageToBuffer && "vkCmdCopyImageToBuffer is not loaded");
		fnptrs->pfn_vkCmdCopyImageToBuffer(this->handle, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
	}

	void DispatchIndirect(VkBuffer buffer, VkDeviceSize offset) {
		assert(fnptrs->pfn_vkCmdDispatchIndirect && "vkCmdDispatchIndirect is not loaded");
		fnptrs->pfn_vkCmdDispatchIndirect(this->handle, buffer, offset);
	}

	void EndQuery(VkQueryPool queryPool, uint32_t query) {
		assert(fnptrs->pfn_vkCmdEndQuery && "vkCmdEndQuery is not loaded");
		fnptrs->pfn_vkCmdEndQuery(this->handle, queryPool, query);
	}

	void SetFrontFace(VkFrontFace frontFace) {
		assert(fnptrs->pfn_vkCmdSetFrontFace && "vkCmdSetFrontFace is not loaded");
		fnptrs->pfn_vkCmdSetFrontFace(this->handle, frontFace);
	}

	void SetStencilCompareMask(VkStencilFaceFlags faceMask, uint32_t compareMask) {
		assert(fnptrs->pfn_vkCmdSetStencilCompareMask && "vkCmdSetStencilCompareMask is not loaded");
		fnptrs->pfn_vkCmdSetStencilCompareMask(this->handle, faceMask, compareMask);
	}

	void SetDepthBounds(float minDepthBounds, float maxDepthBounds) {
		assert(fnptrs->pfn_vkCmdSetDepthBounds && "vkCmdSetDepthBounds is not loaded");
		fnptrs->pfn_vkCmdSetDepthBounds(this->handle, minDepthBounds, maxDepthBounds);
	}

	void BeginRendering(const  VkRenderingInfo * pRenderingInfo) {
		assert(fnptrs->pfn_vkCmdBeginRendering && "vkCmdBeginRendering is not loaded");
		fnptrs->pfn_vkCmdBeginRendering(this->handle, pRenderingInfo);
	}

	void BindIndexBuffer(VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) {
		assert(fnptrs->pfn_vkCmdBindIndexBuffer && "vkCmdBindIndexBuffer is not loaded");
		fnptrs->pfn_vkCmdBindIndexBuffer(this->handle, buffer, offset, indexType);
	}

	void DrawIndexedIndirect(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
		assert(fnptrs->pfn_vkCmdDrawIndexedIndirect && "vkCmdDrawIndexedIndirect is not loaded");
		fnptrs->pfn_vkCmdDrawIndexedIndirect(this->handle, buffer, offset, drawCount, stride);
	}

	void EndRenderPass() {
		assert(fnptrs->pfn_vkCmdEndRenderPass && "vkCmdEndRenderPass is not loaded");
		fnptrs->pfn_vkCmdEndRenderPass(this->handle);
	}

	void SetViewport(uint32_t firstViewport, uint32_t viewportCount, const  VkViewport * pViewports) {
		assert(fnptrs->pfn_vkCmdSetViewport && "vkCmdSetViewport is not loaded");
		fnptrs->pfn_vkCmdSetViewport(this->handle, firstViewport, viewportCount, pViewports);
	}

	void DrawIndirect(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
		assert(fnptrs->pfn_vkCmdDrawIndirect && "vkCmdDrawIndirect is not loaded");
		fnptrs->pfn_vkCmdDrawIndirect(this->handle, buffer, offset, drawCount, stride);
	}

	void ResolveImage2(const  VkResolveImageInfo2 * pResolveImageInfo) {
		assert(fnptrs->pfn_vkCmdResolveImage2 && "vkCmdResolveImage2 is not loaded");
		fnptrs->pfn_vkCmdResolveImage2(this->handle, pResolveImageInfo);
	}

	void ClearDepthStencilImage(VkImage image, VkImageLayout imageLayout, const  VkClearDepthStencilValue * pDepthStencil, uint32_t rangeCount, const  VkImageSubresourceRange * pRanges) {
		assert(fnptrs->pfn_vkCmdClearDepthStencilImage && "vkCmdClearDepthStencilImage is not loaded");
		fnptrs->pfn_vkCmdClearDepthStencilImage(this->handle, image, imageLayout, pDepthStencil, rangeCount, pRanges);
	}

	void NextSubpass(VkSubpassContents contents) {
		assert(fnptrs->pfn_vkCmdNextSubpass && "vkCmdNextSubpass is not loaded");
		fnptrs->pfn_vkCmdNextSubpass(this->handle, contents);
	}

	void SetEvent(VkEvent event, VkPipelineStageFlags stageMask) {
		assert(fnptrs->pfn_vkCmdSetEvent && "vkCmdSetEvent is not loaded");
		fnptrs->pfn_vkCmdSetEvent(this->handle, event, stageMask);
	}

	void CopyImageToBuffer2(const  VkCopyImageToBufferInfo2 * pCopyImageToBufferInfo) {
		assert(fnptrs->pfn_vkCmdCopyImageToBuffer2 && "vkCmdCopyImageToBuffer2 is not loaded");
		fnptrs->pfn_vkCmdCopyImageToBuffer2(this->handle, pCopyImageToBufferInfo);
	}

	void DrawIndexed(uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) {
		assert(fnptrs->pfn_vkCmdDrawIndexed && "vkCmdDrawIndexed is not loaded");
		fnptrs->pfn_vkCmdDrawIndexed(this->handle, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
	}

	void EndRendering() {
		assert(fnptrs->pfn_vkCmdEndRendering && "vkCmdEndRendering is not loaded");
		fnptrs->pfn_vkCmdEndRendering(this->handle);
	}

	void WaitEvents2(uint32_t eventCount, const  VkEvent * pEvents, const  VkDependencyInfo * pDependencyInfos) {
		assert(fnptrs->pfn_vkCmdWaitEvents2 && "vkCmdWaitEvents2 is not loaded");
		fnptrs->pfn_vkCmdWaitEvents2(this->handle, eventCount, pEvents, pDependencyInfos);
	}

	void BindVertexBuffers(uint32_t firstBinding, uint32_t bindingCount, const  VkBuffer * pBuffers, const  VkDeviceSize * pOffsets) {
		assert(fnptrs->pfn_vkCmdBindVertexBuffers && "vkCmdBindVertexBuffers is not loaded");
		fnptrs->pfn_vkCmdBindVertexBuffers(this->handle, firstBinding, bindingCount, pBuffers, pOffsets);
	}

	void BlitImage2(const  VkBlitImageInfo2 * pBlitImageInfo) {
		assert(fnptrs->pfn_vkCmdBlitImage2 && "vkCmdBlitImage2 is not loaded");
		fnptrs->pfn_vkCmdBlitImage2(this->handle, pBlitImageInfo);
	}

	void SetStencilTestEnable(VkBool32 stencilTestEnable) {
		assert(fnptrs->pfn_vkCmdSetStencilTestEnable && "vkCmdSetStencilTestEnable is not loaded");
		fnptrs->pfn_vkCmdSetStencilTestEnable(this->handle, stencilTestEnable);
	}

	void BeginRenderPass2(const  VkRenderPassBeginInfo * pRenderPassBegin, const  VkSubpassBeginInfo * pSubpassBeginInfo) {
		assert(fnptrs->pfn_vkCmdBeginRenderPass2 && "vkCmdBeginRenderPass2 is not loaded");
		fnptrs->pfn_vkCmdBeginRenderPass2(this->handle, pRenderPassBegin, pSubpassBeginInfo);
	}

	VkResult End() {
		assert(fnptrs->pfn_vkEndCommandBuffer && "vkEndCommandBuffer is not loaded");
		return fnptrs->pfn_vkEndCommandBuffer(this->handle);
	}

	void SetScissorWithCount(uint32_t scissorCount, const  VkRect2D * pScissors) {
		assert(fnptrs->pfn_vkCmdSetScissorWithCount && "vkCmdSetScissorWithCount is not loaded");
		fnptrs->pfn_vkCmdSetScissorWithCount(this->handle, scissorCount, pScissors);
	}

	void FillBuffer(VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) {
		assert(fnptrs->pfn_vkCmdFillBuffer && "vkCmdFillBuffer is not loaded");
		fnptrs->pfn_vkCmdFillBuffer(this->handle, dstBuffer, dstOffset, size, data);
	}

	void BeginRenderPass(const  VkRenderPassBeginInfo * pRenderPassBegin, VkSubpassContents contents) {
		assert(fnptrs->pfn_vkCmdBeginRenderPass && "vkCmdBeginRenderPass is not loaded");
		fnptrs->pfn_vkCmdBeginRenderPass(this->handle, pRenderPassBegin, contents);
	}

	void ResolveImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const  VkImageResolve * pRegions) {
		assert(fnptrs->pfn_vkCmdResolveImage && "vkCmdResolveImage is not loaded");
		fnptrs->pfn_vkCmdResolveImage(this->handle, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
	}

	void BeginQuery(VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) {
		assert(fnptrs->pfn_vkCmdBeginQuery && "vkCmdBeginQuery is not loaded");
		fnptrs->pfn_vkCmdBeginQuery(this->handle, queryPool, query, flags);
	}

	void SetEvent2(VkEvent event, const  VkDependencyInfo * pDependencyInfo) {
		assert(fnptrs->pfn_vkCmdSetEvent2 && "vkCmdSetEvent2 is not loaded");
		fnptrs->pfn_vkCmdSetEvent2(this->handle, event, pDependencyInfo);
	}

	void DrawIndexedIndirectCount(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
		assert(fnptrs->pfn_vkCmdDrawIndexedIndirectCount && "vkCmdDrawIndexedIndirectCount is not loaded");
		fnptrs->pfn_vkCmdDrawIndexedIndirectCount(this->handle, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
	}

	void BindVertexBuffers2(uint32_t firstBinding, uint32_t bindingCount, const  VkBuffer * pBuffers, const  VkDeviceSize * pOffsets, const  VkDeviceSize * pSizes, const  VkDeviceSize * pStrides) {
		assert(fnptrs->pfn_vkCmdBindVertexBuffers2 && "vkCmdBindVertexBuffers2 is not loaded");
		fnptrs->pfn_vkCmdBindVertexBuffers2(this->handle, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
	}

	void PushConstants(VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const  void * pValues) {
		assert(fnptrs->pfn_vkCmdPushConstants && "vkCmdPushConstants is not loaded");
		fnptrs->pfn_vkCmdPushConstants(this->handle, layout, stageFlags, offset, size, pValues);
	}

	void SetDepthWriteEnable(VkBool32 depthWriteEnable) {
		assert(fnptrs->pfn_vkCmdSetDepthWriteEnable && "vkCmdSetDepthWriteEnable is not loaded");
		fnptrs->pfn_vkCmdSetDepthWriteEnable(this->handle, depthWriteEnable);
	}

	void SetPrimitiveRestartEnable(VkBool32 primitiveRestartEnable) {
		assert(fnptrs->pfn_vkCmdSetPrimitiveRestartEnable && "vkCmdSetPrimitiveRestartEnable is not loaded");
		fnptrs->pfn_vkCmdSetPrimitiveRestartEnable(this->handle, primitiveRestartEnable);
	}

	void Draw(uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) {
		assert(fnptrs->pfn_vkCmdDraw && "vkCmdDraw is not loaded");
		fnptrs->pfn_vkCmdDraw(this->handle, vertexCount, instanceCount, firstVertex, firstInstance);
	}

	void SetPrimitiveTopology(VkPrimitiveTopology primitiveTopology) {
		assert(fnptrs->pfn_vkCmdSetPrimitiveTopology && "vkCmdSetPrimitiveTopology is not loaded");
		fnptrs->pfn_vkCmdSetPrimitiveTopology(this->handle, primitiveTopology);
	}

	void EndRenderPass2(const  VkSubpassEndInfo * pSubpassEndInfo) {
		assert(fnptrs->pfn_vkCmdEndRenderPass2 && "vkCmdEndRenderPass2 is not loaded");
		fnptrs->pfn_vkCmdEndRenderPass2(this->handle, pSubpassEndInfo);
	}

	void SetStencilOp(VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) {
		assert(fnptrs->pfn_vkCmdSetStencilOp && "vkCmdSetStencilOp is not loaded");
		fnptrs->pfn_vkCmdSetStencilOp(this->handle, faceMask, failOp, passOp, depthFailOp, compareOp);
	}

	void SetViewportWithCount(uint32_t viewportCount, const  VkViewport * pViewports) {
		assert(fnptrs->pfn_vkCmdSetViewportWithCount && "vkCmdSetViewportWithCount is not loaded");
		fnptrs->pfn_vkCmdSetViewportWithCount(this->handle, viewportCount, pViewports);
	}

	void CopyImage2(const  VkCopyImageInfo2 * pCopyImageInfo) {
		assert(fnptrs->pfn_vkCmdCopyImage2 && "vkCmdCopyImage2 is not loaded");
		fnptrs->pfn_vkCmdCopyImage2(this->handle, pCopyImageInfo);
	}

	void SetDepthTestEnable(VkBool32 depthTestEnable) {
		assert(fnptrs->pfn_vkCmdSetDepthTestEnable && "vkCmdSetDepthTestEnable is not loaded");
		fnptrs->pfn_vkCmdSetDepthTestEnable(this->handle, depthTestEnable);
	}

	void BindDescriptorSets(VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const  VkDescriptorSet * pDescriptorSets, uint32_t dynamicOffsetCount, const  uint32_t * pDynamicOffsets) {
		assert(fnptrs->pfn_vkCmdBindDescriptorSets && "vkCmdBindDescriptorSets is not loaded");
		fnptrs->pfn_vkCmdBindDescriptorSets(this->handle, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);
	}

	void BlitImage(VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const  VkImageBlit * pRegions, VkFilter filter) {
		assert(fnptrs->pfn_vkCmdBlitImage && "vkCmdBlitImage is not loaded");
		fnptrs->pfn_vkCmdBlitImage(this->handle, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
	}

	VkResult Reset(VkCommandBufferResetFlags flags) {
		assert(fnptrs->pfn_vkResetCommandBuffer && "vkResetCommandBuffer is not loaded");
		return fnptrs->pfn_vkResetCommandBuffer(this->handle, flags);
	}

	void ResetEvent(VkEvent event, VkPipelineStageFlags stageMask) {
		assert(fnptrs->pfn_vkCmdResetEvent && "vkCmdResetEvent is not loaded");
		fnptrs->pfn_vkCmdResetEvent(this->handle, event, stageMask);
	}

	void DispatchBase(uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
		assert(fnptrs->pfn_vkCmdDispatchBase && "vkCmdDispatchBase is not loaded");
		fnptrs->pfn_vkCmdDispatchBase(this->handle, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
	}

	void SetDeviceMask(uint32_t deviceMask) {
		assert(fnptrs->pfn_vkCmdSetDeviceMask && "vkCmdSetDeviceMask is not loaded");
		fnptrs->pfn_vkCmdSetDeviceMask(this->handle, deviceMask);
	}

	void SetDepthBiasEnable(VkBool32 depthBiasEnable) {
		assert(fnptrs->pfn_vkCmdSetDepthBiasEnable && "vkCmdSetDepthBiasEnable is not loaded");
		fnptrs->pfn_vkCmdSetDepthBiasEnable(this->handle, depthBiasEnable);
	}

	void PipelineBarrier2(const  VkDependencyInfo * pDependencyInfo) {
		assert(fnptrs->pfn_vkCmdPipelineBarrier2 && "vkCmdPipelineBarrier2 is not loaded");
		fnptrs->pfn_vkCmdPipelineBarrier2(this->handle, pDependencyInfo);
	}

	void SetDepthBoundsTestEnable(VkBool32 depthBoundsTestEnable) {
		assert(fnptrs->pfn_vkCmdSetDepthBoundsTestEnable && "vkCmdSetDepthBoundsTestEnable is not loaded");
		fnptrs->pfn_vkCmdSetDepthBoundsTestEnable(this->handle, depthBoundsTestEnable);
	}

	void SetStencilWriteMask(VkStencilFaceFlags faceMask, uint32_t writeMask) {
		assert(fnptrs->pfn_vkCmdSetStencilWriteMask && "vkCmdSetStencilWriteMask is not loaded");
		fnptrs->pfn_vkCmdSetStencilWriteMask(this->handle, faceMask, writeMask);
	}

	void WriteTimestamp2(VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query) {
		assert(fnptrs->pfn_vkCmdWriteTimestamp2 && "vkCmdWriteTimestamp2 is not loaded");
		fnptrs->pfn_vkCmdWriteTimestamp2(this->handle, stage, queryPool, query);
	}

#ifdef VK_AMD_buffer_marker
	void WriteBufferMarkerAMD(VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {
		assert(fnptrs->pfn_vkCmdWriteBufferMarkerAMD && "vkCmdWriteBufferMarkerAMD is not loaded");
		fnptrs->pfn_vkCmdWriteBufferMarkerAMD(this->handle, pipelineStage, dstBuffer, dstOffset, marker);
	}

#endif

#ifdef VK_EXT_debug_marker
	void DebugMarkerBeginEXT(const  VkDebugMarkerMarkerInfoEXT * pMarkerInfo) {
		assert(fnptrs->pfn_vkCmdDebugMarkerBeginEXT && "vkCmdDebugMarkerBeginEXT is not loaded");
		fnptrs->pfn_vkCmdDebugMarkerBeginEXT(this->handle, pMarkerInfo);
	}

	void DebugMarkerEndEXT() {
		assert(fnptrs->pfn_vkCmdDebugMarkerEndEXT && "vkCmdDebugMarkerEndEXT is not loaded");
		fnptrs->pfn_vkCmdDebugMarkerEndEXT(this->handle);
	}

	void DebugMarkerInsertEXT(const  VkDebugMarkerMarkerInfoEXT * pMarkerInfo) {
		assert(fnptrs->pfn_vkCmdDebugMarkerInsertEXT && "vkCmdDebugMarkerInsertEXT is not loaded");
		fnptrs->pfn_vkCmdDebugMarkerInsertEXT(this->handle, pMarkerInfo);
	}

#endif

#ifdef VK_NV_shading_rate_image
	void BindShadingRateImageNV(VkImageView imageView, VkImageLayout imageLayout) {
		assert(fnptrs->pfn_vkCmdBindShadingRateImageNV && "vkCmdBindShadingRateImageNV is not loaded");
		fnptrs->pfn_vkCmdBindShadingRateImageNV(this->handle, imageView, imageLayout);
	}

	void SetViewportShadingRatePaletteNV(uint32_t firstViewport, uint32_t viewportCount, const  VkShadingRatePaletteNV * pShadingRatePalettes) {
		assert(fnptrs->pfn_vkCmdSetViewportShadingRatePaletteNV && "vkCmdSetViewportShadingRatePaletteNV is not loaded");
		fnptrs->pfn_vkCmdSetViewportShadingRatePaletteNV(this->handle, firstViewport, viewportCount, pShadingRatePalettes);
	}

	void SetCoarseSampleOrderNV(VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const  VkCoarseSampleOrderCustomNV * pCustomSampleOrders) {
		assert(fnptrs->pfn_vkCmdSetCoarseSampleOrderNV && "vkCmdSetCoarseSampleOrderNV is not loaded");
		fnptrs->pfn_vkCmdSetCoarseSampleOrderNV(this->handle, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);
	}

#endif

#ifdef VK_INTEL_performance_query
	VkResult SetPerformanceMarkerINTEL(const  VkPerformanceMarkerInfoINTEL * pMarkerInfo) {
		assert(fnptrs->pfn_vkCmdSetPerformanceMarkerINTEL && "vkCmdSetPerformanceMarkerINTEL is not loaded");
		return fnptrs->pfn_vkCmdSetPerformanceMarkerINTEL(this->handle, pMarkerInfo);
	}

	VkResult SetPerformanceStreamMarkerINTEL(const  VkPerformanceStreamMarkerInfoINTEL * pMarkerInfo) {
		assert(fnptrs->pfn_vkCmdSetPerformanceStreamMarkerINTEL && "vkCmdSetPerformanceStreamMarkerINTEL is not loaded");
		return fnptrs->pfn_vkCmdSetPerformanceStreamMarkerINTEL(this->handle, pMarkerInfo);
	}

	VkResult SetPerformanceOverrideINTEL(const  VkPerformanceOverrideInfoINTEL * pOverrideInfo) {
		assert(fnptrs->pfn_vkCmdSetPerformanceOverrideINTEL && "vkCmdSetPerformanceOverrideINTEL is not loaded");
		return fnptrs->pfn_vkCmdSetPerformanceOverrideINTEL(this->handle, pOverrideInfo);
	}

#endif

#ifdef VK_NV_scissor_exclusive
	void SetExclusiveScissorNV(uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const  VkRect2D * pExclusiveScissors) {
		assert(fnptrs->pfn_vkCmdSetExclusiveScissorNV && "vkCmdSetExclusiveScissorNV is not loaded");
		fnptrs->pfn_vkCmdSetExclusiveScissorNV(this->handle, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);
	}

#endif

#ifdef VK_KHR_video_encode_queue
	void EncodeVideoKHR(const  VkVideoEncodeInfoKHR * pEncodeInfo) {
		assert(fnptrs->pfn_vkCmdEncodeVideoKHR && "vkCmdEncodeVideoKHR is not loaded");
		fnptrs->pfn_vkCmdEncodeVideoKHR(this->handle, pEncodeInfo);
	}

#endif

#ifdef VK_HUAWEI_subpass_shading
	void SubpassShadingHUAWEI() {
		assert(fnptrs->pfn_vkCmdSubpassShadingHUAWEI && "vkCmdSubpassShadingHUAWEI is not loaded");
		fnptrs->pfn_vkCmdSubpassShadingHUAWEI(this->handle);
	}

#endif

#ifdef VK_EXT_conditional_rendering
	void BeginConditionalRenderingEXT(const  VkConditionalRenderingBeginInfoEXT * pConditionalRenderingBegin) {
		assert(fnptrs->pfn_vkCmdBeginConditionalRenderingEXT && "vkCmdBeginConditionalRenderingEXT is not loaded");
		fnptrs->pfn_vkCmdBeginConditionalRenderingEXT(this->handle, pConditionalRenderingBegin);
	}

	void EndConditionalRenderingEXT() {
		assert(fnptrs->pfn_vkCmdEndConditionalRenderingEXT && "vkCmdEndConditionalRenderingEXT is not loaded");
		fnptrs->pfn_vkCmdEndConditionalRenderingEXT(this->handle);
	}

#endif

#ifdef VK_NV_clip_space_w_scaling
	void SetViewportWScalingNV(uint32_t firstViewport, uint32_t viewportCount, const  VkViewportWScalingNV * pViewportWScalings) {
		assert(fnptrs->pfn_vkCmdSetViewportWScalingNV && "vkCmdSetViewportWScalingNV is not loaded");
		fnptrs->pfn_vkCmdSetViewportWScalingNV(this->handle, firstViewport, viewportCount, pViewportWScalings);
	}

#endif

#ifdef VK_NV_fragment_shading_rate_enums
	void SetFragmentShadingRateEnumNV(VkFragmentShadingRateNV shadingRate, const  VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
		assert(fnptrs->pfn_vkCmdSetFragmentShadingRateEnumNV && "vkCmdSetFragmentShadingRateEnumNV is not loaded");
		fnptrs->pfn_vkCmdSetFragmentShadingRateEnumNV(this->handle, shadingRate, combinerOps);
	}

#endif

#ifdef VK_KHR_fragment_shading_rate
	void SetFragmentShadingRateKHR(const  VkExtent2D * pFragmentSize, const  VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
		assert(fnptrs->pfn_vkCmdSetFragmentShadingRateKHR && "vkCmdSetFragmentShadingRateKHR is not loaded");
		fnptrs->pfn_vkCmdSetFragmentShadingRateKHR(this->handle, pFragmentSize, combinerOps);
	}

#endif

#ifdef VK_HUAWEI_invocation_mask
	void BindInvocationMaskHUAWEI(VkImageView imageView, VkImageLayout imageLayout) {
		assert(fnptrs->pfn_vkCmdBindInvocationMaskHUAWEI && "vkCmdBindInvocationMaskHUAWEI is not loaded");
		fnptrs->pfn_vkCmdBindInvocationMaskHUAWEI(this->handle, imageView, imageLayout);
	}

#endif

#ifdef VK_KHR_push_descriptor
	void PushDescriptorSetKHR(VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const  VkWriteDescriptorSet * pDescriptorWrites) {
		assert(fnptrs->pfn_vkCmdPushDescriptorSetKHR && "vkCmdPushDescriptorSetKHR is not loaded");
		fnptrs->pfn_vkCmdPushDescriptorSetKHR(this->handle, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
	}

	void PushDescriptorSetWithTemplateKHR(VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const  void * pData) {
		assert(fnptrs->pfn_vkCmdPushDescriptorSetWithTemplateKHR && "vkCmdPushDescriptorSetWithTemplateKHR is not loaded");
		fnptrs->pfn_vkCmdPushDescriptorSetWithTemplateKHR(this->handle, descriptorUpdateTemplate, layout, set, pData);
	}

#endif

#ifdef VK_EXT_multi_draw
	void DrawMultiEXT(uint32_t drawCount, const  VkMultiDrawInfoEXT * pVertexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride) {
		assert(fnptrs->pfn_vkCmdDrawMultiEXT && "vkCmdDrawMultiEXT is not loaded");
		fnptrs->pfn_vkCmdDrawMultiEXT(this->handle, drawCount, pVertexInfo, instanceCount, firstInstance, stride);
	}

	void DrawMultiIndexedEXT(uint32_t drawCount, const  VkMultiDrawIndexedInfoEXT * pIndexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride, const  int32_t * pVertexOffset) {
		assert(fnptrs->pfn_vkCmdDrawMultiIndexedEXT && "vkCmdDrawMultiIndexedEXT is not loaded");
		fnptrs->pfn_vkCmdDrawMultiIndexedEXT(this->handle, drawCount, pIndexInfo, instanceCount, firstInstance, stride, pVertexOffset);
	}

#endif

#ifdef VK_EXT_sample_locations
	void SetSampleLocationsEXT(const  VkSampleLocationsInfoEXT * pSampleLocationsInfo) {
		assert(fnptrs->pfn_vkCmdSetSampleLocationsEXT && "vkCmdSetSampleLocationsEXT is not loaded");
		fnptrs->pfn_vkCmdSetSampleLocationsEXT(this->handle, pSampleLocationsInfo);
	}

#endif

#ifdef VK_KHR_synchronization2
	void WriteBufferMarker2AMD(VkPipelineStageFlags2 stage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {
		assert(fnptrs->pfn_vkCmdWriteBufferMarker2AMD && "vkCmdWriteBufferMarker2AMD is not loaded");
		fnptrs->pfn_vkCmdWriteBufferMarker2AMD(this->handle, stage, dstBuffer, dstOffset, marker);
	}

#endif

#ifdef VK_EXT_extended_dynamic_state2
	void SetPatchControlPointsEXT(uint32_t patchControlPoints) {
		assert(fnptrs->pfn_vkCmdSetPatchControlPointsEXT && "vkCmdSetPatchControlPointsEXT is not loaded");
		fnptrs->pfn_vkCmdSetPatchControlPointsEXT(this->handle, patchControlPoints);
	}

	void SetLogicOpEXT(VkLogicOp logicOp) {
		assert(fnptrs->pfn_vkCmdSetLogicOpEXT && "vkCmdSetLogicOpEXT is not loaded");
		fnptrs->pfn_vkCmdSetLogicOpEXT(this->handle, logicOp);
	}

#endif

#ifdef VK_NVX_binary_import
	void CuLaunchKernelNVX(const  VkCuLaunchInfoNVX * pLaunchInfo) {
		assert(fnptrs->pfn_vkCmdCuLaunchKernelNVX && "vkCmdCuLaunchKernelNVX is not loaded");
		fnptrs->pfn_vkCmdCuLaunchKernelNVX(this->handle, pLaunchInfo);
	}

#endif

#ifdef VK_EXT_line_rasterization
	void SetLineStippleEXT(uint32_t lineStippleFactor, uint16_t lineStipplePattern) {
		assert(fnptrs->pfn_vkCmdSetLineStippleEXT && "vkCmdSetLineStippleEXT is not loaded");
		fnptrs->pfn_vkCmdSetLineStippleEXT(this->handle, lineStippleFactor, lineStipplePattern);
	}

#endif

#ifdef VK_KHR_acceleration_structure
	void BuildAccelerationStructuresKHR(uint32_t infoCount, const  VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const  VkAccelerationStructureBuildRangeInfoKHR * const * ppBuildRangeInfos) {
		assert(fnptrs->pfn_vkCmdBuildAccelerationStructuresKHR && "vkCmdBuildAccelerationStructuresKHR is not loaded");
		fnptrs->pfn_vkCmdBuildAccelerationStructuresKHR(this->handle, infoCount, pInfos, ppBuildRangeInfos);
	}

	void BuildAccelerationStructuresIndirectKHR(uint32_t infoCount, const  VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const  VkDeviceAddress * pIndirectDeviceAddresses, const  uint32_t * pIndirectStrides, const  uint32_t * const * ppMaxPrimitiveCounts) {
		assert(fnptrs->pfn_vkCmdBuildAccelerationStructuresIndirectKHR && "vkCmdBuildAccelerationStructuresIndirectKHR is not loaded");
		fnptrs->pfn_vkCmdBuildAccelerationStructuresIndirectKHR(this->handle, infoCount, pInfos, pIndirectDeviceAddresses, pIndirectStrides, ppMaxPrimitiveCounts);
	}

	void CopyAccelerationStructureKHR(const  VkCopyAccelerationStructureInfoKHR * pInfo) {
		assert(fnptrs->pfn_vkCmdCopyAccelerationStructureKHR && "vkCmdCopyAccelerationStructureKHR is not loaded");
		fnptrs->pfn_vkCmdCopyAccelerationStructureKHR(this->handle, pInfo);
	}

	void CopyAccelerationStructureToMemoryKHR(const  VkCopyAccelerationStructureToMemoryInfoKHR * pInfo) {
		assert(fnptrs->pfn_vkCmdCopyAccelerationStructureToMemoryKHR && "vkCmdCopyAccelerationStructureToMemoryKHR is not loaded");
		fnptrs->pfn_vkCmdCopyAccelerationStructureToMemoryKHR(this->handle, pInfo);
	}

	void CopyMemoryToAccelerationStructureKHR(const  VkCopyMemoryToAccelerationStructureInfoKHR * pInfo) {
		assert(fnptrs->pfn_vkCmdCopyMemoryToAccelerationStructureKHR && "vkCmdCopyMemoryToAccelerationStructureKHR is not loaded");
		fnptrs->pfn_vkCmdCopyMemoryToAccelerationStructureKHR(this->handle, pInfo);
	}

	void WriteAccelerationStructuresPropertiesKHR(uint32_t accelerationStructureCount, const  VkAccelerationStructureKHR * pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
		assert(fnptrs->pfn_vkCmdWriteAccelerationStructuresPropertiesKHR && "vkCmdWriteAccelerationStructuresPropertiesKHR is not loaded");
		fnptrs->pfn_vkCmdWriteAccelerationStructuresPropertiesKHR(this->handle, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
	}

#endif

#ifdef VK_NV_ray_tracing
	void BuildAccelerationStructureNV(const  VkAccelerationStructureInfoNV * pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset) {
		assert(fnptrs->pfn_vkCmdBuildAccelerationStructureNV && "vkCmdBuildAccelerationStructureNV is not loaded");
		fnptrs->pfn_vkCmdBuildAccelerationStructureNV(this->handle, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset);
	}

	void CopyAccelerationStructureNV(VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode) {
		assert(fnptrs->pfn_vkCmdCopyAccelerationStructureNV && "vkCmdCopyAccelerationStructureNV is not loaded");
		fnptrs->pfn_vkCmdCopyAccelerationStructureNV(this->handle, dst, src, mode);
	}

	void TraceRaysNV(VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth) {
		assert(fnptrs->pfn_vkCmdTraceRaysNV && "vkCmdTraceRaysNV is not loaded");
		fnptrs->pfn_vkCmdTraceRaysNV(this->handle, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);
	}

	void WriteAccelerationStructuresPropertiesNV(uint32_t accelerationStructureCount, const  VkAccelerationStructureNV * pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
		assert(fnptrs->pfn_vkCmdWriteAccelerationStructuresPropertiesNV && "vkCmdWriteAccelerationStructuresPropertiesNV is not loaded");
		fnptrs->pfn_vkCmdWriteAccelerationStructuresPropertiesNV(this->handle, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
	}

#endif

#ifdef VK_EXT_discard_rectangles
	void SetDiscardRectangleEXT(uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const  VkRect2D * pDiscardRectangles) {
		assert(fnptrs->pfn_vkCmdSetDiscardRectangleEXT && "vkCmdSetDiscardRectangleEXT is not loaded");
		fnptrs->pfn_vkCmdSetDiscardRectangleEXT(this->handle, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
	}

#endif

#ifdef VK_EXT_color_write_enable
	void SetColorWriteEnableEXT(uint32_t attachmentCount, const  VkBool32 * pColorWriteEnables) {
		assert(fnptrs->pfn_vkCmdSetColorWriteEnableEXT && "vkCmdSetColorWriteEnableEXT is not loaded");
		fnptrs->pfn_vkCmdSetColorWriteEnableEXT(this->handle, attachmentCount, pColorWriteEnables);
	}

#endif

#ifdef VK_NV_device_generated_commands
	void PreprocessGeneratedCommandsNV(const  VkGeneratedCommandsInfoNV * pGeneratedCommandsInfo) {
		assert(fnptrs->pfn_vkCmdPreprocessGeneratedCommandsNV && "vkCmdPreprocessGeneratedCommandsNV is not loaded");
		fnptrs->pfn_vkCmdPreprocessGeneratedCommandsNV(this->handle, pGeneratedCommandsInfo);
	}

	void ExecuteGeneratedCommandsNV(VkBool32 isPreprocessed, const  VkGeneratedCommandsInfoNV * pGeneratedCommandsInfo) {
		assert(fnptrs->pfn_vkCmdExecuteGeneratedCommandsNV && "vkCmdExecuteGeneratedCommandsNV is not loaded");
		fnptrs->pfn_vkCmdExecuteGeneratedCommandsNV(this->handle, isPreprocessed, pGeneratedCommandsInfo);
	}

	void BindPipelineShaderGroupNV(VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex) {
		assert(fnptrs->pfn_vkCmdBindPipelineShaderGroupNV && "vkCmdBindPipelineShaderGroupNV is not loaded");
		fnptrs->pfn_vkCmdBindPipelineShaderGroupNV(this->handle, pipelineBindPoint, pipeline, groupIndex);
	}

#endif

#ifdef VK_EXT_debug_utils
	void BeginDebugUtilsLabelEXT(const  VkDebugUtilsLabelEXT * pLabelInfo) {
		assert(fnptrs->pfn_vkCmdBeginDebugUtilsLabelEXT && "vkCmdBeginDebugUtilsLabelEXT is not loaded");
		fnptrs->pfn_vkCmdBeginDebugUtilsLabelEXT(this->handle, pLabelInfo);
	}

	void EndDebugUtilsLabelEXT() {
		assert(fnptrs->pfn_vkCmdEndDebugUtilsLabelEXT && "vkCmdEndDebugUtilsLabelEXT is not loaded");
		fnptrs->pfn_vkCmdEndDebugUtilsLabelEXT(this->handle);
	}

	void InsertDebugUtilsLabelEXT(const  VkDebugUtilsLabelEXT * pLabelInfo) {
		assert(fnptrs->pfn_vkCmdInsertDebugUtilsLabelEXT && "vkCmdInsertDebugUtilsLabelEXT is not loaded");
		fnptrs->pfn_vkCmdInsertDebugUtilsLabelEXT(this->handle, pLabelInfo);
	}

#endif

#ifdef VK_KHR_video_decode_queue
	void DecodeVideoKHR(const  VkVideoDecodeInfoKHR * pFrameInfo) {
		assert(fnptrs->pfn_vkCmdDecodeVideoKHR && "vkCmdDecodeVideoKHR is not loaded");
		fnptrs->pfn_vkCmdDecodeVideoKHR(this->handle, pFrameInfo);
	}

#endif

#ifdef VK_NV_device_diagnostic_checkpoints
	void SetCheckpointNV(const  void * pCheckpointMarker) {
		assert(fnptrs->pfn_vkCmdSetCheckpointNV && "vkCmdSetCheckpointNV is not loaded");
		fnptrs->pfn_vkCmdSetCheckpointNV(this->handle, pCheckpointMarker);
	}

#endif

#ifdef VK_NV_mesh_shader
	void DrawMeshTasksNV(uint32_t taskCount, uint32_t firstTask) {
		assert(fnptrs->pfn_vkCmdDrawMeshTasksNV && "vkCmdDrawMeshTasksNV is not loaded");
		fnptrs->pfn_vkCmdDrawMeshTasksNV(this->handle, taskCount, firstTask);
	}

	void DrawMeshTasksIndirectNV(VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
		assert(fnptrs->pfn_vkCmdDrawMeshTasksIndirectNV && "vkCmdDrawMeshTasksIndirectNV is not loaded");
		fnptrs->pfn_vkCmdDrawMeshTasksIndirectNV(this->handle, buffer, offset, drawCount, stride);
	}

	void DrawMeshTasksIndirectCountNV(VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
		assert(fnptrs->pfn_vkCmdDrawMeshTasksIndirectCountNV && "vkCmdDrawMeshTasksIndirectCountNV is not loaded");
		fnptrs->pfn_vkCmdDrawMeshTasksIndirectCountNV(this->handle, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
	}

#endif

#ifdef VK_KHR_ray_tracing_pipeline
	void TraceRaysKHR(const  VkStridedDeviceAddressRegionKHR * pRaygenShaderBindingTable, const  VkStridedDeviceAddressRegionKHR * pMissShaderBindingTable, const  VkStridedDeviceAddressRegionKHR * pHitShaderBindingTable, const  VkStridedDeviceAddressRegionKHR * pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth) {
		assert(fnptrs->pfn_vkCmdTraceRaysKHR && "vkCmdTraceRaysKHR is not loaded");
		fnptrs->pfn_vkCmdTraceRaysKHR(this->handle, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, width, height, depth);
	}

	void TraceRaysIndirectKHR(const  VkStridedDeviceAddressRegionKHR * pRaygenShaderBindingTable, const  VkStridedDeviceAddressRegionKHR * pMissShaderBindingTable, const  VkStridedDeviceAddressRegionKHR * pHitShaderBindingTable, const  VkStridedDeviceAddressRegionKHR * pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress) {
		assert(fnptrs->pfn_vkCmdTraceRaysIndirectKHR && "vkCmdTraceRaysIndirectKHR is not loaded");
		fnptrs->pfn_vkCmdTraceRaysIndirectKHR(this->handle, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, indirectDeviceAddress);
	}

	void SetRayTracingPipelineStackSizeKHR(uint32_t pipelineStackSize) {
		assert(fnptrs->pfn_vkCmdSetRayTracingPipelineStackSizeKHR && "vkCmdSetRayTracingPipelineStackSizeKHR is not loaded");
		fnptrs->pfn_vkCmdSetRayTracingPipelineStackSizeKHR(this->handle, pipelineStackSize);
	}

#endif

#ifdef VK_EXT_transform_feedback
	void BindTransformFeedbackBuffersEXT(uint32_t firstBinding, uint32_t bindingCount, const  VkBuffer * pBuffers, const  VkDeviceSize * pOffsets, const  VkDeviceSize * pSizes) {
		assert(fnptrs->pfn_vkCmdBindTransformFeedbackBuffersEXT && "vkCmdBindTransformFeedbackBuffersEXT is not loaded");
		fnptrs->pfn_vkCmdBindTransformFeedbackBuffersEXT(this->handle, firstBinding, bindingCount, pBuffers, pOffsets, pSizes);
	}

	void BeginTransformFeedbackEXT(uint32_t firstCounterBuffer, uint32_t counterBufferCount, const  VkBuffer * pCounterBuffers, const  VkDeviceSize * pCounterBufferOffsets) {
		assert(fnptrs->pfn_vkCmdBeginTransformFeedbackEXT && "vkCmdBeginTransformFeedbackEXT is not loaded");
		fnptrs->pfn_vkCmdBeginTransformFeedbackEXT(this->handle, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
	}

	void EndTransformFeedbackEXT(uint32_t firstCounterBuffer, uint32_t counterBufferCount, const  VkBuffer * pCounterBuffers, const  VkDeviceSize * pCounterBufferOffsets) {
		assert(fnptrs->pfn_vkCmdEndTransformFeedbackEXT && "vkCmdEndTransformFeedbackEXT is not loaded");
		fnptrs->pfn_vkCmdEndTransformFeedbackEXT(this->handle, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
	}

	void BeginQueryIndexedEXT(VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index) {
		assert(fnptrs->pfn_vkCmdBeginQueryIndexedEXT && "vkCmdBeginQueryIndexedEXT is not loaded");
		fnptrs->pfn_vkCmdBeginQueryIndexedEXT(this->handle, queryPool, query, flags, index);
	}

	void EndQueryIndexedEXT(VkQueryPool queryPool, uint32_t query, uint32_t index) {
		assert(fnptrs->pfn_vkCmdEndQueryIndexedEXT && "vkCmdEndQueryIndexedEXT is not loaded");
		fnptrs->pfn_vkCmdEndQueryIndexedEXT(this->handle, queryPool, query, index);
	}

	void DrawIndirectByteCountEXT(uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride) {
		assert(fnptrs->pfn_vkCmdDrawIndirectByteCountEXT && "vkCmdDrawIndirectByteCountEXT is not loaded");
		fnptrs->pfn_vkCmdDrawIndirectByteCountEXT(this->handle, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride);
	}

#endif

#ifdef VK_KHR_video_queue
	void BeginVideoCodingKHR(const  VkVideoBeginCodingInfoKHR * pBeginInfo) {
		assert(fnptrs->pfn_vkCmdBeginVideoCodingKHR && "vkCmdBeginVideoCodingKHR is not loaded");
		fnptrs->pfn_vkCmdBeginVideoCodingKHR(this->handle, pBeginInfo);
	}

	void EndVideoCodingKHR(const  VkVideoEndCodingInfoKHR * pEndCodingInfo) {
		assert(fnptrs->pfn_vkCmdEndVideoCodingKHR && "vkCmdEndVideoCodingKHR is not loaded");
		fnptrs->pfn_vkCmdEndVideoCodingKHR(this->handle, pEndCodingInfo);
	}

	void ControlVideoCodingKHR(const  VkVideoCodingControlInfoKHR * pCodingControlInfo) {
		assert(fnptrs->pfn_vkCmdControlVideoCodingKHR && "vkCmdControlVideoCodingKHR is not loaded");
		fnptrs->pfn_vkCmdControlVideoCodingKHR(this->handle, pCodingControlInfo);
	}

#endif

#ifdef VK_EXT_vertex_input_dynamic_state
	void SetVertexInputEXT(uint32_t vertexBindingDescriptionCount, const  VkVertexInputBindingDescription2EXT * pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount, const  VkVertexInputAttributeDescription2EXT * pVertexAttributeDescriptions) {
		assert(fnptrs->pfn_vkCmdSetVertexInputEXT && "vkCmdSetVertexInputEXT is not loaded");
		fnptrs->pfn_vkCmdSetVertexInputEXT(this->handle, vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount, pVertexAttributeDescriptions);
	}

#endif

};
#endif
#ifdef __cplusplus
struct VklQueueFunctions {
	VklDeviceFunctions* fnptrs;
	VkQueue handle;
	VkResult Submit2(uint32_t submitCount, const  VkSubmitInfo2 * pSubmits, VkFence fence) {
		assert(fnptrs->pfn_vkQueueSubmit2 && "vkQueueSubmit2 is not loaded");
		return fnptrs->pfn_vkQueueSubmit2(this->handle, submitCount, pSubmits, fence);
	}

	VkResult BindSparse(uint32_t bindInfoCount, const  VkBindSparseInfo * pBindInfo, VkFence fence) {
		assert(fnptrs->pfn_vkQueueBindSparse && "vkQueueBindSparse is not loaded");
		return fnptrs->pfn_vkQueueBindSparse(this->handle, bindInfoCount, pBindInfo, fence);
	}

	VkResult Submit(uint32_t submitCount, const  VkSubmitInfo * pSubmits, VkFence fence) {
		assert(fnptrs->pfn_vkQueueSubmit && "vkQueueSubmit is not loaded");
		return fnptrs->pfn_vkQueueSubmit(this->handle, submitCount, pSubmits, fence);
	}

	VkResult WaitIdle() {
		assert(fnptrs->pfn_vkQueueWaitIdle && "vkQueueWaitIdle is not loaded");
		return fnptrs->pfn_vkQueueWaitIdle(this->handle);
	}

#ifdef VK_INTEL_performance_query
	VkResult SetPerformanceConfigurationINTEL(VkPerformanceConfigurationINTEL configuration) {
		assert(fnptrs->pfn_vkQueueSetPerformanceConfigurationINTEL && "vkQueueSetPerformanceConfigurationINTEL is not loaded");
		return fnptrs->pfn_vkQueueSetPerformanceConfigurationINTEL(this->handle, configuration);
	}

#endif
#ifdef VK_KHR_synchronization2
	void GetCheckpointData2NV(uint32_t * pCheckpointDataCount, VkCheckpointData2NV * pCheckpointData) {
		assert(fnptrs->pfn_vkGetQueueCheckpointData2NV && "vkGetQueueCheckpointData2NV is not loaded");
		fnptrs->pfn_vkGetQueueCheckpointData2NV(this->handle, pCheckpointDataCount, pCheckpointData);
	}

#endif
#ifdef VK_KHR_swapchain
	VkResult PresentKHR(const  VkPresentInfoKHR * pPresentInfo) {
		assert(fnptrs->pfn_vkQueuePresentKHR && "vkQueuePresentKHR is not loaded");
		return fnptrs->pfn_vkQueuePresentKHR(this->handle, pPresentInfo);
	}

#endif
#ifdef VK_EXT_debug_utils
	void BeginDebugUtilsLabelEXT(const  VkDebugUtilsLabelEXT * pLabelInfo) {
		assert(fnptrs->pfn_vkQueueBeginDebugUtilsLabelEXT && "vkQueueBeginDebugUtilsLabelEXT is not loaded");
		fnptrs->pfn_vkQueueBeginDebugUtilsLabelEXT(this->handle, pLabelInfo);
	}

	void EndDebugUtilsLabelEXT() {
		assert(fnptrs->pfn_vkQueueEndDebugUtilsLabelEXT && "vkQueueEndDebugUtilsLabelEXT is not loaded");
		fnptrs->pfn_vkQueueEndDebugUtilsLabelEXT(this->handle);
	}

	void InsertDebugUtilsLabelEXT(const  VkDebugUtilsLabelEXT * pLabelInfo) {
		assert(fnptrs->pfn_vkQueueInsertDebugUtilsLabelEXT && "vkQueueInsertDebugUtilsLabelEXT is not loaded");
		fnptrs->pfn_vkQueueInsertDebugUtilsLabelEXT(this->handle, pLabelInfo);
	}

#endif
#ifdef VK_NV_device_diagnostic_checkpoints
	void GetCheckpointDataNV(uint32_t * pCheckpointDataCount, VkCheckpointDataNV * pCheckpointData) {
		assert(fnptrs->pfn_vkGetQueueCheckpointDataNV && "vkGetQueueCheckpointDataNV is not loaded");
		fnptrs->pfn_vkGetQueueCheckpointDataNV(this->handle, pCheckpointDataCount, pCheckpointData);
	}

#endif
#ifdef VK_ANDROID_native_buffer
	VkResult SignalReleaseImageANDROID(uint32_t waitSemaphoreCount, const  VkSemaphore * pWaitSemaphores, VkImage image, int * pNativeFenceFd) {
		assert(fnptrs->pfn_vkQueueSignalReleaseImageANDROID && "vkQueueSignalReleaseImageANDROID is not loaded");
		return fnptrs->pfn_vkQueueSignalReleaseImageANDROID(this->handle, waitSemaphoreCount, pWaitSemaphores, image, pNativeFenceFd);
	}

#endif
};
#endif
struct VklFunctions {
	PFN_vkCreateInstance pfn_vkCreateInstance;
	PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 pfn_vkGetPhysicalDeviceSparseImageFormatProperties2;
	PFN_vkEnumerateDeviceLayerProperties pfn_vkEnumerateDeviceLayerProperties;
	PFN_vkCreateDevice pfn_vkCreateDevice;
	PFN_vkGetPhysicalDeviceImageFormatProperties2 pfn_vkGetPhysicalDeviceImageFormatProperties2;
	PFN_vkGetDeviceProcAddr pfn_vkGetDeviceProcAddr;
	PFN_vkGetPhysicalDeviceQueueFamilyProperties2 pfn_vkGetPhysicalDeviceQueueFamilyProperties2;
	PFN_vkEnumerateDeviceExtensionProperties pfn_vkEnumerateDeviceExtensionProperties;
	PFN_vkGetPhysicalDeviceProperties2 pfn_vkGetPhysicalDeviceProperties2;
	PFN_vkGetPhysicalDeviceFeatures2 pfn_vkGetPhysicalDeviceFeatures2;
	PFN_vkEnumeratePhysicalDeviceGroups pfn_vkEnumeratePhysicalDeviceGroups;
	PFN_vkGetPhysicalDeviceFormatProperties pfn_vkGetPhysicalDeviceFormatProperties;
	PFN_vkGetPhysicalDeviceExternalSemaphoreProperties pfn_vkGetPhysicalDeviceExternalSemaphoreProperties;
	PFN_vkGetPhysicalDeviceToolProperties pfn_vkGetPhysicalDeviceToolProperties;
	PFN_vkGetPhysicalDeviceFeatures pfn_vkGetPhysicalDeviceFeatures;
	PFN_vkGetPhysicalDeviceFormatProperties2 pfn_vkGetPhysicalDeviceFormatProperties2;
	PFN_vkGetPhysicalDeviceSparseImageFormatProperties pfn_vkGetPhysicalDeviceSparseImageFormatProperties;
	PFN_vkGetPhysicalDeviceExternalFenceProperties pfn_vkGetPhysicalDeviceExternalFenceProperties;
	PFN_vkDestroyInstance pfn_vkDestroyInstance;
	PFN_vkEnumerateInstanceExtensionProperties pfn_vkEnumerateInstanceExtensionProperties;
	PFN_vkEnumerateInstanceVersion pfn_vkEnumerateInstanceVersion;
	PFN_vkGetPhysicalDeviceQueueFamilyProperties pfn_vkGetPhysicalDeviceQueueFamilyProperties;
	PFN_vkGetPhysicalDeviceExternalBufferProperties pfn_vkGetPhysicalDeviceExternalBufferProperties;
	PFN_vkGetPhysicalDeviceProperties pfn_vkGetPhysicalDeviceProperties;
	PFN_vkEnumeratePhysicalDevices pfn_vkEnumeratePhysicalDevices;
	PFN_vkGetPhysicalDeviceMemoryProperties2 pfn_vkGetPhysicalDeviceMemoryProperties2;
	PFN_vkGetPhysicalDeviceImageFormatProperties pfn_vkGetPhysicalDeviceImageFormatProperties;
	PFN_vkGetInstanceProcAddr pfn_vkGetInstanceProcAddr;
	PFN_vkEnumerateInstanceLayerProperties pfn_vkEnumerateInstanceLayerProperties;
	PFN_vkGetPhysicalDeviceMemoryProperties pfn_vkGetPhysicalDeviceMemoryProperties;
#ifdef VK_NV_coverage_reduction_mode
	PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV pfn_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV;
#endif
#ifdef VK_EXT_acquire_xlib_display
	PFN_vkAcquireXlibDisplayEXT pfn_vkAcquireXlibDisplayEXT;
	PFN_vkGetRandROutputDisplayEXT pfn_vkGetRandROutputDisplayEXT;
#endif
#ifdef VK_NV_cooperative_matrix
	PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV;
#endif
#ifdef VK_EXT_direct_mode_display
	PFN_vkReleaseDisplayEXT pfn_vkReleaseDisplayEXT;
#endif
#ifdef VK_GGP_stream_descriptor_surface
	PFN_vkCreateStreamDescriptorSurfaceGGP pfn_vkCreateStreamDescriptorSurfaceGGP;
#endif
#ifdef VK_KHR_win32_surface
	PFN_vkCreateWin32SurfaceKHR pfn_vkCreateWin32SurfaceKHR;
	PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR pfn_vkGetPhysicalDeviceWin32PresentationSupportKHR;
#endif
#ifdef VK_KHR_android_surface
	PFN_vkCreateAndroidSurfaceKHR pfn_vkCreateAndroidSurfaceKHR;
#endif
#ifdef VK_KHR_wayland_surface
	PFN_vkCreateWaylandSurfaceKHR pfn_vkCreateWaylandSurfaceKHR;
	PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR pfn_vkGetPhysicalDeviceWaylandPresentationSupportKHR;
#endif
#ifdef VK_NV_acquire_winrt_display
	PFN_vkAcquireWinrtDisplayNV pfn_vkAcquireWinrtDisplayNV;
	PFN_vkGetWinrtDisplayNV pfn_vkGetWinrtDisplayNV;
#endif
#ifdef VK_NV_external_memory_capabilities
	PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV pfn_vkGetPhysicalDeviceExternalImageFormatPropertiesNV;
#endif
#ifdef VK_KHR_fragment_shading_rate
	PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR pfn_vkGetPhysicalDeviceFragmentShadingRatesKHR;
#endif
#ifdef VK_KHR_display
	PFN_vkGetPhysicalDeviceDisplayPropertiesKHR pfn_vkGetPhysicalDeviceDisplayPropertiesKHR;
	PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR pfn_vkGetPhysicalDeviceDisplayPlanePropertiesKHR;
	PFN_vkGetDisplayPlaneSupportedDisplaysKHR pfn_vkGetDisplayPlaneSupportedDisplaysKHR;
	PFN_vkGetDisplayModePropertiesKHR pfn_vkGetDisplayModePropertiesKHR;
	PFN_vkCreateDisplayModeKHR pfn_vkCreateDisplayModeKHR;
	PFN_vkGetDisplayPlaneCapabilitiesKHR pfn_vkGetDisplayPlaneCapabilitiesKHR;
	PFN_vkCreateDisplayPlaneSurfaceKHR pfn_vkCreateDisplayPlaneSurfaceKHR;
#endif
#ifdef VK_MVK_ios_surface
	PFN_vkCreateIOSSurfaceMVK pfn_vkCreateIOSSurfaceMVK;
#endif
#ifdef VK_KHR_performance_query
	PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR pfn_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR;
	PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR pfn_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR;
#endif
#ifdef VK_KHR_xlib_surface
	PFN_vkCreateXlibSurfaceKHR pfn_vkCreateXlibSurfaceKHR;
	PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR pfn_vkGetPhysicalDeviceXlibPresentationSupportKHR;
#endif
#ifdef VK_NN_vi_surface
	PFN_vkCreateViSurfaceNN pfn_vkCreateViSurfaceNN;
#endif
#ifdef VK_KHR_xcb_surface
	PFN_vkCreateXcbSurfaceKHR pfn_vkCreateXcbSurfaceKHR;
	PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR pfn_vkGetPhysicalDeviceXcbPresentationSupportKHR;
#endif
#ifdef VK_EXT_sample_locations
	PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT pfn_vkGetPhysicalDeviceMultisamplePropertiesEXT;
#endif
#ifdef VK_EXT_calibrated_timestamps
	PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT;
#endif
#ifdef VK_EXT_metal_surface
	PFN_vkCreateMetalSurfaceEXT pfn_vkCreateMetalSurfaceEXT;
#endif
#ifdef VK_EXT_acquire_drm_display
	PFN_vkAcquireDrmDisplayEXT pfn_vkAcquireDrmDisplayEXT;
	PFN_vkGetDrmDisplayEXT pfn_vkGetDrmDisplayEXT;
#endif
#ifdef VK_QNX_screen_surface
	PFN_vkCreateScreenSurfaceQNX pfn_vkCreateScreenSurfaceQNX;
	PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX pfn_vkGetPhysicalDeviceScreenPresentationSupportQNX;
#endif
#ifdef VK_KHR_surface
	PFN_vkDestroySurfaceKHR pfn_vkDestroySurfaceKHR;
	PFN_vkGetPhysicalDeviceSurfaceSupportKHR pfn_vkGetPhysicalDeviceSurfaceSupportKHR;
	PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR pfn_vkGetPhysicalDeviceSurfaceCapabilitiesKHR;
	PFN_vkGetPhysicalDeviceSurfaceFormatsKHR pfn_vkGetPhysicalDeviceSurfaceFormatsKHR;
	PFN_vkGetPhysicalDeviceSurfacePresentModesKHR pfn_vkGetPhysicalDeviceSurfacePresentModesKHR;
#endif
#ifdef VK_KHR_swapchain
	PFN_vkGetPhysicalDevicePresentRectanglesKHR pfn_vkGetPhysicalDevicePresentRectanglesKHR;
#endif
#ifdef VK_KHR_get_display_properties2
	PFN_vkGetPhysicalDeviceDisplayProperties2KHR pfn_vkGetPhysicalDeviceDisplayProperties2KHR;
	PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR pfn_vkGetPhysicalDeviceDisplayPlaneProperties2KHR;
	PFN_vkGetDisplayModeProperties2KHR pfn_vkGetDisplayModeProperties2KHR;
	PFN_vkGetDisplayPlaneCapabilities2KHR pfn_vkGetDisplayPlaneCapabilities2KHR;
#endif
#ifdef VK_EXT_debug_report
	PFN_vkCreateDebugReportCallbackEXT pfn_vkCreateDebugReportCallbackEXT;
	PFN_vkDestroyDebugReportCallbackEXT pfn_vkDestroyDebugReportCallbackEXT;
	PFN_vkDebugReportMessageEXT pfn_vkDebugReportMessageEXT;
#endif
#ifdef VK_EXT_debug_utils
	PFN_vkCreateDebugUtilsMessengerEXT pfn_vkCreateDebugUtilsMessengerEXT;
	PFN_vkDestroyDebugUtilsMessengerEXT pfn_vkDestroyDebugUtilsMessengerEXT;
	PFN_vkSubmitDebugUtilsMessageEXT pfn_vkSubmitDebugUtilsMessageEXT;
#endif
#ifdef VK_FUCHSIA_imagepipe_surface
	PFN_vkCreateImagePipeSurfaceFUCHSIA pfn_vkCreateImagePipeSurfaceFUCHSIA;
#endif
#ifdef VK_EXT_full_screen_exclusive
	PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT pfn_vkGetPhysicalDeviceSurfacePresentModes2EXT;
#endif
#ifdef VK_MVK_macos_surface
	PFN_vkCreateMacOSSurfaceMVK pfn_vkCreateMacOSSurfaceMVK;
#endif
#ifdef VK_KHR_video_queue
	PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR pfn_vkGetPhysicalDeviceVideoCapabilitiesKHR;
	PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR pfn_vkGetPhysicalDeviceVideoFormatPropertiesKHR;
#endif
#ifdef VK_EXT_directfb_surface
	PFN_vkCreateDirectFBSurfaceEXT pfn_vkCreateDirectFBSurfaceEXT;
	PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT pfn_vkGetPhysicalDeviceDirectFBPresentationSupportEXT;
#endif
#ifdef VK_EXT_display_surface_counter
	PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT pfn_vkGetPhysicalDeviceSurfaceCapabilities2EXT;
#endif
#ifdef VK_KHR_get_surface_capabilities2
	PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR pfn_vkGetPhysicalDeviceSurfaceCapabilities2KHR;
	PFN_vkGetPhysicalDeviceSurfaceFormats2KHR pfn_vkGetPhysicalDeviceSurfaceFormats2KHR;
#endif
#ifdef VK_EXT_headless_surface
	PFN_vkCreateHeadlessSurfaceEXT pfn_vkCreateHeadlessSurfaceEXT;
#endif
	VklDeviceFunctions dfn;
};
#ifdef VKL_IMPL
static struct VklFunctions g_vkl_fnptrs;

VKAPI_ATTR void VKAPI_CALL vkCmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDispatch && "vkCmdDispatch is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ);
}


VKAPI_ATTR VkResult VKAPI_CALL vkDeviceWaitIdle(VkDevice device) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDeviceWaitIdle && "vkDeviceWaitIdle is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkDeviceWaitIdle(device);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyRenderPass(VkDevice device, VkRenderPass renderPass, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyRenderPass && "vkDestroyRenderPass is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyRenderPass(device, renderPass, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkCmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const  VkEvent * pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const  VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const  VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const  VkImageMemoryBarrier * pImageMemoryBarriers) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdWaitEvents && "vkCmdWaitEvents is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthCompareOp(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetDepthCompareOp && "vkCmdSetDepthCompareOp is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetDepthCompareOp(commandBuffer, depthCompareOp);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetRasterizerDiscardEnable(VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetRasterizerDiscardEnable && "vkCmdSetRasterizerDiscardEnable is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetRasterizerDiscardEnable(commandBuffer, rasterizerDiscardEnable);
}


VKAPI_ATTR void VKAPI_CALL vkCmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const  VkClearColorValue * pColor, uint32_t rangeCount, const  VkImageSubresourceRange * pRanges) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdClearColorImage && "vkCmdClearColorImage is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);
}


VKAPI_ATTR VkResult VKAPI_CALL vkQueueSubmit2(VkQueue queue, uint32_t submitCount, const  VkSubmitInfo2 * pSubmits, VkFence fence) {
	assert(g_vkl_fnptrs.dfn.pfn_vkQueueSubmit2 && "vkQueueSubmit2 is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkQueueSubmit2(queue, submitCount, pSubmits, fence);
}


VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetBufferDeviceAddress(VkDevice device, const  VkBufferDeviceAddressInfo * pInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetBufferDeviceAddress && "vkGetBufferDeviceAddress is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetBufferDeviceAddress(device, pInfo);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetDepthBias && "vkCmdSetDepthBias is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
}


VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory2(VkDevice device, uint32_t bindInfoCount, const  VkBindBufferMemoryInfo * pBindInfos) {
	assert(g_vkl_fnptrs.dfn.pfn_vkBindBufferMemory2 && "vkBindBufferMemory2 is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkBindBufferMemory2(device, bindInfoCount, pBindInfos);
}


VKAPI_ATTR void VKAPI_CALL vkGetDeviceImageSparseMemoryRequirements(VkDevice device, const  VkDeviceImageMemoryRequirements * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeviceImageSparseMemoryRequirements && "vkGetDeviceImageSparseMemoryRequirements is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetDeviceImageSparseMemoryRequirements(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}


VKAPI_ATTR void VKAPI_CALL vkCmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const  VkImageCopy * pRegions) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdCopyImage && "vkCmdCopyImage is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyImage(VkDevice device, VkImage image, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyImage && "vkDestroyImage is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyImage(device, image, pAllocator);
}


VKAPI_ATTR VkResult VKAPI_CALL vkQueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const  VkBindSparseInfo * pBindInfo, VkFence fence) {
	assert(g_vkl_fnptrs.dfn.pfn_vkQueueBindSparse && "vkQueueBindSparse is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkQueueBindSparse(queue, bindInfoCount, pBindInfo, fence);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateInstance(const  VkInstanceCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkInstance * pInstance) {
	assert(g_vkl_fnptrs.pfn_vkCreateInstance && "vkCreateInstance is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateInstance(pCreateInfo, pAllocator, pInstance);
}


VKAPI_ATTR void VKAPI_CALL vkCmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const  VkCommandBuffer * pCommandBuffers) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdExecuteCommands && "vkCmdExecuteCommands is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers);
}


VKAPI_ATTR VkResult VKAPI_CALL vkWaitSemaphores(VkDevice device, const  VkSemaphoreWaitInfo * pWaitInfo, uint64_t timeout) {
	assert(g_vkl_fnptrs.dfn.pfn_vkWaitSemaphores && "vkWaitSemaphores is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkWaitSemaphores(device, pWaitInfo, timeout);
}


VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDrawIndirectCount && "vkCmdDrawIndirectCount is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDrawIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}


VKAPI_ATTR void VKAPI_CALL vkCmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdCopyQueryPoolResults && "vkCmdCopyQueryPoolResults is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
}


VKAPI_ATTR void VKAPI_CALL vkGetDeviceBufferMemoryRequirements(VkDevice device, const  VkDeviceBufferMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeviceBufferMemoryRequirements && "vkGetDeviceBufferMemoryRequirements is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetDeviceBufferMemoryRequirements(device, pInfo, pMemoryRequirements);
}


VKAPI_ATTR void VKAPI_CALL vkCmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const  VkBufferCopy * pRegions) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdCopyBuffer && "vkCmdCopyBuffer is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateBuffer(VkDevice device, const  VkBufferCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkBuffer * pBuffer) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateBuffer && "vkCreateBuffer is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateBuffer(device, pCreateInfo, pAllocator, pBuffer);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceSparseImageFormatProperties2(VkPhysicalDevice physicalDevice, const  VkPhysicalDeviceSparseImageFormatInfo2 * pFormatInfo, uint32_t * pPropertyCount, VkSparseImageFormatProperties2 * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSparseImageFormatProperties2 && "vkGetPhysicalDeviceSparseImageFormatProperties2 is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
}


VKAPI_ATTR void VKAPI_CALL vkCmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBindPipeline && "vkCmdBindPipeline is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyDescriptorPool && "vkDestroyDescriptorPool is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyDescriptorPool(device, descriptorPool, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const  VkBufferImageCopy * pRegions) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdCopyBufferToImage && "vkCmdCopyBufferToImage is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
}


VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkLayerProperties * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkEnumerateDeviceLayerProperties && "vkEnumerateDeviceLayerProperties is not loaded");
	return  g_vkl_fnptrs.pfn_vkEnumerateDeviceLayerProperties(physicalDevice, pPropertyCount, pProperties);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyEvent(VkDevice device, VkEvent event, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyEvent && "vkDestroyEvent is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyEvent(device, event, pAllocator);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreatePrivateDataSlot(VkDevice device, const  VkPrivateDataSlotCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkPrivateDataSlot * pPrivateDataSlot) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreatePrivateDataSlot && "vkCreatePrivateDataSlot is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreatePrivateDataSlot(device, pCreateInfo, pAllocator, pPrivateDataSlot);
}


VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements2(VkDevice device, const  VkImageMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetImageMemoryRequirements2 && "vkGetImageMemoryRequirements2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetImageMemoryRequirements2(device, pInfo, pMemoryRequirements);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateDevice(VkPhysicalDevice physicalDevice, const  VkDeviceCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkDevice * pDevice) {
	assert(g_vkl_fnptrs.pfn_vkCreateDevice && "vkCreateDevice is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice);
}


VKAPI_ATTR void VKAPI_CALL vkCmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const  VkClearAttachment * pAttachments, uint32_t rectCount, const  VkClearRect * pRects) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdClearAttachments && "vkCmdClearAttachments is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetStencilReference && "vkCmdSetStencilReference is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetStencilReference(commandBuffer, faceMask, reference);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetCullMode(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetCullMode && "vkCmdSetCullMode is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetCullMode(commandBuffer, cullMode);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateSampler(VkDevice device, const  VkSamplerCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSampler * pSampler) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateSampler && "vkCreateSampler is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateSampler(device, pCreateInfo, pAllocator, pSampler);
}


VKAPI_ATTR void VKAPI_CALL vkCmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdResetQueryPool && "vkCmdResetQueryPool is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorUpdateTemplate(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyDescriptorUpdateTemplate && "vkDestroyDescriptorUpdateTemplate is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetBlendConstants(VkCommandBuffer commandBuffer, const  float blendConstants[4]) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetBlendConstants && "vkCmdSetBlendConstants is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetBlendConstants(commandBuffer, blendConstants);
}


VKAPI_ATTR void VKAPI_CALL vkGetImageSparseMemoryRequirements(VkDevice device, VkImage image, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements * pSparseMemoryRequirements) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetImageSparseMemoryRequirements && "vkGetImageSparseMemoryRequirements is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}


VKAPI_ATTR void VKAPI_CALL vkCmdResetEvent2(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdResetEvent2 && "vkCmdResetEvent2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdResetEvent2(commandBuffer, event, stageMask);
}


VKAPI_ATTR VkResult VKAPI_CALL vkSetEvent(VkDevice device, VkEvent event) {
	assert(g_vkl_fnptrs.dfn.pfn_vkSetEvent && "vkSetEvent is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkSetEvent(device, event);
}


VKAPI_ATTR VkResult VKAPI_CALL vkResetEvent(VkDevice device, VkEvent event) {
	assert(g_vkl_fnptrs.dfn.pfn_vkResetEvent && "vkResetEvent is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkResetEvent(device, event);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateSamplerYcbcrConversion(VkDevice device, const  VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateSamplerYcbcrConversion && "vkCreateSamplerYcbcrConversion is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion);
}


VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements(VkDevice device, VkBuffer buffer, VkMemoryRequirements * pMemoryRequirements) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetBufferMemoryRequirements && "vkGetBufferMemoryRequirements is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetBufferMemoryRequirements(device, buffer, pMemoryRequirements);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetLineWidth && "vkCmdSetLineWidth is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetLineWidth(commandBuffer, lineWidth);
}


VKAPI_ATTR void VKAPI_CALL vkCmdCopyBufferToImage2(VkCommandBuffer commandBuffer, const  VkCopyBufferToImageInfo2 * pCopyBufferToImageInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdCopyBufferToImage2 && "vkCmdCopyBufferToImage2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdCopyBufferToImage2(commandBuffer, pCopyBufferToImageInfo);
}


VKAPI_ATTR VkResult VKAPI_CALL vkResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags) {
	assert(g_vkl_fnptrs.dfn.pfn_vkResetCommandPool && "vkResetCommandPool is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkResetCommandPool(device, commandPool, flags);
}


VKAPI_ATTR void VKAPI_CALL vkTrimCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags) {
	assert(g_vkl_fnptrs.dfn.pfn_vkTrimCommandPool && "vkTrimCommandPool is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkTrimCommandPool(device, commandPool, flags);
}


VKAPI_ATTR void VKAPI_CALL vkCmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdWriteTimestamp && "vkCmdWriteTimestamp is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query);
}


VKAPI_ATTR void VKAPI_CALL vkGetDeviceGroupPeerMemoryFeatures(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags * pPeerMemoryFeatures) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeviceGroupPeerMemoryFeatures && "vkGetDeviceGroupPeerMemoryFeatures is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
}


VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceImageFormatProperties2(VkPhysicalDevice physicalDevice, const  VkPhysicalDeviceImageFormatInfo2 * pImageFormatInfo, VkImageFormatProperties2 * pImageFormatProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceImageFormatProperties2 && "vkGetPhysicalDeviceImageFormatProperties2 is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const  VkGraphicsPipelineCreateInfo * pCreateInfos, const  VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateGraphicsPipelines && "vkCreateGraphicsPipelines is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyImageView(VkDevice device, VkImageView imageView, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyImageView && "vkDestroyImageView is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyImageView(device, imageView, pAllocator);
}


VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetDeviceProcAddr(VkDevice device, const  char * pName) {
	assert(g_vkl_fnptrs.pfn_vkGetDeviceProcAddr && "vkGetDeviceProcAddr is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetDeviceProcAddr(device, pName);
}


VKAPI_ATTR void VKAPI_CALL vkGetImageSparseMemoryRequirements2(VkDevice device, const  VkImageSparseMemoryRequirementsInfo2 * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetImageSparseMemoryRequirements2 && "vkGetImageSparseMemoryRequirements2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties2(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties2 * pQueueFamilyProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceQueueFamilyProperties2 && "vkGetPhysicalDeviceQueueFamilyProperties2 is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceQueueFamilyProperties2(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
}


VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const  char * pLayerName, uint32_t * pPropertyCount, VkExtensionProperties * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkEnumerateDeviceExtensionProperties && "vkEnumerateDeviceExtensionProperties is not loaded");
	return  g_vkl_fnptrs.pfn_vkEnumerateDeviceExtensionProperties(physicalDevice, pLayerName, pPropertyCount, pProperties);
}


VKAPI_ATTR void VKAPI_CALL vkCmdCopyBuffer2(VkCommandBuffer commandBuffer, const  VkCopyBufferInfo2 * pCopyBufferInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdCopyBuffer2 && "vkCmdCopyBuffer2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdCopyBuffer2(commandBuffer, pCopyBufferInfo);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const  VkRect2D * pScissors) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetScissor && "vkCmdSetScissor is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorUpdateTemplate(VkDevice device, const  VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateDescriptorUpdateTemplate && "vkCreateDescriptorUpdateTemplate is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
}


VKAPI_ATTR void VKAPI_CALL vkCmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const  void * pData) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdUpdateBuffer && "vkCmdUpdateBuffer is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceProperties2 && "vkGetPhysicalDeviceProperties2 is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceProperties2(physicalDevice, pProperties);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreatePipelineCache(VkDevice device, const  VkPipelineCacheCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkPipelineCache * pPipelineCache) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreatePipelineCache && "vkCreatePipelineCache is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache);
}


VKAPI_ATTR VkResult VKAPI_CALL vkBeginCommandBuffer(VkCommandBuffer commandBuffer, const  VkCommandBufferBeginInfo * pBeginInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkBeginCommandBuffer && "vkBeginCommandBuffer is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkBeginCommandBuffer(commandBuffer, pBeginInfo);
}


VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) {
	assert(g_vkl_fnptrs.dfn.pfn_vkBindBufferMemory && "vkBindBufferMemory is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkBindBufferMemory(device, buffer, memory, memoryOffset);
}


VKAPI_ATTR void VKAPI_CALL vkCmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const  VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const  VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const  VkImageMemoryBarrier * pImageMemoryBarriers) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdPipelineBarrier && "vkCmdPipelineBarrier is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
}


VKAPI_ATTR void VKAPI_CALL vkUpdateDescriptorSetWithTemplate(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const  void * pData) {
	assert(g_vkl_fnptrs.dfn.pfn_vkUpdateDescriptorSetWithTemplate && "vkUpdateDescriptorSetWithTemplate is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkUpdateDescriptorSetWithTemplate(device, descriptorSet, descriptorUpdateTemplate, pData);
}


VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass2(VkCommandBuffer commandBuffer, const  VkSubpassBeginInfo * pSubpassBeginInfo, const  VkSubpassEndInfo * pSubpassEndInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdNextSubpass2 && "vkCmdNextSubpass2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdNextSubpass2(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
}


VKAPI_ATTR void VKAPI_CALL vkCmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const  VkBufferImageCopy * pRegions) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdCopyImageToBuffer && "vkCmdCopyImageToBuffer is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
}


VKAPI_ATTR void VKAPI_CALL vkCmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDispatchIndirect && "vkCmdDispatchIndirect is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDispatchIndirect(commandBuffer, buffer, offset);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2 * pFeatures) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFeatures2 && "vkGetPhysicalDeviceFeatures2 is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFeatures2(physicalDevice, pFeatures);
}


VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDeviceGroups(VkInstance instance, uint32_t * pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties * pPhysicalDeviceGroupProperties) {
	assert(g_vkl_fnptrs.pfn_vkEnumeratePhysicalDeviceGroups && "vkEnumeratePhysicalDeviceGroups is not loaded");
	return  g_vkl_fnptrs.pfn_vkEnumeratePhysicalDeviceGroups(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
}


VKAPI_ATTR void VKAPI_CALL vkCmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdEndQuery && "vkCmdEndQuery is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdEndQuery(commandBuffer, queryPool, query);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetFrontFace(VkCommandBuffer commandBuffer, VkFrontFace frontFace) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetFrontFace && "vkCmdSetFrontFace is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetFrontFace(commandBuffer, frontFace);
}


VKAPI_ATTR VkResult VKAPI_CALL vkResetFences(VkDevice device, uint32_t fenceCount, const  VkFence * pFences) {
	assert(g_vkl_fnptrs.dfn.pfn_vkResetFences && "vkResetFences is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkResetFences(device, fenceCount, pFences);
}


VKAPI_ATTR VkResult VKAPI_CALL vkAllocateMemory(VkDevice device, const  VkMemoryAllocateInfo * pAllocateInfo, const  VkAllocationCallbacks * pAllocator, VkDeviceMemory * pMemory) {
	assert(g_vkl_fnptrs.dfn.pfn_vkAllocateMemory && "vkAllocateMemory is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkAllocateMemory(device, pAllocateInfo, pAllocator, pMemory);
}


VKAPI_ATTR VkResult VKAPI_CALL vkSetPrivateData(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t data) {
	assert(g_vkl_fnptrs.dfn.pfn_vkSetPrivateData && "vkSetPrivateData is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkSetPrivateData(device, objectType, objectHandle, privateDataSlot, data);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties * pFormatProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFormatProperties && "vkGetPhysicalDeviceFormatProperties is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateImage(VkDevice device, const  VkImageCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkImage * pImage) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateImage && "vkCreateImage is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateImage(device, pCreateInfo, pAllocator, pImage);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetStencilCompareMask && "vkCmdSetStencilCompareMask is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetStencilCompareMask(commandBuffer, faceMask, compareMask);
}


VKAPI_ATTR VkResult VKAPI_CALL vkQueueSubmit(VkQueue queue, uint32_t submitCount, const  VkSubmitInfo * pSubmits, VkFence fence) {
	assert(g_vkl_fnptrs.dfn.pfn_vkQueueSubmit && "vkQueueSubmit is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkQueueSubmit(queue, submitCount, pSubmits, fence);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass2(VkDevice device, const  VkRenderPassCreateInfo2 * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateRenderPass2 && "vkCreateRenderPass2 is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateRenderPass2(device, pCreateInfo, pAllocator, pRenderPass);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateQueryPool(VkDevice device, const  VkQueryPoolCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkQueryPool * pQueryPool) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateQueryPool && "vkCreateQueryPool is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyBuffer(VkDevice device, VkBuffer buffer, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyBuffer && "vkDestroyBuffer is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyBuffer(device, buffer, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetDepthBounds && "vkCmdSetDepthBounds is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyDevice(VkDevice device, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyDevice && "vkDestroyDevice is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyDevice(device, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkCmdBeginRendering(VkCommandBuffer commandBuffer, const  VkRenderingInfo * pRenderingInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBeginRendering && "vkCmdBeginRendering is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBeginRendering(commandBuffer, pRenderingInfo);
}


VKAPI_ATTR void VKAPI_CALL vkResetQueryPool(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
	assert(g_vkl_fnptrs.dfn.pfn_vkResetQueryPool && "vkResetQueryPool is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkResetQueryPool(device, queryPool, firstQuery, queryCount);
}


VKAPI_ATTR void VKAPI_CALL vkCmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBindIndexBuffer && "vkCmdBindIndexBuffer is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBindIndexBuffer(commandBuffer, buffer, offset, indexType);
}


VKAPI_ATTR VkResult VKAPI_CALL vkMergePipelineCaches(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const  VkPipelineCache * pSrcCaches) {
	assert(g_vkl_fnptrs.dfn.pfn_vkMergePipelineCaches && "vkMergePipelineCaches is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkMergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches);
}


VKAPI_ATTR void VKAPI_CALL vkFreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const  VkCommandBuffer * pCommandBuffers) {
	assert(g_vkl_fnptrs.dfn.pfn_vkFreeCommandBuffers && "vkFreeCommandBuffers is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkFreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers);
}


VKAPI_ATTR VkResult VKAPI_CALL vkQueueWaitIdle(VkQueue queue) {
	assert(g_vkl_fnptrs.dfn.pfn_vkQueueWaitIdle && "vkQueueWaitIdle is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkQueueWaitIdle(queue);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyPipeline(VkDevice device, VkPipeline pipeline, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyPipeline && "vkDestroyPipeline is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyPipeline(device, pipeline, pAllocator);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateBufferView(VkDevice device, const  VkBufferViewCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkBufferView * pView) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateBufferView && "vkCreateBufferView is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateBufferView(device, pCreateInfo, pAllocator, pView);
}


VKAPI_ATTR VkResult VKAPI_CALL vkGetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void * pData, VkDeviceSize stride, VkQueryResultFlags flags) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetQueryPoolResults && "vkGetQueryPoolResults is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
}


VKAPI_ATTR uint64_t VKAPI_CALL vkGetDeviceMemoryOpaqueCaptureAddress(VkDevice device, const  VkDeviceMemoryOpaqueCaptureAddressInfo * pInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeviceMemoryOpaqueCaptureAddress && "vkGetDeviceMemoryOpaqueCaptureAddress is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetDeviceMemoryOpaqueCaptureAddress(device, pInfo);
}


VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDrawIndexedIndirect && "vkCmdDrawIndexedIndirect is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride);
}


VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass(VkCommandBuffer commandBuffer) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdEndRenderPass && "vkCmdEndRenderPass is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdEndRenderPass(commandBuffer);
}


VKAPI_ATTR VkResult VKAPI_CALL vkMapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void * * ppData) {
	assert(g_vkl_fnptrs.dfn.pfn_vkMapMemory && "vkMapMemory is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkMapMemory(device, memory, offset, size, flags, ppData);
}


VKAPI_ATTR VkResult VKAPI_CALL vkFlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const  VkMappedMemoryRange * pMemoryRanges) {
	assert(g_vkl_fnptrs.dfn.pfn_vkFlushMappedMemoryRanges && "vkFlushMappedMemoryRanges is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkFlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const  VkViewport * pViewports) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetViewport && "vkCmdSetViewport is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports);
}


VKAPI_ATTR void VKAPI_CALL vkUpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount, const  VkWriteDescriptorSet * pDescriptorWrites, uint32_t descriptorCopyCount, const  VkCopyDescriptorSet * pDescriptorCopies) {
	assert(g_vkl_fnptrs.dfn.pfn_vkUpdateDescriptorSets && "vkUpdateDescriptorSets is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkUpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorSetLayout(VkDevice device, const  VkDescriptorSetLayoutCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkDescriptorSetLayout * pSetLayout) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateDescriptorSetLayout && "vkCreateDescriptorSetLayout is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalSemaphoreProperties(VkPhysicalDevice physicalDevice, const  VkPhysicalDeviceExternalSemaphoreInfo * pExternalSemaphoreInfo, VkExternalSemaphoreProperties * pExternalSemaphoreProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceExternalSemaphoreProperties && "vkGetPhysicalDeviceExternalSemaphoreProperties is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
}


VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDrawIndirect && "vkCmdDrawIndirect is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride);
}


VKAPI_ATTR void VKAPI_CALL vkGetDeviceImageMemoryRequirements(VkDevice device, const  VkDeviceImageMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeviceImageMemoryRequirements && "vkGetDeviceImageMemoryRequirements is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetDeviceImageMemoryRequirements(device, pInfo, pMemoryRequirements);
}


VKAPI_ATTR void VKAPI_CALL vkCmdResolveImage2(VkCommandBuffer commandBuffer, const  VkResolveImageInfo2 * pResolveImageInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdResolveImage2 && "vkCmdResolveImage2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdResolveImage2(commandBuffer, pResolveImageInfo);
}


VKAPI_ATTR void VKAPI_CALL vkCmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const  VkClearDepthStencilValue * pDepthStencil, uint32_t rangeCount, const  VkImageSubresourceRange * pRanges) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdClearDepthStencilImage && "vkCmdClearDepthStencilImage is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);
}


VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceToolProperties(VkPhysicalDevice physicalDevice, uint32_t * pToolCount, VkPhysicalDeviceToolProperties * pToolProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceToolProperties && "vkGetPhysicalDeviceToolProperties is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceToolProperties(physicalDevice, pToolCount, pToolProperties);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures * pFeatures) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFeatures && "vkGetPhysicalDeviceFeatures is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFeatures(physicalDevice, pFeatures);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyPipelineLayout && "vkDestroyPipelineLayout is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyPipelineLayout(device, pipelineLayout, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdNextSubpass && "vkCmdNextSubpass is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdNextSubpass(commandBuffer, contents);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties2(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2 * pFormatProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFormatProperties2 && "vkGetPhysicalDeviceFormatProperties2 is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetEvent && "vkCmdSetEvent is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetEvent(commandBuffer, event, stageMask);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceSparseImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t * pPropertyCount, VkSparseImageFormatProperties * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSparseImageFormatProperties && "vkGetPhysicalDeviceSparseImageFormatProperties is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyPrivateDataSlot(VkDevice device, VkPrivateDataSlot privateDataSlot, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyPrivateDataSlot && "vkDestroyPrivateDataSlot is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyPrivateDataSlot(device, privateDataSlot, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalFenceProperties(VkPhysicalDevice physicalDevice, const  VkPhysicalDeviceExternalFenceInfo * pExternalFenceInfo, VkExternalFenceProperties * pExternalFenceProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceExternalFenceProperties && "vkGetPhysicalDeviceExternalFenceProperties is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
}


VKAPI_ATTR void VKAPI_CALL vkCmdCopyImageToBuffer2(VkCommandBuffer commandBuffer, const  VkCopyImageToBufferInfo2 * pCopyImageToBufferInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdCopyImageToBuffer2 && "vkCmdCopyImageToBuffer2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdCopyImageToBuffer2(commandBuffer, pCopyImageToBufferInfo);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyFramebuffer && "vkDestroyFramebuffer is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyFramebuffer(device, framebuffer, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDrawIndexed && "vkCmdDrawIndexed is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyCommandPool(VkDevice device, VkCommandPool commandPool, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyCommandPool && "vkDestroyCommandPool is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyCommandPool(device, commandPool, pAllocator);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateImageView(VkDevice device, const  VkImageViewCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkImageView * pView) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateImageView && "vkCreateImageView is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateImageView(device, pCreateInfo, pAllocator, pView);
}


VKAPI_ATTR void VKAPI_CALL vkCmdEndRendering(VkCommandBuffer commandBuffer) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdEndRendering && "vkCmdEndRendering is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdEndRendering(commandBuffer);
}


VKAPI_ATTR void VKAPI_CALL vkGetDeviceQueue2(VkDevice device, const  VkDeviceQueueInfo2 * pQueueInfo, VkQueue * pQueue) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeviceQueue2 && "vkGetDeviceQueue2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetDeviceQueue2(device, pQueueInfo, pQueue);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyShaderModule(VkDevice device, VkShaderModule shaderModule, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyShaderModule && "vkDestroyShaderModule is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyShaderModule(device, shaderModule, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkCmdWaitEvents2(VkCommandBuffer commandBuffer, uint32_t eventCount, const  VkEvent * pEvents, const  VkDependencyInfo * pDependencyInfos) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdWaitEvents2 && "vkCmdWaitEvents2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdWaitEvents2(commandBuffer, eventCount, pEvents, pDependencyInfos);
}


VKAPI_ATTR void VKAPI_CALL vkCmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const  VkBuffer * pBuffers, const  VkDeviceSize * pOffsets) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBindVertexBuffers && "vkCmdBindVertexBuffers is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyInstance(VkInstance instance, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.pfn_vkDestroyInstance && "vkDestroyInstance is not loaded");
	 g_vkl_fnptrs.pfn_vkDestroyInstance(instance, pAllocator);
}


VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceExtensionProperties(const  char * pLayerName, uint32_t * pPropertyCount, VkExtensionProperties * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkEnumerateInstanceExtensionProperties && "vkEnumerateInstanceExtensionProperties is not loaded");
	return  g_vkl_fnptrs.pfn_vkEnumerateInstanceExtensionProperties(pLayerName, pPropertyCount, pProperties);
}


VKAPI_ATTR void VKAPI_CALL vkCmdBlitImage2(VkCommandBuffer commandBuffer, const  VkBlitImageInfo2 * pBlitImageInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBlitImage2 && "vkCmdBlitImage2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBlitImage2(commandBuffer, pBlitImageInfo);
}


VKAPI_ATTR VkResult VKAPI_CALL vkInvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const  VkMappedMemoryRange * pMemoryRanges) {
	assert(g_vkl_fnptrs.dfn.pfn_vkInvalidateMappedMemoryRanges && "vkInvalidateMappedMemoryRanges is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkInvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateShaderModule(VkDevice device, const  VkShaderModuleCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkShaderModule * pShaderModule) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateShaderModule && "vkCreateShaderModule is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilTestEnable(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetStencilTestEnable && "vkCmdSetStencilTestEnable is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetStencilTestEnable(commandBuffer, stencilTestEnable);
}


VKAPI_ATTR void VKAPI_CALL vkGetRenderAreaGranularity(VkDevice device, VkRenderPass renderPass, VkExtent2D * pGranularity) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetRenderAreaGranularity && "vkGetRenderAreaGranularity is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetRenderAreaGranularity(device, renderPass, pGranularity);
}


VKAPI_ATTR void VKAPI_CALL vkDestroySampler(VkDevice device, VkSampler sampler, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroySampler && "vkDestroySampler is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroySampler(device, sampler, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkGetPrivateData(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t * pData) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetPrivateData && "vkGetPrivateData is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetPrivateData(device, objectType, objectHandle, privateDataSlot, pData);
}


VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceVersion(uint32_t * pApiVersion) {
	assert(g_vkl_fnptrs.pfn_vkEnumerateInstanceVersion && "vkEnumerateInstanceVersion is not loaded");
	return  g_vkl_fnptrs.pfn_vkEnumerateInstanceVersion(pApiVersion);
}


VKAPI_ATTR void VKAPI_CALL vkUnmapMemory(VkDevice device, VkDeviceMemory memory) {
	assert(g_vkl_fnptrs.dfn.pfn_vkUnmapMemory && "vkUnmapMemory is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkUnmapMemory(device, memory);
}


VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements(VkDevice device, VkImage image, VkMemoryRequirements * pMemoryRequirements) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetImageMemoryRequirements && "vkGetImageMemoryRequirements is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetImageMemoryRequirements(device, image, pMemoryRequirements);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateFramebuffer(VkDevice device, const  VkFramebufferCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkFramebuffer * pFramebuffer) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateFramebuffer && "vkCreateFramebuffer is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer);
}


VKAPI_ATTR void VKAPI_CALL vkDestroySamplerYcbcrConversion(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroySamplerYcbcrConversion && "vkDestroySamplerYcbcrConversion is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass2(VkCommandBuffer commandBuffer, const  VkRenderPassBeginInfo * pRenderPassBegin, const  VkSubpassBeginInfo * pSubpassBeginInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBeginRenderPass2 && "vkCmdBeginRenderPass2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBeginRenderPass2(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
}


VKAPI_ATTR void VKAPI_CALL vkGetImageSubresourceLayout(VkDevice device, VkImage image, const  VkImageSubresource * pSubresource, VkSubresourceLayout * pLayout) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetImageSubresourceLayout && "vkGetImageSubresourceLayout is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetImageSubresourceLayout(device, image, pSubresource, pLayout);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties * pQueueFamilyProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceQueueFamilyProperties && "vkGetPhysicalDeviceQueueFamilyProperties is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
}


VKAPI_ATTR VkResult VKAPI_CALL vkEndCommandBuffer(VkCommandBuffer commandBuffer) {
	assert(g_vkl_fnptrs.dfn.pfn_vkEndCommandBuffer && "vkEndCommandBuffer is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkEndCommandBuffer(commandBuffer);
}


VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) {
	assert(g_vkl_fnptrs.dfn.pfn_vkBindImageMemory && "vkBindImageMemory is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkBindImageMemory(device, image, memory, memoryOffset);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetScissorWithCount(VkCommandBuffer commandBuffer, uint32_t scissorCount, const  VkRect2D * pScissors) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetScissorWithCount && "vkCmdSetScissorWithCount is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetScissorWithCount(commandBuffer, scissorCount, pScissors);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalBufferProperties(VkPhysicalDevice physicalDevice, const  VkPhysicalDeviceExternalBufferInfo * pExternalBufferInfo, VkExternalBufferProperties * pExternalBufferProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceExternalBufferProperties && "vkGetPhysicalDeviceExternalBufferProperties is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceProperties && "vkGetPhysicalDeviceProperties is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceProperties(physicalDevice, pProperties);
}


VKAPI_ATTR void VKAPI_CALL vkDestroySemaphore(VkDevice device, VkSemaphore semaphore, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroySemaphore && "vkDestroySemaphore is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroySemaphore(device, semaphore, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyDescriptorSetLayout && "vkDestroyDescriptorSetLayout is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkGetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue * pQueue) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeviceQueue && "vkGetDeviceQueue is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyFence(VkDevice device, VkFence fence, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyFence && "vkDestroyFence is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyFence(device, fence, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkCmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdFillBuffer && "vkCmdFillBuffer is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreatePipelineLayout(VkDevice device, const  VkPipelineLayoutCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkPipelineLayout * pPipelineLayout) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreatePipelineLayout && "vkCreatePipelineLayout is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout);
}


VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass(VkCommandBuffer commandBuffer, const  VkRenderPassBeginInfo * pRenderPassBegin, VkSubpassContents contents) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBeginRenderPass && "vkCmdBeginRenderPass is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents);
}


VKAPI_ATTR void VKAPI_CALL vkCmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const  VkImageResolve * pRegions) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdResolveImage && "vkCmdResolveImage is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}


VKAPI_ATTR void VKAPI_CALL vkCmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBeginQuery && "vkCmdBeginQuery is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBeginQuery(commandBuffer, queryPool, query, flags);
}


VKAPI_ATTR VkResult VKAPI_CALL vkSignalSemaphore(VkDevice device, const  VkSemaphoreSignalInfo * pSignalInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkSignalSemaphore && "vkSignalSemaphore is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkSignalSemaphore(device, pSignalInfo);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetEvent2(VkCommandBuffer commandBuffer, VkEvent event, const  VkDependencyInfo * pDependencyInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetEvent2 && "vkCmdSetEvent2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetEvent2(commandBuffer, event, pDependencyInfo);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyPipelineCache && "vkDestroyPipelineCache is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyPipelineCache(device, pipelineCache, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDrawIndexedIndirectCount && "vkCmdDrawIndexedIndirectCount is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDrawIndexedIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}


VKAPI_ATTR void VKAPI_CALL vkCmdBindVertexBuffers2(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const  VkBuffer * pBuffers, const  VkDeviceSize * pOffsets, const  VkDeviceSize * pSizes, const  VkDeviceSize * pStrides) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBindVertexBuffers2 && "vkCmdBindVertexBuffers2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBindVertexBuffers2(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
}


VKAPI_ATTR void VKAPI_CALL vkCmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const  void * pValues) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdPushConstants && "vkCmdPushConstants is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues);
}


VKAPI_ATTR VkResult VKAPI_CALL vkGetEventStatus(VkDevice device, VkEvent event) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetEventStatus && "vkGetEventStatus is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetEventStatus(device, event);
}


VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements2(VkDevice device, const  VkBufferMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetBufferMemoryRequirements2 && "vkGetBufferMemoryRequirements2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetBufferMemoryRequirements2(device, pInfo, pMemoryRequirements);
}


VKAPI_ATTR VkResult VKAPI_CALL vkResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags) {
	assert(g_vkl_fnptrs.dfn.pfn_vkResetDescriptorPool && "vkResetDescriptorPool is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkResetDescriptorPool(device, descriptorPool, flags);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateEvent(VkDevice device, const  VkEventCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkEvent * pEvent) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateEvent && "vkCreateEvent is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateEvent(device, pCreateInfo, pAllocator, pEvent);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthWriteEnable(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetDepthWriteEnable && "vkCmdSetDepthWriteEnable is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetDepthWriteEnable(commandBuffer, depthWriteEnable);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetPrimitiveRestartEnable(VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetPrimitiveRestartEnable && "vkCmdSetPrimitiveRestartEnable is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetPrimitiveRestartEnable(commandBuffer, primitiveRestartEnable);
}


VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDevices(VkInstance instance, uint32_t * pPhysicalDeviceCount, VkPhysicalDevice * pPhysicalDevices) {
	assert(g_vkl_fnptrs.pfn_vkEnumeratePhysicalDevices && "vkEnumeratePhysicalDevices is not loaded");
	return  g_vkl_fnptrs.pfn_vkEnumeratePhysicalDevices(instance, pPhysicalDeviceCount, pPhysicalDevices);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyBufferView(VkDevice device, VkBufferView bufferView, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyBufferView && "vkDestroyBufferView is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyBufferView(device, bufferView, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2 * pMemoryProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceMemoryProperties2 && "vkGetPhysicalDeviceMemoryProperties2 is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties);
}


VKAPI_ATTR void VKAPI_CALL vkCmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDraw && "vkCmdDraw is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetPrimitiveTopology(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetPrimitiveTopology && "vkCmdSetPrimitiveTopology is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetPrimitiveTopology(commandBuffer, primitiveTopology);
}


VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass2(VkCommandBuffer commandBuffer, const  VkSubpassEndInfo * pSubpassEndInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdEndRenderPass2 && "vkCmdEndRenderPass2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdEndRenderPass2(commandBuffer, pSubpassEndInfo);
}


VKAPI_ATTR VkResult VKAPI_CALL vkFreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const  VkDescriptorSet * pDescriptorSets) {
	assert(g_vkl_fnptrs.dfn.pfn_vkFreeDescriptorSets && "vkFreeDescriptorSets is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkFreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilOp(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetStencilOp && "vkCmdSetStencilOp is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetStencilOp(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateSemaphore(VkDevice device, const  VkSemaphoreCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSemaphore * pSemaphore) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateSemaphore && "vkCreateSemaphore is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateFence(VkDevice device, const  VkFenceCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkFence * pFence) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateFence && "vkCreateFence is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateFence(device, pCreateInfo, pAllocator, pFence);
}


VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineCacheData(VkDevice device, VkPipelineCache pipelineCache, size_t * pDataSize, void * pData) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetPipelineCacheData && "vkGetPipelineCacheData is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetPipelineCacheData(device, pipelineCache, pDataSize, pData);
}


VKAPI_ATTR VkResult VKAPI_CALL vkWaitForFences(VkDevice device, uint32_t fenceCount, const  VkFence * pFences, VkBool32 waitAll, uint64_t timeout) {
	assert(g_vkl_fnptrs.dfn.pfn_vkWaitForFences && "vkWaitForFences is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkWaitForFences(device, fenceCount, pFences, waitAll, timeout);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportWithCount(VkCommandBuffer commandBuffer, uint32_t viewportCount, const  VkViewport * pViewports) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetViewportWithCount && "vkCmdSetViewportWithCount is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetViewportWithCount(commandBuffer, viewportCount, pViewports);
}


VKAPI_ATTR void VKAPI_CALL vkCmdCopyImage2(VkCommandBuffer commandBuffer, const  VkCopyImageInfo2 * pCopyImageInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdCopyImage2 && "vkCmdCopyImage2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdCopyImage2(commandBuffer, pCopyImageInfo);
}


VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory2(VkDevice device, uint32_t bindInfoCount, const  VkBindImageMemoryInfo * pBindInfos) {
	assert(g_vkl_fnptrs.dfn.pfn_vkBindImageMemory2 && "vkBindImageMemory2 is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkBindImageMemory2(device, bindInfoCount, pBindInfos);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthTestEnable(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetDepthTestEnable && "vkCmdSetDepthTestEnable is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetDepthTestEnable(commandBuffer, depthTestEnable);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorPool(VkDevice device, const  VkDescriptorPoolCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkDescriptorPool * pDescriptorPool) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateDescriptorPool && "vkCreateDescriptorPool is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool);
}


VKAPI_ATTR VkResult VKAPI_CALL vkAllocateDescriptorSets(VkDevice device, const  VkDescriptorSetAllocateInfo * pAllocateInfo, VkDescriptorSet * pDescriptorSets) {
	assert(g_vkl_fnptrs.dfn.pfn_vkAllocateDescriptorSets && "vkAllocateDescriptorSets is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkAllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets);
}


VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const  VkDescriptorSet * pDescriptorSets, uint32_t dynamicOffsetCount, const  uint32_t * pDynamicOffsets) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBindDescriptorSets && "vkCmdBindDescriptorSets is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);
}


VKAPI_ATTR uint64_t VKAPI_CALL vkGetBufferOpaqueCaptureAddress(VkDevice device, const  VkBufferDeviceAddressInfo * pInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetBufferOpaqueCaptureAddress && "vkGetBufferOpaqueCaptureAddress is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetBufferOpaqueCaptureAddress(device, pInfo);
}


VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetLayoutSupport(VkDevice device, const  VkDescriptorSetLayoutCreateInfo * pCreateInfo, VkDescriptorSetLayoutSupport * pSupport) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDescriptorSetLayoutSupport && "vkGetDescriptorSetLayoutSupport is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetDescriptorSetLayoutSupport(device, pCreateInfo, pSupport);
}


VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties * pImageFormatProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceImageFormatProperties && "vkGetPhysicalDeviceImageFormatProperties is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass(VkDevice device, const  VkRenderPassCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateRenderPass && "vkCreateRenderPass is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass);
}


VKAPI_ATTR void VKAPI_CALL vkFreeMemory(VkDevice device, VkDeviceMemory memory, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkFreeMemory && "vkFreeMemory is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkFreeMemory(device, memory, pAllocator);
}


VKAPI_ATTR void VKAPI_CALL vkCmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const  VkImageBlit * pRegions, VkFilter filter) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBlitImage && "vkCmdBlitImage is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
}


VKAPI_ATTR void VKAPI_CALL vkGetDeviceMemoryCommitment(VkDevice device, VkDeviceMemory memory, VkDeviceSize * pCommittedMemoryInBytes) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeviceMemoryCommitment && "vkGetDeviceMemoryCommitment is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes);
}


VKAPI_ATTR VkResult VKAPI_CALL vkResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags) {
	assert(g_vkl_fnptrs.dfn.pfn_vkResetCommandBuffer && "vkResetCommandBuffer is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkResetCommandBuffer(commandBuffer, flags);
}


VKAPI_ATTR void VKAPI_CALL vkDestroyQueryPool(VkDevice device, VkQueryPool queryPool, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyQueryPool && "vkDestroyQueryPool is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyQueryPool(device, queryPool, pAllocator);
}


VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceStatus(VkDevice device, VkFence fence) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetFenceStatus && "vkGetFenceStatus is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetFenceStatus(device, fence);
}


VKAPI_ATTR void VKAPI_CALL vkCmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdResetEvent && "vkCmdResetEvent is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdResetEvent(commandBuffer, event, stageMask);
}


VKAPI_ATTR VkResult VKAPI_CALL vkAllocateCommandBuffers(VkDevice device, const  VkCommandBufferAllocateInfo * pAllocateInfo, VkCommandBuffer * pCommandBuffers) {
	assert(g_vkl_fnptrs.dfn.pfn_vkAllocateCommandBuffers && "vkAllocateCommandBuffers is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkAllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers);
}


VKAPI_ATTR void VKAPI_CALL vkCmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDispatchBase && "vkCmdDispatchBase is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetDeviceMask && "vkCmdSetDeviceMask is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetDeviceMask(commandBuffer, deviceMask);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const  VkComputePipelineCreateInfo * pCreateInfos, const  VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateComputePipelines && "vkCreateComputePipelines is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}


VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetInstanceProcAddr(VkInstance instance, const  char * pName) {
	assert(g_vkl_fnptrs.pfn_vkGetInstanceProcAddr && "vkGetInstanceProcAddr is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, pName);
}


VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceLayerProperties(uint32_t * pPropertyCount, VkLayerProperties * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkEnumerateInstanceLayerProperties && "vkEnumerateInstanceLayerProperties is not loaded");
	return  g_vkl_fnptrs.pfn_vkEnumerateInstanceLayerProperties(pPropertyCount, pProperties);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBiasEnable(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetDepthBiasEnable && "vkCmdSetDepthBiasEnable is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetDepthBiasEnable(commandBuffer, depthBiasEnable);
}


VKAPI_ATTR VkResult VKAPI_CALL vkCreateCommandPool(VkDevice device, const  VkCommandPoolCreateInfo * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkCommandPool * pCommandPool) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateCommandPool && "vkCreateCommandPool is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool);
}


VKAPI_ATTR void VKAPI_CALL vkCmdPipelineBarrier2(VkCommandBuffer commandBuffer, const  VkDependencyInfo * pDependencyInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdPipelineBarrier2 && "vkCmdPipelineBarrier2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdPipelineBarrier2(commandBuffer, pDependencyInfo);
}


VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties * pMemoryProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceMemoryProperties && "vkGetPhysicalDeviceMemoryProperties is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBoundsTestEnable(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetDepthBoundsTestEnable && "vkCmdSetDepthBoundsTestEnable is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetDepthBoundsTestEnable(commandBuffer, depthBoundsTestEnable);
}


VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetStencilWriteMask && "vkCmdSetStencilWriteMask is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetStencilWriteMask(commandBuffer, faceMask, writeMask);
}


VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreCounterValue(VkDevice device, VkSemaphore semaphore, uint64_t * pValue) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetSemaphoreCounterValue && "vkGetSemaphoreCounterValue is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetSemaphoreCounterValue(device, semaphore, pValue);
}


VKAPI_ATTR void VKAPI_CALL vkCmdWriteTimestamp2(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdWriteTimestamp2 && "vkCmdWriteTimestamp2 is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdWriteTimestamp2(commandBuffer, stage, queryPool, query);
}

#ifdef VK_AMD_shader_info

VKAPI_ATTR VkResult VKAPI_CALL vkGetShaderInfoAMD(VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t * pInfoSize, void * pInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetShaderInfoAMD && "vkGetShaderInfoAMD is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetShaderInfoAMD(device, pipeline, shaderStage, infoType, pInfoSize, pInfo);
}


#endif
#ifdef VK_AMD_buffer_marker

VKAPI_ATTR void VKAPI_CALL vkCmdWriteBufferMarkerAMD(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdWriteBufferMarkerAMD && "vkCmdWriteBufferMarkerAMD is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker);
}


#endif
#ifdef VK_NV_coverage_reduction_mode

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(VkPhysicalDevice physicalDevice, uint32_t * pCombinationCount, VkFramebufferMixedSamplesCombinationNV * pCombinations) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV && "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(physicalDevice, pCombinationCount, pCombinations);
}


#endif
#ifdef VK_KHR_external_fence_fd

VKAPI_ATTR VkResult VKAPI_CALL vkImportFenceFdKHR(VkDevice device, const  VkImportFenceFdInfoKHR * pImportFenceFdInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkImportFenceFdKHR && "vkImportFenceFdKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkImportFenceFdKHR(device, pImportFenceFdInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceFdKHR(VkDevice device, const  VkFenceGetFdInfoKHR * pGetFdInfo, int * pFd) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetFenceFdKHR && "vkGetFenceFdKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetFenceFdKHR(device, pGetFdInfo, pFd);
}


#endif
#ifdef VK_EXT_debug_marker

VKAPI_ATTR VkResult VKAPI_CALL vkDebugMarkerSetObjectTagEXT(VkDevice device, const  VkDebugMarkerObjectTagInfoEXT * pTagInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDebugMarkerSetObjectTagEXT && "vkDebugMarkerSetObjectTagEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkDebugMarkerSetObjectTagEXT(device, pTagInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkDebugMarkerSetObjectNameEXT(VkDevice device, const  VkDebugMarkerObjectNameInfoEXT * pNameInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDebugMarkerSetObjectNameEXT && "vkDebugMarkerSetObjectNameEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkDebugMarkerSetObjectNameEXT(device, pNameInfo);
}



VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer, const  VkDebugMarkerMarkerInfoEXT * pMarkerInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDebugMarkerBeginEXT && "vkCmdDebugMarkerBeginEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo);
}



VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDebugMarkerEndEXT && "vkCmdDebugMarkerEndEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDebugMarkerEndEXT(commandBuffer);
}



VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer, const  VkDebugMarkerMarkerInfoEXT * pMarkerInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDebugMarkerInsertEXT && "vkCmdDebugMarkerInsertEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo);
}


#endif
#ifdef VK_EXT_acquire_xlib_display

VKAPI_ATTR VkResult VKAPI_CALL vkAcquireXlibDisplayEXT(VkPhysicalDevice physicalDevice, Display * dpy, VkDisplayKHR display) {
	assert(g_vkl_fnptrs.pfn_vkAcquireXlibDisplayEXT && "vkAcquireXlibDisplayEXT is not loaded");
	return  g_vkl_fnptrs.pfn_vkAcquireXlibDisplayEXT(physicalDevice, dpy, display);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetRandROutputDisplayEXT(VkPhysicalDevice physicalDevice, Display * dpy, RROutput rrOutput, VkDisplayKHR * pDisplay) {
	assert(g_vkl_fnptrs.pfn_vkGetRandROutputDisplayEXT && "vkGetRandROutputDisplayEXT is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay);
}


#endif
#ifdef VK_KHR_shared_presentable_image

VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainStatusKHR(VkDevice device, VkSwapchainKHR swapchain) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetSwapchainStatusKHR && "vkGetSwapchainStatusKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetSwapchainStatusKHR(device, swapchain);
}


#endif
#ifdef VK_NV_shading_rate_image

VKAPI_ATTR void VKAPI_CALL vkCmdBindShadingRateImageNV(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBindShadingRateImageNV && "vkCmdBindShadingRateImageNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBindShadingRateImageNV(commandBuffer, imageView, imageLayout);
}



VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportShadingRatePaletteNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const  VkShadingRatePaletteNV * pShadingRatePalettes) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetViewportShadingRatePaletteNV && "vkCmdSetViewportShadingRatePaletteNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetViewportShadingRatePaletteNV(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes);
}



VKAPI_ATTR void VKAPI_CALL vkCmdSetCoarseSampleOrderNV(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const  VkCoarseSampleOrderCustomNV * pCustomSampleOrders) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetCoarseSampleOrderNV && "vkCmdSetCoarseSampleOrderNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);
}


#endif
#ifdef VK_NV_cooperative_matrix

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkCooperativeMatrixPropertiesNV * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV && "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(physicalDevice, pPropertyCount, pProperties);
}


#endif
#ifdef VK_INTEL_performance_query

VKAPI_ATTR VkResult VKAPI_CALL vkInitializePerformanceApiINTEL(VkDevice device, const  VkInitializePerformanceApiInfoINTEL * pInitializeInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkInitializePerformanceApiINTEL && "vkInitializePerformanceApiINTEL is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkInitializePerformanceApiINTEL(device, pInitializeInfo);
}



VKAPI_ATTR void VKAPI_CALL vkUninitializePerformanceApiINTEL(VkDevice device) {
	assert(g_vkl_fnptrs.dfn.pfn_vkUninitializePerformanceApiINTEL && "vkUninitializePerformanceApiINTEL is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkUninitializePerformanceApiINTEL(device);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCmdSetPerformanceMarkerINTEL(VkCommandBuffer commandBuffer, const  VkPerformanceMarkerInfoINTEL * pMarkerInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetPerformanceMarkerINTEL && "vkCmdSetPerformanceMarkerINTEL is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCmdSetPerformanceMarkerINTEL(commandBuffer, pMarkerInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCmdSetPerformanceStreamMarkerINTEL(VkCommandBuffer commandBuffer, const  VkPerformanceStreamMarkerInfoINTEL * pMarkerInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetPerformanceStreamMarkerINTEL && "vkCmdSetPerformanceStreamMarkerINTEL is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCmdSetPerformanceStreamMarkerINTEL(commandBuffer, pMarkerInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCmdSetPerformanceOverrideINTEL(VkCommandBuffer commandBuffer, const  VkPerformanceOverrideInfoINTEL * pOverrideInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetPerformanceOverrideINTEL && "vkCmdSetPerformanceOverrideINTEL is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCmdSetPerformanceOverrideINTEL(commandBuffer, pOverrideInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkAcquirePerformanceConfigurationINTEL(VkDevice device, const  VkPerformanceConfigurationAcquireInfoINTEL * pAcquireInfo, VkPerformanceConfigurationINTEL * pConfiguration) {
	assert(g_vkl_fnptrs.dfn.pfn_vkAcquirePerformanceConfigurationINTEL && "vkAcquirePerformanceConfigurationINTEL is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkAcquirePerformanceConfigurationINTEL(device, pAcquireInfo, pConfiguration);
}



VKAPI_ATTR VkResult VKAPI_CALL vkReleasePerformanceConfigurationINTEL(VkDevice device, VkPerformanceConfigurationINTEL configuration) {
	assert(g_vkl_fnptrs.dfn.pfn_vkReleasePerformanceConfigurationINTEL && "vkReleasePerformanceConfigurationINTEL is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkReleasePerformanceConfigurationINTEL(device, configuration);
}



VKAPI_ATTR VkResult VKAPI_CALL vkQueueSetPerformanceConfigurationINTEL(VkQueue queue, VkPerformanceConfigurationINTEL configuration) {
	assert(g_vkl_fnptrs.dfn.pfn_vkQueueSetPerformanceConfigurationINTEL && "vkQueueSetPerformanceConfigurationINTEL is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkQueueSetPerformanceConfigurationINTEL(queue, configuration);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetPerformanceParameterINTEL(VkDevice device, VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL * pValue) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetPerformanceParameterINTEL && "vkGetPerformanceParameterINTEL is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetPerformanceParameterINTEL(device, parameter, pValue);
}


#endif
#ifdef VK_ANDROID_external_memory_android_hardware_buffer

VKAPI_ATTR VkResult VKAPI_CALL vkGetAndroidHardwareBufferPropertiesANDROID(VkDevice device, const struct AHardwareBuffer * buffer, VkAndroidHardwareBufferPropertiesANDROID * pProperties) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetAndroidHardwareBufferPropertiesANDROID && "vkGetAndroidHardwareBufferPropertiesANDROID is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetAndroidHardwareBufferPropertiesANDROID(device, buffer, pProperties);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryAndroidHardwareBufferANDROID(VkDevice device, const  VkMemoryGetAndroidHardwareBufferInfoANDROID * pInfo, struct AHardwareBuffer * * pBuffer) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetMemoryAndroidHardwareBufferANDROID && "vkGetMemoryAndroidHardwareBufferANDROID is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetMemoryAndroidHardwareBufferANDROID(device, pInfo, pBuffer);
}


#endif
#ifdef VK_EXT_direct_mode_display

VKAPI_ATTR VkResult VKAPI_CALL vkReleaseDisplayEXT(VkPhysicalDevice physicalDevice, VkDisplayKHR display) {
	assert(g_vkl_fnptrs.pfn_vkReleaseDisplayEXT && "vkReleaseDisplayEXT is not loaded");
	return  g_vkl_fnptrs.pfn_vkReleaseDisplayEXT(physicalDevice, display);
}


#endif
#ifdef VK_GGP_stream_descriptor_surface

VKAPI_ATTR VkResult VKAPI_CALL vkCreateStreamDescriptorSurfaceGGP(VkInstance instance, const  VkStreamDescriptorSurfaceCreateInfoGGP * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateStreamDescriptorSurfaceGGP && "vkCreateStreamDescriptorSurfaceGGP is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateStreamDescriptorSurfaceGGP(instance, pCreateInfo, pAllocator, pSurface);
}


#endif
#ifdef VK_KHR_win32_surface

VKAPI_ATTR VkResult VKAPI_CALL vkCreateWin32SurfaceKHR(VkInstance instance, const  VkWin32SurfaceCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateWin32SurfaceKHR && "vkCreateWin32SurfaceKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}



VKAPI_ATTR VkBool32 VKAPI_CALL vkGetPhysicalDeviceWin32PresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceWin32PresentationSupportKHR && "vkGetPhysicalDeviceWin32PresentationSupportKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex);
}


#endif
#ifdef VK_KHR_android_surface

VKAPI_ATTR VkResult VKAPI_CALL vkCreateAndroidSurfaceKHR(VkInstance instance, const  VkAndroidSurfaceCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateAndroidSurfaceKHR && "vkCreateAndroidSurfaceKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}


#endif
#ifdef VK_KHR_wayland_surface

VKAPI_ATTR VkResult VKAPI_CALL vkCreateWaylandSurfaceKHR(VkInstance instance, const  VkWaylandSurfaceCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateWaylandSurfaceKHR && "vkCreateWaylandSurfaceKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}



VKAPI_ATTR VkBool32 VKAPI_CALL vkGetPhysicalDeviceWaylandPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display * display) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceWaylandPresentationSupportKHR && "vkGetPhysicalDeviceWaylandPresentationSupportKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display);
}


#endif
#ifdef VK_NV_scissor_exclusive

VKAPI_ATTR void VKAPI_CALL vkCmdSetExclusiveScissorNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const  VkRect2D * pExclusiveScissors) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetExclusiveScissorNV && "vkCmdSetExclusiveScissorNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);
}


#endif
#ifdef VK_KHR_pipeline_executable_properties

VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineExecutablePropertiesKHR(VkDevice device, const  VkPipelineInfoKHR * pPipelineInfo, uint32_t * pExecutableCount, VkPipelineExecutablePropertiesKHR * pProperties) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetPipelineExecutablePropertiesKHR && "vkGetPipelineExecutablePropertiesKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetPipelineExecutablePropertiesKHR(device, pPipelineInfo, pExecutableCount, pProperties);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineExecutableStatisticsKHR(VkDevice device, const  VkPipelineExecutableInfoKHR * pExecutableInfo, uint32_t * pStatisticCount, VkPipelineExecutableStatisticKHR * pStatistics) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetPipelineExecutableStatisticsKHR && "vkGetPipelineExecutableStatisticsKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetPipelineExecutableStatisticsKHR(device, pExecutableInfo, pStatisticCount, pStatistics);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineExecutableInternalRepresentationsKHR(VkDevice device, const  VkPipelineExecutableInfoKHR * pExecutableInfo, uint32_t * pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR * pInternalRepresentations) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetPipelineExecutableInternalRepresentationsKHR && "vkGetPipelineExecutableInternalRepresentationsKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetPipelineExecutableInternalRepresentationsKHR(device, pExecutableInfo, pInternalRepresentationCount, pInternalRepresentations);
}


#endif
#ifdef VK_KHR_video_encode_queue

VKAPI_ATTR void VKAPI_CALL vkCmdEncodeVideoKHR(VkCommandBuffer commandBuffer, const  VkVideoEncodeInfoKHR * pEncodeInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdEncodeVideoKHR && "vkCmdEncodeVideoKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdEncodeVideoKHR(commandBuffer, pEncodeInfo);
}


#endif
#ifdef VK_EXT_display_control

VKAPI_ATTR VkResult VKAPI_CALL vkDisplayPowerControlEXT(VkDevice device, VkDisplayKHR display, const  VkDisplayPowerInfoEXT * pDisplayPowerInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDisplayPowerControlEXT && "vkDisplayPowerControlEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkDisplayPowerControlEXT(device, display, pDisplayPowerInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkRegisterDeviceEventEXT(VkDevice device, const  VkDeviceEventInfoEXT * pDeviceEventInfo, const  VkAllocationCallbacks * pAllocator, VkFence * pFence) {
	assert(g_vkl_fnptrs.dfn.pfn_vkRegisterDeviceEventEXT && "vkRegisterDeviceEventEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkRegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence);
}



VKAPI_ATTR VkResult VKAPI_CALL vkRegisterDisplayEventEXT(VkDevice device, VkDisplayKHR display, const  VkDisplayEventInfoEXT * pDisplayEventInfo, const  VkAllocationCallbacks * pAllocator, VkFence * pFence) {
	assert(g_vkl_fnptrs.dfn.pfn_vkRegisterDisplayEventEXT && "vkRegisterDisplayEventEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkRegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainCounterEXT(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t * pCounterValue) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetSwapchainCounterEXT && "vkGetSwapchainCounterEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetSwapchainCounterEXT(device, swapchain, counter, pCounterValue);
}


#endif
#ifdef VK_FUCHSIA_external_memory

VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryZirconHandleFUCHSIA(VkDevice device, const  VkMemoryGetZirconHandleInfoFUCHSIA * pGetZirconHandleInfo, zx_handle_t * pZirconHandle) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetMemoryZirconHandleFUCHSIA && "vkGetMemoryZirconHandleFUCHSIA is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetMemoryZirconHandleFUCHSIA(device, pGetZirconHandleInfo, pZirconHandle);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryZirconHandlePropertiesFUCHSIA(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle, VkMemoryZirconHandlePropertiesFUCHSIA * pMemoryZirconHandleProperties) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetMemoryZirconHandlePropertiesFUCHSIA && "vkGetMemoryZirconHandlePropertiesFUCHSIA is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetMemoryZirconHandlePropertiesFUCHSIA(device, handleType, zirconHandle, pMemoryZirconHandleProperties);
}


#endif
#ifdef VK_HUAWEI_subpass_shading

VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(VkDevice device, VkRenderPass renderpass, VkExtent2D * pMaxWorkgroupSize) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI && "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(device, renderpass, pMaxWorkgroupSize);
}



VKAPI_ATTR void VKAPI_CALL vkCmdSubpassShadingHUAWEI(VkCommandBuffer commandBuffer) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSubpassShadingHUAWEI && "vkCmdSubpassShadingHUAWEI is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSubpassShadingHUAWEI(commandBuffer);
}


#endif
#ifdef VK_EXT_conditional_rendering

VKAPI_ATTR void VKAPI_CALL vkCmdBeginConditionalRenderingEXT(VkCommandBuffer commandBuffer, const  VkConditionalRenderingBeginInfoEXT * pConditionalRenderingBegin) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBeginConditionalRenderingEXT && "vkCmdBeginConditionalRenderingEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin);
}



VKAPI_ATTR void VKAPI_CALL vkCmdEndConditionalRenderingEXT(VkCommandBuffer commandBuffer) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdEndConditionalRenderingEXT && "vkCmdEndConditionalRenderingEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdEndConditionalRenderingEXT(commandBuffer);
}


#endif
#ifdef VK_NV_clip_space_w_scaling

VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportWScalingNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const  VkViewportWScalingNV * pViewportWScalings) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetViewportWScalingNV && "vkCmdSetViewportWScalingNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings);
}


#endif
#ifdef VK_NV_fragment_shading_rate_enums

VKAPI_ATTR void VKAPI_CALL vkCmdSetFragmentShadingRateEnumNV(VkCommandBuffer commandBuffer, VkFragmentShadingRateNV shadingRate, const  VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetFragmentShadingRateEnumNV && "vkCmdSetFragmentShadingRateEnumNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetFragmentShadingRateEnumNV(commandBuffer, shadingRate, combinerOps);
}


#endif
#ifdef VK_NV_acquire_winrt_display

VKAPI_ATTR VkResult VKAPI_CALL vkAcquireWinrtDisplayNV(VkPhysicalDevice physicalDevice, VkDisplayKHR display) {
	assert(g_vkl_fnptrs.pfn_vkAcquireWinrtDisplayNV && "vkAcquireWinrtDisplayNV is not loaded");
	return  g_vkl_fnptrs.pfn_vkAcquireWinrtDisplayNV(physicalDevice, display);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetWinrtDisplayNV(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR * pDisplay) {
	assert(g_vkl_fnptrs.pfn_vkGetWinrtDisplayNV && "vkGetWinrtDisplayNV is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetWinrtDisplayNV(physicalDevice, deviceRelativeId, pDisplay);
}


#endif
#ifdef VK_AMD_display_native_hdr

VKAPI_ATTR void VKAPI_CALL vkSetLocalDimmingAMD(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable) {
	assert(g_vkl_fnptrs.dfn.pfn_vkSetLocalDimmingAMD && "vkSetLocalDimmingAMD is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkSetLocalDimmingAMD(device, swapChain, localDimmingEnable);
}


#endif
#ifdef VK_NV_external_memory_capabilities

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceExternalImageFormatPropertiesNV(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV * pExternalImageFormatProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceExternalImageFormatPropertiesNV && "vkGetPhysicalDeviceExternalImageFormatPropertiesNV is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties);
}


#endif
#ifdef VK_KHR_fragment_shading_rate

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceFragmentShadingRatesKHR(VkPhysicalDevice physicalDevice, uint32_t * pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR * pFragmentShadingRates) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFragmentShadingRatesKHR && "vkGetPhysicalDeviceFragmentShadingRatesKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFragmentShadingRatesKHR(physicalDevice, pFragmentShadingRateCount, pFragmentShadingRates);
}



VKAPI_ATTR void VKAPI_CALL vkCmdSetFragmentShadingRateKHR(VkCommandBuffer commandBuffer, const  VkExtent2D * pFragmentSize, const  VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetFragmentShadingRateKHR && "vkCmdSetFragmentShadingRateKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetFragmentShadingRateKHR(commandBuffer, pFragmentSize, combinerOps);
}


#endif
#ifdef VK_KHR_display

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPropertiesKHR * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDisplayPropertiesKHR && "vkGetPhysicalDeviceDisplayPropertiesKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPlanePropertiesKHR * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDisplayPlanePropertiesKHR && "vkGetPhysicalDeviceDisplayPlanePropertiesKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t * pDisplayCount, VkDisplayKHR * pDisplays) {
	assert(g_vkl_fnptrs.pfn_vkGetDisplayPlaneSupportedDisplaysKHR && "vkGetDisplayPlaneSupportedDisplaysKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, VkDisplayModePropertiesKHR * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetDisplayModePropertiesKHR && "vkGetDisplayModePropertiesKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const  VkDisplayModeCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkDisplayModeKHR * pMode) {
	assert(g_vkl_fnptrs.pfn_vkCreateDisplayModeKHR && "vkCreateDisplayModeKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR * pCapabilities) {
	assert(g_vkl_fnptrs.pfn_vkGetDisplayPlaneCapabilitiesKHR && "vkGetDisplayPlaneCapabilitiesKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCreateDisplayPlaneSurfaceKHR(VkInstance instance, const  VkDisplaySurfaceCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateDisplayPlaneSurfaceKHR && "vkCreateDisplayPlaneSurfaceKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}


#endif
#ifdef VK_NVX_image_view_handle

VKAPI_ATTR uint32_t VKAPI_CALL vkGetImageViewHandleNVX(VkDevice device, const  VkImageViewHandleInfoNVX * pInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetImageViewHandleNVX && "vkGetImageViewHandleNVX is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetImageViewHandleNVX(device, pInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetImageViewAddressNVX(VkDevice device, VkImageView imageView, VkImageViewAddressPropertiesNVX * pProperties) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetImageViewAddressNVX && "vkGetImageViewAddressNVX is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetImageViewAddressNVX(device, imageView, pProperties);
}


#endif
#ifdef VK_KHR_external_fence_win32

VKAPI_ATTR VkResult VKAPI_CALL vkImportFenceWin32HandleKHR(VkDevice device, const  VkImportFenceWin32HandleInfoKHR * pImportFenceWin32HandleInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkImportFenceWin32HandleKHR && "vkImportFenceWin32HandleKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkImportFenceWin32HandleKHR(device, pImportFenceWin32HandleInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceWin32HandleKHR(VkDevice device, const  VkFenceGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetFenceWin32HandleKHR && "vkGetFenceWin32HandleKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetFenceWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
}


#endif
#ifdef VK_MVK_ios_surface

VKAPI_ATTR VkResult VKAPI_CALL vkCreateIOSSurfaceMVK(VkInstance instance, const  VkIOSSurfaceCreateInfoMVK * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateIOSSurfaceMVK && "vkCreateIOSSurfaceMVK is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
}


#endif
#ifdef VK_FUCHSIA_external_semaphore

VKAPI_ATTR VkResult VKAPI_CALL vkImportSemaphoreZirconHandleFUCHSIA(VkDevice device, const  VkImportSemaphoreZirconHandleInfoFUCHSIA * pImportSemaphoreZirconHandleInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkImportSemaphoreZirconHandleFUCHSIA && "vkImportSemaphoreZirconHandleFUCHSIA is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkImportSemaphoreZirconHandleFUCHSIA(device, pImportSemaphoreZirconHandleInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreZirconHandleFUCHSIA(VkDevice device, const  VkSemaphoreGetZirconHandleInfoFUCHSIA * pGetZirconHandleInfo, zx_handle_t * pZirconHandle) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetSemaphoreZirconHandleFUCHSIA && "vkGetSemaphoreZirconHandleFUCHSIA is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetSemaphoreZirconHandleFUCHSIA(device, pGetZirconHandleInfo, pZirconHandle);
}


#endif
#ifdef VK_HUAWEI_invocation_mask

VKAPI_ATTR void VKAPI_CALL vkCmdBindInvocationMaskHUAWEI(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBindInvocationMaskHUAWEI && "vkCmdBindInvocationMaskHUAWEI is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBindInvocationMaskHUAWEI(commandBuffer, imageView, imageLayout);
}


#endif
#ifdef VK_KHR_push_descriptor

VKAPI_ATTR void VKAPI_CALL vkCmdPushDescriptorSetKHR(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const  VkWriteDescriptorSet * pDescriptorWrites) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdPushDescriptorSetKHR && "vkCmdPushDescriptorSetKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
}



VKAPI_ATTR void VKAPI_CALL vkCmdPushDescriptorSetWithTemplateKHR(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const  void * pData) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdPushDescriptorSetWithTemplateKHR && "vkCmdPushDescriptorSetWithTemplateKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdPushDescriptorSetWithTemplateKHR(commandBuffer, descriptorUpdateTemplate, layout, set, pData);
}


#endif
#ifdef VK_EXT_hdr_metadata

VKAPI_ATTR void VKAPI_CALL vkSetHdrMetadataEXT(VkDevice device, uint32_t swapchainCount, const  VkSwapchainKHR * pSwapchains, const  VkHdrMetadataEXT * pMetadata) {
	assert(g_vkl_fnptrs.dfn.pfn_vkSetHdrMetadataEXT && "vkSetHdrMetadataEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkSetHdrMetadataEXT(device, swapchainCount, pSwapchains, pMetadata);
}


#endif
#ifdef VK_KHR_performance_query

VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t * pCounterCount, VkPerformanceCounterKHR * pCounters, VkPerformanceCounterDescriptionKHR * pCounterDescriptions) {
	assert(g_vkl_fnptrs.pfn_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR && "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(physicalDevice, queueFamilyIndex, pCounterCount, pCounters, pCounterDescriptions);
}



VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(VkPhysicalDevice physicalDevice, const  VkQueryPoolPerformanceCreateInfoKHR * pPerformanceQueryCreateInfo, uint32_t * pNumPasses) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR && "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(physicalDevice, pPerformanceQueryCreateInfo, pNumPasses);
}



VKAPI_ATTR VkResult VKAPI_CALL vkAcquireProfilingLockKHR(VkDevice device, const  VkAcquireProfilingLockInfoKHR * pInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkAcquireProfilingLockKHR && "vkAcquireProfilingLockKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkAcquireProfilingLockKHR(device, pInfo);
}



VKAPI_ATTR void VKAPI_CALL vkReleaseProfilingLockKHR(VkDevice device) {
	assert(g_vkl_fnptrs.dfn.pfn_vkReleaseProfilingLockKHR && "vkReleaseProfilingLockKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkReleaseProfilingLockKHR(device);
}


#endif
#ifdef VK_KHR_xlib_surface

VKAPI_ATTR VkResult VKAPI_CALL vkCreateXlibSurfaceKHR(VkInstance instance, const  VkXlibSurfaceCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateXlibSurfaceKHR && "vkCreateXlibSurfaceKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}



VKAPI_ATTR VkBool32 VKAPI_CALL vkGetPhysicalDeviceXlibPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display * dpy, VisualID visualID) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceXlibPresentationSupportKHR && "vkGetPhysicalDeviceXlibPresentationSupportKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID);
}


#endif
#ifdef VK_EXT_multi_draw

VKAPI_ATTR void VKAPI_CALL vkCmdDrawMultiEXT(VkCommandBuffer commandBuffer, uint32_t drawCount, const  VkMultiDrawInfoEXT * pVertexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDrawMultiEXT && "vkCmdDrawMultiEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDrawMultiEXT(commandBuffer, drawCount, pVertexInfo, instanceCount, firstInstance, stride);
}



VKAPI_ATTR void VKAPI_CALL vkCmdDrawMultiIndexedEXT(VkCommandBuffer commandBuffer, uint32_t drawCount, const  VkMultiDrawIndexedInfoEXT * pIndexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride, const  int32_t * pVertexOffset) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDrawMultiIndexedEXT && "vkCmdDrawMultiIndexedEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDrawMultiIndexedEXT(commandBuffer, drawCount, pIndexInfo, instanceCount, firstInstance, stride, pVertexOffset);
}


#endif
#ifdef VK_NN_vi_surface

VKAPI_ATTR VkResult VKAPI_CALL vkCreateViSurfaceNN(VkInstance instance, const  VkViSurfaceCreateInfoNN * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateViSurfaceNN && "vkCreateViSurfaceNN is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface);
}


#endif
#ifdef VK_KHR_xcb_surface

VKAPI_ATTR VkResult VKAPI_CALL vkCreateXcbSurfaceKHR(VkInstance instance, const  VkXcbSurfaceCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateXcbSurfaceKHR && "vkCreateXcbSurfaceKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}



VKAPI_ATTR VkBool32 VKAPI_CALL vkGetPhysicalDeviceXcbPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t * connection, xcb_visualid_t visual_id) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceXcbPresentationSupportKHR && "vkGetPhysicalDeviceXcbPresentationSupportKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id);
}


#endif
#ifdef VK_EXT_sample_locations

VKAPI_ATTR void VKAPI_CALL vkCmdSetSampleLocationsEXT(VkCommandBuffer commandBuffer, const  VkSampleLocationsInfoEXT * pSampleLocationsInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetSampleLocationsEXT && "vkCmdSetSampleLocationsEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo);
}



VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMultisamplePropertiesEXT(VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT * pMultisampleProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceMultisamplePropertiesEXT && "vkGetPhysicalDeviceMultisamplePropertiesEXT is not loaded");
	 g_vkl_fnptrs.pfn_vkGetPhysicalDeviceMultisamplePropertiesEXT(physicalDevice, samples, pMultisampleProperties);
}


#endif
#ifdef VK_KHR_external_semaphore_fd

VKAPI_ATTR VkResult VKAPI_CALL vkImportSemaphoreFdKHR(VkDevice device, const  VkImportSemaphoreFdInfoKHR * pImportSemaphoreFdInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkImportSemaphoreFdKHR && "vkImportSemaphoreFdKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkImportSemaphoreFdKHR(device, pImportSemaphoreFdInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreFdKHR(VkDevice device, const  VkSemaphoreGetFdInfoKHR * pGetFdInfo, int * pFd) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetSemaphoreFdKHR && "vkGetSemaphoreFdKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetSemaphoreFdKHR(device, pGetFdInfo, pFd);
}


#endif
#ifdef VK_KHR_synchronization2

VKAPI_ATTR void VKAPI_CALL vkCmdWriteBufferMarker2AMD(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdWriteBufferMarker2AMD && "vkCmdWriteBufferMarker2AMD is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdWriteBufferMarker2AMD(commandBuffer, stage, dstBuffer, dstOffset, marker);
}



VKAPI_ATTR void VKAPI_CALL vkGetQueueCheckpointData2NV(VkQueue queue, uint32_t * pCheckpointDataCount, VkCheckpointData2NV * pCheckpointData) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetQueueCheckpointData2NV && "vkGetQueueCheckpointData2NV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetQueueCheckpointData2NV(queue, pCheckpointDataCount, pCheckpointData);
}


#endif
#ifdef VK_EXT_extended_dynamic_state2

VKAPI_ATTR void VKAPI_CALL vkCmdSetPatchControlPointsEXT(VkCommandBuffer commandBuffer, uint32_t patchControlPoints) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetPatchControlPointsEXT && "vkCmdSetPatchControlPointsEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetPatchControlPointsEXT(commandBuffer, patchControlPoints);
}



VKAPI_ATTR void VKAPI_CALL vkCmdSetLogicOpEXT(VkCommandBuffer commandBuffer, VkLogicOp logicOp) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetLogicOpEXT && "vkCmdSetLogicOpEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetLogicOpEXT(commandBuffer, logicOp);
}


#endif
#ifdef VK_EXT_calibrated_timestamps

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(VkPhysicalDevice physicalDevice, uint32_t * pTimeDomainCount, VkTimeDomainEXT * pTimeDomains) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT && "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(physicalDevice, pTimeDomainCount, pTimeDomains);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetCalibratedTimestampsEXT(VkDevice device, uint32_t timestampCount, const  VkCalibratedTimestampInfoEXT * pTimestampInfos, uint64_t * pTimestamps, uint64_t * pMaxDeviation) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetCalibratedTimestampsEXT && "vkGetCalibratedTimestampsEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetCalibratedTimestampsEXT(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
}


#endif
#ifdef VK_EXT_metal_surface

VKAPI_ATTR VkResult VKAPI_CALL vkCreateMetalSurfaceEXT(VkInstance instance, const  VkMetalSurfaceCreateInfoEXT * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateMetalSurfaceEXT && "vkCreateMetalSurfaceEXT is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateMetalSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
}


#endif
#ifdef VK_EXT_acquire_drm_display

VKAPI_ATTR VkResult VKAPI_CALL vkAcquireDrmDisplayEXT(VkPhysicalDevice physicalDevice, int32_t drmFd, VkDisplayKHR display) {
	assert(g_vkl_fnptrs.pfn_vkAcquireDrmDisplayEXT && "vkAcquireDrmDisplayEXT is not loaded");
	return  g_vkl_fnptrs.pfn_vkAcquireDrmDisplayEXT(physicalDevice, drmFd, display);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetDrmDisplayEXT(VkPhysicalDevice physicalDevice, int32_t drmFd, uint32_t connectorId, VkDisplayKHR * display) {
	assert(g_vkl_fnptrs.pfn_vkGetDrmDisplayEXT && "vkGetDrmDisplayEXT is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetDrmDisplayEXT(physicalDevice, drmFd, connectorId, display);
}


#endif
#ifdef VK_EXT_external_memory_host

VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryHostPointerPropertiesEXT(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const  void * pHostPointer, VkMemoryHostPointerPropertiesEXT * pMemoryHostPointerProperties) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetMemoryHostPointerPropertiesEXT && "vkGetMemoryHostPointerPropertiesEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetMemoryHostPointerPropertiesEXT(device, handleType, pHostPointer, pMemoryHostPointerProperties);
}


#endif
#ifdef VK_NVX_binary_import

VKAPI_ATTR VkResult VKAPI_CALL vkCreateCuModuleNVX(VkDevice device, const  VkCuModuleCreateInfoNVX * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkCuModuleNVX * pModule) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateCuModuleNVX && "vkCreateCuModuleNVX is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateCuModuleNVX(device, pCreateInfo, pAllocator, pModule);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCreateCuFunctionNVX(VkDevice device, const  VkCuFunctionCreateInfoNVX * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkCuFunctionNVX * pFunction) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateCuFunctionNVX && "vkCreateCuFunctionNVX is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateCuFunctionNVX(device, pCreateInfo, pAllocator, pFunction);
}



VKAPI_ATTR void VKAPI_CALL vkDestroyCuModuleNVX(VkDevice device, VkCuModuleNVX module, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyCuModuleNVX && "vkDestroyCuModuleNVX is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyCuModuleNVX(device, module, pAllocator);
}



VKAPI_ATTR void VKAPI_CALL vkDestroyCuFunctionNVX(VkDevice device, VkCuFunctionNVX function, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyCuFunctionNVX && "vkDestroyCuFunctionNVX is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyCuFunctionNVX(device, function, pAllocator);
}



VKAPI_ATTR void VKAPI_CALL vkCmdCuLaunchKernelNVX(VkCommandBuffer commandBuffer, const  VkCuLaunchInfoNVX * pLaunchInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdCuLaunchKernelNVX && "vkCmdCuLaunchKernelNVX is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdCuLaunchKernelNVX(commandBuffer, pLaunchInfo);
}


#endif
#ifdef VK_EXT_line_rasterization

VKAPI_ATTR void VKAPI_CALL vkCmdSetLineStippleEXT(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetLineStippleEXT && "vkCmdSetLineStippleEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern);
}


#endif
#ifdef VK_KHR_external_memory_win32

VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryWin32HandleKHR(VkDevice device, const  VkMemoryGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetMemoryWin32HandleKHR && "vkGetMemoryWin32HandleKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetMemoryWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryWin32HandlePropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR * pMemoryWin32HandleProperties) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetMemoryWin32HandlePropertiesKHR && "vkGetMemoryWin32HandlePropertiesKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetMemoryWin32HandlePropertiesKHR(device, handleType, handle, pMemoryWin32HandleProperties);
}


#endif
#ifdef VK_EXT_validation_cache

VKAPI_ATTR VkResult VKAPI_CALL vkCreateValidationCacheEXT(VkDevice device, const  VkValidationCacheCreateInfoEXT * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkValidationCacheEXT * pValidationCache) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateValidationCacheEXT && "vkCreateValidationCacheEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateValidationCacheEXT(device, pCreateInfo, pAllocator, pValidationCache);
}



VKAPI_ATTR void VKAPI_CALL vkDestroyValidationCacheEXT(VkDevice device, VkValidationCacheEXT validationCache, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyValidationCacheEXT && "vkDestroyValidationCacheEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyValidationCacheEXT(device, validationCache, pAllocator);
}



VKAPI_ATTR VkResult VKAPI_CALL vkMergeValidationCachesEXT(VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const  VkValidationCacheEXT * pSrcCaches) {
	assert(g_vkl_fnptrs.dfn.pfn_vkMergeValidationCachesEXT && "vkMergeValidationCachesEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkMergeValidationCachesEXT(device, dstCache, srcCacheCount, pSrcCaches);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetValidationCacheDataEXT(VkDevice device, VkValidationCacheEXT validationCache, size_t * pDataSize, void * pData) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetValidationCacheDataEXT && "vkGetValidationCacheDataEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetValidationCacheDataEXT(device, validationCache, pDataSize, pData);
}


#endif
#ifdef VK_QNX_screen_surface

VKAPI_ATTR VkResult VKAPI_CALL vkCreateScreenSurfaceQNX(VkInstance instance, const  VkScreenSurfaceCreateInfoQNX * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateScreenSurfaceQNX && "vkCreateScreenSurfaceQNX is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateScreenSurfaceQNX(instance, pCreateInfo, pAllocator, pSurface);
}



VKAPI_ATTR VkBool32 VKAPI_CALL vkGetPhysicalDeviceScreenPresentationSupportQNX(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct _screen_window * window) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceScreenPresentationSupportQNX && "vkGetPhysicalDeviceScreenPresentationSupportQNX is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceScreenPresentationSupportQNX(physicalDevice, queueFamilyIndex, window);
}


#endif
#ifdef VK_KHR_acceleration_structure

VKAPI_ATTR VkResult VKAPI_CALL vkCreateAccelerationStructureKHR(VkDevice device, const  VkAccelerationStructureCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkAccelerationStructureKHR * pAccelerationStructure) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateAccelerationStructureKHR && "vkCreateAccelerationStructureKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateAccelerationStructureKHR(device, pCreateInfo, pAllocator, pAccelerationStructure);
}



VKAPI_ATTR void VKAPI_CALL vkDestroyAccelerationStructureKHR(VkDevice device, VkAccelerationStructureKHR accelerationStructure, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyAccelerationStructureKHR && "vkDestroyAccelerationStructureKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyAccelerationStructureKHR(device, accelerationStructure, pAllocator);
}



VKAPI_ATTR void VKAPI_CALL vkCmdBuildAccelerationStructuresKHR(VkCommandBuffer commandBuffer, uint32_t infoCount, const  VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const  VkAccelerationStructureBuildRangeInfoKHR * const * ppBuildRangeInfos) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBuildAccelerationStructuresKHR && "vkCmdBuildAccelerationStructuresKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBuildAccelerationStructuresKHR(commandBuffer, infoCount, pInfos, ppBuildRangeInfos);
}



VKAPI_ATTR void VKAPI_CALL vkCmdBuildAccelerationStructuresIndirectKHR(VkCommandBuffer commandBuffer, uint32_t infoCount, const  VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const  VkDeviceAddress * pIndirectDeviceAddresses, const  uint32_t * pIndirectStrides, const  uint32_t * const * ppMaxPrimitiveCounts) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBuildAccelerationStructuresIndirectKHR && "vkCmdBuildAccelerationStructuresIndirectKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBuildAccelerationStructuresIndirectKHR(commandBuffer, infoCount, pInfos, pIndirectDeviceAddresses, pIndirectStrides, ppMaxPrimitiveCounts);
}



VKAPI_ATTR VkResult VKAPI_CALL vkBuildAccelerationStructuresKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const  VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const  VkAccelerationStructureBuildRangeInfoKHR * const * ppBuildRangeInfos) {
	assert(g_vkl_fnptrs.dfn.pfn_vkBuildAccelerationStructuresKHR && "vkBuildAccelerationStructuresKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkBuildAccelerationStructuresKHR(device, deferredOperation, infoCount, pInfos, ppBuildRangeInfos);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCopyAccelerationStructureKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const  VkCopyAccelerationStructureInfoKHR * pInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCopyAccelerationStructureKHR && "vkCopyAccelerationStructureKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCopyAccelerationStructureKHR(device, deferredOperation, pInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCopyAccelerationStructureToMemoryKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const  VkCopyAccelerationStructureToMemoryInfoKHR * pInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCopyAccelerationStructureToMemoryKHR && "vkCopyAccelerationStructureToMemoryKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCopyAccelerationStructureToMemoryKHR(device, deferredOperation, pInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCopyMemoryToAccelerationStructureKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const  VkCopyMemoryToAccelerationStructureInfoKHR * pInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCopyMemoryToAccelerationStructureKHR && "vkCopyMemoryToAccelerationStructureKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCopyMemoryToAccelerationStructureKHR(device, deferredOperation, pInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkWriteAccelerationStructuresPropertiesKHR(VkDevice device, uint32_t accelerationStructureCount, const  VkAccelerationStructureKHR * pAccelerationStructures, VkQueryType queryType, size_t dataSize, void * pData, size_t stride) {
	assert(g_vkl_fnptrs.dfn.pfn_vkWriteAccelerationStructuresPropertiesKHR && "vkWriteAccelerationStructuresPropertiesKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkWriteAccelerationStructuresPropertiesKHR(device, accelerationStructureCount, pAccelerationStructures, queryType, dataSize, pData, stride);
}



VKAPI_ATTR void VKAPI_CALL vkCmdCopyAccelerationStructureKHR(VkCommandBuffer commandBuffer, const  VkCopyAccelerationStructureInfoKHR * pInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdCopyAccelerationStructureKHR && "vkCmdCopyAccelerationStructureKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdCopyAccelerationStructureKHR(commandBuffer, pInfo);
}



VKAPI_ATTR void VKAPI_CALL vkCmdCopyAccelerationStructureToMemoryKHR(VkCommandBuffer commandBuffer, const  VkCopyAccelerationStructureToMemoryInfoKHR * pInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdCopyAccelerationStructureToMemoryKHR && "vkCmdCopyAccelerationStructureToMemoryKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdCopyAccelerationStructureToMemoryKHR(commandBuffer, pInfo);
}



VKAPI_ATTR void VKAPI_CALL vkCmdCopyMemoryToAccelerationStructureKHR(VkCommandBuffer commandBuffer, const  VkCopyMemoryToAccelerationStructureInfoKHR * pInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdCopyMemoryToAccelerationStructureKHR && "vkCmdCopyMemoryToAccelerationStructureKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdCopyMemoryToAccelerationStructureKHR(commandBuffer, pInfo);
}



VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetAccelerationStructureDeviceAddressKHR(VkDevice device, const  VkAccelerationStructureDeviceAddressInfoKHR * pInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetAccelerationStructureDeviceAddressKHR && "vkGetAccelerationStructureDeviceAddressKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetAccelerationStructureDeviceAddressKHR(device, pInfo);
}



VKAPI_ATTR void VKAPI_CALL vkCmdWriteAccelerationStructuresPropertiesKHR(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const  VkAccelerationStructureKHR * pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdWriteAccelerationStructuresPropertiesKHR && "vkCmdWriteAccelerationStructuresPropertiesKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdWriteAccelerationStructuresPropertiesKHR(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
}



VKAPI_ATTR void VKAPI_CALL vkGetDeviceAccelerationStructureCompatibilityKHR(VkDevice device, const  VkAccelerationStructureVersionInfoKHR * pVersionInfo, VkAccelerationStructureCompatibilityKHR * pCompatibility) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeviceAccelerationStructureCompatibilityKHR && "vkGetDeviceAccelerationStructureCompatibilityKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetDeviceAccelerationStructureCompatibilityKHR(device, pVersionInfo, pCompatibility);
}



VKAPI_ATTR void VKAPI_CALL vkGetAccelerationStructureBuildSizesKHR(VkDevice device, VkAccelerationStructureBuildTypeKHR buildType, const  VkAccelerationStructureBuildGeometryInfoKHR * pBuildInfo, const  uint32_t * pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR * pSizeInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetAccelerationStructureBuildSizesKHR && "vkGetAccelerationStructureBuildSizesKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetAccelerationStructureBuildSizesKHR(device, buildType, pBuildInfo, pMaxPrimitiveCounts, pSizeInfo);
}


#endif
#ifdef VK_KHR_surface

VKAPI_ATTR void VKAPI_CALL vkDestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.pfn_vkDestroySurfaceKHR && "vkDestroySurfaceKHR is not loaded");
	 g_vkl_fnptrs.pfn_vkDestroySurfaceKHR(instance, surface, pAllocator);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32 * pSupported) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceSupportKHR && "vkGetPhysicalDeviceSurfaceSupportKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR * pSurfaceCapabilities) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceCapabilitiesKHR && "vkGetPhysicalDeviceSurfaceCapabilitiesKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pSurfaceFormatCount, VkSurfaceFormatKHR * pSurfaceFormats) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceFormatsKHR && "vkGetPhysicalDeviceSurfaceFormatsKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfacePresentModesKHR && "vkGetPhysicalDeviceSurfacePresentModesKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes);
}


#endif
#ifdef VK_KHR_swapchain

VKAPI_ATTR VkResult VKAPI_CALL vkCreateSwapchainKHR(VkDevice device, const  VkSwapchainCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchain) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateSwapchainKHR && "vkCreateSwapchainKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain);
}



VKAPI_ATTR void VKAPI_CALL vkDestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroySwapchainKHR && "vkDestroySwapchainKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroySwapchainKHR(device, swapchain, pAllocator);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t * pSwapchainImageCount, VkImage * pSwapchainImages) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetSwapchainImagesKHR && "vkGetSwapchainImagesKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages);
}



VKAPI_ATTR VkResult VKAPI_CALL vkAcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t * pImageIndex) {
	assert(g_vkl_fnptrs.dfn.pfn_vkAcquireNextImageKHR && "vkAcquireNextImageKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex);
}



VKAPI_ATTR VkResult VKAPI_CALL vkQueuePresentKHR(VkQueue queue, const  VkPresentInfoKHR * pPresentInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkQueuePresentKHR && "vkQueuePresentKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkQueuePresentKHR(queue, pPresentInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceGroupPresentCapabilitiesKHR(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR * pDeviceGroupPresentCapabilities) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeviceGroupPresentCapabilitiesKHR && "vkGetDeviceGroupPresentCapabilitiesKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetDeviceGroupPresentCapabilitiesKHR(device, pDeviceGroupPresentCapabilities);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceGroupSurfacePresentModesKHR(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR * pModes) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeviceGroupSurfacePresentModesKHR && "vkGetDeviceGroupSurfacePresentModesKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetDeviceGroupSurfacePresentModesKHR(device, surface, pModes);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDevicePresentRectanglesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pRectCount, VkRect2D * pRects) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDevicePresentRectanglesKHR && "vkGetPhysicalDevicePresentRectanglesKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDevicePresentRectanglesKHR(physicalDevice, surface, pRectCount, pRects);
}



VKAPI_ATTR VkResult VKAPI_CALL vkAcquireNextImage2KHR(VkDevice device, const  VkAcquireNextImageInfoKHR * pAcquireInfo, uint32_t * pImageIndex) {
	assert(g_vkl_fnptrs.dfn.pfn_vkAcquireNextImage2KHR && "vkAcquireNextImage2KHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkAcquireNextImage2KHR(device, pAcquireInfo, pImageIndex);
}


#endif
#ifdef VK_KHR_get_display_properties2

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayProperties2KHR * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDisplayProperties2KHR && "vkGetPhysicalDeviceDisplayProperties2KHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDisplayProperties2KHR(physicalDevice, pPropertyCount, pProperties);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPlaneProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPlaneProperties2KHR * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDisplayPlaneProperties2KHR && "vkGetPhysicalDeviceDisplayPlaneProperties2KHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(physicalDevice, pPropertyCount, pProperties);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayModeProperties2KHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, VkDisplayModeProperties2KHR * pProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetDisplayModeProperties2KHR && "vkGetDisplayModeProperties2KHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetDisplayModeProperties2KHR(physicalDevice, display, pPropertyCount, pProperties);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneCapabilities2KHR(VkPhysicalDevice physicalDevice, const  VkDisplayPlaneInfo2KHR * pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR * pCapabilities) {
	assert(g_vkl_fnptrs.pfn_vkGetDisplayPlaneCapabilities2KHR && "vkGetDisplayPlaneCapabilities2KHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetDisplayPlaneCapabilities2KHR(physicalDevice, pDisplayPlaneInfo, pCapabilities);
}


#endif
#ifdef VK_NV_ray_tracing

VKAPI_ATTR VkResult VKAPI_CALL vkCreateAccelerationStructureNV(VkDevice device, const  VkAccelerationStructureCreateInfoNV * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkAccelerationStructureNV * pAccelerationStructure) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateAccelerationStructureNV && "vkCreateAccelerationStructureNV is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateAccelerationStructureNV(device, pCreateInfo, pAllocator, pAccelerationStructure);
}



VKAPI_ATTR void VKAPI_CALL vkDestroyAccelerationStructureNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyAccelerationStructureNV && "vkDestroyAccelerationStructureNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyAccelerationStructureNV(device, accelerationStructure, pAllocator);
}



VKAPI_ATTR void VKAPI_CALL vkGetAccelerationStructureMemoryRequirementsNV(VkDevice device, const  VkAccelerationStructureMemoryRequirementsInfoNV * pInfo, VkMemoryRequirements2KHR * pMemoryRequirements) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetAccelerationStructureMemoryRequirementsNV && "vkGetAccelerationStructureMemoryRequirementsNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetAccelerationStructureMemoryRequirementsNV(device, pInfo, pMemoryRequirements);
}



VKAPI_ATTR VkResult VKAPI_CALL vkBindAccelerationStructureMemoryNV(VkDevice device, uint32_t bindInfoCount, const  VkBindAccelerationStructureMemoryInfoNV * pBindInfos) {
	assert(g_vkl_fnptrs.dfn.pfn_vkBindAccelerationStructureMemoryNV && "vkBindAccelerationStructureMemoryNV is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkBindAccelerationStructureMemoryNV(device, bindInfoCount, pBindInfos);
}



VKAPI_ATTR void VKAPI_CALL vkCmdBuildAccelerationStructureNV(VkCommandBuffer commandBuffer, const  VkAccelerationStructureInfoNV * pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBuildAccelerationStructureNV && "vkCmdBuildAccelerationStructureNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBuildAccelerationStructureNV(commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset);
}



VKAPI_ATTR void VKAPI_CALL vkCmdCopyAccelerationStructureNV(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdCopyAccelerationStructureNV && "vkCmdCopyAccelerationStructureNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdCopyAccelerationStructureNV(commandBuffer, dst, src, mode);
}



VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysNV(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdTraceRaysNV && "vkCmdTraceRaysNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdTraceRaysNV(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCreateRayTracingPipelinesNV(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const  VkRayTracingPipelineCreateInfoNV * pCreateInfos, const  VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateRayTracingPipelinesNV && "vkCreateRayTracingPipelinesNV is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateRayTracingPipelinesNV(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetAccelerationStructureHandleNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, size_t dataSize, void * pData) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetAccelerationStructureHandleNV && "vkGetAccelerationStructureHandleNV is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetAccelerationStructureHandleNV(device, accelerationStructure, dataSize, pData);
}



VKAPI_ATTR void VKAPI_CALL vkCmdWriteAccelerationStructuresPropertiesNV(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const  VkAccelerationStructureNV * pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdWriteAccelerationStructuresPropertiesNV && "vkCmdWriteAccelerationStructuresPropertiesNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdWriteAccelerationStructuresPropertiesNV(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCompileDeferredNV(VkDevice device, VkPipeline pipeline, uint32_t shader) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCompileDeferredNV && "vkCompileDeferredNV is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCompileDeferredNV(device, pipeline, shader);
}


#endif
#ifdef VK_EXT_discard_rectangles

VKAPI_ATTR void VKAPI_CALL vkCmdSetDiscardRectangleEXT(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const  VkRect2D * pDiscardRectangles) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetDiscardRectangleEXT && "vkCmdSetDiscardRectangleEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
}


#endif
#ifdef VK_EXT_color_write_enable

VKAPI_ATTR void VKAPI_CALL vkCmdSetColorWriteEnableEXT(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const  VkBool32 * pColorWriteEnables) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetColorWriteEnableEXT && "vkCmdSetColorWriteEnableEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetColorWriteEnableEXT(commandBuffer, attachmentCount, pColorWriteEnables);
}


#endif
#ifdef VK_NV_external_memory_win32

VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryWin32HandleNV(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE * pHandle) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetMemoryWin32HandleNV && "vkGetMemoryWin32HandleNV is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetMemoryWin32HandleNV(device, memory, handleType, pHandle);
}


#endif
#ifdef VK_KHR_deferred_host_operations

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDeferredOperationKHR(VkDevice device, const  VkAllocationCallbacks * pAllocator, VkDeferredOperationKHR * pDeferredOperation) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateDeferredOperationKHR && "vkCreateDeferredOperationKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateDeferredOperationKHR(device, pAllocator, pDeferredOperation);
}



VKAPI_ATTR void VKAPI_CALL vkDestroyDeferredOperationKHR(VkDevice device, VkDeferredOperationKHR operation, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyDeferredOperationKHR && "vkDestroyDeferredOperationKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyDeferredOperationKHR(device, operation, pAllocator);
}



VKAPI_ATTR uint32_t VKAPI_CALL vkGetDeferredOperationMaxConcurrencyKHR(VkDevice device, VkDeferredOperationKHR operation) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeferredOperationMaxConcurrencyKHR && "vkGetDeferredOperationMaxConcurrencyKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetDeferredOperationMaxConcurrencyKHR(device, operation);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetDeferredOperationResultKHR(VkDevice device, VkDeferredOperationKHR operation) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeferredOperationResultKHR && "vkGetDeferredOperationResultKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetDeferredOperationResultKHR(device, operation);
}



VKAPI_ATTR VkResult VKAPI_CALL vkDeferredOperationJoinKHR(VkDevice device, VkDeferredOperationKHR operation) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDeferredOperationJoinKHR && "vkDeferredOperationJoinKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkDeferredOperationJoinKHR(device, operation);
}


#endif
#ifdef VK_NV_external_memory_rdma

VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryRemoteAddressNV(VkDevice device, const  VkMemoryGetRemoteAddressInfoNV * pMemoryGetRemoteAddressInfo, VkRemoteAddressNV * pAddress) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetMemoryRemoteAddressNV && "vkGetMemoryRemoteAddressNV is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetMemoryRemoteAddressNV(device, pMemoryGetRemoteAddressInfo, pAddress);
}


#endif
#ifdef VK_NV_device_generated_commands

VKAPI_ATTR void VKAPI_CALL vkGetGeneratedCommandsMemoryRequirementsNV(VkDevice device, const  VkGeneratedCommandsMemoryRequirementsInfoNV * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetGeneratedCommandsMemoryRequirementsNV && "vkGetGeneratedCommandsMemoryRequirementsNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetGeneratedCommandsMemoryRequirementsNV(device, pInfo, pMemoryRequirements);
}



VKAPI_ATTR void VKAPI_CALL vkCmdPreprocessGeneratedCommandsNV(VkCommandBuffer commandBuffer, const  VkGeneratedCommandsInfoNV * pGeneratedCommandsInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdPreprocessGeneratedCommandsNV && "vkCmdPreprocessGeneratedCommandsNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdPreprocessGeneratedCommandsNV(commandBuffer, pGeneratedCommandsInfo);
}



VKAPI_ATTR void VKAPI_CALL vkCmdExecuteGeneratedCommandsNV(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed, const  VkGeneratedCommandsInfoNV * pGeneratedCommandsInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdExecuteGeneratedCommandsNV && "vkCmdExecuteGeneratedCommandsNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdExecuteGeneratedCommandsNV(commandBuffer, isPreprocessed, pGeneratedCommandsInfo);
}



VKAPI_ATTR void VKAPI_CALL vkCmdBindPipelineShaderGroupNV(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBindPipelineShaderGroupNV && "vkCmdBindPipelineShaderGroupNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBindPipelineShaderGroupNV(commandBuffer, pipelineBindPoint, pipeline, groupIndex);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCreateIndirectCommandsLayoutNV(VkDevice device, const  VkIndirectCommandsLayoutCreateInfoNV * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkIndirectCommandsLayoutNV * pIndirectCommandsLayout) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateIndirectCommandsLayoutNV && "vkCreateIndirectCommandsLayoutNV is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateIndirectCommandsLayoutNV(device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
}



VKAPI_ATTR void VKAPI_CALL vkDestroyIndirectCommandsLayoutNV(VkDevice device, VkIndirectCommandsLayoutNV indirectCommandsLayout, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyIndirectCommandsLayoutNV && "vkDestroyIndirectCommandsLayoutNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyIndirectCommandsLayoutNV(device, indirectCommandsLayout, pAllocator);
}


#endif
#ifdef VK_EXT_debug_report

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDebugReportCallbackEXT(VkInstance instance, const  VkDebugReportCallbackCreateInfoEXT * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkDebugReportCallbackEXT * pCallback) {
	assert(g_vkl_fnptrs.pfn_vkCreateDebugReportCallbackEXT && "vkCreateDebugReportCallbackEXT is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback);
}



VKAPI_ATTR void VKAPI_CALL vkDestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.pfn_vkDestroyDebugReportCallbackEXT && "vkDestroyDebugReportCallbackEXT is not loaded");
	 g_vkl_fnptrs.pfn_vkDestroyDebugReportCallbackEXT(instance, callback, pAllocator);
}



VKAPI_ATTR void VKAPI_CALL vkDebugReportMessageEXT(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const  char * pLayerPrefix, const  char * pMessage) {
	assert(g_vkl_fnptrs.pfn_vkDebugReportMessageEXT && "vkDebugReportMessageEXT is not loaded");
	 g_vkl_fnptrs.pfn_vkDebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage);
}


#endif
#ifdef VK_KHR_display_swapchain

VKAPI_ATTR VkResult VKAPI_CALL vkCreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount, const  VkSwapchainCreateInfoKHR * pCreateInfos, const  VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchains) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateSharedSwapchainsKHR && "vkCreateSharedSwapchainsKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
}


#endif
#ifdef VK_EXT_debug_utils

VKAPI_ATTR VkResult VKAPI_CALL vkSetDebugUtilsObjectNameEXT(VkDevice device, const  VkDebugUtilsObjectNameInfoEXT * pNameInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkSetDebugUtilsObjectNameEXT && "vkSetDebugUtilsObjectNameEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkSetDebugUtilsObjectNameEXT(device, pNameInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkSetDebugUtilsObjectTagEXT(VkDevice device, const  VkDebugUtilsObjectTagInfoEXT * pTagInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkSetDebugUtilsObjectTagEXT && "vkSetDebugUtilsObjectTagEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkSetDebugUtilsObjectTagEXT(device, pTagInfo);
}



VKAPI_ATTR void VKAPI_CALL vkQueueBeginDebugUtilsLabelEXT(VkQueue queue, const  VkDebugUtilsLabelEXT * pLabelInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkQueueBeginDebugUtilsLabelEXT && "vkQueueBeginDebugUtilsLabelEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkQueueBeginDebugUtilsLabelEXT(queue, pLabelInfo);
}



VKAPI_ATTR void VKAPI_CALL vkQueueEndDebugUtilsLabelEXT(VkQueue queue) {
	assert(g_vkl_fnptrs.dfn.pfn_vkQueueEndDebugUtilsLabelEXT && "vkQueueEndDebugUtilsLabelEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkQueueEndDebugUtilsLabelEXT(queue);
}



VKAPI_ATTR void VKAPI_CALL vkQueueInsertDebugUtilsLabelEXT(VkQueue queue, const  VkDebugUtilsLabelEXT * pLabelInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkQueueInsertDebugUtilsLabelEXT && "vkQueueInsertDebugUtilsLabelEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkQueueInsertDebugUtilsLabelEXT(queue, pLabelInfo);
}



VKAPI_ATTR void VKAPI_CALL vkCmdBeginDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const  VkDebugUtilsLabelEXT * pLabelInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBeginDebugUtilsLabelEXT && "vkCmdBeginDebugUtilsLabelEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBeginDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
}



VKAPI_ATTR void VKAPI_CALL vkCmdEndDebugUtilsLabelEXT(VkCommandBuffer commandBuffer) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdEndDebugUtilsLabelEXT && "vkCmdEndDebugUtilsLabelEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdEndDebugUtilsLabelEXT(commandBuffer);
}



VKAPI_ATTR void VKAPI_CALL vkCmdInsertDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const  VkDebugUtilsLabelEXT * pLabelInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdInsertDebugUtilsLabelEXT && "vkCmdInsertDebugUtilsLabelEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdInsertDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCreateDebugUtilsMessengerEXT(VkInstance instance, const  VkDebugUtilsMessengerCreateInfoEXT * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkDebugUtilsMessengerEXT * pMessenger) {
	assert(g_vkl_fnptrs.pfn_vkCreateDebugUtilsMessengerEXT && "vkCreateDebugUtilsMessengerEXT is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateDebugUtilsMessengerEXT(instance, pCreateInfo, pAllocator, pMessenger);
}



VKAPI_ATTR void VKAPI_CALL vkDestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT messenger, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.pfn_vkDestroyDebugUtilsMessengerEXT && "vkDestroyDebugUtilsMessengerEXT is not loaded");
	 g_vkl_fnptrs.pfn_vkDestroyDebugUtilsMessengerEXT(instance, messenger, pAllocator);
}



VKAPI_ATTR void VKAPI_CALL vkSubmitDebugUtilsMessageEXT(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const  VkDebugUtilsMessengerCallbackDataEXT * pCallbackData) {
	assert(g_vkl_fnptrs.pfn_vkSubmitDebugUtilsMessageEXT && "vkSubmitDebugUtilsMessageEXT is not loaded");
	 g_vkl_fnptrs.pfn_vkSubmitDebugUtilsMessageEXT(instance, messageSeverity, messageTypes, pCallbackData);
}


#endif
#ifdef VK_KHR_video_decode_queue

VKAPI_ATTR void VKAPI_CALL vkCmdDecodeVideoKHR(VkCommandBuffer commandBuffer, const  VkVideoDecodeInfoKHR * pFrameInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDecodeVideoKHR && "vkCmdDecodeVideoKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDecodeVideoKHR(commandBuffer, pFrameInfo);
}


#endif
#ifdef VK_NV_device_diagnostic_checkpoints

VKAPI_ATTR void VKAPI_CALL vkCmdSetCheckpointNV(VkCommandBuffer commandBuffer, const  void * pCheckpointMarker) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetCheckpointNV && "vkCmdSetCheckpointNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetCheckpointNV(commandBuffer, pCheckpointMarker);
}



VKAPI_ATTR void VKAPI_CALL vkGetQueueCheckpointDataNV(VkQueue queue, uint32_t * pCheckpointDataCount, VkCheckpointDataNV * pCheckpointData) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetQueueCheckpointDataNV && "vkGetQueueCheckpointDataNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkGetQueueCheckpointDataNV(queue, pCheckpointDataCount, pCheckpointData);
}


#endif
#ifdef VK_FUCHSIA_imagepipe_surface

VKAPI_ATTR VkResult VKAPI_CALL vkCreateImagePipeSurfaceFUCHSIA(VkInstance instance, const  VkImagePipeSurfaceCreateInfoFUCHSIA * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateImagePipeSurfaceFUCHSIA && "vkCreateImagePipeSurfaceFUCHSIA is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateImagePipeSurfaceFUCHSIA(instance, pCreateInfo, pAllocator, pSurface);
}


#endif
#ifdef VK_EXT_full_screen_exclusive

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfacePresentModes2EXT(VkPhysicalDevice physicalDevice, const  VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfacePresentModes2EXT && "vkGetPhysicalDeviceSurfacePresentModes2EXT is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfacePresentModes2EXT(physicalDevice, pSurfaceInfo, pPresentModeCount, pPresentModes);
}



VKAPI_ATTR VkResult VKAPI_CALL vkAcquireFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain) {
	assert(g_vkl_fnptrs.dfn.pfn_vkAcquireFullScreenExclusiveModeEXT && "vkAcquireFullScreenExclusiveModeEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkAcquireFullScreenExclusiveModeEXT(device, swapchain);
}



VKAPI_ATTR VkResult VKAPI_CALL vkReleaseFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain) {
	assert(g_vkl_fnptrs.dfn.pfn_vkReleaseFullScreenExclusiveModeEXT && "vkReleaseFullScreenExclusiveModeEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkReleaseFullScreenExclusiveModeEXT(device, swapchain);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceGroupSurfacePresentModes2EXT(VkDevice device, const  VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR * pModes) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetDeviceGroupSurfacePresentModes2EXT && "vkGetDeviceGroupSurfacePresentModes2EXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetDeviceGroupSurfacePresentModes2EXT(device, pSurfaceInfo, pModes);
}


#endif
#ifdef VK_ANDROID_native_buffer

VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainGrallocUsageANDROID(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, int * grallocUsage) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetSwapchainGrallocUsageANDROID && "vkGetSwapchainGrallocUsageANDROID is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetSwapchainGrallocUsageANDROID(device, format, imageUsage, grallocUsage);
}



VKAPI_ATTR VkResult VKAPI_CALL vkAcquireImageANDROID(VkDevice device, VkImage image, int nativeFenceFd, VkSemaphore semaphore, VkFence fence) {
	assert(g_vkl_fnptrs.dfn.pfn_vkAcquireImageANDROID && "vkAcquireImageANDROID is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkAcquireImageANDROID(device, image, nativeFenceFd, semaphore, fence);
}



VKAPI_ATTR VkResult VKAPI_CALL vkQueueSignalReleaseImageANDROID(VkQueue queue, uint32_t waitSemaphoreCount, const  VkSemaphore * pWaitSemaphores, VkImage image, int * pNativeFenceFd) {
	assert(g_vkl_fnptrs.dfn.pfn_vkQueueSignalReleaseImageANDROID && "vkQueueSignalReleaseImageANDROID is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkQueueSignalReleaseImageANDROID(queue, waitSemaphoreCount, pWaitSemaphores, image, pNativeFenceFd);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainGrallocUsage2ANDROID(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, VkSwapchainImageUsageFlagsANDROID swapchainImageUsage, uint64_t * grallocConsumerUsage, uint64_t * grallocProducerUsage) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetSwapchainGrallocUsage2ANDROID && "vkGetSwapchainGrallocUsage2ANDROID is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetSwapchainGrallocUsage2ANDROID(device, format, imageUsage, swapchainImageUsage, grallocConsumerUsage, grallocProducerUsage);
}


#endif
#ifdef VK_EXT_pageable_device_local_memory

VKAPI_ATTR void VKAPI_CALL vkSetDeviceMemoryPriorityEXT(VkDevice device, VkDeviceMemory memory, float priority) {
	assert(g_vkl_fnptrs.dfn.pfn_vkSetDeviceMemoryPriorityEXT && "vkSetDeviceMemoryPriorityEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkSetDeviceMemoryPriorityEXT(device, memory, priority);
}


#endif
#ifdef VK_MVK_macos_surface

VKAPI_ATTR VkResult VKAPI_CALL vkCreateMacOSSurfaceMVK(VkInstance instance, const  VkMacOSSurfaceCreateInfoMVK * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateMacOSSurfaceMVK && "vkCreateMacOSSurfaceMVK is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
}


#endif
#ifdef VK_KHR_external_semaphore_win32

VKAPI_ATTR VkResult VKAPI_CALL vkImportSemaphoreWin32HandleKHR(VkDevice device, const  VkImportSemaphoreWin32HandleInfoKHR * pImportSemaphoreWin32HandleInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkImportSemaphoreWin32HandleKHR && "vkImportSemaphoreWin32HandleKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkImportSemaphoreWin32HandleKHR(device, pImportSemaphoreWin32HandleInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreWin32HandleKHR(VkDevice device, const  VkSemaphoreGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetSemaphoreWin32HandleKHR && "vkGetSemaphoreWin32HandleKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetSemaphoreWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
}


#endif
#ifdef VK_NV_mesh_shader

VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksNV(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDrawMeshTasksNV && "vkCmdDrawMeshTasksNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask);
}



VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksIndirectNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDrawMeshTasksIndirectNV && "vkCmdDrawMeshTasksIndirectNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride);
}



VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksIndirectCountNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDrawMeshTasksIndirectCountNV && "vkCmdDrawMeshTasksIndirectCountNV is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}


#endif
#ifdef VK_KHR_ray_tracing_pipeline

VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysKHR(VkCommandBuffer commandBuffer, const  VkStridedDeviceAddressRegionKHR * pRaygenShaderBindingTable, const  VkStridedDeviceAddressRegionKHR * pMissShaderBindingTable, const  VkStridedDeviceAddressRegionKHR * pHitShaderBindingTable, const  VkStridedDeviceAddressRegionKHR * pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdTraceRaysKHR && "vkCmdTraceRaysKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdTraceRaysKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, width, height, depth);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCreateRayTracingPipelinesKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, uint32_t createInfoCount, const  VkRayTracingPipelineCreateInfoKHR * pCreateInfos, const  VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateRayTracingPipelinesKHR && "vkCreateRayTracingPipelinesKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateRayTracingPipelinesKHR(device, deferredOperation, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetRayTracingShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetRayTracingShaderGroupHandlesKHR && "vkGetRayTracingShaderGroupHandlesKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetRayTracingShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR && "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData);
}



VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysIndirectKHR(VkCommandBuffer commandBuffer, const  VkStridedDeviceAddressRegionKHR * pRaygenShaderBindingTable, const  VkStridedDeviceAddressRegionKHR * pMissShaderBindingTable, const  VkStridedDeviceAddressRegionKHR * pHitShaderBindingTable, const  VkStridedDeviceAddressRegionKHR * pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdTraceRaysIndirectKHR && "vkCmdTraceRaysIndirectKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdTraceRaysIndirectKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, indirectDeviceAddress);
}



VKAPI_ATTR VkDeviceSize VKAPI_CALL vkGetRayTracingShaderGroupStackSizeKHR(VkDevice device, VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetRayTracingShaderGroupStackSizeKHR && "vkGetRayTracingShaderGroupStackSizeKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetRayTracingShaderGroupStackSizeKHR(device, pipeline, group, groupShader);
}



VKAPI_ATTR void VKAPI_CALL vkCmdSetRayTracingPipelineStackSizeKHR(VkCommandBuffer commandBuffer, uint32_t pipelineStackSize) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetRayTracingPipelineStackSizeKHR && "vkCmdSetRayTracingPipelineStackSizeKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetRayTracingPipelineStackSizeKHR(commandBuffer, pipelineStackSize);
}


#endif
#ifdef VK_KHR_external_memory_fd

VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryFdKHR(VkDevice device, const  VkMemoryGetFdInfoKHR * pGetFdInfo, int * pFd) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetMemoryFdKHR && "vkGetMemoryFdKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetMemoryFdKHR(device, pGetFdInfo, pFd);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryFdPropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR * pMemoryFdProperties) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetMemoryFdPropertiesKHR && "vkGetMemoryFdPropertiesKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties);
}


#endif
#ifdef VK_EXT_image_drm_format_modifier

VKAPI_ATTR VkResult VKAPI_CALL vkGetImageDrmFormatModifierPropertiesEXT(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT * pProperties) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetImageDrmFormatModifierPropertiesEXT && "vkGetImageDrmFormatModifierPropertiesEXT is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetImageDrmFormatModifierPropertiesEXT(device, image, pProperties);
}


#endif
#ifdef VK_FUCHSIA_buffer_collection

VKAPI_ATTR VkResult VKAPI_CALL vkCreateBufferCollectionFUCHSIA(VkDevice device, const  VkBufferCollectionCreateInfoFUCHSIA * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkBufferCollectionFUCHSIA * pCollection) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateBufferCollectionFUCHSIA && "vkCreateBufferCollectionFUCHSIA is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateBufferCollectionFUCHSIA(device, pCreateInfo, pAllocator, pCollection);
}



VKAPI_ATTR VkResult VKAPI_CALL vkSetBufferCollectionImageConstraintsFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, const  VkImageConstraintsInfoFUCHSIA * pImageConstraintsInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkSetBufferCollectionImageConstraintsFUCHSIA && "vkSetBufferCollectionImageConstraintsFUCHSIA is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkSetBufferCollectionImageConstraintsFUCHSIA(device, collection, pImageConstraintsInfo);
}



VKAPI_ATTR VkResult VKAPI_CALL vkSetBufferCollectionBufferConstraintsFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, const  VkBufferConstraintsInfoFUCHSIA * pBufferConstraintsInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkSetBufferCollectionBufferConstraintsFUCHSIA && "vkSetBufferCollectionBufferConstraintsFUCHSIA is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkSetBufferCollectionBufferConstraintsFUCHSIA(device, collection, pBufferConstraintsInfo);
}



VKAPI_ATTR void VKAPI_CALL vkDestroyBufferCollectionFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyBufferCollectionFUCHSIA && "vkDestroyBufferCollectionFUCHSIA is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyBufferCollectionFUCHSIA(device, collection, pAllocator);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetBufferCollectionPropertiesFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, VkBufferCollectionPropertiesFUCHSIA * pProperties) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetBufferCollectionPropertiesFUCHSIA && "vkGetBufferCollectionPropertiesFUCHSIA is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetBufferCollectionPropertiesFUCHSIA(device, collection, pProperties);
}


#endif
#ifdef VK_EXT_transform_feedback

VKAPI_ATTR void VKAPI_CALL vkCmdBindTransformFeedbackBuffersEXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const  VkBuffer * pBuffers, const  VkDeviceSize * pOffsets, const  VkDeviceSize * pSizes) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBindTransformFeedbackBuffersEXT && "vkCmdBindTransformFeedbackBuffersEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBindTransformFeedbackBuffersEXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes);
}



VKAPI_ATTR void VKAPI_CALL vkCmdBeginTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const  VkBuffer * pCounterBuffers, const  VkDeviceSize * pCounterBufferOffsets) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBeginTransformFeedbackEXT && "vkCmdBeginTransformFeedbackEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBeginTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
}



VKAPI_ATTR void VKAPI_CALL vkCmdEndTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const  VkBuffer * pCounterBuffers, const  VkDeviceSize * pCounterBufferOffsets) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdEndTransformFeedbackEXT && "vkCmdEndTransformFeedbackEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdEndTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
}



VKAPI_ATTR void VKAPI_CALL vkCmdBeginQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBeginQueryIndexedEXT && "vkCmdBeginQueryIndexedEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBeginQueryIndexedEXT(commandBuffer, queryPool, query, flags, index);
}



VKAPI_ATTR void VKAPI_CALL vkCmdEndQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdEndQueryIndexedEXT && "vkCmdEndQueryIndexedEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdEndQueryIndexedEXT(commandBuffer, queryPool, query, index);
}



VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectByteCountEXT(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdDrawIndirectByteCountEXT && "vkCmdDrawIndirectByteCountEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride);
}


#endif
#ifdef VK_KHR_video_queue

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceVideoCapabilitiesKHR(VkPhysicalDevice physicalDevice, const  VkVideoProfileKHR * pVideoProfile, VkVideoCapabilitiesKHR * pCapabilities) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceVideoCapabilitiesKHR && "vkGetPhysicalDeviceVideoCapabilitiesKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceVideoCapabilitiesKHR(physicalDevice, pVideoProfile, pCapabilities);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceVideoFormatPropertiesKHR(VkPhysicalDevice physicalDevice, const  VkPhysicalDeviceVideoFormatInfoKHR * pVideoFormatInfo, uint32_t * pVideoFormatPropertyCount, VkVideoFormatPropertiesKHR * pVideoFormatProperties) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceVideoFormatPropertiesKHR && "vkGetPhysicalDeviceVideoFormatPropertiesKHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceVideoFormatPropertiesKHR(physicalDevice, pVideoFormatInfo, pVideoFormatPropertyCount, pVideoFormatProperties);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCreateVideoSessionKHR(VkDevice device, const  VkVideoSessionCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkVideoSessionKHR * pVideoSession) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateVideoSessionKHR && "vkCreateVideoSessionKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateVideoSessionKHR(device, pCreateInfo, pAllocator, pVideoSession);
}



VKAPI_ATTR void VKAPI_CALL vkDestroyVideoSessionKHR(VkDevice device, VkVideoSessionKHR videoSession, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyVideoSessionKHR && "vkDestroyVideoSessionKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyVideoSessionKHR(device, videoSession, pAllocator);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetVideoSessionMemoryRequirementsKHR(VkDevice device, VkVideoSessionKHR videoSession, uint32_t * pVideoSessionMemoryRequirementsCount, VkVideoGetMemoryPropertiesKHR * pVideoSessionMemoryRequirements) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetVideoSessionMemoryRequirementsKHR && "vkGetVideoSessionMemoryRequirementsKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetVideoSessionMemoryRequirementsKHR(device, videoSession, pVideoSessionMemoryRequirementsCount, pVideoSessionMemoryRequirements);
}



VKAPI_ATTR VkResult VKAPI_CALL vkBindVideoSessionMemoryKHR(VkDevice device, VkVideoSessionKHR videoSession, uint32_t videoSessionBindMemoryCount, const  VkVideoBindMemoryKHR * pVideoSessionBindMemories) {
	assert(g_vkl_fnptrs.dfn.pfn_vkBindVideoSessionMemoryKHR && "vkBindVideoSessionMemoryKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkBindVideoSessionMemoryKHR(device, videoSession, videoSessionBindMemoryCount, pVideoSessionBindMemories);
}



VKAPI_ATTR VkResult VKAPI_CALL vkCreateVideoSessionParametersKHR(VkDevice device, const  VkVideoSessionParametersCreateInfoKHR * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkVideoSessionParametersKHR * pVideoSessionParameters) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCreateVideoSessionParametersKHR && "vkCreateVideoSessionParametersKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkCreateVideoSessionParametersKHR(device, pCreateInfo, pAllocator, pVideoSessionParameters);
}



VKAPI_ATTR VkResult VKAPI_CALL vkUpdateVideoSessionParametersKHR(VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const  VkVideoSessionParametersUpdateInfoKHR * pUpdateInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkUpdateVideoSessionParametersKHR && "vkUpdateVideoSessionParametersKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkUpdateVideoSessionParametersKHR(device, videoSessionParameters, pUpdateInfo);
}



VKAPI_ATTR void VKAPI_CALL vkDestroyVideoSessionParametersKHR(VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const  VkAllocationCallbacks * pAllocator) {
	assert(g_vkl_fnptrs.dfn.pfn_vkDestroyVideoSessionParametersKHR && "vkDestroyVideoSessionParametersKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkDestroyVideoSessionParametersKHR(device, videoSessionParameters, pAllocator);
}



VKAPI_ATTR void VKAPI_CALL vkCmdBeginVideoCodingKHR(VkCommandBuffer commandBuffer, const  VkVideoBeginCodingInfoKHR * pBeginInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdBeginVideoCodingKHR && "vkCmdBeginVideoCodingKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdBeginVideoCodingKHR(commandBuffer, pBeginInfo);
}



VKAPI_ATTR void VKAPI_CALL vkCmdEndVideoCodingKHR(VkCommandBuffer commandBuffer, const  VkVideoEndCodingInfoKHR * pEndCodingInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdEndVideoCodingKHR && "vkCmdEndVideoCodingKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdEndVideoCodingKHR(commandBuffer, pEndCodingInfo);
}



VKAPI_ATTR void VKAPI_CALL vkCmdControlVideoCodingKHR(VkCommandBuffer commandBuffer, const  VkVideoCodingControlInfoKHR * pCodingControlInfo) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdControlVideoCodingKHR && "vkCmdControlVideoCodingKHR is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdControlVideoCodingKHR(commandBuffer, pCodingControlInfo);
}


#endif
#ifdef VK_EXT_directfb_surface

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDirectFBSurfaceEXT(VkInstance instance, const  VkDirectFBSurfaceCreateInfoEXT * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateDirectFBSurfaceEXT && "vkCreateDirectFBSurfaceEXT is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateDirectFBSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
}



VKAPI_ATTR VkBool32 VKAPI_CALL vkGetPhysicalDeviceDirectFBPresentationSupportEXT(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, IDirectFB * dfb) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDirectFBPresentationSupportEXT && "vkGetPhysicalDeviceDirectFBPresentationSupportEXT is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDirectFBPresentationSupportEXT(physicalDevice, queueFamilyIndex, dfb);
}


#endif
#ifdef VK_EXT_display_surface_counter

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilities2EXT(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT * pSurfaceCapabilities) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceCapabilities2EXT && "vkGetPhysicalDeviceSurfaceCapabilities2EXT is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities);
}


#endif
#ifdef VK_KHR_get_surface_capabilities2

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilities2KHR(VkPhysicalDevice physicalDevice, const  VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkSurfaceCapabilities2KHR * pSurfaceCapabilities) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceCapabilities2KHR && "vkGetPhysicalDeviceSurfaceCapabilities2KHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceCapabilities2KHR(physicalDevice, pSurfaceInfo, pSurfaceCapabilities);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceFormats2KHR(VkPhysicalDevice physicalDevice, const  VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pSurfaceFormatCount, VkSurfaceFormat2KHR * pSurfaceFormats) {
	assert(g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceFormats2KHR && "vkGetPhysicalDeviceSurfaceFormats2KHR is not loaded");
	return  g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceFormats2KHR(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
}


#endif
#ifdef VK_EXT_headless_surface

VKAPI_ATTR VkResult VKAPI_CALL vkCreateHeadlessSurfaceEXT(VkInstance instance, const  VkHeadlessSurfaceCreateInfoEXT * pCreateInfo, const  VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
	assert(g_vkl_fnptrs.pfn_vkCreateHeadlessSurfaceEXT && "vkCreateHeadlessSurfaceEXT is not loaded");
	return  g_vkl_fnptrs.pfn_vkCreateHeadlessSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
}


#endif
#ifdef VK_EXT_vertex_input_dynamic_state

VKAPI_ATTR void VKAPI_CALL vkCmdSetVertexInputEXT(VkCommandBuffer commandBuffer, uint32_t vertexBindingDescriptionCount, const  VkVertexInputBindingDescription2EXT * pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount, const  VkVertexInputAttributeDescription2EXT * pVertexAttributeDescriptions) {
	assert(g_vkl_fnptrs.dfn.pfn_vkCmdSetVertexInputEXT && "vkCmdSetVertexInputEXT is not loaded");
	 g_vkl_fnptrs.dfn.pfn_vkCmdSetVertexInputEXT(commandBuffer, vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount, pVertexAttributeDescriptions);
}


#endif
#ifdef VK_GOOGLE_display_timing

VKAPI_ATTR VkResult VKAPI_CALL vkGetRefreshCycleDurationGOOGLE(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE * pDisplayTimingProperties) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetRefreshCycleDurationGOOGLE && "vkGetRefreshCycleDurationGOOGLE is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetRefreshCycleDurationGOOGLE(device, swapchain, pDisplayTimingProperties);
}



VKAPI_ATTR VkResult VKAPI_CALL vkGetPastPresentationTimingGOOGLE(VkDevice device, VkSwapchainKHR swapchain, uint32_t * pPresentationTimingCount, VkPastPresentationTimingGOOGLE * pPresentationTimings) {
	assert(g_vkl_fnptrs.dfn.pfn_vkGetPastPresentationTimingGOOGLE && "vkGetPastPresentationTimingGOOGLE is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkGetPastPresentationTimingGOOGLE(device, swapchain, pPresentationTimingCount, pPresentationTimings);
}


#endif
#ifdef VK_KHR_present_wait

VKAPI_ATTR VkResult VKAPI_CALL vkWaitForPresentKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t presentId, uint64_t timeout) {
	assert(g_vkl_fnptrs.dfn.pfn_vkWaitForPresentKHR && "vkWaitForPresentKHR is not loaded");
	return  g_vkl_fnptrs.dfn.pfn_vkWaitForPresentKHR(device, swapchain, presentId, timeout);
}


#endif

      VkResult vkl_init(PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr)
      {
          if (!vkGetInstanceProcAddr)
          {
              return VK_ERROR_INITIALIZATION_FAILED;
          }
          
          g_vkl_fnptrs.pfn_vkGetInstanceProcAddr = vkGetInstanceProcAddr;

          g_vkl_fnptrs.pfn_vkCreateInstance                       = (PFN_vkCreateInstance)vkGetInstanceProcAddr(0, "vkCreateInstance");
          g_vkl_fnptrs.pfn_vkEnumerateInstanceVersion             = (PFN_vkEnumerateInstanceVersion)vkGetInstanceProcAddr(0, "vkEnumerateInstanceVersion");
          g_vkl_fnptrs.pfn_vkEnumerateInstanceLayerProperties     = (PFN_vkEnumerateInstanceLayerProperties)vkGetInstanceProcAddr(0, "vkEnumerateInstanceLayerProperties");
          g_vkl_fnptrs.pfn_vkEnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties)vkGetInstanceProcAddr(0, "vkEnumerateInstanceExtensionProperties");

          if (!g_vkl_fnptrs.pfn_vkCreateInstance)
          {
              return VK_ERROR_INITIALIZATION_FAILED;
          }

          return VK_SUCCESS;
      }
void vkl_load_instance_functions(VkInstance instance) {
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2");
	g_vkl_fnptrs.pfn_vkEnumerateDeviceLayerProperties = (PFN_vkEnumerateDeviceLayerProperties)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkEnumerateDeviceLayerProperties");
	g_vkl_fnptrs.pfn_vkCreateDevice = (PFN_vkCreateDevice)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateDevice");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceImageFormatProperties2");
	g_vkl_fnptrs.pfn_vkGetDeviceProcAddr = (PFN_vkGetDeviceProcAddr)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetDeviceProcAddr");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyProperties2");
	g_vkl_fnptrs.pfn_vkEnumerateDeviceExtensionProperties = (PFN_vkEnumerateDeviceExtensionProperties)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkEnumerateDeviceExtensionProperties");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties2");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures2");
	g_vkl_fnptrs.pfn_vkEnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDeviceGroups");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalSemaphoreProperties");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceToolProperties = (PFN_vkGetPhysicalDeviceToolProperties)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceToolProperties");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties2");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSparseImageFormatProperties = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalFenceProperties");
	g_vkl_fnptrs.pfn_vkDestroyInstance = (PFN_vkDestroyInstance)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkDestroyInstance");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyProperties");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalBufferProperties");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties");
	g_vkl_fnptrs.pfn_vkEnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDevices");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties2");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceImageFormatProperties");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties");
#ifdef VK_AMD_shader_info
#endif
#ifdef VK_AMD_buffer_marker
#endif
#ifdef VK_NV_coverage_reduction_mode
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = (PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
#endif
#ifdef VK_KHR_external_fence_fd
#endif
#ifdef VK_EXT_debug_marker
#endif
#ifdef VK_EXT_acquire_xlib_display
	g_vkl_fnptrs.pfn_vkAcquireXlibDisplayEXT = (PFN_vkAcquireXlibDisplayEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkAcquireXlibDisplayEXT");
	g_vkl_fnptrs.pfn_vkGetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetRandROutputDisplayEXT");
#endif
#ifdef VK_KHR_shared_presentable_image
#endif
#ifdef VK_NV_shading_rate_image
#endif
#ifdef VK_NV_cooperative_matrix
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
#endif
#ifdef VK_INTEL_performance_query
#endif
#ifdef VK_ANDROID_external_memory_android_hardware_buffer
#endif
#ifdef VK_EXT_direct_mode_display
	g_vkl_fnptrs.pfn_vkReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkReleaseDisplayEXT");
#endif
#ifdef VK_GGP_stream_descriptor_surface
	g_vkl_fnptrs.pfn_vkCreateStreamDescriptorSurfaceGGP = (PFN_vkCreateStreamDescriptorSurfaceGGP)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateStreamDescriptorSurfaceGGP");
#endif
#ifdef VK_KHR_win32_surface
	g_vkl_fnptrs.pfn_vkCreateWin32SurfaceKHR = (PFN_vkCreateWin32SurfaceKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateWin32SurfaceKHR");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceWin32PresentationSupportKHR = (PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceWin32PresentationSupportKHR");
#endif
#ifdef VK_KHR_android_surface
	g_vkl_fnptrs.pfn_vkCreateAndroidSurfaceKHR = (PFN_vkCreateAndroidSurfaceKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateAndroidSurfaceKHR");
#endif
#ifdef VK_KHR_wayland_surface
	g_vkl_fnptrs.pfn_vkCreateWaylandSurfaceKHR = (PFN_vkCreateWaylandSurfaceKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateWaylandSurfaceKHR");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceWaylandPresentationSupportKHR = (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
#endif
#ifdef VK_NV_scissor_exclusive
#endif
#ifdef VK_KHR_pipeline_executable_properties
#endif
#ifdef VK_KHR_video_encode_queue
#endif
#ifdef VK_EXT_display_control
#endif
#ifdef VK_FUCHSIA_external_memory
#endif
#ifdef VK_HUAWEI_subpass_shading
#endif
#ifdef VK_EXT_conditional_rendering
#endif
#ifdef VK_NV_clip_space_w_scaling
#endif
#ifdef VK_NV_fragment_shading_rate_enums
#endif
#ifdef VK_NV_acquire_winrt_display
	g_vkl_fnptrs.pfn_vkAcquireWinrtDisplayNV = (PFN_vkAcquireWinrtDisplayNV)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkAcquireWinrtDisplayNV");
	g_vkl_fnptrs.pfn_vkGetWinrtDisplayNV = (PFN_vkGetWinrtDisplayNV)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetWinrtDisplayNV");
#endif
#ifdef VK_AMD_display_native_hdr
#endif
#ifdef VK_NV_external_memory_capabilities
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceExternalImageFormatPropertiesNV = (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
#endif
#ifdef VK_KHR_fragment_shading_rate
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceFragmentShadingRatesKHR = (PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceFragmentShadingRatesKHR");
#endif
#ifdef VK_KHR_display
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDisplayPropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayPropertiesKHR");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
	g_vkl_fnptrs.pfn_vkGetDisplayPlaneSupportedDisplaysKHR = (PFN_vkGetDisplayPlaneSupportedDisplaysKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetDisplayPlaneSupportedDisplaysKHR");
	g_vkl_fnptrs.pfn_vkGetDisplayModePropertiesKHR = (PFN_vkGetDisplayModePropertiesKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetDisplayModePropertiesKHR");
	g_vkl_fnptrs.pfn_vkCreateDisplayModeKHR = (PFN_vkCreateDisplayModeKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateDisplayModeKHR");
	g_vkl_fnptrs.pfn_vkGetDisplayPlaneCapabilitiesKHR = (PFN_vkGetDisplayPlaneCapabilitiesKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetDisplayPlaneCapabilitiesKHR");
	g_vkl_fnptrs.pfn_vkCreateDisplayPlaneSurfaceKHR = (PFN_vkCreateDisplayPlaneSurfaceKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateDisplayPlaneSurfaceKHR");
#endif
#ifdef VK_NVX_image_view_handle
#endif
#ifdef VK_KHR_external_fence_win32
#endif
#ifdef VK_MVK_ios_surface
	g_vkl_fnptrs.pfn_vkCreateIOSSurfaceMVK = (PFN_vkCreateIOSSurfaceMVK)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateIOSSurfaceMVK");
#endif
#ifdef VK_FUCHSIA_external_semaphore
#endif
#ifdef VK_HUAWEI_invocation_mask
#endif
#ifdef VK_KHR_push_descriptor
#endif
#ifdef VK_EXT_hdr_metadata
#endif
#ifdef VK_KHR_performance_query
	g_vkl_fnptrs.pfn_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
#endif
#ifdef VK_KHR_xlib_surface
	g_vkl_fnptrs.pfn_vkCreateXlibSurfaceKHR = (PFN_vkCreateXlibSurfaceKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateXlibSurfaceKHR");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceXlibPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
#endif
#ifdef VK_EXT_multi_draw
#endif
#ifdef VK_NN_vi_surface
	g_vkl_fnptrs.pfn_vkCreateViSurfaceNN = (PFN_vkCreateViSurfaceNN)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateViSurfaceNN");
#endif
#ifdef VK_KHR_xcb_surface
	g_vkl_fnptrs.pfn_vkCreateXcbSurfaceKHR = (PFN_vkCreateXcbSurfaceKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateXcbSurfaceKHR");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceXcbPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
#endif
#ifdef VK_EXT_sample_locations
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
#endif
#ifdef VK_KHR_external_semaphore_fd
#endif
#ifdef VK_KHR_synchronization2
#endif
#ifdef VK_EXT_extended_dynamic_state2
#endif
#ifdef VK_EXT_calibrated_timestamps
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
#endif
#ifdef VK_EXT_metal_surface
	g_vkl_fnptrs.pfn_vkCreateMetalSurfaceEXT = (PFN_vkCreateMetalSurfaceEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateMetalSurfaceEXT");
#endif
#ifdef VK_EXT_acquire_drm_display
	g_vkl_fnptrs.pfn_vkAcquireDrmDisplayEXT = (PFN_vkAcquireDrmDisplayEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkAcquireDrmDisplayEXT");
	g_vkl_fnptrs.pfn_vkGetDrmDisplayEXT = (PFN_vkGetDrmDisplayEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetDrmDisplayEXT");
#endif
#ifdef VK_EXT_external_memory_host
#endif
#ifdef VK_NVX_binary_import
#endif
#ifdef VK_EXT_line_rasterization
#endif
#ifdef VK_KHR_external_memory_win32
#endif
#ifdef VK_EXT_validation_cache
#endif
#ifdef VK_QNX_screen_surface
	g_vkl_fnptrs.pfn_vkCreateScreenSurfaceQNX = (PFN_vkCreateScreenSurfaceQNX)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateScreenSurfaceQNX");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceScreenPresentationSupportQNX = (PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceScreenPresentationSupportQNX");
#endif
#ifdef VK_KHR_acceleration_structure
#endif
#ifdef VK_KHR_surface
	g_vkl_fnptrs.pfn_vkDestroySurfaceKHR = (PFN_vkDestroySurfaceKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkDestroySurfaceKHR");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceSupportKHR = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceSupportKHR");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceFormatsKHR = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceFormatsKHR");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfacePresentModesKHR = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfacePresentModesKHR");
#endif
#ifdef VK_KHR_swapchain
	g_vkl_fnptrs.pfn_vkGetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDevicePresentRectanglesKHR");
#endif
#ifdef VK_KHR_get_display_properties2
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDisplayProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayProperties2KHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayProperties2KHR");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
	g_vkl_fnptrs.pfn_vkGetDisplayModeProperties2KHR = (PFN_vkGetDisplayModeProperties2KHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetDisplayModeProperties2KHR");
	g_vkl_fnptrs.pfn_vkGetDisplayPlaneCapabilities2KHR = (PFN_vkGetDisplayPlaneCapabilities2KHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetDisplayPlaneCapabilities2KHR");
#endif
#ifdef VK_NV_ray_tracing
#endif
#ifdef VK_EXT_discard_rectangles
#endif
#ifdef VK_EXT_color_write_enable
#endif
#ifdef VK_NV_external_memory_win32
#endif
#ifdef VK_KHR_deferred_host_operations
#endif
#ifdef VK_NV_external_memory_rdma
#endif
#ifdef VK_NV_device_generated_commands
#endif
#ifdef VK_EXT_debug_report
	g_vkl_fnptrs.pfn_vkCreateDebugReportCallbackEXT = (PFN_vkCreateDebugReportCallbackEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateDebugReportCallbackEXT");
	g_vkl_fnptrs.pfn_vkDestroyDebugReportCallbackEXT = (PFN_vkDestroyDebugReportCallbackEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkDestroyDebugReportCallbackEXT");
	g_vkl_fnptrs.pfn_vkDebugReportMessageEXT = (PFN_vkDebugReportMessageEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkDebugReportMessageEXT");
#endif
#ifdef VK_KHR_display_swapchain
#endif
#ifdef VK_EXT_debug_utils
	g_vkl_fnptrs.pfn_vkCreateDebugUtilsMessengerEXT = (PFN_vkCreateDebugUtilsMessengerEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateDebugUtilsMessengerEXT");
	g_vkl_fnptrs.pfn_vkDestroyDebugUtilsMessengerEXT = (PFN_vkDestroyDebugUtilsMessengerEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkDestroyDebugUtilsMessengerEXT");
	g_vkl_fnptrs.pfn_vkSubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkSubmitDebugUtilsMessageEXT");
#endif
#ifdef VK_KHR_video_decode_queue
#endif
#ifdef VK_NV_device_diagnostic_checkpoints
#endif
#ifdef VK_FUCHSIA_imagepipe_surface
	g_vkl_fnptrs.pfn_vkCreateImagePipeSurfaceFUCHSIA = (PFN_vkCreateImagePipeSurfaceFUCHSIA)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateImagePipeSurfaceFUCHSIA");
#endif
#ifdef VK_EXT_full_screen_exclusive
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfacePresentModes2EXT = (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
#endif
#ifdef VK_ANDROID_native_buffer
#endif
#ifdef VK_EXT_pageable_device_local_memory
#endif
#ifdef VK_MVK_macos_surface
	g_vkl_fnptrs.pfn_vkCreateMacOSSurfaceMVK = (PFN_vkCreateMacOSSurfaceMVK)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateMacOSSurfaceMVK");
#endif
#ifdef VK_KHR_external_semaphore_win32
#endif
#ifdef VK_NV_mesh_shader
#endif
#ifdef VK_KHR_ray_tracing_pipeline
#endif
#ifdef VK_KHR_external_memory_fd
#endif
#ifdef VK_EXT_image_drm_format_modifier
#endif
#ifdef VK_FUCHSIA_buffer_collection
#endif
#ifdef VK_EXT_transform_feedback
#endif
#ifdef VK_KHR_video_queue
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceVideoCapabilitiesKHR = (PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceVideoCapabilitiesKHR");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceVideoFormatPropertiesKHR = (PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceVideoFormatPropertiesKHR");
#endif
#ifdef VK_EXT_directfb_surface
	g_vkl_fnptrs.pfn_vkCreateDirectFBSurfaceEXT = (PFN_vkCreateDirectFBSurfaceEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateDirectFBSurfaceEXT");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceDirectFBPresentationSupportEXT = (PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
#endif
#ifdef VK_EXT_display_surface_counter
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceCapabilities2EXT = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
#endif
#ifdef VK_KHR_get_surface_capabilities2
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
	g_vkl_fnptrs.pfn_vkGetPhysicalDeviceSurfaceFormats2KHR = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceFormats2KHR");
#endif
#ifdef VK_EXT_headless_surface
	g_vkl_fnptrs.pfn_vkCreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr(instance, "vkCreateHeadlessSurfaceEXT");
#endif
#ifdef VK_EXT_vertex_input_dynamic_state
#endif
#ifdef VK_GOOGLE_display_timing
#endif
#ifdef VK_KHR_present_wait
#endif
	void vkl_load_device_functions_impl(VkDevice device, PFN_vkGetDeviceProcAddr pfn_load_dev_fn, VklDeviceFunctions* fnptrs);
	vkl_load_device_functions_impl((VkDevice)instance, (PFN_vkGetDeviceProcAddr)g_vkl_fnptrs.pfn_vkGetInstanceProcAddr, &g_vkl_fnptrs.dfn);
}
void vkl_load_device_functions_impl(VkDevice device, PFN_vkGetDeviceProcAddr pfn_load_dev_fn, VklDeviceFunctions* fnptrs) {
	fnptrs->handle = device;
	fnptrs->pfn_vkCmdDispatch = (PFN_vkCmdDispatch)pfn_load_dev_fn(device, "vkCmdDispatch");
	fnptrs->pfn_vkDeviceWaitIdle = (PFN_vkDeviceWaitIdle)pfn_load_dev_fn(device, "vkDeviceWaitIdle");
	fnptrs->pfn_vkDestroyRenderPass = (PFN_vkDestroyRenderPass)pfn_load_dev_fn(device, "vkDestroyRenderPass");
	fnptrs->pfn_vkCmdWaitEvents = (PFN_vkCmdWaitEvents)pfn_load_dev_fn(device, "vkCmdWaitEvents");
	fnptrs->pfn_vkCmdSetDepthCompareOp = (PFN_vkCmdSetDepthCompareOp)pfn_load_dev_fn(device, "vkCmdSetDepthCompareOp");
	fnptrs->pfn_vkCmdSetRasterizerDiscardEnable = (PFN_vkCmdSetRasterizerDiscardEnable)pfn_load_dev_fn(device, "vkCmdSetRasterizerDiscardEnable");
	fnptrs->pfn_vkCmdClearColorImage = (PFN_vkCmdClearColorImage)pfn_load_dev_fn(device, "vkCmdClearColorImage");
	fnptrs->pfn_vkQueueSubmit2 = (PFN_vkQueueSubmit2)pfn_load_dev_fn(device, "vkQueueSubmit2");
	fnptrs->pfn_vkGetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)pfn_load_dev_fn(device, "vkGetBufferDeviceAddress");
	fnptrs->pfn_vkCmdSetDepthBias = (PFN_vkCmdSetDepthBias)pfn_load_dev_fn(device, "vkCmdSetDepthBias");
	fnptrs->pfn_vkBindBufferMemory2 = (PFN_vkBindBufferMemory2)pfn_load_dev_fn(device, "vkBindBufferMemory2");
	fnptrs->pfn_vkGetDeviceImageSparseMemoryRequirements = (PFN_vkGetDeviceImageSparseMemoryRequirements)pfn_load_dev_fn(device, "vkGetDeviceImageSparseMemoryRequirements");
	fnptrs->pfn_vkCmdCopyImage = (PFN_vkCmdCopyImage)pfn_load_dev_fn(device, "vkCmdCopyImage");
	fnptrs->pfn_vkDestroyImage = (PFN_vkDestroyImage)pfn_load_dev_fn(device, "vkDestroyImage");
	fnptrs->pfn_vkQueueBindSparse = (PFN_vkQueueBindSparse)pfn_load_dev_fn(device, "vkQueueBindSparse");
	fnptrs->pfn_vkCmdExecuteCommands = (PFN_vkCmdExecuteCommands)pfn_load_dev_fn(device, "vkCmdExecuteCommands");
	fnptrs->pfn_vkWaitSemaphores = (PFN_vkWaitSemaphores)pfn_load_dev_fn(device, "vkWaitSemaphores");
	fnptrs->pfn_vkCmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)pfn_load_dev_fn(device, "vkCmdDrawIndirectCount");
	fnptrs->pfn_vkCmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults)pfn_load_dev_fn(device, "vkCmdCopyQueryPoolResults");
	fnptrs->pfn_vkGetDeviceBufferMemoryRequirements = (PFN_vkGetDeviceBufferMemoryRequirements)pfn_load_dev_fn(device, "vkGetDeviceBufferMemoryRequirements");
	fnptrs->pfn_vkCmdCopyBuffer = (PFN_vkCmdCopyBuffer)pfn_load_dev_fn(device, "vkCmdCopyBuffer");
	fnptrs->pfn_vkCreateBuffer = (PFN_vkCreateBuffer)pfn_load_dev_fn(device, "vkCreateBuffer");
	fnptrs->pfn_vkCmdBindPipeline = (PFN_vkCmdBindPipeline)pfn_load_dev_fn(device, "vkCmdBindPipeline");
	fnptrs->pfn_vkDestroyDescriptorPool = (PFN_vkDestroyDescriptorPool)pfn_load_dev_fn(device, "vkDestroyDescriptorPool");
	fnptrs->pfn_vkCmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage)pfn_load_dev_fn(device, "vkCmdCopyBufferToImage");
	fnptrs->pfn_vkDestroyEvent = (PFN_vkDestroyEvent)pfn_load_dev_fn(device, "vkDestroyEvent");
	fnptrs->pfn_vkCreatePrivateDataSlot = (PFN_vkCreatePrivateDataSlot)pfn_load_dev_fn(device, "vkCreatePrivateDataSlot");
	fnptrs->pfn_vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2)pfn_load_dev_fn(device, "vkGetImageMemoryRequirements2");
	fnptrs->pfn_vkCmdClearAttachments = (PFN_vkCmdClearAttachments)pfn_load_dev_fn(device, "vkCmdClearAttachments");
	fnptrs->pfn_vkCmdSetStencilReference = (PFN_vkCmdSetStencilReference)pfn_load_dev_fn(device, "vkCmdSetStencilReference");
	fnptrs->pfn_vkCmdSetCullMode = (PFN_vkCmdSetCullMode)pfn_load_dev_fn(device, "vkCmdSetCullMode");
	fnptrs->pfn_vkCreateSampler = (PFN_vkCreateSampler)pfn_load_dev_fn(device, "vkCreateSampler");
	fnptrs->pfn_vkCmdResetQueryPool = (PFN_vkCmdResetQueryPool)pfn_load_dev_fn(device, "vkCmdResetQueryPool");
	fnptrs->pfn_vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate)pfn_load_dev_fn(device, "vkDestroyDescriptorUpdateTemplate");
	fnptrs->pfn_vkCmdSetBlendConstants = (PFN_vkCmdSetBlendConstants)pfn_load_dev_fn(device, "vkCmdSetBlendConstants");
	fnptrs->pfn_vkGetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements)pfn_load_dev_fn(device, "vkGetImageSparseMemoryRequirements");
	fnptrs->pfn_vkCmdResetEvent2 = (PFN_vkCmdResetEvent2)pfn_load_dev_fn(device, "vkCmdResetEvent2");
	fnptrs->pfn_vkSetEvent = (PFN_vkSetEvent)pfn_load_dev_fn(device, "vkSetEvent");
	fnptrs->pfn_vkResetEvent = (PFN_vkResetEvent)pfn_load_dev_fn(device, "vkResetEvent");
	fnptrs->pfn_vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion)pfn_load_dev_fn(device, "vkCreateSamplerYcbcrConversion");
	fnptrs->pfn_vkGetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements)pfn_load_dev_fn(device, "vkGetBufferMemoryRequirements");
	fnptrs->pfn_vkCmdSetLineWidth = (PFN_vkCmdSetLineWidth)pfn_load_dev_fn(device, "vkCmdSetLineWidth");
	fnptrs->pfn_vkCmdCopyBufferToImage2 = (PFN_vkCmdCopyBufferToImage2)pfn_load_dev_fn(device, "vkCmdCopyBufferToImage2");
	fnptrs->pfn_vkResetCommandPool = (PFN_vkResetCommandPool)pfn_load_dev_fn(device, "vkResetCommandPool");
	fnptrs->pfn_vkTrimCommandPool = (PFN_vkTrimCommandPool)pfn_load_dev_fn(device, "vkTrimCommandPool");
	fnptrs->pfn_vkCmdWriteTimestamp = (PFN_vkCmdWriteTimestamp)pfn_load_dev_fn(device, "vkCmdWriteTimestamp");
	fnptrs->pfn_vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures)pfn_load_dev_fn(device, "vkGetDeviceGroupPeerMemoryFeatures");
	fnptrs->pfn_vkCreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines)pfn_load_dev_fn(device, "vkCreateGraphicsPipelines");
	fnptrs->pfn_vkDestroyImageView = (PFN_vkDestroyImageView)pfn_load_dev_fn(device, "vkDestroyImageView");
	fnptrs->pfn_vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2)pfn_load_dev_fn(device, "vkGetImageSparseMemoryRequirements2");
	fnptrs->pfn_vkCmdCopyBuffer2 = (PFN_vkCmdCopyBuffer2)pfn_load_dev_fn(device, "vkCmdCopyBuffer2");
	fnptrs->pfn_vkCmdSetScissor = (PFN_vkCmdSetScissor)pfn_load_dev_fn(device, "vkCmdSetScissor");
	fnptrs->pfn_vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate)pfn_load_dev_fn(device, "vkCreateDescriptorUpdateTemplate");
	fnptrs->pfn_vkCmdUpdateBuffer = (PFN_vkCmdUpdateBuffer)pfn_load_dev_fn(device, "vkCmdUpdateBuffer");
	fnptrs->pfn_vkCreatePipelineCache = (PFN_vkCreatePipelineCache)pfn_load_dev_fn(device, "vkCreatePipelineCache");
	fnptrs->pfn_vkBeginCommandBuffer = (PFN_vkBeginCommandBuffer)pfn_load_dev_fn(device, "vkBeginCommandBuffer");
	fnptrs->pfn_vkBindBufferMemory = (PFN_vkBindBufferMemory)pfn_load_dev_fn(device, "vkBindBufferMemory");
	fnptrs->pfn_vkCmdPipelineBarrier = (PFN_vkCmdPipelineBarrier)pfn_load_dev_fn(device, "vkCmdPipelineBarrier");
	fnptrs->pfn_vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate)pfn_load_dev_fn(device, "vkUpdateDescriptorSetWithTemplate");
	fnptrs->pfn_vkCmdNextSubpass2 = (PFN_vkCmdNextSubpass2)pfn_load_dev_fn(device, "vkCmdNextSubpass2");
	fnptrs->pfn_vkCmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer)pfn_load_dev_fn(device, "vkCmdCopyImageToBuffer");
	fnptrs->pfn_vkCmdDispatchIndirect = (PFN_vkCmdDispatchIndirect)pfn_load_dev_fn(device, "vkCmdDispatchIndirect");
	fnptrs->pfn_vkCmdEndQuery = (PFN_vkCmdEndQuery)pfn_load_dev_fn(device, "vkCmdEndQuery");
	fnptrs->pfn_vkCmdSetFrontFace = (PFN_vkCmdSetFrontFace)pfn_load_dev_fn(device, "vkCmdSetFrontFace");
	fnptrs->pfn_vkResetFences = (PFN_vkResetFences)pfn_load_dev_fn(device, "vkResetFences");
	fnptrs->pfn_vkAllocateMemory = (PFN_vkAllocateMemory)pfn_load_dev_fn(device, "vkAllocateMemory");
	fnptrs->pfn_vkSetPrivateData = (PFN_vkSetPrivateData)pfn_load_dev_fn(device, "vkSetPrivateData");
	fnptrs->pfn_vkCreateImage = (PFN_vkCreateImage)pfn_load_dev_fn(device, "vkCreateImage");
	fnptrs->pfn_vkCmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask)pfn_load_dev_fn(device, "vkCmdSetStencilCompareMask");
	fnptrs->pfn_vkQueueSubmit = (PFN_vkQueueSubmit)pfn_load_dev_fn(device, "vkQueueSubmit");
	fnptrs->pfn_vkCreateRenderPass2 = (PFN_vkCreateRenderPass2)pfn_load_dev_fn(device, "vkCreateRenderPass2");
	fnptrs->pfn_vkCreateQueryPool = (PFN_vkCreateQueryPool)pfn_load_dev_fn(device, "vkCreateQueryPool");
	fnptrs->pfn_vkDestroyBuffer = (PFN_vkDestroyBuffer)pfn_load_dev_fn(device, "vkDestroyBuffer");
	fnptrs->pfn_vkCmdSetDepthBounds = (PFN_vkCmdSetDepthBounds)pfn_load_dev_fn(device, "vkCmdSetDepthBounds");
	fnptrs->pfn_vkDestroyDevice = (PFN_vkDestroyDevice)pfn_load_dev_fn(device, "vkDestroyDevice");
	fnptrs->pfn_vkCmdBeginRendering = (PFN_vkCmdBeginRendering)pfn_load_dev_fn(device, "vkCmdBeginRendering");
	fnptrs->pfn_vkResetQueryPool = (PFN_vkResetQueryPool)pfn_load_dev_fn(device, "vkResetQueryPool");
	fnptrs->pfn_vkCmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer)pfn_load_dev_fn(device, "vkCmdBindIndexBuffer");
	fnptrs->pfn_vkMergePipelineCaches = (PFN_vkMergePipelineCaches)pfn_load_dev_fn(device, "vkMergePipelineCaches");
	fnptrs->pfn_vkFreeCommandBuffers = (PFN_vkFreeCommandBuffers)pfn_load_dev_fn(device, "vkFreeCommandBuffers");
	fnptrs->pfn_vkQueueWaitIdle = (PFN_vkQueueWaitIdle)pfn_load_dev_fn(device, "vkQueueWaitIdle");
	fnptrs->pfn_vkDestroyPipeline = (PFN_vkDestroyPipeline)pfn_load_dev_fn(device, "vkDestroyPipeline");
	fnptrs->pfn_vkCreateBufferView = (PFN_vkCreateBufferView)pfn_load_dev_fn(device, "vkCreateBufferView");
	fnptrs->pfn_vkGetQueryPoolResults = (PFN_vkGetQueryPoolResults)pfn_load_dev_fn(device, "vkGetQueryPoolResults");
	fnptrs->pfn_vkGetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)pfn_load_dev_fn(device, "vkGetDeviceMemoryOpaqueCaptureAddress");
	fnptrs->pfn_vkCmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect)pfn_load_dev_fn(device, "vkCmdDrawIndexedIndirect");
	fnptrs->pfn_vkCmdEndRenderPass = (PFN_vkCmdEndRenderPass)pfn_load_dev_fn(device, "vkCmdEndRenderPass");
	fnptrs->pfn_vkMapMemory = (PFN_vkMapMemory)pfn_load_dev_fn(device, "vkMapMemory");
	fnptrs->pfn_vkFlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges)pfn_load_dev_fn(device, "vkFlushMappedMemoryRanges");
	fnptrs->pfn_vkCmdSetViewport = (PFN_vkCmdSetViewport)pfn_load_dev_fn(device, "vkCmdSetViewport");
	fnptrs->pfn_vkUpdateDescriptorSets = (PFN_vkUpdateDescriptorSets)pfn_load_dev_fn(device, "vkUpdateDescriptorSets");
	fnptrs->pfn_vkCreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout)pfn_load_dev_fn(device, "vkCreateDescriptorSetLayout");
	fnptrs->pfn_vkCmdDrawIndirect = (PFN_vkCmdDrawIndirect)pfn_load_dev_fn(device, "vkCmdDrawIndirect");
	fnptrs->pfn_vkGetDeviceImageMemoryRequirements = (PFN_vkGetDeviceImageMemoryRequirements)pfn_load_dev_fn(device, "vkGetDeviceImageMemoryRequirements");
	fnptrs->pfn_vkCmdResolveImage2 = (PFN_vkCmdResolveImage2)pfn_load_dev_fn(device, "vkCmdResolveImage2");
	fnptrs->pfn_vkCmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage)pfn_load_dev_fn(device, "vkCmdClearDepthStencilImage");
	fnptrs->pfn_vkDestroyPipelineLayout = (PFN_vkDestroyPipelineLayout)pfn_load_dev_fn(device, "vkDestroyPipelineLayout");
	fnptrs->pfn_vkCmdNextSubpass = (PFN_vkCmdNextSubpass)pfn_load_dev_fn(device, "vkCmdNextSubpass");
	fnptrs->pfn_vkCmdSetEvent = (PFN_vkCmdSetEvent)pfn_load_dev_fn(device, "vkCmdSetEvent");
	fnptrs->pfn_vkDestroyPrivateDataSlot = (PFN_vkDestroyPrivateDataSlot)pfn_load_dev_fn(device, "vkDestroyPrivateDataSlot");
	fnptrs->pfn_vkCmdCopyImageToBuffer2 = (PFN_vkCmdCopyImageToBuffer2)pfn_load_dev_fn(device, "vkCmdCopyImageToBuffer2");
	fnptrs->pfn_vkDestroyFramebuffer = (PFN_vkDestroyFramebuffer)pfn_load_dev_fn(device, "vkDestroyFramebuffer");
	fnptrs->pfn_vkCmdDrawIndexed = (PFN_vkCmdDrawIndexed)pfn_load_dev_fn(device, "vkCmdDrawIndexed");
	fnptrs->pfn_vkDestroyCommandPool = (PFN_vkDestroyCommandPool)pfn_load_dev_fn(device, "vkDestroyCommandPool");
	fnptrs->pfn_vkCreateImageView = (PFN_vkCreateImageView)pfn_load_dev_fn(device, "vkCreateImageView");
	fnptrs->pfn_vkCmdEndRendering = (PFN_vkCmdEndRendering)pfn_load_dev_fn(device, "vkCmdEndRendering");
	fnptrs->pfn_vkGetDeviceQueue2 = (PFN_vkGetDeviceQueue2)pfn_load_dev_fn(device, "vkGetDeviceQueue2");
	fnptrs->pfn_vkDestroyShaderModule = (PFN_vkDestroyShaderModule)pfn_load_dev_fn(device, "vkDestroyShaderModule");
	fnptrs->pfn_vkCmdWaitEvents2 = (PFN_vkCmdWaitEvents2)pfn_load_dev_fn(device, "vkCmdWaitEvents2");
	fnptrs->pfn_vkCmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers)pfn_load_dev_fn(device, "vkCmdBindVertexBuffers");
	fnptrs->pfn_vkCmdBlitImage2 = (PFN_vkCmdBlitImage2)pfn_load_dev_fn(device, "vkCmdBlitImage2");
	fnptrs->pfn_vkInvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges)pfn_load_dev_fn(device, "vkInvalidateMappedMemoryRanges");
	fnptrs->pfn_vkCreateShaderModule = (PFN_vkCreateShaderModule)pfn_load_dev_fn(device, "vkCreateShaderModule");
	fnptrs->pfn_vkCmdSetStencilTestEnable = (PFN_vkCmdSetStencilTestEnable)pfn_load_dev_fn(device, "vkCmdSetStencilTestEnable");
	fnptrs->pfn_vkGetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity)pfn_load_dev_fn(device, "vkGetRenderAreaGranularity");
	fnptrs->pfn_vkDestroySampler = (PFN_vkDestroySampler)pfn_load_dev_fn(device, "vkDestroySampler");
	fnptrs->pfn_vkGetPrivateData = (PFN_vkGetPrivateData)pfn_load_dev_fn(device, "vkGetPrivateData");
	fnptrs->pfn_vkUnmapMemory = (PFN_vkUnmapMemory)pfn_load_dev_fn(device, "vkUnmapMemory");
	fnptrs->pfn_vkGetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements)pfn_load_dev_fn(device, "vkGetImageMemoryRequirements");
	fnptrs->pfn_vkCreateFramebuffer = (PFN_vkCreateFramebuffer)pfn_load_dev_fn(device, "vkCreateFramebuffer");
	fnptrs->pfn_vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion)pfn_load_dev_fn(device, "vkDestroySamplerYcbcrConversion");
	fnptrs->pfn_vkCmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2)pfn_load_dev_fn(device, "vkCmdBeginRenderPass2");
	fnptrs->pfn_vkGetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout)pfn_load_dev_fn(device, "vkGetImageSubresourceLayout");
	fnptrs->pfn_vkEndCommandBuffer = (PFN_vkEndCommandBuffer)pfn_load_dev_fn(device, "vkEndCommandBuffer");
	fnptrs->pfn_vkBindImageMemory = (PFN_vkBindImageMemory)pfn_load_dev_fn(device, "vkBindImageMemory");
	fnptrs->pfn_vkCmdSetScissorWithCount = (PFN_vkCmdSetScissorWithCount)pfn_load_dev_fn(device, "vkCmdSetScissorWithCount");
	fnptrs->pfn_vkDestroySemaphore = (PFN_vkDestroySemaphore)pfn_load_dev_fn(device, "vkDestroySemaphore");
	fnptrs->pfn_vkDestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout)pfn_load_dev_fn(device, "vkDestroyDescriptorSetLayout");
	fnptrs->pfn_vkGetDeviceQueue = (PFN_vkGetDeviceQueue)pfn_load_dev_fn(device, "vkGetDeviceQueue");
	fnptrs->pfn_vkDestroyFence = (PFN_vkDestroyFence)pfn_load_dev_fn(device, "vkDestroyFence");
	fnptrs->pfn_vkCmdFillBuffer = (PFN_vkCmdFillBuffer)pfn_load_dev_fn(device, "vkCmdFillBuffer");
	fnptrs->pfn_vkCreatePipelineLayout = (PFN_vkCreatePipelineLayout)pfn_load_dev_fn(device, "vkCreatePipelineLayout");
	fnptrs->pfn_vkCmdBeginRenderPass = (PFN_vkCmdBeginRenderPass)pfn_load_dev_fn(device, "vkCmdBeginRenderPass");
	fnptrs->pfn_vkCmdResolveImage = (PFN_vkCmdResolveImage)pfn_load_dev_fn(device, "vkCmdResolveImage");
	fnptrs->pfn_vkCmdBeginQuery = (PFN_vkCmdBeginQuery)pfn_load_dev_fn(device, "vkCmdBeginQuery");
	fnptrs->pfn_vkSignalSemaphore = (PFN_vkSignalSemaphore)pfn_load_dev_fn(device, "vkSignalSemaphore");
	fnptrs->pfn_vkCmdSetEvent2 = (PFN_vkCmdSetEvent2)pfn_load_dev_fn(device, "vkCmdSetEvent2");
	fnptrs->pfn_vkDestroyPipelineCache = (PFN_vkDestroyPipelineCache)pfn_load_dev_fn(device, "vkDestroyPipelineCache");
	fnptrs->pfn_vkCmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)pfn_load_dev_fn(device, "vkCmdDrawIndexedIndirectCount");
	fnptrs->pfn_vkCmdBindVertexBuffers2 = (PFN_vkCmdBindVertexBuffers2)pfn_load_dev_fn(device, "vkCmdBindVertexBuffers2");
	fnptrs->pfn_vkCmdPushConstants = (PFN_vkCmdPushConstants)pfn_load_dev_fn(device, "vkCmdPushConstants");
	fnptrs->pfn_vkGetEventStatus = (PFN_vkGetEventStatus)pfn_load_dev_fn(device, "vkGetEventStatus");
	fnptrs->pfn_vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2)pfn_load_dev_fn(device, "vkGetBufferMemoryRequirements2");
	fnptrs->pfn_vkResetDescriptorPool = (PFN_vkResetDescriptorPool)pfn_load_dev_fn(device, "vkResetDescriptorPool");
	fnptrs->pfn_vkCreateEvent = (PFN_vkCreateEvent)pfn_load_dev_fn(device, "vkCreateEvent");
	fnptrs->pfn_vkCmdSetDepthWriteEnable = (PFN_vkCmdSetDepthWriteEnable)pfn_load_dev_fn(device, "vkCmdSetDepthWriteEnable");
	fnptrs->pfn_vkCmdSetPrimitiveRestartEnable = (PFN_vkCmdSetPrimitiveRestartEnable)pfn_load_dev_fn(device, "vkCmdSetPrimitiveRestartEnable");
	fnptrs->pfn_vkDestroyBufferView = (PFN_vkDestroyBufferView)pfn_load_dev_fn(device, "vkDestroyBufferView");
	fnptrs->pfn_vkCmdDraw = (PFN_vkCmdDraw)pfn_load_dev_fn(device, "vkCmdDraw");
	fnptrs->pfn_vkCmdSetPrimitiveTopology = (PFN_vkCmdSetPrimitiveTopology)pfn_load_dev_fn(device, "vkCmdSetPrimitiveTopology");
	fnptrs->pfn_vkCmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2)pfn_load_dev_fn(device, "vkCmdEndRenderPass2");
	fnptrs->pfn_vkFreeDescriptorSets = (PFN_vkFreeDescriptorSets)pfn_load_dev_fn(device, "vkFreeDescriptorSets");
	fnptrs->pfn_vkCmdSetStencilOp = (PFN_vkCmdSetStencilOp)pfn_load_dev_fn(device, "vkCmdSetStencilOp");
	fnptrs->pfn_vkCreateSemaphore = (PFN_vkCreateSemaphore)pfn_load_dev_fn(device, "vkCreateSemaphore");
	fnptrs->pfn_vkCreateFence = (PFN_vkCreateFence)pfn_load_dev_fn(device, "vkCreateFence");
	fnptrs->pfn_vkGetPipelineCacheData = (PFN_vkGetPipelineCacheData)pfn_load_dev_fn(device, "vkGetPipelineCacheData");
	fnptrs->pfn_vkWaitForFences = (PFN_vkWaitForFences)pfn_load_dev_fn(device, "vkWaitForFences");
	fnptrs->pfn_vkCmdSetViewportWithCount = (PFN_vkCmdSetViewportWithCount)pfn_load_dev_fn(device, "vkCmdSetViewportWithCount");
	fnptrs->pfn_vkCmdCopyImage2 = (PFN_vkCmdCopyImage2)pfn_load_dev_fn(device, "vkCmdCopyImage2");
	fnptrs->pfn_vkBindImageMemory2 = (PFN_vkBindImageMemory2)pfn_load_dev_fn(device, "vkBindImageMemory2");
	fnptrs->pfn_vkCmdSetDepthTestEnable = (PFN_vkCmdSetDepthTestEnable)pfn_load_dev_fn(device, "vkCmdSetDepthTestEnable");
	fnptrs->pfn_vkCreateDescriptorPool = (PFN_vkCreateDescriptorPool)pfn_load_dev_fn(device, "vkCreateDescriptorPool");
	fnptrs->pfn_vkAllocateDescriptorSets = (PFN_vkAllocateDescriptorSets)pfn_load_dev_fn(device, "vkAllocateDescriptorSets");
	fnptrs->pfn_vkCmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets)pfn_load_dev_fn(device, "vkCmdBindDescriptorSets");
	fnptrs->pfn_vkGetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress)pfn_load_dev_fn(device, "vkGetBufferOpaqueCaptureAddress");
	fnptrs->pfn_vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport)pfn_load_dev_fn(device, "vkGetDescriptorSetLayoutSupport");
	fnptrs->pfn_vkCreateRenderPass = (PFN_vkCreateRenderPass)pfn_load_dev_fn(device, "vkCreateRenderPass");
	fnptrs->pfn_vkFreeMemory = (PFN_vkFreeMemory)pfn_load_dev_fn(device, "vkFreeMemory");
	fnptrs->pfn_vkCmdBlitImage = (PFN_vkCmdBlitImage)pfn_load_dev_fn(device, "vkCmdBlitImage");
	fnptrs->pfn_vkGetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment)pfn_load_dev_fn(device, "vkGetDeviceMemoryCommitment");
	fnptrs->pfn_vkResetCommandBuffer = (PFN_vkResetCommandBuffer)pfn_load_dev_fn(device, "vkResetCommandBuffer");
	fnptrs->pfn_vkDestroyQueryPool = (PFN_vkDestroyQueryPool)pfn_load_dev_fn(device, "vkDestroyQueryPool");
	fnptrs->pfn_vkGetFenceStatus = (PFN_vkGetFenceStatus)pfn_load_dev_fn(device, "vkGetFenceStatus");
	fnptrs->pfn_vkCmdResetEvent = (PFN_vkCmdResetEvent)pfn_load_dev_fn(device, "vkCmdResetEvent");
	fnptrs->pfn_vkAllocateCommandBuffers = (PFN_vkAllocateCommandBuffers)pfn_load_dev_fn(device, "vkAllocateCommandBuffers");
	fnptrs->pfn_vkCmdDispatchBase = (PFN_vkCmdDispatchBase)pfn_load_dev_fn(device, "vkCmdDispatchBase");
	fnptrs->pfn_vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask)pfn_load_dev_fn(device, "vkCmdSetDeviceMask");
	fnptrs->pfn_vkCreateComputePipelines = (PFN_vkCreateComputePipelines)pfn_load_dev_fn(device, "vkCreateComputePipelines");
	fnptrs->pfn_vkCmdSetDepthBiasEnable = (PFN_vkCmdSetDepthBiasEnable)pfn_load_dev_fn(device, "vkCmdSetDepthBiasEnable");
	fnptrs->pfn_vkCreateCommandPool = (PFN_vkCreateCommandPool)pfn_load_dev_fn(device, "vkCreateCommandPool");
	fnptrs->pfn_vkCmdPipelineBarrier2 = (PFN_vkCmdPipelineBarrier2)pfn_load_dev_fn(device, "vkCmdPipelineBarrier2");
	fnptrs->pfn_vkCmdSetDepthBoundsTestEnable = (PFN_vkCmdSetDepthBoundsTestEnable)pfn_load_dev_fn(device, "vkCmdSetDepthBoundsTestEnable");
	fnptrs->pfn_vkCmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask)pfn_load_dev_fn(device, "vkCmdSetStencilWriteMask");
	fnptrs->pfn_vkGetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue)pfn_load_dev_fn(device, "vkGetSemaphoreCounterValue");
	fnptrs->pfn_vkCmdWriteTimestamp2 = (PFN_vkCmdWriteTimestamp2)pfn_load_dev_fn(device, "vkCmdWriteTimestamp2");
#ifdef VK_AMD_shader_info
	fnptrs->pfn_vkGetShaderInfoAMD = (PFN_vkGetShaderInfoAMD)pfn_load_dev_fn(device, "vkGetShaderInfoAMD");
#endif
#ifdef VK_AMD_buffer_marker
	fnptrs->pfn_vkCmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD)pfn_load_dev_fn(device, "vkCmdWriteBufferMarkerAMD");
#endif
#ifdef VK_NV_coverage_reduction_mode
#endif
#ifdef VK_KHR_external_fence_fd
	fnptrs->pfn_vkImportFenceFdKHR = (PFN_vkImportFenceFdKHR)pfn_load_dev_fn(device, "vkImportFenceFdKHR");
	fnptrs->pfn_vkGetFenceFdKHR = (PFN_vkGetFenceFdKHR)pfn_load_dev_fn(device, "vkGetFenceFdKHR");
#endif
#ifdef VK_EXT_debug_marker
	fnptrs->pfn_vkDebugMarkerSetObjectTagEXT = (PFN_vkDebugMarkerSetObjectTagEXT)pfn_load_dev_fn(device, "vkDebugMarkerSetObjectTagEXT");
	fnptrs->pfn_vkDebugMarkerSetObjectNameEXT = (PFN_vkDebugMarkerSetObjectNameEXT)pfn_load_dev_fn(device, "vkDebugMarkerSetObjectNameEXT");
	fnptrs->pfn_vkCmdDebugMarkerBeginEXT = (PFN_vkCmdDebugMarkerBeginEXT)pfn_load_dev_fn(device, "vkCmdDebugMarkerBeginEXT");
	fnptrs->pfn_vkCmdDebugMarkerEndEXT = (PFN_vkCmdDebugMarkerEndEXT)pfn_load_dev_fn(device, "vkCmdDebugMarkerEndEXT");
	fnptrs->pfn_vkCmdDebugMarkerInsertEXT = (PFN_vkCmdDebugMarkerInsertEXT)pfn_load_dev_fn(device, "vkCmdDebugMarkerInsertEXT");
#endif
#ifdef VK_EXT_acquire_xlib_display
#endif
#ifdef VK_KHR_shared_presentable_image
	fnptrs->pfn_vkGetSwapchainStatusKHR = (PFN_vkGetSwapchainStatusKHR)pfn_load_dev_fn(device, "vkGetSwapchainStatusKHR");
#endif
#ifdef VK_NV_shading_rate_image
	fnptrs->pfn_vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)pfn_load_dev_fn(device, "vkCmdBindShadingRateImageNV");
	fnptrs->pfn_vkCmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV)pfn_load_dev_fn(device, "vkCmdSetViewportShadingRatePaletteNV");
	fnptrs->pfn_vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)pfn_load_dev_fn(device, "vkCmdSetCoarseSampleOrderNV");
#endif
#ifdef VK_NV_cooperative_matrix
#endif
#ifdef VK_INTEL_performance_query
	fnptrs->pfn_vkInitializePerformanceApiINTEL = (PFN_vkInitializePerformanceApiINTEL)pfn_load_dev_fn(device, "vkInitializePerformanceApiINTEL");
	fnptrs->pfn_vkUninitializePerformanceApiINTEL = (PFN_vkUninitializePerformanceApiINTEL)pfn_load_dev_fn(device, "vkUninitializePerformanceApiINTEL");
	fnptrs->pfn_vkCmdSetPerformanceMarkerINTEL = (PFN_vkCmdSetPerformanceMarkerINTEL)pfn_load_dev_fn(device, "vkCmdSetPerformanceMarkerINTEL");
	fnptrs->pfn_vkCmdSetPerformanceStreamMarkerINTEL = (PFN_vkCmdSetPerformanceStreamMarkerINTEL)pfn_load_dev_fn(device, "vkCmdSetPerformanceStreamMarkerINTEL");
	fnptrs->pfn_vkCmdSetPerformanceOverrideINTEL = (PFN_vkCmdSetPerformanceOverrideINTEL)pfn_load_dev_fn(device, "vkCmdSetPerformanceOverrideINTEL");
	fnptrs->pfn_vkAcquirePerformanceConfigurationINTEL = (PFN_vkAcquirePerformanceConfigurationINTEL)pfn_load_dev_fn(device, "vkAcquirePerformanceConfigurationINTEL");
	fnptrs->pfn_vkReleasePerformanceConfigurationINTEL = (PFN_vkReleasePerformanceConfigurationINTEL)pfn_load_dev_fn(device, "vkReleasePerformanceConfigurationINTEL");
	fnptrs->pfn_vkQueueSetPerformanceConfigurationINTEL = (PFN_vkQueueSetPerformanceConfigurationINTEL)pfn_load_dev_fn(device, "vkQueueSetPerformanceConfigurationINTEL");
	fnptrs->pfn_vkGetPerformanceParameterINTEL = (PFN_vkGetPerformanceParameterINTEL)pfn_load_dev_fn(device, "vkGetPerformanceParameterINTEL");
#endif
#ifdef VK_ANDROID_external_memory_android_hardware_buffer
	fnptrs->pfn_vkGetAndroidHardwareBufferPropertiesANDROID = (PFN_vkGetAndroidHardwareBufferPropertiesANDROID)pfn_load_dev_fn(device, "vkGetAndroidHardwareBufferPropertiesANDROID");
	fnptrs->pfn_vkGetMemoryAndroidHardwareBufferANDROID = (PFN_vkGetMemoryAndroidHardwareBufferANDROID)pfn_load_dev_fn(device, "vkGetMemoryAndroidHardwareBufferANDROID");
#endif
#ifdef VK_EXT_direct_mode_display
#endif
#ifdef VK_GGP_stream_descriptor_surface
#endif
#ifdef VK_KHR_win32_surface
#endif
#ifdef VK_KHR_android_surface
#endif
#ifdef VK_KHR_wayland_surface
#endif
#ifdef VK_NV_scissor_exclusive
	fnptrs->pfn_vkCmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)pfn_load_dev_fn(device, "vkCmdSetExclusiveScissorNV");
#endif
#ifdef VK_KHR_pipeline_executable_properties
	fnptrs->pfn_vkGetPipelineExecutablePropertiesKHR = (PFN_vkGetPipelineExecutablePropertiesKHR)pfn_load_dev_fn(device, "vkGetPipelineExecutablePropertiesKHR");
	fnptrs->pfn_vkGetPipelineExecutableStatisticsKHR = (PFN_vkGetPipelineExecutableStatisticsKHR)pfn_load_dev_fn(device, "vkGetPipelineExecutableStatisticsKHR");
	fnptrs->pfn_vkGetPipelineExecutableInternalRepresentationsKHR = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR)pfn_load_dev_fn(device, "vkGetPipelineExecutableInternalRepresentationsKHR");
#endif
#ifdef VK_KHR_video_encode_queue
	fnptrs->pfn_vkCmdEncodeVideoKHR = (PFN_vkCmdEncodeVideoKHR)pfn_load_dev_fn(device, "vkCmdEncodeVideoKHR");
#endif
#ifdef VK_EXT_display_control
	fnptrs->pfn_vkDisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT)pfn_load_dev_fn(device, "vkDisplayPowerControlEXT");
	fnptrs->pfn_vkRegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT)pfn_load_dev_fn(device, "vkRegisterDeviceEventEXT");
	fnptrs->pfn_vkRegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT)pfn_load_dev_fn(device, "vkRegisterDisplayEventEXT");
	fnptrs->pfn_vkGetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT)pfn_load_dev_fn(device, "vkGetSwapchainCounterEXT");
#endif
#ifdef VK_FUCHSIA_external_memory
	fnptrs->pfn_vkGetMemoryZirconHandleFUCHSIA = (PFN_vkGetMemoryZirconHandleFUCHSIA)pfn_load_dev_fn(device, "vkGetMemoryZirconHandleFUCHSIA");
	fnptrs->pfn_vkGetMemoryZirconHandlePropertiesFUCHSIA = (PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA)pfn_load_dev_fn(device, "vkGetMemoryZirconHandlePropertiesFUCHSIA");
#endif
#ifdef VK_HUAWEI_subpass_shading
	fnptrs->pfn_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = (PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI)pfn_load_dev_fn(device, "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI");
	fnptrs->pfn_vkCmdSubpassShadingHUAWEI = (PFN_vkCmdSubpassShadingHUAWEI)pfn_load_dev_fn(device, "vkCmdSubpassShadingHUAWEI");
#endif
#ifdef VK_EXT_conditional_rendering
	fnptrs->pfn_vkCmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT)pfn_load_dev_fn(device, "vkCmdBeginConditionalRenderingEXT");
	fnptrs->pfn_vkCmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT)pfn_load_dev_fn(device, "vkCmdEndConditionalRenderingEXT");
#endif
#ifdef VK_NV_clip_space_w_scaling
	fnptrs->pfn_vkCmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)pfn_load_dev_fn(device, "vkCmdSetViewportWScalingNV");
#endif
#ifdef VK_NV_fragment_shading_rate_enums
	fnptrs->pfn_vkCmdSetFragmentShadingRateEnumNV = (PFN_vkCmdSetFragmentShadingRateEnumNV)pfn_load_dev_fn(device, "vkCmdSetFragmentShadingRateEnumNV");
#endif
#ifdef VK_NV_acquire_winrt_display
#endif
#ifdef VK_AMD_display_native_hdr
	fnptrs->pfn_vkSetLocalDimmingAMD = (PFN_vkSetLocalDimmingAMD)pfn_load_dev_fn(device, "vkSetLocalDimmingAMD");
#endif
#ifdef VK_NV_external_memory_capabilities
#endif
#ifdef VK_KHR_fragment_shading_rate
	fnptrs->pfn_vkCmdSetFragmentShadingRateKHR = (PFN_vkCmdSetFragmentShadingRateKHR)pfn_load_dev_fn(device, "vkCmdSetFragmentShadingRateKHR");
#endif
#ifdef VK_KHR_display
#endif
#ifdef VK_NVX_image_view_handle
	fnptrs->pfn_vkGetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX)pfn_load_dev_fn(device, "vkGetImageViewHandleNVX");
	fnptrs->pfn_vkGetImageViewAddressNVX = (PFN_vkGetImageViewAddressNVX)pfn_load_dev_fn(device, "vkGetImageViewAddressNVX");
#endif
#ifdef VK_KHR_external_fence_win32
	fnptrs->pfn_vkImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR)pfn_load_dev_fn(device, "vkImportFenceWin32HandleKHR");
	fnptrs->pfn_vkGetFenceWin32HandleKHR = (PFN_vkGetFenceWin32HandleKHR)pfn_load_dev_fn(device, "vkGetFenceWin32HandleKHR");
#endif
#ifdef VK_MVK_ios_surface
#endif
#ifdef VK_FUCHSIA_external_semaphore
	fnptrs->pfn_vkImportSemaphoreZirconHandleFUCHSIA = (PFN_vkImportSemaphoreZirconHandleFUCHSIA)pfn_load_dev_fn(device, "vkImportSemaphoreZirconHandleFUCHSIA");
	fnptrs->pfn_vkGetSemaphoreZirconHandleFUCHSIA = (PFN_vkGetSemaphoreZirconHandleFUCHSIA)pfn_load_dev_fn(device, "vkGetSemaphoreZirconHandleFUCHSIA");
#endif
#ifdef VK_HUAWEI_invocation_mask
	fnptrs->pfn_vkCmdBindInvocationMaskHUAWEI = (PFN_vkCmdBindInvocationMaskHUAWEI)pfn_load_dev_fn(device, "vkCmdBindInvocationMaskHUAWEI");
#endif
#ifdef VK_KHR_push_descriptor
	fnptrs->pfn_vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)pfn_load_dev_fn(device, "vkCmdPushDescriptorSetKHR");
	fnptrs->pfn_vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)pfn_load_dev_fn(device, "vkCmdPushDescriptorSetWithTemplateKHR");
#endif
#ifdef VK_EXT_hdr_metadata
	fnptrs->pfn_vkSetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT)pfn_load_dev_fn(device, "vkSetHdrMetadataEXT");
#endif
#ifdef VK_KHR_performance_query
	fnptrs->pfn_vkAcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR)pfn_load_dev_fn(device, "vkAcquireProfilingLockKHR");
	fnptrs->pfn_vkReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR)pfn_load_dev_fn(device, "vkReleaseProfilingLockKHR");
#endif
#ifdef VK_KHR_xlib_surface
#endif
#ifdef VK_EXT_multi_draw
	fnptrs->pfn_vkCmdDrawMultiEXT = (PFN_vkCmdDrawMultiEXT)pfn_load_dev_fn(device, "vkCmdDrawMultiEXT");
	fnptrs->pfn_vkCmdDrawMultiIndexedEXT = (PFN_vkCmdDrawMultiIndexedEXT)pfn_load_dev_fn(device, "vkCmdDrawMultiIndexedEXT");
#endif
#ifdef VK_NN_vi_surface
#endif
#ifdef VK_KHR_xcb_surface
#endif
#ifdef VK_EXT_sample_locations
	fnptrs->pfn_vkCmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)pfn_load_dev_fn(device, "vkCmdSetSampleLocationsEXT");
#endif
#ifdef VK_KHR_external_semaphore_fd
	fnptrs->pfn_vkImportSemaphoreFdKHR = (PFN_vkImportSemaphoreFdKHR)pfn_load_dev_fn(device, "vkImportSemaphoreFdKHR");
	fnptrs->pfn_vkGetSemaphoreFdKHR = (PFN_vkGetSemaphoreFdKHR)pfn_load_dev_fn(device, "vkGetSemaphoreFdKHR");
#endif
#ifdef VK_KHR_synchronization2
	fnptrs->pfn_vkCmdWriteBufferMarker2AMD = (PFN_vkCmdWriteBufferMarker2AMD)pfn_load_dev_fn(device, "vkCmdWriteBufferMarker2AMD");
	fnptrs->pfn_vkGetQueueCheckpointData2NV = (PFN_vkGetQueueCheckpointData2NV)pfn_load_dev_fn(device, "vkGetQueueCheckpointData2NV");
#endif
#ifdef VK_EXT_extended_dynamic_state2
	fnptrs->pfn_vkCmdSetPatchControlPointsEXT = (PFN_vkCmdSetPatchControlPointsEXT)pfn_load_dev_fn(device, "vkCmdSetPatchControlPointsEXT");
	fnptrs->pfn_vkCmdSetLogicOpEXT = (PFN_vkCmdSetLogicOpEXT)pfn_load_dev_fn(device, "vkCmdSetLogicOpEXT");
#endif
#ifdef VK_EXT_calibrated_timestamps
	fnptrs->pfn_vkGetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)pfn_load_dev_fn(device, "vkGetCalibratedTimestampsEXT");
#endif
#ifdef VK_EXT_metal_surface
#endif
#ifdef VK_EXT_acquire_drm_display
#endif
#ifdef VK_EXT_external_memory_host
	fnptrs->pfn_vkGetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT)pfn_load_dev_fn(device, "vkGetMemoryHostPointerPropertiesEXT");
#endif
#ifdef VK_NVX_binary_import
	fnptrs->pfn_vkCreateCuModuleNVX = (PFN_vkCreateCuModuleNVX)pfn_load_dev_fn(device, "vkCreateCuModuleNVX");
	fnptrs->pfn_vkCreateCuFunctionNVX = (PFN_vkCreateCuFunctionNVX)pfn_load_dev_fn(device, "vkCreateCuFunctionNVX");
	fnptrs->pfn_vkDestroyCuModuleNVX = (PFN_vkDestroyCuModuleNVX)pfn_load_dev_fn(device, "vkDestroyCuModuleNVX");
	fnptrs->pfn_vkDestroyCuFunctionNVX = (PFN_vkDestroyCuFunctionNVX)pfn_load_dev_fn(device, "vkDestroyCuFunctionNVX");
	fnptrs->pfn_vkCmdCuLaunchKernelNVX = (PFN_vkCmdCuLaunchKernelNVX)pfn_load_dev_fn(device, "vkCmdCuLaunchKernelNVX");
#endif
#ifdef VK_EXT_line_rasterization
	fnptrs->pfn_vkCmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)pfn_load_dev_fn(device, "vkCmdSetLineStippleEXT");
#endif
#ifdef VK_KHR_external_memory_win32
	fnptrs->pfn_vkGetMemoryWin32HandleKHR = (PFN_vkGetMemoryWin32HandleKHR)pfn_load_dev_fn(device, "vkGetMemoryWin32HandleKHR");
	fnptrs->pfn_vkGetMemoryWin32HandlePropertiesKHR = (PFN_vkGetMemoryWin32HandlePropertiesKHR)pfn_load_dev_fn(device, "vkGetMemoryWin32HandlePropertiesKHR");
#endif
#ifdef VK_EXT_validation_cache
	fnptrs->pfn_vkCreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT)pfn_load_dev_fn(device, "vkCreateValidationCacheEXT");
	fnptrs->pfn_vkDestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT)pfn_load_dev_fn(device, "vkDestroyValidationCacheEXT");
	fnptrs->pfn_vkMergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT)pfn_load_dev_fn(device, "vkMergeValidationCachesEXT");
	fnptrs->pfn_vkGetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT)pfn_load_dev_fn(device, "vkGetValidationCacheDataEXT");
#endif
#ifdef VK_QNX_screen_surface
#endif
#ifdef VK_KHR_acceleration_structure
	fnptrs->pfn_vkCreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR)pfn_load_dev_fn(device, "vkCreateAccelerationStructureKHR");
	fnptrs->pfn_vkDestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR)pfn_load_dev_fn(device, "vkDestroyAccelerationStructureKHR");
	fnptrs->pfn_vkCmdBuildAccelerationStructuresKHR = (PFN_vkCmdBuildAccelerationStructuresKHR)pfn_load_dev_fn(device, "vkCmdBuildAccelerationStructuresKHR");
	fnptrs->pfn_vkCmdBuildAccelerationStructuresIndirectKHR = (PFN_vkCmdBuildAccelerationStructuresIndirectKHR)pfn_load_dev_fn(device, "vkCmdBuildAccelerationStructuresIndirectKHR");
	fnptrs->pfn_vkBuildAccelerationStructuresKHR = (PFN_vkBuildAccelerationStructuresKHR)pfn_load_dev_fn(device, "vkBuildAccelerationStructuresKHR");
	fnptrs->pfn_vkCopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR)pfn_load_dev_fn(device, "vkCopyAccelerationStructureKHR");
	fnptrs->pfn_vkCopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR)pfn_load_dev_fn(device, "vkCopyAccelerationStructureToMemoryKHR");
	fnptrs->pfn_vkCopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR)pfn_load_dev_fn(device, "vkCopyMemoryToAccelerationStructureKHR");
	fnptrs->pfn_vkWriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR)pfn_load_dev_fn(device, "vkWriteAccelerationStructuresPropertiesKHR");
	fnptrs->pfn_vkCmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR)pfn_load_dev_fn(device, "vkCmdCopyAccelerationStructureKHR");
	fnptrs->pfn_vkCmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)pfn_load_dev_fn(device, "vkCmdCopyAccelerationStructureToMemoryKHR");
	fnptrs->pfn_vkCmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)pfn_load_dev_fn(device, "vkCmdCopyMemoryToAccelerationStructureKHR");
	fnptrs->pfn_vkGetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR)pfn_load_dev_fn(device, "vkGetAccelerationStructureDeviceAddressKHR");
	fnptrs->pfn_vkCmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)pfn_load_dev_fn(device, "vkCmdWriteAccelerationStructuresPropertiesKHR");
	fnptrs->pfn_vkGetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)pfn_load_dev_fn(device, "vkGetDeviceAccelerationStructureCompatibilityKHR");
	fnptrs->pfn_vkGetAccelerationStructureBuildSizesKHR = (PFN_vkGetAccelerationStructureBuildSizesKHR)pfn_load_dev_fn(device, "vkGetAccelerationStructureBuildSizesKHR");
#endif
#ifdef VK_KHR_surface
#endif
#ifdef VK_KHR_swapchain
	fnptrs->pfn_vkCreateSwapchainKHR = (PFN_vkCreateSwapchainKHR)pfn_load_dev_fn(device, "vkCreateSwapchainKHR");
	fnptrs->pfn_vkDestroySwapchainKHR = (PFN_vkDestroySwapchainKHR)pfn_load_dev_fn(device, "vkDestroySwapchainKHR");
	fnptrs->pfn_vkGetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR)pfn_load_dev_fn(device, "vkGetSwapchainImagesKHR");
	fnptrs->pfn_vkAcquireNextImageKHR = (PFN_vkAcquireNextImageKHR)pfn_load_dev_fn(device, "vkAcquireNextImageKHR");
	fnptrs->pfn_vkQueuePresentKHR = (PFN_vkQueuePresentKHR)pfn_load_dev_fn(device, "vkQueuePresentKHR");
	fnptrs->pfn_vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)pfn_load_dev_fn(device, "vkGetDeviceGroupPresentCapabilitiesKHR");
	fnptrs->pfn_vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)pfn_load_dev_fn(device, "vkGetDeviceGroupSurfacePresentModesKHR");
	fnptrs->pfn_vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR)pfn_load_dev_fn(device, "vkAcquireNextImage2KHR");
#endif
#ifdef VK_KHR_get_display_properties2
#endif
#ifdef VK_NV_ray_tracing
	fnptrs->pfn_vkCreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV)pfn_load_dev_fn(device, "vkCreateAccelerationStructureNV");
	fnptrs->pfn_vkDestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV)pfn_load_dev_fn(device, "vkDestroyAccelerationStructureNV");
	fnptrs->pfn_vkGetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV)pfn_load_dev_fn(device, "vkGetAccelerationStructureMemoryRequirementsNV");
	fnptrs->pfn_vkBindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV)pfn_load_dev_fn(device, "vkBindAccelerationStructureMemoryNV");
	fnptrs->pfn_vkCmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV)pfn_load_dev_fn(device, "vkCmdBuildAccelerationStructureNV");
	fnptrs->pfn_vkCmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV)pfn_load_dev_fn(device, "vkCmdCopyAccelerationStructureNV");
	fnptrs->pfn_vkCmdTraceRaysNV = (PFN_vkCmdTraceRaysNV)pfn_load_dev_fn(device, "vkCmdTraceRaysNV");
	fnptrs->pfn_vkCreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV)pfn_load_dev_fn(device, "vkCreateRayTracingPipelinesNV");
	fnptrs->pfn_vkGetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV)pfn_load_dev_fn(device, "vkGetAccelerationStructureHandleNV");
	fnptrs->pfn_vkCmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)pfn_load_dev_fn(device, "vkCmdWriteAccelerationStructuresPropertiesNV");
	fnptrs->pfn_vkCompileDeferredNV = (PFN_vkCompileDeferredNV)pfn_load_dev_fn(device, "vkCompileDeferredNV");
#endif
#ifdef VK_EXT_discard_rectangles
	fnptrs->pfn_vkCmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)pfn_load_dev_fn(device, "vkCmdSetDiscardRectangleEXT");
#endif
#ifdef VK_EXT_color_write_enable
	fnptrs->pfn_vkCmdSetColorWriteEnableEXT = (PFN_vkCmdSetColorWriteEnableEXT)pfn_load_dev_fn(device, "vkCmdSetColorWriteEnableEXT");
#endif
#ifdef VK_NV_external_memory_win32
	fnptrs->pfn_vkGetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV)pfn_load_dev_fn(device, "vkGetMemoryWin32HandleNV");
#endif
#ifdef VK_KHR_deferred_host_operations
	fnptrs->pfn_vkCreateDeferredOperationKHR = (PFN_vkCreateDeferredOperationKHR)pfn_load_dev_fn(device, "vkCreateDeferredOperationKHR");
	fnptrs->pfn_vkDestroyDeferredOperationKHR = (PFN_vkDestroyDeferredOperationKHR)pfn_load_dev_fn(device, "vkDestroyDeferredOperationKHR");
	fnptrs->pfn_vkGetDeferredOperationMaxConcurrencyKHR = (PFN_vkGetDeferredOperationMaxConcurrencyKHR)pfn_load_dev_fn(device, "vkGetDeferredOperationMaxConcurrencyKHR");
	fnptrs->pfn_vkGetDeferredOperationResultKHR = (PFN_vkGetDeferredOperationResultKHR)pfn_load_dev_fn(device, "vkGetDeferredOperationResultKHR");
	fnptrs->pfn_vkDeferredOperationJoinKHR = (PFN_vkDeferredOperationJoinKHR)pfn_load_dev_fn(device, "vkDeferredOperationJoinKHR");
#endif
#ifdef VK_NV_external_memory_rdma
	fnptrs->pfn_vkGetMemoryRemoteAddressNV = (PFN_vkGetMemoryRemoteAddressNV)pfn_load_dev_fn(device, "vkGetMemoryRemoteAddressNV");
#endif
#ifdef VK_NV_device_generated_commands
	fnptrs->pfn_vkGetGeneratedCommandsMemoryRequirementsNV = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV)pfn_load_dev_fn(device, "vkGetGeneratedCommandsMemoryRequirementsNV");
	fnptrs->pfn_vkCmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV)pfn_load_dev_fn(device, "vkCmdPreprocessGeneratedCommandsNV");
	fnptrs->pfn_vkCmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV)pfn_load_dev_fn(device, "vkCmdExecuteGeneratedCommandsNV");
	fnptrs->pfn_vkCmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV)pfn_load_dev_fn(device, "vkCmdBindPipelineShaderGroupNV");
	fnptrs->pfn_vkCreateIndirectCommandsLayoutNV = (PFN_vkCreateIndirectCommandsLayoutNV)pfn_load_dev_fn(device, "vkCreateIndirectCommandsLayoutNV");
	fnptrs->pfn_vkDestroyIndirectCommandsLayoutNV = (PFN_vkDestroyIndirectCommandsLayoutNV)pfn_load_dev_fn(device, "vkDestroyIndirectCommandsLayoutNV");
#endif
#ifdef VK_EXT_debug_report
#endif
#ifdef VK_KHR_display_swapchain
	fnptrs->pfn_vkCreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR)pfn_load_dev_fn(device, "vkCreateSharedSwapchainsKHR");
#endif
#ifdef VK_EXT_debug_utils
	fnptrs->pfn_vkSetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT)pfn_load_dev_fn(device, "vkSetDebugUtilsObjectNameEXT");
	fnptrs->pfn_vkSetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT)pfn_load_dev_fn(device, "vkSetDebugUtilsObjectTagEXT");
	fnptrs->pfn_vkQueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT)pfn_load_dev_fn(device, "vkQueueBeginDebugUtilsLabelEXT");
	fnptrs->pfn_vkQueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)pfn_load_dev_fn(device, "vkQueueEndDebugUtilsLabelEXT");
	fnptrs->pfn_vkQueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT)pfn_load_dev_fn(device, "vkQueueInsertDebugUtilsLabelEXT");
	fnptrs->pfn_vkCmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)pfn_load_dev_fn(device, "vkCmdBeginDebugUtilsLabelEXT");
	fnptrs->pfn_vkCmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT)pfn_load_dev_fn(device, "vkCmdEndDebugUtilsLabelEXT");
	fnptrs->pfn_vkCmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT)pfn_load_dev_fn(device, "vkCmdInsertDebugUtilsLabelEXT");
#endif
#ifdef VK_KHR_video_decode_queue
	fnptrs->pfn_vkCmdDecodeVideoKHR = (PFN_vkCmdDecodeVideoKHR)pfn_load_dev_fn(device, "vkCmdDecodeVideoKHR");
#endif
#ifdef VK_NV_device_diagnostic_checkpoints
	fnptrs->pfn_vkCmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV)pfn_load_dev_fn(device, "vkCmdSetCheckpointNV");
	fnptrs->pfn_vkGetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)pfn_load_dev_fn(device, "vkGetQueueCheckpointDataNV");
#endif
#ifdef VK_FUCHSIA_imagepipe_surface
#endif
#ifdef VK_EXT_full_screen_exclusive
	fnptrs->pfn_vkAcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT)pfn_load_dev_fn(device, "vkAcquireFullScreenExclusiveModeEXT");
	fnptrs->pfn_vkReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT)pfn_load_dev_fn(device, "vkReleaseFullScreenExclusiveModeEXT");
	fnptrs->pfn_vkGetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)pfn_load_dev_fn(device, "vkGetDeviceGroupSurfacePresentModes2EXT");
#endif
#ifdef VK_ANDROID_native_buffer
	fnptrs->pfn_vkGetSwapchainGrallocUsageANDROID = (PFN_vkGetSwapchainGrallocUsageANDROID)pfn_load_dev_fn(device, "vkGetSwapchainGrallocUsageANDROID");
	fnptrs->pfn_vkAcquireImageANDROID = (PFN_vkAcquireImageANDROID)pfn_load_dev_fn(device, "vkAcquireImageANDROID");
	fnptrs->pfn_vkQueueSignalReleaseImageANDROID = (PFN_vkQueueSignalReleaseImageANDROID)pfn_load_dev_fn(device, "vkQueueSignalReleaseImageANDROID");
	fnptrs->pfn_vkGetSwapchainGrallocUsage2ANDROID = (PFN_vkGetSwapchainGrallocUsage2ANDROID)pfn_load_dev_fn(device, "vkGetSwapchainGrallocUsage2ANDROID");
#endif
#ifdef VK_EXT_pageable_device_local_memory
	fnptrs->pfn_vkSetDeviceMemoryPriorityEXT = (PFN_vkSetDeviceMemoryPriorityEXT)pfn_load_dev_fn(device, "vkSetDeviceMemoryPriorityEXT");
#endif
#ifdef VK_MVK_macos_surface
#endif
#ifdef VK_KHR_external_semaphore_win32
	fnptrs->pfn_vkImportSemaphoreWin32HandleKHR = (PFN_vkImportSemaphoreWin32HandleKHR)pfn_load_dev_fn(device, "vkImportSemaphoreWin32HandleKHR");
	fnptrs->pfn_vkGetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR)pfn_load_dev_fn(device, "vkGetSemaphoreWin32HandleKHR");
#endif
#ifdef VK_NV_mesh_shader
	fnptrs->pfn_vkCmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV)pfn_load_dev_fn(device, "vkCmdDrawMeshTasksNV");
	fnptrs->pfn_vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)pfn_load_dev_fn(device, "vkCmdDrawMeshTasksIndirectNV");
	fnptrs->pfn_vkCmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV)pfn_load_dev_fn(device, "vkCmdDrawMeshTasksIndirectCountNV");
#endif
#ifdef VK_KHR_ray_tracing_pipeline
	fnptrs->pfn_vkCmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR)pfn_load_dev_fn(device, "vkCmdTraceRaysKHR");
	fnptrs->pfn_vkCreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR)pfn_load_dev_fn(device, "vkCreateRayTracingPipelinesKHR");
	fnptrs->pfn_vkGetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR)pfn_load_dev_fn(device, "vkGetRayTracingShaderGroupHandlesKHR");
	fnptrs->pfn_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)pfn_load_dev_fn(device, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
	fnptrs->pfn_vkCmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR)pfn_load_dev_fn(device, "vkCmdTraceRaysIndirectKHR");
	fnptrs->pfn_vkGetRayTracingShaderGroupStackSizeKHR = (PFN_vkGetRayTracingShaderGroupStackSizeKHR)pfn_load_dev_fn(device, "vkGetRayTracingShaderGroupStackSizeKHR");
	fnptrs->pfn_vkCmdSetRayTracingPipelineStackSizeKHR = (PFN_vkCmdSetRayTracingPipelineStackSizeKHR)pfn_load_dev_fn(device, "vkCmdSetRayTracingPipelineStackSizeKHR");
#endif
#ifdef VK_KHR_external_memory_fd
	fnptrs->pfn_vkGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR)pfn_load_dev_fn(device, "vkGetMemoryFdKHR");
	fnptrs->pfn_vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)pfn_load_dev_fn(device, "vkGetMemoryFdPropertiesKHR");
#endif
#ifdef VK_EXT_image_drm_format_modifier
	fnptrs->pfn_vkGetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT)pfn_load_dev_fn(device, "vkGetImageDrmFormatModifierPropertiesEXT");
#endif
#ifdef VK_FUCHSIA_buffer_collection
	fnptrs->pfn_vkCreateBufferCollectionFUCHSIA = (PFN_vkCreateBufferCollectionFUCHSIA)pfn_load_dev_fn(device, "vkCreateBufferCollectionFUCHSIA");
	fnptrs->pfn_vkSetBufferCollectionImageConstraintsFUCHSIA = (PFN_vkSetBufferCollectionImageConstraintsFUCHSIA)pfn_load_dev_fn(device, "vkSetBufferCollectionImageConstraintsFUCHSIA");
	fnptrs->pfn_vkSetBufferCollectionBufferConstraintsFUCHSIA = (PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA)pfn_load_dev_fn(device, "vkSetBufferCollectionBufferConstraintsFUCHSIA");
	fnptrs->pfn_vkDestroyBufferCollectionFUCHSIA = (PFN_vkDestroyBufferCollectionFUCHSIA)pfn_load_dev_fn(device, "vkDestroyBufferCollectionFUCHSIA");
	fnptrs->pfn_vkGetBufferCollectionPropertiesFUCHSIA = (PFN_vkGetBufferCollectionPropertiesFUCHSIA)pfn_load_dev_fn(device, "vkGetBufferCollectionPropertiesFUCHSIA");
#endif
#ifdef VK_EXT_transform_feedback
	fnptrs->pfn_vkCmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT)pfn_load_dev_fn(device, "vkCmdBindTransformFeedbackBuffersEXT");
	fnptrs->pfn_vkCmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT)pfn_load_dev_fn(device, "vkCmdBeginTransformFeedbackEXT");
	fnptrs->pfn_vkCmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)pfn_load_dev_fn(device, "vkCmdEndTransformFeedbackEXT");
	fnptrs->pfn_vkCmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT)pfn_load_dev_fn(device, "vkCmdBeginQueryIndexedEXT");
	fnptrs->pfn_vkCmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT)pfn_load_dev_fn(device, "vkCmdEndQueryIndexedEXT");
	fnptrs->pfn_vkCmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT)pfn_load_dev_fn(device, "vkCmdDrawIndirectByteCountEXT");
#endif
#ifdef VK_KHR_video_queue
	fnptrs->pfn_vkCreateVideoSessionKHR = (PFN_vkCreateVideoSessionKHR)pfn_load_dev_fn(device, "vkCreateVideoSessionKHR");
	fnptrs->pfn_vkDestroyVideoSessionKHR = (PFN_vkDestroyVideoSessionKHR)pfn_load_dev_fn(device, "vkDestroyVideoSessionKHR");
	fnptrs->pfn_vkGetVideoSessionMemoryRequirementsKHR = (PFN_vkGetVideoSessionMemoryRequirementsKHR)pfn_load_dev_fn(device, "vkGetVideoSessionMemoryRequirementsKHR");
	fnptrs->pfn_vkBindVideoSessionMemoryKHR = (PFN_vkBindVideoSessionMemoryKHR)pfn_load_dev_fn(device, "vkBindVideoSessionMemoryKHR");
	fnptrs->pfn_vkCreateVideoSessionParametersKHR = (PFN_vkCreateVideoSessionParametersKHR)pfn_load_dev_fn(device, "vkCreateVideoSessionParametersKHR");
	fnptrs->pfn_vkUpdateVideoSessionParametersKHR = (PFN_vkUpdateVideoSessionParametersKHR)pfn_load_dev_fn(device, "vkUpdateVideoSessionParametersKHR");
	fnptrs->pfn_vkDestroyVideoSessionParametersKHR = (PFN_vkDestroyVideoSessionParametersKHR)pfn_load_dev_fn(device, "vkDestroyVideoSessionParametersKHR");
	fnptrs->pfn_vkCmdBeginVideoCodingKHR = (PFN_vkCmdBeginVideoCodingKHR)pfn_load_dev_fn(device, "vkCmdBeginVideoCodingKHR");
	fnptrs->pfn_vkCmdEndVideoCodingKHR = (PFN_vkCmdEndVideoCodingKHR)pfn_load_dev_fn(device, "vkCmdEndVideoCodingKHR");
	fnptrs->pfn_vkCmdControlVideoCodingKHR = (PFN_vkCmdControlVideoCodingKHR)pfn_load_dev_fn(device, "vkCmdControlVideoCodingKHR");
#endif
#ifdef VK_EXT_directfb_surface
#endif
#ifdef VK_EXT_display_surface_counter
#endif
#ifdef VK_KHR_get_surface_capabilities2
#endif
#ifdef VK_EXT_headless_surface
#endif
#ifdef VK_EXT_vertex_input_dynamic_state
	fnptrs->pfn_vkCmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT)pfn_load_dev_fn(device, "vkCmdSetVertexInputEXT");
#endif
#ifdef VK_GOOGLE_display_timing
	fnptrs->pfn_vkGetRefreshCycleDurationGOOGLE = (PFN_vkGetRefreshCycleDurationGOOGLE)pfn_load_dev_fn(device, "vkGetRefreshCycleDurationGOOGLE");
	fnptrs->pfn_vkGetPastPresentationTimingGOOGLE = (PFN_vkGetPastPresentationTimingGOOGLE)pfn_load_dev_fn(device, "vkGetPastPresentationTimingGOOGLE");
#endif
#ifdef VK_KHR_present_wait
	fnptrs->pfn_vkWaitForPresentKHR = (PFN_vkWaitForPresentKHR)pfn_load_dev_fn(device, "vkWaitForPresentKHR");
#endif
}
void vkl_load_device_functions(VkDevice device, VklDeviceFunctions* fnptrs) {
	vkl_load_device_functions_impl(device, g_vkl_fnptrs.pfn_vkGetDeviceProcAddr, fnptrs);
}
#endif

#ifdef __cplusplus
}
#endif

#endif //A21E2F7E_5464_4B27_8400_EC0EB967B70B
