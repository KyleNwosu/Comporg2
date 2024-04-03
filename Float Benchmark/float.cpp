#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;


void Benchmark(){
    float result;
    cout << "1\n";
    for (int64_t i = 0; i< pow(10,10); i++){
        result = 1.0 + 1.0;
    }
    cout << "2\n";
    for (int64_t i=0; i<5; i++){
        for (int64_t j = 0; j < pow(10,9);j++){
            result = 1.0 * 1.0;
        }
    }
    cout << "3\n";
    for (int64_t i = 0; i <2; i++){
        for (int64_t j = 0; j < pow(10,9);j++){
            result = 1.0/1.0;

        }
    }
}


int main(){
        cout << "Float" << endl;
        auto beg = high_resolution_clock::now();
        Benchmark();
        auto end = high_resolution_clock::now();
    
        auto elapsed = duration_cast<milliseconds>(end - beg);
    
         auto duration = duration_cast<microseconds>(end - beg);
        cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
        return 0;
    }