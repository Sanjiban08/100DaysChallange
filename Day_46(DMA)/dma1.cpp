// Dynamically declare a 2D array. ----

#include <iostream>
#define M 4
#define N 5
int main() {
    int* A = new int[M * N];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            *(A + i*N + j) = rand() % 100;
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << *(A + i*N + j) << " "; 
        }
        std::cout << std::endl;
    }
    delete[] A;
    return 0;
}