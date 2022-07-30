#include <iostream>

int main(){

    //		. The compiler applies implicit conversions
    // 			when types are different in 
    //			an expression
    //		. Conversions are always done from the smallest
    //			to the largest type in this case int is 
    //			transformed to double before the expression
    //			is evaluated.Unless we are doing an assignment

    double price { 45.6 };
    int units {10};

    auto total_price = price * units; // units will be implicitly converted to double

    std::cout << "Total price : " << total_price << std::endl;
    std::cout << "sizeof total_price : " << sizeof(total_price) << std::endl;


    //Implicit conversions in assignments
    // The assignment operation is going to cause an implicit
    // narrowing conversion , y is converted to int before assignment
    int x1;
    double y1 {45.44};
    x1 = y1; // double to int
    std::cout << "The value of x is : " << x1 << std::endl; // 45
    std::cout << "sizeof x : " << sizeof(x1) << std::endl;// 4

    //Implicit cast will add up the doubles,
	//then turn result into int for assignment
	double x2 { 12.5 };
    double y2 { 34.6};
    
    int sum = x2 + y2; 
    
    std::cout << "The sum  is : " << sum << std::endl;


	//Explicity cast : cast then sum up
	sum = static_cast<int>(x2) + static_cast<int>(y2) ;
    std::cout << "The sum  is : " << sum << std::endl;

	//Explicit cast : sum up then cast, same thing as implicit cast
	sum =  static_cast<int> (x2 + y2);
	std::cout << "Sum up then cast, result : " << sum << std::endl;


	//Old style C-cast
	double PI {3.14};
	
	//int int_pi = (int)(PI);
    int int_pi = static_cast<int>(PI);
	std::cout << "PI : " << PI << std::endl;
    std::cout << "int_pi : " << int_pi << std::endl;

    //Overflow 

    unsigned char data {250};

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    ++data; 
    std::cout << "data : " << std::hex <<  static_cast<int>(data) << std::endl; // 255

    ++data;  // Overflow
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 256

    std::cout << std::dec ;

    //Underflow
    data = 1;

    --data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    --data;
    std::cout << "data : " << static_cast<int>(data) << std::endl;

    return 0;
}