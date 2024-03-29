#include <iostream>
#include <cmath> 
#include <chrono>
using namespace std;
using namespace std:: chrono;





void Benchmark(){
    int result;
    for (int i = 0; i< pow(10,10); i++){
        result = 1 + 1;
    }


    // for (int i = 0; i < 5; i++){
    //     for (int j = 0; j < pow(10,9); j++){
    //         result = 1 * 1;
    //     }
    // }


    // for (int i =0; i < 2; i++){
    //     for (int j = 0; j < pow(10,9); j++){
    //         result = 1/1;
    //     }
    // }

    cout << "Finished";

}

int main(){

    auto beg  = high_resolution_clock::now();
    Benchmark();
    auto end = high_resolution_clock::now();

    auto elapsed = duration_cast<milliseconds>(end - beg);

    double seconds = elapsed.count()/1000.0;
    int minutes = seconds/60;

    cout << "Time taken: " << seconds << " seconds" << endl;

}