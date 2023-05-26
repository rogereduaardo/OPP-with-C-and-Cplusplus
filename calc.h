// calc.h - INTERFACE

#ifndef _CALC_H_
#define _CALC_H_

#ifdef __cplusplus
extern "C"
{
#endif

typedef void *calc_handle_t;

calc_handle_t calc_alloc();
void calc_free(calc_handle_t handle);

void calc_num1_set(calc_handle_t handle, int num);
int calc_num1_get(calc_handle_t handle);

void calc_num2_set(calc_handle_t handle, int num);
int calc_num2_get(calc_handle_t handle);

int calc_sum(calc_handle_t handle);
int calc_mult(calc_handle_t handle);

#ifdef __cplusplus
}
#endif

#endif