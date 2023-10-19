#include <stdio.h>

/*
 * main - add line to code
 * return: 0
 */

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

  /*
   * code line written here...
   * Remember:
   * - use of not allowed
   * - modofication of p not allowed
   * - statement must only be one
   * - coding anything other than this line of code not allowed
   */

*(p + 5) = 98;

/* prints 98 (followed by new line) \n */

printf("a[2] = %d\n", a[2]);
return (0);

}

