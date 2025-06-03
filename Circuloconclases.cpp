#include<stdio.h>
#include<conio.h>
class Circulo {
    double radio;
    const double PI = 3.1416;
public:
    Circulo(double r) 
	{
        radio = r;
    }
    double calcularArea() 
	{
        return PI * radio * radio;
    }
    double calcularPerimetro() 
	{
        return 2 * PI * radio;
    }
    void Resultado() 
	{
        printf("Área: %f\n", calcularArea());
        printf("Perímetro: %f\n", calcularPerimetro());
    }
};
int main() 
{
    double radio;
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    Circulo circulo(radio);
    circulo.Resultado();

    return 0;
}








    

