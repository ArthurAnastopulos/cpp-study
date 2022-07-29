#include <iostream>
#include <iomanip> //setprecision

int main()
{

    int decimal = 15;
    int octal = 017;
    int hexadecimal = 0x0F;
    int binary = 0b00001111;

    std::cout << "Decimal : " << decimal << std::endl;
    std::cout << "Octal : " << octal << std::endl;
    std::cout << "Hexadecimal : " << hexadecimal << std::endl;
    std::cout << "Binary : " << binary << std::endl;

    std::cout << "sizeof int : " << sizeof(int) << std::endl; //Int occupies 4 bytes of memory

    unsigned int value1 {10}; 
    signed int value2 {-300}; // Half of the 4 bytes for positive numbs and the other half for negative numbs


    short short_value {455}; // 2bytes instead of 4bytes
    long long_value {44}; // 4 or 8 bytes
    long long long_value2 {1519}; // 8bytes

    float number1 {1.12345678901234567890f}; // Precision : 7
    double number2 {1.12345678901234567890}; // Precision : 15
    long double number3  {1.12345678901234567890L};

    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

    //Precision
    std::cout << std::setprecision(20); // Control the precision from std::cout.
    std::cout << "number1 is : " << number1 << std::endl; //7 digits
    std::cout << "number2 is : " << number2 << std::endl; // 15'ish digits
    std::cout << "number3 is : " << number3 << std::endl; // 15+ digits

    //Scientific notation
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};        
    double number8 {0.00000000003498};
    double number9 {3.498e-11}; 

    double number10{ -5.6 };
    double number11{};//Initialized to 0
    double number12{};  //Initialized to 0

    //Infinity
    double result { number10 / number11 };
    std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;
    //NaN
    result = number11 / number12;
    std::cout << number11 << "/" << number12 << " = " << result << std::endl;

    bool red_light {false};
    bool green_light{true};
    //Printing out a bool
    //1 -->> true
    //0 -->> false


    if(green_light){
        std::cout << "The light is green!" << std::endl;
    }else{
        std::cout << "The light is NOT green!" << std::endl;
    } 

    //sizeof()
    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;

    char character1 {'a'};
    //One byte in memory : 2^8 = 256 different values (0 ~ 255)
    char value = 65 ; // ASCII character code for 'A'
    std::cout << "value : " << value << std::endl; // A
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl; 

    return 0;
}