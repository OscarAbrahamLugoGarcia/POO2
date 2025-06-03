#include <cstdio>
#include <string>
using namespace std;

class Deporte 
{
public:
    string Integrantes;
    string Tiempo_de_juego;
    string Tipo_de_contacto;

    Deporte(string I, string TJ, string TC) {
        Integrantes = I;
        Tiempo_de_juego = TJ;
        Tipo_de_contacto = TC;
    }

    void mostrarDatos(const char* nombreDeporte) {
        printf("\nDeporte: %s\n", nombreDeporte);
        printf("Integrantes: %s\n", Integrantes.c_str());
        printf("Tiempo de juego: %s\n", Tiempo_de_juego.c_str());
        printf("Tipo de contacto: %s\n", Tipo_de_contacto.c_str());
    }

    void esDeEquipo() {
        if (Integrantes.find("por equipo") != string::npos) 
		{
            printf("Este deporte es en equipo.\n");
        } else 
		{
            printf("Este deporte es individual.\n");
        }
    }

    void modificarContacto(string nuevoContacto) 
	{
        Tipo_de_contacto = nuevoContacto;
        printf("El tipo de contacto ha sido actualizado a: %s\n", Tipo_de_contacto.c_str());
    }
};

int main() 
{
    Deporte futbol("11 por equipo", "90 minutos", "Juega con los pies");
    Deporte americano("7 por equipo", "60 minutos", "Juega con pies y manos");
    Deporte baloncesto("5 por equipo", "48 minutos", "Juega con manos");

    futbol.mostrarDatos("futbol");
    futbol.esDeEquipo();
    futbol.modificarContacto("Contacto fisico leve");

    americano.mostrarDatos("americano");
    americano.esDeEquipo();
    americano.modificarContacto("Contacto fisico alto");
    
    baloncesto.mostrarDatos("baloncesto");
    baloncesto.esDeEquipo();
    baloncesto.modificarContacto("contacto fisico leve");

    return 0;
}
//DEFINIR LA CLASE DEPORTE CON 3 ATRIBUTOS, DEPORTES QUE SE JUEGAN CON BALON, DEFINIR LAS CLASES DERIVADAS DEPENDIENDO DE CON QUE PARTE DEL CUERPO SE TOCA EL BALON
