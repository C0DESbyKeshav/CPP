#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;

int main() {
    _setmode(_fileno(stdout), _O_U16TEXT);

    wcout << L"⁰ ¹ ² ³ ⁴ ⁵ ⁶ ⁷ ⁸ ⁹" << endl;

    return 0;
}
