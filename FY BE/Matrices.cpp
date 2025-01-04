#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Matrix
{

public:
    void explanation()
    {
        cout << "\n\nMatrices are of two types:\n1. Rectangular Matrix\t2. Square Matrix\n\n\n1. Rectangular Matrix:\n    No. of rows ≠ No. of columns\n    There are two types of Rectangular matrix:\n\n    a. Row Matrix:\n\tIt is of order (1 x n) where, no. of rows = 1 & no. of columns = n\n\te.x.: [ 1 2 3 . . . n ]₁ₓₙ\n\n    b. Column Matrix:\n\tIt is of order (n x 1) where, no. of rows = n & no. of columns = 1\n\te.x.: 「 1 ˥\n\t       | 2 |\n\t       | 3 |\n\t       | . |\n\t       | . |\n\t       | . |\n\t       L n 」ₙₓ₁\n\n\n2. Square Matrix:\n    No. of rows = No. of columns\n    There are many types of Square matrix. Some of them are:\n\n    a. Diagonal Matrix:\n\tAll the non diagonal elements of the diagonal matrix must be zero.\n\tDiagonal elements may or may not be zero.\n\te.x.: 「 3  0  0 ˥\n\t       | 0  0  0 |\n\t       L 0  0  7 」₃ₓ₃\n\n    b. Scalar Matrix:\n\tAll the non diagonal elements of the scalar matrix must be zero.\n\tDiagonal elements must be any same number.\n\te.x.: 「 k  0  0 ˥\n\t       | 0  k  0 |\n\t       L 0  0  k 」₃ₓ₃\n\n    c. Unit or Identity Matrix (A=I):\n\tAll the non diagonal elements of the unit matrix must be zero.\n\tDiagonal elements must be unity.\n\tIt is same as the scalar matrix but here, k=1.\n\te.x.: 「 1  0  0 ˥\n\t       | 0  1  0 |\n\t       L 0  0  1 」₃ₓ₃\n\n    d. Singular Matrix:\n\tThe matrix whose determinant value is zero i.e. |A| = 0.\n\te.x.: 「 1  2  3 ˥\n\t       | 4  5  6 |\n\t       L 7  8  9 」₃ₓ₃\n\tHere, |A| = 0\n\n    e. Non - Singular Matrix:\n\tThe matrix whose determinant value is  non zero i.e. |A| ≠ 0.\n\te.x.: 「 1  9  2 ˥\n\t       | 0  3  8 |\n\t       L 4  7  5 」₃ₓ₃\n\tHere, |A| = 223 i.e. |A| ≠ 0\n\n    f. Symmetric Matrix:\n\taᵢⱼ = aⱼᵢ where 'a' is the element of matrix A, 'i' tells its location row-wise, 'j' tells its location column-wise.\n\tIf A is a symmetric matrix then A = Aᵀ where, Aᵀ is the transpose of matrix A.\n\te.x.: 「 3  2  1 ˥\n\t       | 2  5  4 |\n\t       L 1  4  3 」₃ₓ₃\n\tHere, a₁₁=a₁₁=3, a₁₂=a₂₁=2, a₁₃=a₃₁=1, a₂₂=a₂₂=5, a₂₃=a₃₂=4, a₃₃=a₃₃=3\n\n    g. Skew Symmetric Matrix:\n\taᵢⱼ = -aⱼᵢ where 'a' is the element of matrix A, 'i' tells its location row-wise, 'j' tells its location column-wise.\n\tExcept the diagonal elements.\n\te.x.: 「 3  2  -1 ˥\n\t       | -2  5  4 |\n\t       L 1  -4  3 」₃ₓ₃\n\tHere, a₁₂=-a₂₁, a₁₃=-a₃₁, a₂₃=-a₃₂\n\n\n";
        cout << "# Transpose of a matrix (Aᵀ):\n    The  row elements becomes the column elements and vice versa.\n    e.g.: If A = 「 1  3  2 ˥ then Aᵀ = 「 1  5  3 ˥\n                  | 5  3  4 |            | 3  3  9 |\n                  L 3  9  8 」₃ₓ₃        L 2  4  8 」₃ₓ₃\n\n# Conjugate of a matrix (Ā):\n    aᵢⱼ = āᵢⱼ\n    Each element becomes the conjugate of itself.\n    e.g. If A = 「 1+i   2   3-i ˥ then Ā = 「 1-i   2   3+i ˥\n                 | 3-4i  5  2+3i |           | 3   +4i  5  2-3i |\n                 L 5    2-i  1-i 」₃ₓ₃       L 5    2+i  1+i 」₃ₓ₃\n\n# Hermitian Matrix:\n    aᵢⱼ = āⱼᵢ\n    All the diagonal elements must be a real number.\n    The non diagonal elements must be conjugate of each other.\n    e.g.: A = 「 3    1-i  3+2i ˥\n               | 1+i   5   2-4i |\n               L 3-2i  2+4i  -1 」₃ₓ₃\n\n# Skew Hermitian Matrix:\n    aᵢⱼ = -āⱼᵢ\n    All the diagonal elements must be either purely imaginary number or zero.\n    The non diagonal elements must be negative conjugate of each other.\n    Trick: There will be change in sign of only the real part of all the elements of the matrix\n    e.g.: A = 「 3     1-i    3+2i ˥\n               | -1-i     0   2-4i |\n               L -3+2i  -2-4i  -5i 」₃ₓ₃\n\n";
    }
};

int main()
{
    Matrix m1;
    m1.explanation();
    return 0;
}