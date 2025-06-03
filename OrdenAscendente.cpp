#include <cstdio>
#include <algorithm>
#include <limits>  // Para std::numeric_limits

int main() 
{
    const int Tamano = 10;
    double numeros[Tamano];

    printf("Ingrese 10 numeros:\n");
    for (int i = 0; i < Tamano; ) 
    {
        printf("Numero %d: ", i + 1);
        if (scanf("%lf", &numeros[i]) != 1) 
        {
            printf("Entrada invalida. Por favor, ingrese un numero.\n");

            // Limpiar el búfer de entrada
            while (getchar() != '\n');
        } 
        else 
        {
            i++; // Solo avanzar si la entrada fue válida
        }
    }

    std::sort(numeros, numeros + Tamano);

    printf("\nNumeros ordenados de forma ascendente:\n");
    for (int i = 0; i < Tamano; i++) 
    {
        printf("%.5lf ", numeros[i]);
    }
    printf("\n");

    return 0;
}

