/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* addfrac.c (Chapter 3, page 46) */
/* Adds two fractions */

#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;
  char sign;

  printf("Enter two fractions separated by a compute sign: ");//modified
  scanf("%d/%d%c%d/%d", &num1, &denom1, &sign, &num2, &denom2);

  if(sign == '+'){
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
  }
  else if(sign == '-'){
    result_num = num1 * denom2 - num2 * denom1;
    result_denom = denom1 * denom2;
  }
  else if(sign == '*'){
    result_num = num1 * num2;
    result_denom = denom1 * denom2;
  }
  else if(sign == '/'){
    result_num = num1 * denom2;
    result_denom = denom1 * num2;
  }

  printf("The result is %d/%d\n", result_num, result_denom);

  return 0;
}