#include <iostream>
#include <cmath> 
#include <chrono>
using namespace std;
using namespace std:: chrono;







int main(){
    int32_t a = 1;
    int32_t b = 1;

    int32_t result;
    cout << "Integer\n";
    auto beg  = high_resolution_clock::now();
    for (int i = 0; i <10; i++){
        for (int j = 0; j < pow(10,10);j++  ){
                    result = a + b;
        }
    }


    for (int i = 0; i < 5; i++){
        for (int j = 0; j < pow(10,10); j++){
            result = a * b;
        }
    }


    for (int i =0; i < 2; i++){
        for (int j = 0; j < pow(10,10); j++){
            result = a/b;
        }
    }

    auto end = high_resolution_clock::now();
    auto elapsed = duration_cast<milliseconds>(end - beg).count();

    // double seconds = elapsed.count()/1000.0;
    // int minutes = seconds/60;
    cout << "Finished\n";    
    cout << "Time taken: " << elapsed << " milliseconds" << endl;

}