// Dynamically declare a 3D array.

#include <iostream>
#define X 2
#define Y 3
#define Z 4
int main() {
    int* A = new int[X * Y * Z];
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                *(A + i*Y*Z + j*Z + k) = rand() % 100;
            }
        }
    }
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                std::cout << *(A + i*Y*Z + j*Z + k) << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
    delete[] A;
    return 0;
}