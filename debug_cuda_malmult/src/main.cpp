#include <iostream>

#include "my_functions.hpp"

int main(int argc, char **argv)
{
    std::cout << "Running cudas.\n";

    print_CUDA_version();

    printf("[Matrix Multiply Using CUDA] - Starting...\n");

    int dev = 0;

    int block_size = 32;

    dim3 dimsA(5 * 2 * block_size, 5 * 2 * block_size, 1);
    dim3 dimsB(5 * 4 * block_size, 5 * 2 * block_size, 1);

    printf("MatrixA(%d,%d), MatrixB(%d,%d)\n", dimsA.x, dimsA.y,
         dimsB.x, dimsB.y);

    cudaProfilerStart();
    int matrix_result = MatrixMultiply(argc, argv, block_size, dimsA, dimsB);
    cudaProfilerStop();

    exit(matrix_result);

    return 0;
}