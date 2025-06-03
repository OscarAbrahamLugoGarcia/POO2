#include<stdio.h>
#include<conio.h>
main()
{
	float base,altura,area;
	printf("\n Ingrese la base del triangulo: ");
	scanf("%f", &base);
	printf("\n Ingrese la altura del triangulo:");
	scanf("%f", &altura);
	area=base*altura/2;
    printf("\n El area del triangulo es: %f", area);
    return 0;
}
