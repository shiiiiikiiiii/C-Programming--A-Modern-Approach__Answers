#include <stdio.h>

#define DISP(f, x) printf("%s(%g) = %g\n", (#f), (x), (f(x)))
#define DISP2(f, x, y) printf("%s(%g, %g) = %g\n", (#f), (x), (y), (f((x), (y))))