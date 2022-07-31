#include <iostream>
#include <bitset>
#include <iomanip>

int main(){

    unsigned short int data {15};

    //Print Integer in Binary
    std::cout << "data (dec) : " <<std::showbase <<  std::dec << data << std::endl;
    std::cout << "data (oct) : " <<std::showbase <<  std::oct << data << std::endl;
    std::cout << "data (hex) : " <<std::showbase <<  std::hex << data << std::endl;
    std::cout << "data (bin) : " << std::bitset<16>(data) << std::endl;
   
    unsigned short int value {0xff0u};

	std::cout << "Size of short int " << sizeof(short int) <<  std::endl;//  16 bits
	
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;


    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift right by one bit
    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift by multiple bits in one go
    //Shift right by four bits 
    value = static_cast<unsigned short int>(value >> 4);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    int COLUMN_WIDTH {20};
    unsigned char value1 {0x3}; // 0000 0011
    unsigned char value2 {0x5}; // 0000 0101
	

    std::cout << std::setw(COLUMN_WIDTH) << "value1 : " 
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(value1) << std::endl; 
		
	std::cout << std::setw(COLUMN_WIDTH) << "value2 : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(value2) << std::endl;
    
	//AND
	std::cout << std::endl;
	std::cout << "Bitwise AND :  " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value1 & value2 : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 & value2) << std::endl;
    std::cout << std::endl;

	//OR
	std::cout << std::endl;
	std::cout << "Bitwise OR :  " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value1 | value2 : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 | value2) << std::endl;
    std::cout << std::endl;


    //NOT
	std::cout << std::endl;
    std::cout << "Bitwise NOT " << std::endl;
	
    std::cout << std::setw(COLUMN_WIDTH) << "~value1 : "
		<< std::setw(COLUMN_WIDTH) <<  std::bitset<8>(~value1) << std::endl;
		
    std::cout << std::setw(COLUMN_WIDTH) << "~value2 : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(~value2) << std::endl;
		
    std::cout << std::setw(COLUMN_WIDTH) << "~01011001 : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(~0b01011001) << std::endl;//Using bin literal
		
    std::cout << std::setw(COLUMN_WIDTH) << "~01011001 : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(~0x59) << std::endl;//Using hex literal
    std::cout << std::endl; 


	//XOR
	std::cout << std::endl;
	std::cout << "Bitwise XOR :  " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value1 ^ value2 : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 ^ value2) << std::endl;
    std::cout << std::endl;

    	unsigned char sandbox_var{0b00110100}; // 8 bits : positive numbers only
	
	//Print out initial value
	std::cout << std::endl;
	std::cout << "Initial value :  " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << std::endl;
	
	//Compound left shift
	std::cout << std::endl;
	std::cout << "Shift left 2 bit positions in place :  " << std::endl;
	sandbox_var <<= 2;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << std::endl;


    //Compound right shift
	std::cout << std::endl;
	std::cout << "Shift right 4 bit positions in place :  " << std::endl;
	sandbox_var >>= 4;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << std::endl;

	//Compound OR with 0000 0010 to have all lower 4 bits turned on 
	std::cout << std::endl;
	std::cout << "Compound OR with 0000 0010 :  " << std::endl;
	sandbox_var |= 0b00001111;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << std::endl;


	//Compound AND with 0000 1100 to turn off the 2 lowest bits
	std::cout << std::endl;
	std::cout << "Compound AND with 0000 1100 :  " << std::endl;
	sandbox_var &= 0b000000000;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << std::endl;


	//XOR with 00000011 to turn on the 4 lowest bits again
	std::cout << std::endl;
	std::cout << "Compound XOR with 0000 0011 :  " << std::endl;
	sandbox_var ^= 0b00000011;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << std::endl;

    const unsigned char mask_bit_0 {0b00000001} ;//Bit0
    const unsigned char mask_bit_1 {0b00000010} ;//Bit1
    const unsigned char mask_bit_2 {0b00000100} ;//Bit2
    const unsigned char mask_bit_3 {0b00001000} ;//Bit3
    const unsigned char mask_bit_4 {0b00010000} ;//Bit4
    const unsigned char mask_bit_5 {0b00100000} ;//Bit5
    const unsigned char mask_bit_6 {0b01000000} ;//Bit6
    const unsigned char mask_bit_7 {0b10000000} ;//Bit7
    
    //Sandbox variable
    unsigned char var {0b00000000};// Starts off all bits off
    
    std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;



    //Set a few bits : make them 1's regardless of what's in there

	//SETTING BITS
    //Setting : |= with mask of the bit
	
    //Set bit 1
	std::cout << "Setting bit in position 1" << std::endl;
	var |= mask_bit_1;
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

	//Set bit 5
	std::cout << "Setting bit in position 5" << std::endl;
	var |= mask_bit_5;
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;


	//RESETTING BITS : set to 0
    //Resetting : &= (~mask)
	
	//Reset bit 1
	std::cout << "Resetting bit in position 1" << std::endl;
    var &= (~mask_bit_1);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

	//Reset bit 5
	std::cout << "Resetting bit in position 1" << std::endl;
    var &= (~mask_bit_5);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;


	//Set all bits
	std::cout << "Setting all bits" << std::endl;
    var |= ( mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 |
             mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;


	//Reset bits at pos 0,2,4,6
	std::cout << "Reset bits at pos 0,2,4,6" << std::endl;
    var &= ~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;



	//Check state of a bit
	std::cout << std::endl;
	std::cout << "Checking the state of each bit position (on/off)" << std::endl;
	std::cout << "bit0 is " << ((var & mask_bit_0) >> 0 )<< std::endl;
    std::cout << "bit1 is " << ((var & mask_bit_1) >> 1 ) << std::endl;
    std::cout << "bit2 is " << ((var & mask_bit_2) >> 2 ) << std::endl;
    std::cout << "bit3 is " << ((var & mask_bit_3) >> 3 ) << std::endl;
    std::cout << "bit4 is " << ((var & mask_bit_4) >> 4 ) << std::endl;
    std::cout << "bit5 is " << ((var & mask_bit_5) >> 5 ) << std::endl;
	std::cout << std::boolalpha;
    std::cout << "bit6 is " << ((var & mask_bit_6) >> 6 ) << std::endl;
	std::cout << "bit6 is " << static_cast<bool>(var & mask_bit_6) << std::endl;

    std::cout << "bit7 is " << ((var & mask_bit_7) >> 7 ) << std::endl;
    std::cout << "bit7 is " << static_cast<bool>(var & mask_bit_7) << std::endl;


	//Toggle bits
	//Toggle : var ^ mask
	
	//Toggle bit 0
	std::cout << std::endl;
	std::cout << "Toggle bit 0" << std::endl;
    var ^= mask_bit_0;
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    //Toggle bit7 
	std::cout << "Toggle bit 7" << std::endl;
    var ^= mask_bit_7;
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

	//Toggle multiple bits in one go : the 4 higher bits
	std::cout << "Toggle multiple bits in one go : the 4 higher bits" << std::endl;
    var ^= (mask_bit_7 | mask_bit_6 | mask_bit_5 | mask_bit_4);
	std::cout << std::setw(COLUMN_WIDTH) <<  "var : "
		 << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    

    return 0;
}