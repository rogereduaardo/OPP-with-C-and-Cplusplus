// main2.cpp
#include <stdio.h>

#include "calc.h"
#include "Calc.h"

int main(void)
{
  printf("OPP with C\n");

  calc_handle_t calc_handle = calc_alloc();
  if (NULL == calc_handle)
  {
    fprintf(stderr, "calc_alloc() failed\n");
  }
  calc_num1_set(calc_handle, 10);
  calc_num2_set(calc_handle, 20);
  int sum = calc_sum(calc_handle);
  printf("sum: %d\n", sum);

  calc_free(calc_handle);

  Calc calc;
  calc.num1_set(100);
  calc.num2_set(200);
  sum = calc.sum_get();
  printf("sum: %d\n", sum);

  return 0;
}