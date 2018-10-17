#include <iostream>
#include <cmath> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double x, y, z, a, b, c, rez;
	puts("\n\t x, y, z = ");		
	scanf("%lf %lf %lf", &x, &y, &z);
	a = fabs(pow(x,y/x)-pow(y/x, 1/3.0));
	b = cos(y) - z/(y-x);
	c = 1 + pow(y-x,2);
	rez = a + (y - x) * (b/c);		
	printf("\n x = %7.5lf\n y = %7.5lf\n z = %7.5lf\nRezult = %lf\n", x, y, z, rez);
	puts("Press any key ... ");

	return 0;
}
