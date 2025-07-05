#include <cstdio>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

const char START = 'S';
const char END = 'E';
const char PATH = ' ';
const char WALL = '*';
const char SOLVED_PATH = '.';

bool celdaValida(const vector<string>& maze, int row, int col) {
    return row >= 0 && row < (int)maze.size() &&
           col >= 0 && col < (int)maze[row].size();
}

bool resolverLaberinto(vector<string>& maze, int row, int col) {
    if (!celdaValida(maze, row, col))
        return false;

    char& celda = maze[row][col];

    if (celda == WALL || celda == SOLVED_PATH)
        return false;

    if (celda == END)
        return true;

    if (celda != START)
        celda = SOLVED_PATH;

    // Intentar moverse en las 4 direcciones
    if (resolverLaberinto(maze, row - 1, col)) return true; // arriba
    if (resolverLaberinto(maze, row + 1, col)) return true; // abajo
    if (resolverLaberinto(maze, row, col - 1)) return true; // izquierda
    if (resolverLaberinto(maze, row, col + 1)) return true; // derecha

    // Si no hay camino, desmarcar
    if (celda != START)
        celda = PATH;

    return false;
}

void imprimirLaberinto(const vector<string>& maze) {
    for (int i = 0; i < (int)maze.size(); i++) {
        for (int j = 0; j < (int)maze[i].size(); j++) {
            printf("%c", maze[i][j]);
        }
        printf("\n");
    }
}

int main() {
    vector<string> maze;
    string linea;
    ifstream archivo("Laberinto.txt");

    if (!archivo.is_open()) {
        printf("No se pudo abrir el archivo Laberinto.txt\n");
        return 1;
    }

    while (getline(archivo, linea)) {
        maze.push_back(linea);
    }

    archivo.close();

    int startRow = -1, startCol = -1;
    int endRow = -1, endCol = -1;

    // Buscar posiciones de S y E
    for (int i = 0; i < (int)maze.size(); i++) {
        for (int j = 0; j < (int)maze[i].size(); j++) {
            if (maze[i][j] == START) {
                startRow = i;
                startCol = j;
            }
            if (maze[i][j] == END) {
                endRow = i;
                endCol = j;
            }
        }
    }

    if (startRow == -1 || startCol == -1) {
        printf("No se encontro el punto de inicio 'S' en el laberinto.\n");
        return 1;
    }

    if (endRow == -1 || endCol == -1) {
        printf("No se encontro el punto de salida 'E' en el laberinto.\n");
        return 1;
    }

    if (resolverLaberinto(maze, startRow, startCol)) {
        printf("\nCamino encontrado:\n\n");
        imprimirLaberinto(maze);
    } else {
        printf("\nNo se encontro un camino hacia 'E'.\n");
    }

    return 0;
}
