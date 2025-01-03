#include "complex.h"

int main() {
    Complex c1(3, 4), c2(1, -2);

    Complex c3 = c1 + c2;
    c3.print();  // Expected: 4.00 + 2.00i

    Complex c4 = c1 - c2;
    c4.print();  // Expected: 2.00 + 6.00i

    Complex c5 = c1 * c2;
    c5.print();  // Expected: 11.00 + -2.00i

    try {
        Complex c6 = c1 / c2;
        c6.print();  // Expected: -1.40 + -1.80i
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

