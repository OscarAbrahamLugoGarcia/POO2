#include<stdio.h>
#include<conio.h>
int main()
{
float PI=3.1416,radio,area,perimetro;
printf("calcula el area y el perimetro de un Circulo");
printf("\n Dame el radio:");
scanf("%f", &radio);
area=PI*radio*radio;
perimetro=2*PI*radio;
printf("\n El area del circulo es: %f", area);
printf("\n El perimetro del circulo es: %f" ,perimetro);
return 0;
}
