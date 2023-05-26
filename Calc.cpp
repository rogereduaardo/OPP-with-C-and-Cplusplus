//Cacl2.cpp

#include <iostream>

#include "Calc.h"

Calc::Calc()
{
  std::cout <<"Calc::Calc"<< std::endl;
}

Calc::~Calc()
{
  std::cout<<"Calc::~Calc"<< std::endl;
}

void Calc::num1_set(int num)
{
  num1 = num;
}
int Calc::num1_get()
{
  return num1;
}

void Calc::num2_set(int num)
{
  num2 = num;
}
int Calc::num2_get()
{
  return num2;
}

int Calc::sum_get()
{
  return num1 + num2;
}
int Calc::mult_get()
{
  return num1 * num2;
}