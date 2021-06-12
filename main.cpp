#include <iostream>
#include "Complex.h"

int main() {
    Complex x(1, 0);
    std::cout << x.Re() << std::endl << x.Im();
}
