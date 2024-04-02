#include <chrono>
#include <iostream>
#include <cmath>
using namespace std;
using namespace std::chrono;

#define ARRAY_SIZE 1000000000

void MemoryBenchmark1(){
    int *nums = new int [ARRAY_SIZE];
    int num, i, j;
    for (i =0; i < 5;i++){
        for (j=0; j < ARRAY_SIZE; j++){
            num = *(nums  + j);
        }
    }
    for (i=0; i<5; i++){
        for (j=0; j<ARRAY_SIZE; j++){
            *(nums + j) = i;
        }
    }
    delete [] nums;
}

int main(){
    cout << "Memory" << endl;
    auto start = high_resolution_clock::now();
    MemoryBenchmark1();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by MemoryBenchmark: " << duration.count() << " microseconds" << endl;
}