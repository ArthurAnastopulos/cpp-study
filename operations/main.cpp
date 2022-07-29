#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main(){
   
    //obs: operations with variables with size less than 4 bytes doesnt work, for exemple, short(2 bytes) char(1 byte)

    //Addition
    int number1{2};
    int number2{7};

    int result = number1 + number2;
    std::cout << "result : " << result << std::endl;

    //Subtraction
    result = number2 - number1 ;
    std::cout << "result : " << result << std::endl;

    result = number1 - number2;
    std::cout << "result : " << result << std::endl;

    //Multiplication
    result = number1 * number2;
    std::cout << "result : " << result << std::endl;


    //Division
    result = number2 / number1;
    std::cout << "result : " << result << std::endl;


    //Modulus
    result = number2 % number1; // 7 % 2
    std::cout << "result : " << result << std::endl; // 1

    result = 31 % 10;
    std::cout << "result : " << result << std::endl; // 1

    int value {45};

    std::cout << "The value is : " << value << std::endl;

    std::cout << std::endl;
    value = value + 5;
    //value +=5; // equivalent to value = value + 5
    std::cout << "The value is (after +=5) : " << value << std::endl; // 50

    std::cout << std::endl;
    value -=5; // equivalent to value = value - 5
    std::cout << "The value is (after -=5) : " << value << std::endl; // 45 

    std::cout << std::endl;
    value *=2;
    std::cout << "The value is (after *=2) : " << value << std::endl; // 90

    std::cout << std::endl;
    value /= 3;
    std::cout << "The value is (after /=3) : " << value << std::endl; // 30

    std::cout << std::endl;
    value %= 11;
    std::cout << "The value is (after %=11) : " << value << std::endl;// 8

    std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
    std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
    std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;
    std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;

    bool a {true};
    bool b {false};
    bool c {true};

    // AND
    std::cout << " a && b : " << (a && b) << std::endl; // false
    std::cout << " a && c : " << (a && c ) << std::endl; // true
    std::cout << " a && b && c :" << (a && b && c) << std::endl; // false

    //OR
    std::cout << " a || b : " << (a || b) << std::endl;
    std::cout << " a || c : " << (a || c ) << std::endl;
    std::cout << " a ||b || c :" << (a || b || c) << std::endl;

    //NOT
    std::cout << "!a : " << !a << std::endl;
    std::cout << "!b : " << !b << std::endl;
    std::cout << "!c : " << !c << std::endl;

    //std::setw() : Adjusts the field with for the item about to be printed. 
    //The setw() manipulator only affects the next value to be printed.
    std::cout << std::setw(10) <<  "Lastname"  << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel"  << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10)  << "Woods" << std::setw(5) <<  "33" << std::endl;
    std::cout << std::setw(10) <<  "Jordan" << std::setw(10)  << "Parker" << std::setw(5) << "45" << std::endl;

    //Justify : Values can be justified in their fields. There are three manipulators
    //          for adjusting the justification: left, right, and internal

    //right justified
    std::cout << std::endl;
    std::cout << "Right justified table(default) :  " << std::endl;

    int col_width = 20;

    std::cout << std::right;
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;



    //Left justified
    std::cout << std::endl;
    std::cout << "Left justified table :  " << std::endl;

    col_width = 20;

    std::cout << std::left;
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;


    //setfill

    std::cout << std::endl;
    std::cout << "Table with fill characters :  " << std::endl;


    col_width = 20;

    std::cout << std::left;
    std::cout << std::setfill('*'); // The fill character
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;

    //boolalpha and noboolapha : control bool output format : 1/0 or true/false

    bool condition {true};
    bool other_condition {false};

    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    //showpos and noshowpos : show or hide the +  sign for positive numbers

    int pos_num {34};
    int neg_num {-45};

    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl; 

    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;   

    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};

    std::cout << std::endl;
    std::cout << "default base format : " << std::endl;
    std::cout << "pos_int : " << pos_int << std::endl;
    std::cout << "neg_int : " << neg_int << std::endl;
    std::cout << "double_var : " << double_var << std::endl;

    std::cout << std::endl;
    std::cout << "pos_int in different bases : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "neg_int in different bases : " << std::endl;
    std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;

    std::cout << std::endl;
    std::cout << "double_var in different bases : " << std::endl;
    std::cout << "double_var (dec) : " << std::dec << double_var << std::endl;
    std::cout << "double_var (hex) : " << std::hex << double_var << std::endl;
    std::cout << "double_var (oct) : " << std::oct << double_var << std::endl;

    //uppercase and nouppercase

    pos_int = 717171;

    std::cout << "pos_int (nouppercase : default) : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "pos_int (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    //fixed and scientific : for floating point values

    double a{ 3.1415926535897932384626433832795 };
    double b{ 2006.0 };
    double c{ 1.34e-10 };

    std::cout << std::endl;
    std::cout << "double values (default : use scientific where necessary) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (fixed) : " << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (scientific) : " << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (back to defaults) : " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); // Hack
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    //setprecision() : the number of digits printed out for a floating point. Default is 6

    a = 3.1415926535897932384626433832795;

    std::cout << std::endl;
    std::cout << "a (default precision(6)) : " << a <<  std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)) : " << a << std::endl;

    //Obs: If the precision is bigger than supported by the type, you'll just print garbage.

    //showpoint and noshowpoint : show trailing zeros if necessary
    //Force output of the decimal point

    double d {34.1};
    double e {101.99};
    double f {12.0};
    int    g {45};

    std::cout << std::endl;
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12
    std::cout << "g : " << g << std::endl;

    std::cout << std::endl;
    std::cout << "showpoint: " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12.0
    std::cout << "g : " << g << std::endl;

    return 0;
}