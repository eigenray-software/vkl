#pragma once
#include <prelude.h>

#ifdef __cplusplus
extern "C" {
#endif



VkResult vkl_init(PFN_vkGetInstanceProcAddr);
void vkl_load_instance_functions(VkInstance instance);
void vkl_load_device_functions(VkDevice device, struct VklDeviceFunctions* fnptrs);



#ifdef __cplusplus
}
#endif

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
#ifdef VK_VALVE_descriptor_set_host_mapping
	PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE pfn_vkGetDescriptorSetLayoutHostMappingInfoVALVE;
	PFN_vkGetDescriptorSetHostMappingVALVE pfn_vkGetDescriptorSetHostMappingVALVE;
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
#ifdef VK_VALVE_descriptor_set_host_mapping
	void GetDescriptorSetLayoutHostMappingInfoVALVE(const  VkDescriptorSetBindingReferenceVALVE * pBindingReference, VkDescriptorSetLayoutHostMappingInfoVALVE * pHostMapping) {
		assert(pfn_vkGetDescriptorSetLayoutHostMappingInfoVALVE && "vkGetDescriptorSetLayoutHostMappingInfoVALVE is not loaded");
		pfn_vkGetDescriptorSetLayoutHostMappingInfoVALVE(this->handle, pBindingReference, pHostMapping);
	}

	void GetDescriptorSetHostMappingVALVE(VkDescriptorSet descriptorSet, void * * ppData) {
		assert(pfn_vkGetDescriptorSetHostMappingVALVE && "vkGetDescriptorSetHostMappingVALVE is not loaded");
		pfn_vkGetDescriptorSetHostMappingVALVE(this->handle, descriptorSet, ppData);
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
