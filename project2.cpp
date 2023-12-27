#include <iostream>

int main() {
    long long q = 0;
    long long r = 0;
    std::cin >> r;
    long long y = r;
    for (long long x = 0; x < r; ++x) {
        while (x * x + y * y > r * r) {
            --y;
        }
        q += y;
    }
//    for (long long x = 0; x < r; ++x) {
//        long long y = static_cast<long long>(sqrtl(r*r-x*x));
//        q += y;
//    }
    q *= 4;
    std::cout << q + 1;
    return 0;
}