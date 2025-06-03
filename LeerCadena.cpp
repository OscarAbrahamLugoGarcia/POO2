#include <cstdio>
#include <cstring>

void mostrarMensaje(const char* mensaje) 
{
    printf("%s\n", mensaje);
}

void pedirRespuesta(char* respuesta, const char* pregunta) 
{
    while (true) 
	{
        mostrarMensaje(pregunta);
        scanf("%s", respuesta);
        if (strcmp(respuesta, "si") == 0 || strcmp(respuesta, "no") == 0) {
            break;
        } else 
		{
            mostrarMensaje("Respuesta no valida. Escribe 'si' o 'no'.");
        }
    }
}

int main() {
    char cumple[10], regalo[10];
    pedirRespuesta(cumple, "¿Cumple años tu novia? (si/no):");
    if (strcmp(cumple, "si") == 0) {
        pedirRespuesta(regalo, "¿Le compraste regalo? (si/no):");
        if (strcmp(regalo, "si") == 0) 
		{
            mostrarMensaje("Hoy cena Pancho");
        } else 
		{
            mostrarMensaje("LOL que mal, no cenas pa");
        }
    } 
	else 
	{
        mostrarMensaje("LOL que bien");
    }
    return 0;
}

