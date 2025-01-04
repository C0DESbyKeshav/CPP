#include <iostream>
#include <iomanip>

int main() {
    int matrix[3][3];

    std::cout << "Enter elements of 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "The 3x3 matrix is:\n";
    std::cout << "⎡ ";
    for(int j = 0; j < 3; j++) {
        std::cout << std::setw(4) << matrix[0][j];
    }
    std::cout << " ⎤\n";

    for(int i = 1; i < 2; i++) {
        std::cout << "⎢ ";
        for(int j = 0; j < 3; j++) {
            std::cout << std::setw(4) << matrix[i][j];
        }
        std::cout << " ⎥\n";
    }

    std::cout << "⎣ ";
    for(int j = 0; j < 3; j++) {
        std::cout << std::setw(4) << matrix[2][j];
    }
    std::cout << " ⎦\n";

    return 0;
}
