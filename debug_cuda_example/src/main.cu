#include <iostream>

void print_CUDA_version()
{
    std::cout
        << "__CUDACC_VER_MAJOR__: " << __CUDACC_VER_MAJOR__ << "\n"
        << "__CUDACC_VER_MINOR__" << __CUDACC_VER_MINOR__ << "\n"
        << "__CUDACC_VER_BUILD__: " << __CUDACC_VER_BUILD__ << "\n\n";

    int runtime_ver;
    cudaRuntimeGetVersion(&runtime_ver);
    std::cout << "CUDA Runtime version: " << runtime_ver << "\n";

    int driver_ver;
    cudaDriverGetVersion(&driver_ver);
    std::cout << "CUDA Driver version: " << driver_ver << "\n";
}

int main()
{
    std::cout << "Running cudas.\n";

    print_CUDA_version();

    return 0;
}