#include <chrono>
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
using namespace std::chrono;

void StorageBenchmark(char* txt){
    fstream file;
    file.open("StorageBenchmark.txt");
    for (int i = 0; i < 1000000; i++){
        file.write(txt, 1000);
    }
    file.seekg(0);
    for(int i = 0; i < 1000000; i++){
        file.read(txt, 10000);
    }
    file.close();
}


int main(){
    cout << "Storage2\n";
    char txt[10000];
    for (int i = 0; i < 10000; i++){
        txt[i] = ' ';
    }
    auto start = high_resolution_clock::now();
    StorageBenchmark(txt);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
    return 0;
}