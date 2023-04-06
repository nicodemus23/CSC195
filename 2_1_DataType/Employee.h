#pragma once
class Employee
{
public:
	char name[33]; // create an array of characters
	int age = 0;
	float hoursPerDay[7]; 

public:
	Employee();
	void Read();
	void Write();
};

