#include "include.h"

int main(void)
{
  my_printf("-1 Test sans options\n");
  my_printf("-2 %s\n","Option s");
  my_printf("-3 %d\n",42);
  my_printf("-4 %i\n",24);
  my_printf("-5 %c\n",'c');
  my_printf("-6 %o\n",42);
  my_printf("-7 %u\n", (unsigned int)4200000000);
  my_printf("-8 %x\n",42);
  my_printf("-9 %X\n",42);
  my_printf("-10 %%\n","Hello");
  my_printf("-11 %s%d%i%c%o%u%x%X%s%%", "Test final", 42, 24, 'c', 42, (unsigned int)4200000000, 42, 42," Fin");
  return (0);
}
