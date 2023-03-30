// 01_Week.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "01_Week - Hello World!\n";



    int iVal1 = -1;  // 32 bits //iVal1 = integer variable 1 // integers are primitives - lowest level type of data you can have 
    short shVal2 = 3; // short: less memory than int // 2 bits // smaller primitive 
    long lVal = 123456789; // 64 bits // 
    int iVal3 = 42; 
    float fVal = 23; // part of bitmap makes up float is decimal base // infinite (in theory but has holes) 
    char chVal = 'a'; // 1 byte (8 bits)// '' = character // "" = string // 

    //iVal1 = shVal2; // put short inside of int = smaller into bigger // can't do opposite 
    //shVal2 = iVal1; 

    std::cout << "\niVal1 = ";
    std::cout << iVal1 << " address = " << &iVal1; // prints value and address of variable 
    std::cout << "\n shVal2 = " << shVal2 << " address = " << &shVal2;
    std::cout << "\n iVal3 = ";
    std::cout << iVal3 << " address = " << &iVal3;
    //std::cout << "\n" << (&iVal1 - &iVal3);

    std::cout << "\n **** Size of char = " << sizeof(chVal);
    std::cout << "\n **** Size of short = " << sizeof(shVal2);
    std::cout << "\n **** Size of int = " << sizeof(iVal1);

    int* iPtr = NULL; // if you don't assign a pointer as NULL then it'll choose one for you and gives you whatever was last (block of memory)
                      // we have no idea what data type it is so MUST initialize as NULL (nothing)
    iPtr = &iVal1;    // the value of the pointer is the address of that variable // POINTS TO MEMORY ALLOCATION

    std::cout << "\n\nvalue of ptr variable = " << iPtr;
    std::cout << "\n iPtr address = " << &iPtr;
    std::cout << "\n size of iPtr = " << sizeof(iPtr);
    std::cout << "\n value of iPtr points to is " << *iPtr;
    std::cout << "\n value of iPtr points to is " << *((&lVal) + 1);





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
