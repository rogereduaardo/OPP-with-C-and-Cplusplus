// calc.c

#include <stdio.h>
#include <stdlib.h>

#include "calc.h"

typedef struct
{
int num1;
int num2;
int sum;
int mult;
}calc_t;

calc_handle_t calc_alloc()
{
  return calloc(1, sizeof(calc_t));
}
void calc_free(calc_handle_t handle)
{
  free(handle);
}

void calc_num1_set(calc_handle_t handle, int num)
{
  calc_t *p = handle;
  p->num1 = num;
}
int calc_num1_get(calc_handle_t handle)
{
  calc_t *p = handle;
  return p->num1;
}

void calc_num2_set(calc_handle_t handle, int num)
{
  calc_t *p = handle;
  p->num2 = num;
}
int calc_num2_get(calc_handle_t handle)
{
  calc_t *p = handle;
  return p->num2;
}

int calc_sum(calc_handle_t handle)
{
  calc_t *p = handle;
  return p->num1 + p->num2;
}
int calc_mult(calc_handle_t handle)
{
  calc_t *p = handle;
  return p->num1 * p->num2;
}