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

    std:: chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();
    Benchmark();
    end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    cout << "Finished computation at " << std::ctime(&end_time) << "elapsed time: " << elapsed_seconds.count() << "s\n";

    return 0;
}