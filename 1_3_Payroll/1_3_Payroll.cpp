// 1_3_Payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;


#include <iostream>

int main()
{
    const unsigned short maxDays = 14;
    const float Tax = 0.1f;

    string name; // get - name 
    unsigned int uCount = 0; // unsigned integer is alway 0 or positive // never negative // get - days worked 
    unsigned short hours[maxDays]; // get days hours 
    float fGrossPay = 0; // calc - total hours * wage; 
    float netPay = 0; // calc - (gross Pay - (Gross Pay - (Gross Pay * tax)
    float fTax = 0; // (gross pay * tax rate)
    float fWage; // get - pay per hour 
    float totalHours = 0;


    std::cout << "1_3_Payroll\n";

    // Enter name
    cout << "Please enter your first name: ";
    cin >> name;
    

    // Enter Wage (fWage)
    cout << "Please enter your hourly wage: ";
    cin >> fWage;
    
    // Enter days worked
    cout << "\n\n Enter days worked (Maximum 14): ";
    cin >> uCount; // cin gives the user a prompt 
    cout << "\n Your days worked for this pay period is: " << uCount;
    

    // Enter hours worked for each day

    for (int iCount = 0; iCount < uCount; iCount++) {
        // get values for hours worked 
        cout << "\n Day " << (iCount + 1) << " = ";
        cin >> hours[iCount];
        if (hours[iCount] >= uCount) {
            fGrossPay += (hours[iCount] * fWage);
            totalHours += hours[iCount];

            

        }
        
        
    }
    cout << "\n" << name << " worked for " << totalHours << " hours at $" << fWage << " per hour.";

    // Calc pay and taxes // Gross income // Net income 

    cout << "\n" << "Gross pay: $" << fGrossPay;
    netPay = fGrossPay - (fGrossPay * Tax);
    cout << "\n" << "Net Pay: $" << netPay;


    cout << "\n End of app";
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
