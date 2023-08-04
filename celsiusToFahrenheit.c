#include <stdio.h>
/* imprime la tabla Fahrenheit-Celsius */
main( )
{
for (int fahr = 300; fahr >= 00; fahr = fahr - 20)
printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}