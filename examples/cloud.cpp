#include <tfhe/tfhe.h>
#include <tfhe/tfhe_io.h>
#include <stdio.h>
#include <fstream>
#include <iostream>

int main()
{
    // TFheGateBootstrappingCloudKeySet *bk = nullptr;
    // try
    // {
    //     FILE *cloud_key = fopen("cloud.key", "rb");

    //     bk = new_tfheGateBootstrappingCloudKeySet_fromFile(cloud_key);
    //     fclose(cloud_key);
    // }
    // catch (...)
    // {
    //     std::cerr << "Error loading Cloud Key Set\n";
    //     return -1;
    // }

    // delete_gate_bootstrapping_cloud_keyset(bk);
    std::cout << "Acquired Bootstrapping Key Set from binary Key.\n";
    return 0;
}