#include <cstdio>
#include <string>

using namespace std;

class Animales {
public:
    string Comida;
    string Habitat;
    string Tiempo_de_vida;
    string Ejemplos;

    Animales(string C, string H, string TdV, string E) {
        Comida = C;
        Habitat = H;
        Tiempo_de_vida = TdV;
        Ejemplos = E;
    }

    void mostrarDatos(const char* nombreAnimal) {
        printf("\nAnimal: %s\n", nombreAnimal);
        printf("Comida: %s\n", Comida.c_str());
        printf("Habitat: %s\n", Habitat.c_str());
        printf("Tiempo de vida: %s\n", Tiempo_de_vida.c_str());
        printf("Ejemplos: %s\n", Ejemplos.c_str());
    }
};

int main() {
    Animales vertebrado("Carne", "Bosques", "Al rededor de 15 anos", "Leon, Lobo");
    Animales invertebrado("Plantas", "Oceanos", "Al rededor de 2 anos", "Pulpo, Medusa");

    vertebrado.mostrarDatos("Vertebrado");
    invertebrado.mostrarDatos("Invertebrado");

    return 0;
}

