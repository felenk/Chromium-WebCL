#include <CL/opencl.h>

typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetPlatformIDs                 ) (content::GpuChannelHost*, cl_uint, cl_platform_id*, cl_uint*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetPlatformInfo                ) (content::GpuChannelHost*, cl_platform_id, cl_platform_info, size_t, void*, size_t*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetDeviceIDs                   ) (content::GpuChannelHost*, cl_platform_id, cl_device_type, cl_uint, cl_device_id*, cl_uint*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetDeviceInfo                  ) (content::GpuChannelHost*, cl_device_id, cl_device_info, size_t, void*, size_t*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clCreateSubDevices               ) (content::GpuChannelHost*, cl_device_id, const cl_device_partition_property*, cl_uint, cl_device_id*, cl_uint*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clRetainDevice                   ) (content::GpuChannelHost*, cl_device_id);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clReleaseDevice                  ) (content::GpuChannelHost*, cl_device_id);
typedef CL_API_ENTRY cl_context       (__cdecl *h_clCreateContext                  ) (content::GpuChannelHost*, const cl_context_properties*, cl_uint, const cl_device_id*, void (CL_CALLBACK*)(const char*, const void*, size_t, void*), void*, cl_int*);
typedef CL_API_ENTRY cl_context       (__cdecl *h_clCreateContextFromType          ) (content::GpuChannelHost*, const cl_context_properties*, cl_device_type, void (CL_CALLBACK*)(const char*, const void*, size_t, void*), void*, cl_int*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clRetainContext                  ) (content::GpuChannelHost*, cl_context);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clReleaseContext                 ) (content::GpuChannelHost*, cl_context);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetContextInfo                 ) (content::GpuChannelHost*, cl_context, cl_context_info, size_t, void*, size_t*);
typedef CL_API_ENTRY cl_command_queue (__cdecl *h_clCreateCommandQueue             ) (content::GpuChannelHost*, cl_context, cl_device_id, cl_command_queue_properties, cl_int*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clRetainCommandQueue             ) (content::GpuChannelHost*, cl_command_queue);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clReleaseCommandQueue            ) (content::GpuChannelHost*, cl_command_queue);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetCommandQueueInfo            ) (content::GpuChannelHost*, cl_command_queue, cl_command_queue_info, size_t, void*, size_t*);
typedef CL_API_ENTRY cl_mem           (__cdecl *h_clCreateBuffer                   ) (content::GpuChannelHost*, cl_context, cl_mem_flags, size_t, void*, cl_int*);
typedef CL_API_ENTRY cl_mem           (__cdecl *h_clCreateSubBuffer                ) (content::GpuChannelHost*, cl_mem, cl_mem_flags, cl_buffer_create_type, const void*, cl_int*);
typedef CL_API_ENTRY cl_mem           (__cdecl *h_clCreateImage                    ) (content::GpuChannelHost*, cl_context, cl_mem_flags, const cl_image_format*, const cl_image_desc*, void*, cl_int*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clRetainMemObject                ) (content::GpuChannelHost*, cl_mem);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clReleaseMemObject               ) (content::GpuChannelHost*, cl_mem);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetSupportedImageFormats       ) (content::GpuChannelHost*, cl_context, cl_mem_flags, cl_mem_object_type, cl_uint, cl_image_format*, cl_uint*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetMemObjectInfo               ) (content::GpuChannelHost*, cl_mem, cl_mem_info, size_t, void*, size_t*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetImageInfo                   ) (content::GpuChannelHost*, cl_mem, cl_image_info, size_t, void*, size_t*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clSetMemObjectDestructorCallback ) (content::GpuChannelHost*, cl_mem, void (CL_CALLBACK*)(cl_mem,void*), void*);
typedef CL_API_ENTRY cl_sampler       (__cdecl *h_clCreateSampler                  ) (content::GpuChannelHost*, cl_context, cl_bool, cl_addressing_mode, cl_filter_mode, cl_int*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clRetainSampler                  ) (content::GpuChannelHost*, cl_sampler);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clReleaseSampler                 ) (content::GpuChannelHost*, cl_sampler);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetSamplerInfo                 ) (content::GpuChannelHost*, cl_sampler, cl_sampler_info, size_t, void*, size_t*);
typedef CL_API_ENTRY cl_program       (__cdecl *h_clCreateProgramWithSource        ) (content::GpuChannelHost*, cl_context, cl_uint, const char**, const size_t*, cl_int*);
typedef CL_API_ENTRY cl_program       (__cdecl *h_clCreateProgramWithBinary        ) (content::GpuChannelHost*, cl_context, cl_uint, const cl_device_id*, const size_t*, const unsigned char**, cl_int*, cl_int*);
typedef CL_API_ENTRY cl_program       (__cdecl *h_clCreateProgramWithBuiltInKernels) (content::GpuChannelHost*, cl_context, cl_uint, const cl_device_id*, const char*, cl_int*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clRetainProgram                  ) (content::GpuChannelHost*, cl_program);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clReleaseProgram                 ) (content::GpuChannelHost*, cl_program);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clBuildProgram                   ) (content::GpuChannelHost*, cl_program, cl_uint, const cl_device_id*, const char*, void (CL_CALLBACK*)(cl_program, void*), void*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clCompileProgram                 ) (content::GpuChannelHost*, cl_program, cl_uint, const cl_device_id*, const char*, cl_uint, const cl_program*, const char**, void (CL_CALLBACK*)(cl_program, void*), void*);
typedef CL_API_ENTRY cl_program       (__cdecl *h_clLinkProgram                    ) (content::GpuChannelHost*, cl_context, cl_uint, const cl_device_id*, const char*, cl_uint, const cl_program*, void (CL_CALLBACK*)(cl_program, void*), void*, cl_int*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clUnloadPlatformCompiler         ) (content::GpuChannelHost*, cl_platform_id);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetProgramInfo                 ) (content::GpuChannelHost*, cl_program, cl_program_info, size_t, void*, size_t*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetProgramBuildInfo            ) (content::GpuChannelHost*, cl_program, cl_device_id, cl_program_build_info, size_t, void*, size_t*);
typedef CL_API_ENTRY cl_kernel        (__cdecl *h_clCreateKernel                   ) (content::GpuChannelHost*, cl_program, const char*, cl_int*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clCreateKernelsInProgram         ) (content::GpuChannelHost*, cl_program, cl_uint, cl_kernel*, cl_uint*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clRetainKernel                   ) (content::GpuChannelHost*, cl_kernel);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clReleaseKernel                  ) (content::GpuChannelHost*, cl_kernel);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clSetKernelArg                   ) (content::GpuChannelHost*, cl_kernel, cl_uint, size_t, const void*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clSetKernelArg_vector                   ) (content::GpuChannelHost*, cl_kernel, cl_uint, size_t, const void*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetKernelInfo                  ) (content::GpuChannelHost*, cl_kernel, cl_kernel_info, size_t, void*, size_t*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetKernelArgInfo               ) (content::GpuChannelHost*, cl_kernel, cl_uint, cl_kernel_arg_info, size_t, void*, size_t*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetKernelWorkGroupInfo         ) (content::GpuChannelHost*, cl_kernel, cl_device_id, cl_kernel_work_group_info, size_t, void*, size_t*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clWaitForEvents                  ) (content::GpuChannelHost*, cl_uint, const cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetEventInfo                   ) (content::GpuChannelHost*, cl_event, cl_event_info, size_t, void*, size_t*);
typedef CL_API_ENTRY cl_event         (__cdecl *h_clCreateUserEvent                ) (content::GpuChannelHost*, cl_context, cl_int*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clRetainEvent                    ) (content::GpuChannelHost*, cl_event);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clReleaseEvent                   ) (content::GpuChannelHost*, cl_event);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clSetUserEventStatus             ) (content::GpuChannelHost*, cl_event, cl_int);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clSetEventCallback               ) (content::GpuChannelHost*, cl_event, cl_int, void (CL_CALLBACK*)(cl_event, cl_int, void*), void*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clGetEventProfilingInfo          ) (content::GpuChannelHost*, cl_event, cl_profiling_info, size_t, void*, size_t*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clFlush                          ) (content::GpuChannelHost*, cl_command_queue);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clFinish                         ) (content::GpuChannelHost*, cl_command_queue);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueReadBuffer              ) (content::GpuChannelHost*, cl_command_queue, cl_mem, cl_bool, size_t, size_t, void*, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueReadBufferRect          ) (content::GpuChannelHost*, cl_command_queue, cl_mem, cl_bool, const size_t*, const size_t*, const size_t*, size_t, size_t, size_t, size_t, void*, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueWriteBuffer             ) (content::GpuChannelHost*, cl_command_queue, cl_mem, cl_bool, size_t, size_t, const void*, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueWriteBufferRect         ) (content::GpuChannelHost*, cl_command_queue, cl_mem, cl_bool, const size_t*, const size_t*, const size_t*, size_t, size_t, size_t, size_t, const void*, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueFillBuffer              ) (content::GpuChannelHost*, cl_command_queue, cl_mem, const void*, size_t, size_t, size_t, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueCopyBuffer              ) (content::GpuChannelHost*, cl_command_queue, cl_mem, cl_mem, size_t, size_t, size_t, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueCopyBufferRect          ) (content::GpuChannelHost*, cl_command_queue, cl_mem, cl_mem, const size_t*, const size_t*, const size_t*, size_t, size_t, size_t, size_t, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueReadImage               ) (content::GpuChannelHost*, cl_command_queue, cl_mem, cl_bool, const size_t*, const size_t*, size_t, size_t, void*, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueWriteImage              ) (content::GpuChannelHost*, cl_command_queue, cl_mem, cl_bool, const size_t*, const size_t*, size_t, size_t, const void*, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueFillImage               ) (content::GpuChannelHost*, cl_command_queue, cl_mem, const void*, const size_t*, const size_t*, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueCopyImage               ) (content::GpuChannelHost*, cl_command_queue, cl_mem, cl_mem, const size_t*, const size_t*, const size_t*, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueCopyImageToBuffer       ) (content::GpuChannelHost*, cl_command_queue, cl_mem, cl_mem, const size_t*, const size_t*, size_t, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueCopyBufferToImage       ) (content::GpuChannelHost*, cl_command_queue, cl_mem, cl_mem, size_t, const size_t*, const size_t*, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY void *           (__cdecl *h_clEnqueueMapBuffer               ) (content::GpuChannelHost*, cl_command_queue, cl_mem, cl_bool, cl_map_flags, size_t, size_t, cl_uint, const cl_event*, cl_event*, cl_int*);
typedef CL_API_ENTRY void *           (__cdecl *h_clEnqueueMapImage                ) (content::GpuChannelHost*, cl_command_queue, cl_mem, cl_bool, cl_map_flags, const size_t*, const size_t*, size_t*, size_t*, cl_uint, const cl_event*, cl_event*, cl_int*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueUnmapMemObject          ) (content::GpuChannelHost*, cl_command_queue, cl_mem, void*, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueMigrateMemObjects       ) (content::GpuChannelHost*, cl_command_queue, cl_uint, const cl_mem*, cl_mem_migration_flags, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueNDRangeKernel           ) (content::GpuChannelHost*, cl_command_queue, cl_kernel, cl_uint, const size_t*, const size_t*, const size_t*, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueTask                    ) (content::GpuChannelHost*, cl_command_queue, cl_kernel, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueNativeKernel            ) (content::GpuChannelHost*, cl_command_queue, void (CL_CALLBACK*)(void*), void*, size_t, cl_uint, const cl_mem*, const void**, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueMarkerWithWaitList      ) (content::GpuChannelHost*, cl_command_queue, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clEnqueueBarrierWithWaitList     ) (content::GpuChannelHost*, cl_command_queue, cl_uint, const cl_event*, cl_event*);
typedef CL_API_ENTRY cl_int           (__cdecl *h_clSetPrintfCallback              ) (content::GpuChannelHost*, cl_context, void (CL_CALLBACK*)(cl_context, cl_uint, char*, void*), void*);

typedef CL_API_ENTRY cl_mem 
(__cdecl *h_clCreateFromGLBuffer)(content::GpuChannelHost*, cl_context     /* context */,
                     cl_mem_flags   /* flags */,
                     cl_GLuint      /* bufobj */,
                     int *          /* errcode_ret */) ;

typedef CL_API_ENTRY cl_mem 
(__cdecl *h_clCreateFromGLTexture)(content::GpuChannelHost*, cl_context      /* context */,
                      cl_mem_flags    /* flags */,
                      cl_GLenum       /* target */,
                      cl_GLint        /* miplevel */,
                      cl_GLuint       /* texture */,
                      cl_int *        /* errcode_ret */) ;
typedef CL_API_ENTRY cl_int 
(__cdecl *h_clEnqueueAcquireGLObjects)(content::GpuChannelHost*, cl_command_queue      /* command_queue */,
                          cl_uint               /* num_objects */,
                          const cl_mem *        /* mem_objects */,
                          cl_uint               /* num_events_in_wait_list */,
                          const cl_event *      /* event_wait_list */,
                          cl_event *            /* event */) ;

typedef CL_API_ENTRY cl_int 
(__cdecl *h_clEnqueueReleaseGLObjects)(content::GpuChannelHost*, cl_command_queue      /* command_queue */,
                          cl_uint               /* num_objects */,
                          const cl_mem *        /* mem_objects */,
                          cl_uint               /* num_events_in_wait_list */,
                          const cl_event *      /* event_wait_list */,
                          cl_event *            /* event */) ;



#ifdef __WEBCL_CL_INIT_MAIN__
#define CL_LOADING_PREFIX
#define CL_LOADING_SUFFIX = NULL
#else
#define CL_LOADING_PREFIX extern
#define CL_LOADING_SUFFIX
#endif

CL_LOADING_PREFIX h_clGetPlatformIDs                  webcl_clGetPlatformIDs                  CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetPlatformInfo                 webcl_clGetPlatformInfo                 CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetDeviceIDs                    webcl_clGetDeviceIDs                    CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetDeviceInfo                   webcl_clGetDeviceInfo                   CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateSubDevices                webcl_clCreateSubDevices                CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clRetainDevice                    webcl_clRetainDevice                    CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clReleaseDevice                   webcl_clReleaseDevice                   CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateContext                   webcl_clCreateContext                   CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateContextFromType           webcl_clCreateContextFromType           CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clRetainContext                   webcl_clRetainContext                   CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clReleaseContext                  webcl_clReleaseContext                  CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetContextInfo                  webcl_clGetContextInfo                  CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateCommandQueue              webcl_clCreateCommandQueue              CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clRetainCommandQueue              webcl_clRetainCommandQueue              CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clReleaseCommandQueue             webcl_clReleaseCommandQueue             CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetCommandQueueInfo             webcl_clGetCommandQueueInfo             CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateBuffer                    webcl_clCreateBuffer                    CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateSubBuffer                 webcl_clCreateSubBuffer                 CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateImage                     webcl_clCreateImage                     CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clRetainMemObject                 webcl_clRetainMemObject                 CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clReleaseMemObject                webcl_clReleaseMemObject                CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetSupportedImageFormats        webcl_clGetSupportedImageFormats        CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetMemObjectInfo                webcl_clGetMemObjectInfo                CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetImageInfo                    webcl_clGetImageInfo                    CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clSetMemObjectDestructorCallback  webcl_clSetMemObjectDestructorCallback  CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateSampler                   webcl_clCreateSampler                   CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clRetainSampler                   webcl_clRetainSampler                   CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clReleaseSampler                  webcl_clReleaseSampler                  CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetSamplerInfo                  webcl_clGetSamplerInfo                  CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateProgramWithSource         webcl_clCreateProgramWithSource         CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateProgramWithBinary         webcl_clCreateProgramWithBinary         CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateProgramWithBuiltInKernels webcl_clCreateProgramWithBuiltInKernels CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clRetainProgram                   webcl_clRetainProgram                   CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clReleaseProgram                  webcl_clReleaseProgram                  CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clBuildProgram                    webcl_clBuildProgram                    CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCompileProgram                  webcl_clCompileProgram                  CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clLinkProgram                     webcl_clLinkProgram                     CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clUnloadPlatformCompiler          webcl_clUnloadPlatformCompiler          CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetProgramInfo                  webcl_clGetProgramInfo                  CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetProgramBuildInfo             webcl_clGetProgramBuildInfo             CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateKernel                    webcl_clCreateKernel                    CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateKernelsInProgram          webcl_clCreateKernelsInProgram          CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clRetainKernel                    webcl_clRetainKernel                    CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clReleaseKernel                   webcl_clReleaseKernel                   CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clSetKernelArg                    webcl_clSetKernelArg                    CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clSetKernelArg_vector                    webcl_clSetKernelArg_vector                    CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetKernelInfo                   webcl_clGetKernelInfo                   CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetKernelArgInfo                webcl_clGetKernelArgInfo                CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetKernelWorkGroupInfo          webcl_clGetKernelWorkGroupInfo          CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clWaitForEvents                   webcl_clWaitForEvents                   CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetEventInfo                    webcl_clGetEventInfo                    CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateUserEvent                 webcl_clCreateUserEvent                 CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clRetainEvent                     webcl_clRetainEvent                     CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clReleaseEvent                    webcl_clReleaseEvent                    CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clSetUserEventStatus              webcl_clSetUserEventStatus              CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clSetEventCallback                webcl_clSetEventCallback                CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clGetEventProfilingInfo           webcl_clGetEventProfilingInfo           CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clFlush                           webcl_clFlush                           CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clFinish                          webcl_clFinish                          CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueReadBuffer               webcl_clEnqueueReadBuffer               CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueReadBufferRect           webcl_clEnqueueReadBufferRect           CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueWriteBuffer              webcl_clEnqueueWriteBuffer              CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueWriteBufferRect          webcl_clEnqueueWriteBufferRect          CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueFillBuffer               webcl_clEnqueueFillBuffer               CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueCopyBuffer               webcl_clEnqueueCopyBuffer               CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueCopyBufferRect           webcl_clEnqueueCopyBufferRect           CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueReadImage                webcl_clEnqueueReadImage                CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueWriteImage               webcl_clEnqueueWriteImage               CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueFillImage                webcl_clEnqueueFillImage                CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueCopyImage                webcl_clEnqueueCopyImage                CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueCopyImageToBuffer        webcl_clEnqueueCopyImageToBuffer        CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueCopyBufferToImage        webcl_clEnqueueCopyBufferToImage        CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueMapBuffer                webcl_clEnqueueMapBuffer                CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueMapImage                 webcl_clEnqueueMapImage                 CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueUnmapMemObject           webcl_clEnqueueUnmapMemObject           CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueMigrateMemObjects        webcl_clEnqueueMigrateMemObjects        CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueNDRangeKernel            webcl_clEnqueueNDRangeKernel            CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueTask                     webcl_clEnqueueTask                     CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueNativeKernel             webcl_clEnqueueNativeKernel             CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueMarkerWithWaitList       webcl_clEnqueueMarkerWithWaitList       CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueBarrierWithWaitList      webcl_clEnqueueBarrierWithWaitList      CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clSetPrintfCallback               webcl_clSetPrintfCallback               CL_LOADING_SUFFIX;

CL_LOADING_PREFIX h_clCreateFromGLBuffer               webcl_clCreateFromGLBuffer             CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clCreateFromGLTexture              webcl_clCreateFromGLTexture            CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueAcquireGLObjects          webcl_clEnqueueAcquireGLObjects        CL_LOADING_SUFFIX;
CL_LOADING_PREFIX h_clEnqueueReleaseGLObjects          webcl_clEnqueueReleaseGLObjects        CL_LOADING_SUFFIX;

#undef CL_LOADING_PREFIX
#undef CL_LOADING_SUFFIX

#ifdef WEBCLEXPORT
#define DLLPORTA __declspec(dllexport)
#else
#define DLLPORTA __declspec(dllimport)
#endif

#define WEBCL_LOAD_FUN_DEF(func) extern "C" DLLPORTA void setWebCL##func(h_##func input);

WEBCL_LOAD_FUN_DEF(clGetPlatformIDs                 )
WEBCL_LOAD_FUN_DEF(clGetPlatformInfo                )
WEBCL_LOAD_FUN_DEF(clGetDeviceIDs                   )
WEBCL_LOAD_FUN_DEF(clGetDeviceInfo                  )
WEBCL_LOAD_FUN_DEF(clCreateSubDevices               )
WEBCL_LOAD_FUN_DEF(clRetainDevice                   )
WEBCL_LOAD_FUN_DEF(clReleaseDevice                  )
WEBCL_LOAD_FUN_DEF(clCreateContext                  )
WEBCL_LOAD_FUN_DEF(clCreateContextFromType          )
WEBCL_LOAD_FUN_DEF(clRetainContext                  )
WEBCL_LOAD_FUN_DEF(clReleaseContext                 )
WEBCL_LOAD_FUN_DEF(clGetContextInfo                 )
WEBCL_LOAD_FUN_DEF(clCreateCommandQueue             )
WEBCL_LOAD_FUN_DEF(clRetainCommandQueue             )
WEBCL_LOAD_FUN_DEF(clReleaseCommandQueue            )
WEBCL_LOAD_FUN_DEF(clGetCommandQueueInfo            )
WEBCL_LOAD_FUN_DEF(clCreateBuffer                   )
WEBCL_LOAD_FUN_DEF(clCreateSubBuffer                )
WEBCL_LOAD_FUN_DEF(clCreateImage                    )
WEBCL_LOAD_FUN_DEF(clRetainMemObject                )
WEBCL_LOAD_FUN_DEF(clReleaseMemObject               )
WEBCL_LOAD_FUN_DEF(clGetSupportedImageFormats       )
WEBCL_LOAD_FUN_DEF(clGetMemObjectInfo               )
WEBCL_LOAD_FUN_DEF(clGetImageInfo                   )
WEBCL_LOAD_FUN_DEF(clSetMemObjectDestructorCallback )
WEBCL_LOAD_FUN_DEF(clCreateSampler                  )
WEBCL_LOAD_FUN_DEF(clRetainSampler                  )
WEBCL_LOAD_FUN_DEF(clReleaseSampler                 )
WEBCL_LOAD_FUN_DEF(clGetSamplerInfo                 )
WEBCL_LOAD_FUN_DEF(clCreateProgramWithSource        )
WEBCL_LOAD_FUN_DEF(clCreateProgramWithBinary        )
WEBCL_LOAD_FUN_DEF(clCreateProgramWithBuiltInKernels)
WEBCL_LOAD_FUN_DEF(clRetainProgram                  )
WEBCL_LOAD_FUN_DEF(clReleaseProgram                 )
WEBCL_LOAD_FUN_DEF(clBuildProgram                   )
WEBCL_LOAD_FUN_DEF(clCompileProgram                 )
WEBCL_LOAD_FUN_DEF(clLinkProgram                    )
WEBCL_LOAD_FUN_DEF(clUnloadPlatformCompiler         )
WEBCL_LOAD_FUN_DEF(clGetProgramInfo                 )
WEBCL_LOAD_FUN_DEF(clGetProgramBuildInfo            )
WEBCL_LOAD_FUN_DEF(clCreateKernel                   )
WEBCL_LOAD_FUN_DEF(clCreateKernelsInProgram         )
WEBCL_LOAD_FUN_DEF(clRetainKernel                   )
WEBCL_LOAD_FUN_DEF(clReleaseKernel                  )
WEBCL_LOAD_FUN_DEF(clSetKernelArg                   )
WEBCL_LOAD_FUN_DEF(clSetKernelArg_vector                   )
WEBCL_LOAD_FUN_DEF(clGetKernelInfo                  )
WEBCL_LOAD_FUN_DEF(clGetKernelArgInfo               )
WEBCL_LOAD_FUN_DEF(clGetKernelWorkGroupInfo         )
WEBCL_LOAD_FUN_DEF(clWaitForEvents                  )
WEBCL_LOAD_FUN_DEF(clGetEventInfo                   )
WEBCL_LOAD_FUN_DEF(clCreateUserEvent                )
WEBCL_LOAD_FUN_DEF(clRetainEvent                    )
WEBCL_LOAD_FUN_DEF(clReleaseEvent                   )
WEBCL_LOAD_FUN_DEF(clSetUserEventStatus             )
WEBCL_LOAD_FUN_DEF(clSetEventCallback               )
WEBCL_LOAD_FUN_DEF(clGetEventProfilingInfo          )
WEBCL_LOAD_FUN_DEF(clFlush                          )
WEBCL_LOAD_FUN_DEF(clFinish                         )
WEBCL_LOAD_FUN_DEF(clEnqueueReadBuffer              )
WEBCL_LOAD_FUN_DEF(clEnqueueReadBufferRect          )
WEBCL_LOAD_FUN_DEF(clEnqueueWriteBuffer             )
WEBCL_LOAD_FUN_DEF(clEnqueueWriteBufferRect         )
WEBCL_LOAD_FUN_DEF(clEnqueueFillBuffer              )
WEBCL_LOAD_FUN_DEF(clEnqueueCopyBuffer              )
WEBCL_LOAD_FUN_DEF(clEnqueueCopyBufferRect          )
WEBCL_LOAD_FUN_DEF(clEnqueueReadImage               )
WEBCL_LOAD_FUN_DEF(clEnqueueWriteImage              )
WEBCL_LOAD_FUN_DEF(clEnqueueFillImage               )
WEBCL_LOAD_FUN_DEF(clEnqueueCopyImage               )
WEBCL_LOAD_FUN_DEF(clEnqueueCopyImageToBuffer       )
WEBCL_LOAD_FUN_DEF(clEnqueueCopyBufferToImage       )
WEBCL_LOAD_FUN_DEF(clEnqueueMapBuffer               )
WEBCL_LOAD_FUN_DEF(clEnqueueMapImage                )
WEBCL_LOAD_FUN_DEF(clEnqueueUnmapMemObject          )
WEBCL_LOAD_FUN_DEF(clEnqueueMigrateMemObjects       )
WEBCL_LOAD_FUN_DEF(clEnqueueNDRangeKernel           )
WEBCL_LOAD_FUN_DEF(clEnqueueTask                    )
WEBCL_LOAD_FUN_DEF(clEnqueueNativeKernel            )
WEBCL_LOAD_FUN_DEF(clEnqueueMarkerWithWaitList      )
WEBCL_LOAD_FUN_DEF(clEnqueueBarrierWithWaitList     )
WEBCL_LOAD_FUN_DEF(clSetPrintfCallback              )

WEBCL_LOAD_FUN_DEF(clCreateFromGLBuffer)
WEBCL_LOAD_FUN_DEF(clCreateFromGLTexture)
WEBCL_LOAD_FUN_DEF(clEnqueueAcquireGLObjects)
WEBCL_LOAD_FUN_DEF(clEnqueueReleaseGLObjects)
