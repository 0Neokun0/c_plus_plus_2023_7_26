// Stream manipulators - Fiels width, justification and setfill
// setw, left, right, setfill
#include <iostream>
#include <iomanip>

void ruler()
{
    std::cout << "\n123456789012345678901234568901234567890123457890" << std::endl;
}

int main()
{
    int num1{1234};
    double num2{1234.5678};
    std::string hello{"Hello"};

    // Defaults
    std::cout << "\n--Defaults ---------------------------------" << std::endl;
    ruler();
    std::cout << num1
              << num2
              << hello
              << std::endl;

    // Defaults - one per line
    std::cout << "\n--Defaults - one per line-------------------" << std::endl;
    ruler();
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << hello << std::endl;

    // Set field width to 10
    // Note the default justificaiton is right for num1 only!
    std::cout << "\n--width 10 for num1--------------------------" << std::endl;
    ruler();
    std::cout << std::setw(10) << num1
              << num2
              << hello
              << std::endl;

    // Set field width to 10 for first 2 outputs
    // Note the default justificaiton is right for both
    std::cout << "\n--width 10 for num1 and num2 --------------------------" << std::endl;
    ruler();
    std::cout << std::setw(10) << num1
              << std::setw(10) << num2
              << hello
              << std::endl;
}