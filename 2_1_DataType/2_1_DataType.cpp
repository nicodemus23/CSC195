// 2_1_DataType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // <> need to access list of libraries for this include file 
#include "Employee.h" // imports prototypes // "" means specific path and not just a library ref like <>
using namespace std;

int main()
{
    const unsigned short MAXEMP = 20; // maximum employees



    std::cout << "2_1_DataTypes Hello World!\n";
    Employee workers[MAXEMP];
    unsigned short numEmployees = 0;

    cout << "\n Please enter the number of employees: ";
    cin >> numEmployees;
    if (numEmployees > MAXEMP)
        numEmployees = MAXEMP;

    for (int iCount = 0; iCount < numEmployees; iCount++);
        // Call read for each employee
    //Employee workers[4]; // this exists in stack memory (doesn't have key word "new")
    //workers[0].age = 23;
    //workers[0].Read();

    // DELETING MEMORY USUALLY DEALS WITH HEAP MEMORY - NOT STACK - STACK IS DYNAMIC
    // ANY TIME YOU USE THE WORD "NEW," YOU'RE ON THE HEAP 
    // instantiate class on heap and use pointer 
    Employee* empPtr = new Employee(); // now accessing heap memory 
    //empPtr = &workers[0]; // this was typed to point to cell in heap memory and then needs to be deleted once the memory has been instantiated and deleted (garbage coll. at bottom)
    //empPtr->age = 42; // how to access data with pointer in heap 
    //empPtr->Read();

    void* ptr = malloc(20); // by default, malloc gives you a null pointer // chunk of data not casted to anything // can point different data types to one chunk of memory (malloc)
    int* intPtr = new int;

    // this dereferences intPtr and takes off of heap so won't have an error later
    *intPtr = 42;
    printf("\n HEX x%00.x", *intPtr); // printf() prints formatted print // .x prints HEX value // "whichever value is at the HEX pointer, print its value" and then clear memory? 
    printf("\n HEX x%00.x", *(intPtr+1));

    // Do stuff with heap memory 
    //cout << sizeof(Employee); // outputting

    // Garbage collection
    delete empPtr; // releases heap memory so we don't have memory leaks 

    // I WILL NEED THIS LATER, BITCH!!!!
    cout << "\n size 1: " << (sizeof(workers) / sizeof(workers[0])); // size of array divided by number of cells in the array  
    cout << "\n size 2: " << std::size(workers); // size of array divided by number of cells in the array 
    

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
