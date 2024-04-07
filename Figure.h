#pragma once
#include <iostream>
#include <cstring>
#include <vector>
#include<cmath>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

class Figure
{
public:
	
	virtual void Create()=0;
	virtual void Show(int number)=0;
	virtual void Verification(int number) = 0;
	virtual void Delete(int number) = 0;
};