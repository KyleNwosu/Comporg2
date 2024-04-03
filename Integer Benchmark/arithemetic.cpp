#include <iostream>
#include <cmath> 
#include <chrono>
using namespace std;
using namespace std:: chrono;



void benchmark(){
    int32_t result;
    cout << "1\n";
        for (int64_t j = 0; j < pow(10,10);j++){
            result = 2 + 2;
        }
    

    cout << "2\n";
    for (int64_t i = 0; i < 5; i++){
        for (int64_t j = 0; j < pow(10,9); j++){
            result = 1 * 1;
        }
    }

    cout << "3\n";
    for (int64_t i =0; i < 2; i++){
        for (int64_t j = 0; j < pow(10,9); j++){
            result = 2/1;
        }
    }

    
}


int main(){
    cout << "Integer\n";
    auto beg = high_resolution_clock::now();
    benchmark();
    auto end = high_resolution_clock::now();
    auto elapsed = duration_cast<milliseconds>(end - beg).count();

    cout << "Finished\n";    
    cout << "Time taken: " << elapsed << " milliseconds" << endl;

}


    