#include "headers/Grafo.h"

// Implementación de Grafo para representación de lista de adyacencia
// Objetivo: Resolver el problema del flujo máximo en una red de transporte

// Constructor
Grafo::Grafo() {
    // Inicialización de listas
    sumideros = vector<int>();
    fuentes = vector<int>();
    adyacencia = vector<vector<pair<int, int>>>();
}

// Constructor con parámetros   
Grafo::Grafo(vector<int> sumideros, vector<int> fuentes, vector<std::vector<pair<int, int>>> adyacencia) {
    // Inicialización de listas
    this->sumideros = sumideros;
    this->fuentes = fuentes;
    this->adyacencia = adyacencia;
}

// Destructor
Grafo::~Grafo() {
    // Liberación de memoria
    sumideros.clear();
    fuentes.clear();
    adyacencia.clear();
}

// Método para agregar un nodo
void Grafo::agregarNodo(int nodo) {
    // Agregar nodo a la lista de adyacencia
    adyacencia.push_back(vector<pair<int, int>>());
}  

// Método para agregar una arista
void Grafo::agregarArista(int origen, int destino, int capacidad) {
    // Agregar arista a la lista de adyacencia
    adyacencia[origen].push_back(make_pair(destino, capacidad));
}

// Método para obtener la capacidad de una arista
int Grafo::getCapacidad(int origen, int destino) {
    // Recorrer la lista de adyacencia
    for (int i = 0; i < adyacencia[origen].size(); i++) {
        // Verificar si el destino es el correcto
        if (adyacencia[origen][i].first == destino) {
            // Retornar la capacidad
            return adyacencia[origen][i].second;
        }
    }
    // Retornar 0 si no se encuentra la arista
    return 0;
}

// Método para obtener la lista de adyacencia
vector<vector<pair<int, int>>> Grafo::getAdyacencia() {
    // Retornar la lista de adyacencia
    return adyacencia;
}

// Método para obtener la lista de nodos sumideros
vector<int> Grafo::getSumideros() {
    // Retornar la lista de sumideros
    return sumideros;
}

// Método para obtener la lista de nodos fuentes
vector<int> Grafo::getFuentes() {
    // Retornar la lista de fuentes
    return fuentes;
}

// Método para imprimir la lista de nodos sumideros
void Grafo::imprimirSumideros() {
    // Recorrer la lista de sumideros
    for (int i = 0; i < sumideros.size(); i++) {
        // Imprimir el nodo sumidero
        cout << sumideros[i] << " ";
    }
    // Salto de línea
    cout << endl;
}

// Método para imprimir la lista de nodos fuentes
void Grafo::imprimirFuentes() {
    // Recorrer la lista de fuentes
    for (int i = 0; i < fuentes.size(); i++) {
        // Imprimir el nodo fuente
        cout << fuentes[i] << " ";
    }
    // Salto de línea
    cout << endl;
}

// Método para imprimir el grafo
void Grafo::imprimirGrafo() {
    // Recorrer la lista de adyacencia
    for (int i = 0; i < adyacencia.size(); i++) {
        // Imprimir el nodo origen
        cout << i << ": ";
        // Recorrer la lista de adyacencia
        for (int j = 0; j < adyacencia[i].size(); j++) {
            // Imprimir el nodo destino y la capacidad
            cout << adyacencia[i][j].first << " (" << adyacencia[i][j].second << ") ";
        }
        // Salto de línea
        cout << endl;
    }
}