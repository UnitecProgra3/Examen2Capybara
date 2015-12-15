#include <iostream>
#include <list>
#include <fstream>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include "Pista.h"
#include "Evaluador.h"
#include "NodoBinario.h"

using namespace std;

//Escribe los datos del objeto pista (dado) en un archivo binario con el nombre dado en la posicion dada
//Nota: Se deben poder agregar varias pistas en un solo archivo
void escribir(string nombre_archivo, Pista*pista, int posicion)
{
}

//Devuelve una pista previamente escrita (con la funcion escribir()) en un archivo binario con nombre dado en la posicion dada
//Nota: Se deben poder leer varias pistas de un solo archivo
Pista* leer(string nombre_archivo, int posicion)
{
    Pista *pista = new Pista("",-1,-1,' ',false);
    return pista;
}

//Devuelve la cantidad de pistas almacenadas en el archivo con nombre_archivo que su atributo es_buena sea igual a true
int contarBuenas(string nombre_archivo)
{
    return -1;
}

//Devuelve la cantidad de numeros repetidos
//Nota: NO devuelve la cantidad de repeticiones
int contarRepetidos(multiset<int> mi_set)
{
    return -1;
}

//Devuelve true solo si c (dado) existe en a (dado) o en b (dado)
bool existe(queue<char> a, stack<char> b, char c)
{
    return false;
}

//Devuelve la llave asociada a valor (dado) en mi_mapa (dado)
string getKey(map<string,string>mi_mapa, string valor)
{
    return "";
}

//Establece en NULL el hijo izquerdo e hijo derecho del nodo cuyo valor es igual a valor (dado)
void cortarDecendencia(NodoBinario* raiz,int valor)
{
}

//Devuelve la profundidad a donde se encuentra el valor buscado (dado)
int getProfundidad(NodoBinario* raiz,int buscado)
{
    return -1;
}

//Establece en false todos los bits de byte (dado) excepto los ultimos dos
char borrar2Bits(char byte)
{
    return ' ';
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}

