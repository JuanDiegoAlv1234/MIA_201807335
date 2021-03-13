
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <cstdio>
#include "Analizador.h"
#include <vector>
using namespace std;
string leer(string efe);
Analizadores *EFE = new Analizadores();
vector<string> split(string str, char pattern);


//este solo divide la cadena en saltos de linea
//este metodo hace el analisis de cada expresion por partes
int main()
{
   vector<string> COMANDOS; 
  std::cout << "presione ENTER si quiere iniciar el mejor proyecto del mundo";
  std::cin.get();
  std::cout << "escriba el comando a ejectuar" << std::endl;

  string archivo_analizar;
  std::cin >> archivo_analizar;
  char aux='=';
  COMANDOS=split(archivo_analizar,aux);



  

  cout << archivo_analizar << "\n";
  std::cout << "presione ENTER si desea continuar";
  std::cin.get();
  EFE->analizar(leer(COMANDOS[1]));


}
vector<string> split(string str, char pattern)
{

    int posInit = 0;
    int posFound = 0;
    string splitted;
    vector<string> resultados;

    while (posFound >= 0)
    {
        posFound = str.find(pattern, posInit);
        splitted = str.substr(posInit, posFound - posInit);
        posInit = posFound + 1;
        resultados.push_back(splitted);
    }

    return resultados;
}
string leer(string leer)
{
  string cadena;
  string texto;
  ifstream archivo;
  archivo.open("entrada.txt", ios::in);
  if (archivo.fail())
  {

    cout

        << "efe";
  }

  while (!archivo.eof())

  {

    getline(archivo, texto);

    cadena += texto + "\n";
  }

  archivo.close();
  return cadena;
}
