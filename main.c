#include <stdio.h>

#include "calc.h"

int main(void) 
{
  printf("OOP with C\n");

  calc_handle_t calc_handle = calc_alloc();
  if (NULL == calc_handle)
  {
    fprintf(stderr, "calc_alloc() failed\n");
    return 0;
  }
  calc_num1_set(calc_handle, 10);
  calc_num2_set(calc_handle, 20);
  int sum = calc_sum(calc_handle);
  printf("sum: %d\n", sum);

  calc_free(calc_handle);
  
  return 0;
}