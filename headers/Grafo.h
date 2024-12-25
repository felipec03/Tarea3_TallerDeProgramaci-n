#include <iostream>
#include <vector>

using namespace std;

// Implementación de Grafo para representación de lista de adyacencia
// Objetivo: Resolver el problema del flujo máximo en una red de transporte
class Grafo {
public:
    // Implementación con listas de adyacencia
    // Lista de nodos sumideros
    vector<int> sumideros;
    // Lista de nodos fuente
    vector<int> fuentes;
    // Lista de adyacencia
    vector<vector<pair<int, int>>> adyacencia;

    // Constructor
    Grafo();

    // Constructor con parámetros
    Grafo(vector<int> sumideros, vector<int> fuentes, vector<std::vector<pair<int, int>>> adyacencia);

    // Destructor
    ~Grafo();

    // Método para agregar un nodo
    void agregarNodo(int nodo);

    // Método para agregar una arista
    void agregarArista(int origen, int destino, int capacidad);

    // Método para obtener la capacidad de una arista
    int getCapacidad(int origen, int destino);

    // Método para obtener la lista de adyacencia
    vector<vector<pair<int, int>>> getAdyacencia();

    // Método para obtener la lista de nodos sumideros
    vector<int> getSumideros();

    // Método para obtener la lista de nodos fuentes
    vector<int> getFuentes();

    // Método para imprimir la lista de nodos sumideros
    void imprimirSumideros();

    // Método para imprimir la lista de nodos fuentes
    void imprimirFuentes();

    // Método para imprimir el grafo
    void imprimirGrafo();
    
};