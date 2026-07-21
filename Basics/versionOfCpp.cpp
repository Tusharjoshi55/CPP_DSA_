#include <iostream>

int main() {
    // __cplusplus is a standard macro that holds the C++ version code
    long version = __cplusplus;

    std::cout << "C++ Macro Value: " << version << "\n";
    std::cout << "Your C++ Version: ";

    if (version == 199711L) std::cout << "C++98\n";
    else if (version == 201103L) std::cout << "C++11\n";
    else if (version == 201402L) std::cout << "C++14\n";
    else if (version == 201703L) std::cout << "C++17\n";
    else if (version == 202002L) std::cout << "C++20\n";
    else if (version == 202302L) std::cout << "C++23\n";
    else if (version > 202302L) std::cout << "Experimental/Next Standard (C++26)\n";
    else std::cout << "Pre-standard C++ or custom version\n";

    return 0;
}
