#include <cstdio>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
    ifstream archivo("miniom.txt"); 

    if (!archivo) {
        printf("No se pudo abrir el archivo.\n");
        return 1; 
    }

    string linea;
    while (getline(archivo, linea)) {
        printf("%s\n", linea.c_str()); 
    }

    archivo.close(); 
    return 0; 
}


