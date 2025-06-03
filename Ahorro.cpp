#include <cstdio>

int main() {
    double depositoMensual = 1000.0;
    double tasaMensual = 0.3;
    int meses = 10 * 12;
    double ahorro = 0.0;
    for (int i = 1; i <= meses; i++) 
	{
        ahorro = (ahorro + depositoMensual) * (1 + tasaMensual);
    }
    printf("Cantidad ahorrada despues de 10 anos: %s\n\n", ahorro);
    return 0;
}


