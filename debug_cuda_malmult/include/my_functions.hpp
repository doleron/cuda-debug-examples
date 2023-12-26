#ifndef __MY_CUDA_FUNCTIONS__
#define __MY_CUDA_FUNCTIONS__

#include <stdio.h>
#include <assert.h>

// CUDA runtime
#include <cuda_runtime.h>
#include <cuda_profiler_api.h>

void print_CUDA_version();

int MatrixMultiply(int argc, char **argv,
                   int block_size, const dim3 &dimsA,
                   const dim3 &dimsB);

#endif