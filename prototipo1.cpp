#include <iostream>
#include <stdlib.h>
using namespace std;

/* struct Nodo
{
    char letra;
    string palabra, significado1, significado2; 
    string sinonimo, antonimo;
}; */

void Abalizar();

int main()
{
    char letra;
    string palabra;
    cout << "De que letra deseas buscar informacion: ";
    cin >> letra;

    switch (letra)
    {
    case 'A':
        cout << "Palabras disponibles dentro del diccionario en la letra ( A )\n";
        cout << "Abalizar ," << "... , ..., ...\n";
        cout << "Selecciona la palabra que buscas: ";
        cin >> palabra;
        if ((palabra == "abalizar")|| (palabra == "Abalizar"))
        {
            Abalizar();
        }
        else
        {
            cout << "palabra no encontrada :(";
        }
        
    default:
        break;
    }
}

void Abalizar()
{
    char letra = 'A';
    string palabra = "Abalizar";
    string sig1 = "Poner balizas";
    string sig2 = "Senialar con balizas las pistas de los aeropuertos\ny aerodromos, o las desviaciones en las carreteras";
    string sinonimo = "Marcar , Senialar, Senializar";
    string antonimo = "No posee";
    
    cout << "-----------------------------------\n";
    cout << "Letra: " << letra << endl;
    cout << "Palabra: " << palabra << endl;
    cout << "Significado 1: " << sig1 << endl;
    cout << "Significado 2: " << sig2 << endl;
    cout << "Sinonimo: " << sinonimo << endl;
    cout << "Antonimo: " << antonimo << endl;
    cout << "-----------------------------------\n";
}