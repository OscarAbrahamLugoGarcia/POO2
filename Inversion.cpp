#include <cstdio>
#include <cmath>

int main() {
    double inversion = 15000.0;
    double tasaMensual = 0.037;
    int meses = 15 * 12;

    double total = inversion * pow(1 + tasaMensual, meses);

    printf("Cantidad ahorrada despues de 15 anos: $%.2f\n", total);

    return 0;
}

