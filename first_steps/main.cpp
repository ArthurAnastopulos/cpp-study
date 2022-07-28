#include <iostream>

int addNumbers (int first_number, int second_number)
{
    return first_number + second_number;
}

int main()
{
    int x = 0;
    int y {12}; //statement

    std::cout << "Hello World!" << std::endl;
    //std::cin >> x //buffer has an '\n' after pressing enter, it will make std::getline() get empty value
    x = 11;
    std::cerr << "cerr Test" << std::endl;
    std::clog << "clog Test" << std::endl;
    
    int sum = addNumbers(x,y);
    std::cout << "Sum value: " << sum << std::endl;

    /* forcing a runtime error
    x = 7/0;
    std::cout << "value: " << x << std::endl; */

    std::string str1;

    std::cout << "input: ";
    std::getline(std::cin, str1);
    std::cout << "str1: " << str1 << std::endl; 

    return 0;
}