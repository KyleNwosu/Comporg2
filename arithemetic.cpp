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

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < pow(10,9); j++){
            result = 1 * 1;
        }
    }

    for (int i =0; i < 2; i++){
        for (int j = 0; j < pow(10,9); j++){
            result = 1/1;
        }
    }
    cout << "Finished";

}

int main(){
    Benchmark();
    return 0;
}