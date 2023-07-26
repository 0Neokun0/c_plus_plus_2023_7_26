#include <iostream>
#include <iomanip>

int main()
{
    double num1 {52435234523.523453245};
    double num2 {2343.2134};
    double num3 {1234.0};

    //using default settings
    std::cout << "---Defaults ----------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num2 << std::endl;

    std::cout << std::setprecision(2);
    std::cout << "---Precision 2--------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // using precision 5
    std::cout << std::setprecision(5);
    std::cout << "---Precision 5--------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    // Back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std:: setprecision(6);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::showpoint);

    std::cout << "--Back to defaults ---------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    return 0;


}