#include "include.h"

int main(void)
{
  my_printf("%o\n",42);
  my_putstr("\n");
  my_printf("%u", (unsigned int)4200000000);
  //my_printf("-1  %s%d%i%c%%", "Bonjour, ceci est un test", 45, 63, 'c');
  return (0);
}
