#include "Grafo.h"

// Implementación de FileReader para lectura de archivos
// El formato de lectura es
// Primera fila: Lista de nodos sumideros
// Segunda fila: Lista de nodos fuente
// Tercera fila para abajo: o = origen, d = destino y c = capacidad.

class FileReader {
public:
    // Constructor
    FileReader(std::string filename);

    // Destructor
    ~FileReader();

    // Método para leer el archivo
    void read();

    // Método para obtener el grafo
    Grafo getGrafo();
    
};