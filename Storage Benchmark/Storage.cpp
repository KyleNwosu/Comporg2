#include <fstream>
#include <iostream>
#include <chrono>
#include <cmath>

using namespace std;
using namespace std::chrono;


void StorageBenchmark(char * txt){
    fstream file;
    file.open(txt, ios::out | ios::app | ios::binary);


    for (int i = 0; i < pow(10, 7); i++){
        file.write(txt,100);

    }
    file.seekg(0);

    for(int i =0; i < pow(10, 7); i++){
        file.read(txt,100);
    }
    file.close();

}

int main(){
    cout << "Storage1" << endl;
    char text[100];
    for (int i = 0; i<100; i++){
        text[i] = ' ';
    }
    auto beg = high_resolution_clock::now();
    StorageBenchmark(text);
    auto end = high_resolution_clock::now();
    auto time = duration_cast<microseconds>(end - beg);

    double milliseconds = time.count();

    cout << "Time taken: " << milliseconds << " microseconds" << endl;
}