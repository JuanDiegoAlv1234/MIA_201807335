

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include "COMANDOS.H"
#include "string"
#include <cstdlib>
#include <dirent.h>
#include <cstdio>
#include <vector>

using namespace std;
class Analizadores
{
public:
    Analizadores()
    {
    }

    void analizar(string cadena);
    string leer(string cadena);
    vector<string> split(string str, char pattern);
};
string Analizadores::leer(string ruta)
{
    vector<string> DISCOS;
    string cadena;
    string texto;
    ifstream archivo;
    archivo.open(ruta, ios::in);
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

vector<string> Analizadores::split(string str, char pattern)
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

void Analizadores::analizar(string cadena)
{
    ListaMONT *Lista = new ListaMONT();

    cout << "\n"
         << "------cadena---"
         << "  " << cadena << "\n";
    system("pause");
    string MKDISK; //variable creada para verificar size y esas cosas
    char *part1;
    char texto[1000];
    string EXPRESIONES[1000];
    char salto_linea = '\n';
    vector<string> COMANDOS; //este arreglo contedra los comandos asi separados por salto de linea entonces 0 clavos
    COMANDOS = split(cadena, salto_linea);
    /*
  Entonces recorro ese arreglo y en su posicion pos_comandos le hare otro split
  */
    for (int pos_comandos = 0; pos_comandos < COMANDOS.size(); pos_comandos++)
    {
        /* entonces ahora lo que hare sera simple ya que ahora cada pos del 
   arreglo es en teorio en comando entonces ahora a cada posicion 
   tengo que hacerle un split de " " espacio porque asi nitido :V  la posicion
   0 me definira que es cada comando   */
        vector<string> Linea_Comando;
        char Espacio = ' ';
        Linea_Comando = split(COMANDOS[pos_comandos], Espacio);
        int Estado = 0;
        //entonces ahora como en teoria esta separado con espacios
        // entonces en la posicion 0 estaran todos los comandos y cero clavos
        if (Estado == 0)
        {
            /* code */

            if (Linea_Comando[0] == "Mkdisk")
            {
                cout << "\n"
                     << "Reconociendo comandos Mkdisk"
                     << "---"
                     << "\n";
                Estado = 1;
                /* code */
            }

            else if (Linea_Comando[0] == "mkdisk")

            {
                cout << "\n"
                     << "Reconociendo comandos Mkdisk"
                     << "---"
                     << "\n";
                Estado = 1;
            }
            else if (Linea_Comando[0] == "rmDisk")
            {

                cout << "\n"
                     << "Reconociendo comandos rmDisk"
                     << "---"
                     << "\n";
                Estado = 2;
                /* code */
            }
            else if (Linea_Comando[0] == "rmDisk")
            {

                cout << "\n"
                     << "Reconociendo comandos rmDisk"
                     << "---"
                     << "\n";
                Estado = 2;
                /* code */
            }

            else if (Linea_Comando[0] == "fdisk")
            {
                /* code */

                cout << "\n"
                     << "Reconociendo comandos fdisk"
                     << "---"
                     << "\n";
                Estado = 3;
                /* code */
            }

            else if (Linea_Comando[0] == "mount")
            {

                cout << "\n"
                     << "Reconociendo comandos mount"
                     << "---"
                     << "\n";
                Estado = 4;
            }
            else if (Linea_Comando[0] == "unmount")
            {

                cout << "\n"
                     << "Reconociendo comandos unmount_"
                     << "---"
                     << "\n";
                Estado = 5;
            }
            else if (Linea_Comando[0] == "exec")
            {

                cout << "\n"
                     << "c o m a n d o E X E C  reconocido ... procediendo a ejecutar"
                     << "---"
                     << "\n";
                Estado = 6;
            }
            else if (Linea_Comando[0] == "rep")
            {
                cout << "\n"
                     << "c o m a n d o  rep   ...procediendo a hacer los reportes osi osi"
                     << "---"
                     << "\n";
                Estado = 7;
            }
            else if (Linea_Comando[0] == "mfks")
            {
                cout << "\n"
                     << "c o m a n d o  mfks   ...comando mfks procediendo a  formatear el diskooo"
                     << "---"
                     << "\n";
                Estado = 8;
            }

            else if (Linea_Comando[0] == " ")
            { //espacio?
                /* code */
            }
            else if (Linea_Comando[0] == "")
            { //espacio?
                /* code */
            }

            else
            {

                cout << "\n"
                     << "FFFFFFFFF***"
                     << Linea_Comando[0] << "--------"
                     << "comando no reconocido por el sistema"
                     << "\n";
            }

            if (Estado == 1)
            {

                MKDISCO *disco = new MKDISCO();
                int size = 0;

                string unidad_disko = "";
                string path = "";
                string fit;
                vector<string> MKS;
                char Igualmk = '=';
                int tamanio_Linea = Linea_Comando.size();

                for (int rec_comando = 1; rec_comando < tamanio_Linea; rec_comando++)
                {

                    string MKDISKs = Linea_Comando[rec_comando];

                    MKS = split(MKDISKs, Igualmk);

                    if (MKS[0] == "-Size")
                    {
                        cout << "\n";
                        cout << "disco de tamaño"
                             << "==" << MKS[1] << "\n";
                        string aux2 = MKS[1];
                        size = stoi(aux2);

                        /* code */
                    }
                    else if (MKS[0] == "–size")
                    {
                        cout << "\n";
                        cout << "disco de tamaño"
                             << "==" << MKS[1] << "\n";
                        string aux2 = MKS[1];
                        size = stoi(aux2);

                        /* code */
                    }
                    else if (MKS[0] == "-path")
                    {
                        cout << "ruta del disko hermoso------" << MKS[1] << "-----";
                        cout << "\n";
                        path = MKS[1];
                    }
                    else if (MKS[0] == "–path")
                    {
                        cout << "RUTAA DEL DISKOOO---" << MKS[1] << "----";
                        path = MKS[1];
                        cout << "**";
                    }
                    else if (MKS[0] == "-u")
                    {
                        cout << "unidad del disco hermoso------" + MKS[1];
                        cout << "\n";
                        unidad_disko = MKS[1];
                    }
                    else if (MKS[0] == "–u")
                    {
                        cout << "unidad del disco hermoso---" + MKS[1];

                        unidad_disko = MKS[1];
                        cout << "\n";
                    }

                    else if (MKS[0] == "-U")
                    {
                        cout << "unidad del disco hermoso---" + MKS[1];
                        cout << "\n";
                        unidad_disko = MKS[1];
                    }
                    else if (MKS[0] == "–U")
                    {
                        cout << "unidad del disco hermoso---" + MKS[1];
                        cout << "\n";
                        unidad_disko = MKS[1];
                    }
                    else
                    {

                        cout << "\n"
                             << "FFFFFFFFF"
                             << MKS[0]
                             << "comando no reconocido por el sistema"
                             << "\n";
                    }
                }

                disco->crear_disco(path, unidad_disko, size);
            } /**
            
            
            EL estado 2 estara definido por las rutas en donde se eliminara el disco xd
            */

            else if (Estado == 2)
            {
                vector<string> rmk;
                char Igualrmk = '=';
                int tamanio_Linea_rmk = Linea_Comando.size();
                for (int cont_rmk = 1; cont_rmk < tamanio_Linea_rmk; cont_rmk++)
                {
                    rmk = split(Linea_Comando[cont_rmk], Igualrmk);
                    if (rmk[0] == "-path")
                    {
                        cout << "disko a eliminar en la ruta------" << rmk[1] << "-----";
                        cout << "\n";
                        cout << "Desea eliminar realmente el disco ? si es asi presione 1 perro"
                             << "\n";
                        int opcion_eliminar;
                        std::cin >> opcion_eliminar;
                        if (opcion_eliminar == 1)
                        {

                            cout << "---"
                                 << "disco eliminado correctamente"
                                 << "...";
                            /* code */

                            const char *xd = &rmk[1][0];

                            std::remove(xd);
                        }
                        else
                        {

                            cout << "no se elimino el disco porque no presiono 1"
                                 << "\n";
                        }
                    }
                    else
                    {

                        cout << "\n"
                             << "FFFFFFFFF"
                             << rmk[0]
                             << "comando no reconocido por el sistema"
                             << "\n";
                    }
                }
                /* code */
            }
            //el estado 3 estara definido por el f disk que son las particiones del disko

            else if (Estado == 3)
            {
                partition *disco = new partition();
                int size;
                string type;
                string path;
                string name;
                string unit;
                int add = 0;
                string delete_ = "";
                vector<string> fdisk;
                char Igualfdisk = '=';
                int tamanio_Linea_disk = Linea_Comando.size();
                for (int cont_disk = 1; cont_disk < tamanio_Linea_disk; cont_disk++)
                {

                    fdisk = split(Linea_Comando[cont_disk], Igualfdisk);
                    // cout<<Linea_Comando[cont_disk]<<"--*-*-*-*-*-*9-*-*-*-*";
                    if (fdisk[0] == "-path")
                    {

                        cout << "ruta de la particion---" + fdisk[1];
                        cout << "\n";
                        path = fdisk[1];
                    }
                    else if (fdisk[0] == "–path")
                    {

                        cout << "ruta de la particion---" + fdisk[1];
                        cout << "\n";
                        path = fdisk[1];

                        /* code */
                    }
                    else if (fdisk[0] == "-type")
                    {

                        cout << "tipo  de la particion---" + fdisk[1];
                        cout << "\n";
                        type = fdisk[1];

                        /* code */
                    }
                    else if (fdisk[0] == "–u")
                    {

                        cout << "unidad de la particion---" + fdisk[1];
                        cout << "\n";
                        unit = fdisk[1];

                        /* code */
                    }
                    else if (fdisk[0] == "–U")
                    {

                        cout << "unidad de la particion---" + fdisk[1];
                        cout << "\n";
                        /* code */
                        unit = fdisk[1];
                    }
                    else if (fdisk[0] == "-name")
                    {

                        cout << "nombre  de la particion---" + fdisk[1];
                        cout << "\n";
                        /* code –name */
                    }
                    else if (fdisk[0] == "–name")
                    {

                        cout << "nombre  de la particion---" + fdisk[1];
                        cout << "\n";
                        name = fdisk[1];
                        /* code –name -add */
                    }

                    else if (fdisk[0] == "-add")
                    {

                        cout << "cantidad a agregar en la particion---" + fdisk[1];
                        cout << "\n";
                        string aux2 = fdisk[1];
                        add = stoi(aux2);
                        ;
                        /* code –name -add */
                    }

                    else if (fdisk[0] == "–add")
                    {

                        cout << "cantidad a agregar en   la particion---" + fdisk[1];
                        cout << "\n";
                        string aux2 = fdisk[1];
                        add = stoi(aux2);

                        /* code –name -add */
                    }

                    else if (fdisk[0] == "-delete")
                    {

                        cout << "borrar particion---" + fdisk[1];
                        cout << "\n";
                        delete_ = fdisk[1];
                        /* code –delete */
                        //esto lo manejare despues
                    }
                    else if (fdisk[0] == "-delete")
                    {

                        cout << "borrar particion---" + fdisk[1];
                        cout << "\n";
                        delete_ = fdisk[1];
                        /* code –delete */
                        //esto lo manejare despues
                    }
                    else if (fdisk[0] == "-size")
                    {

                        cout << "tamaño  de la particion---" + fdisk[1];
                        cout << "\n";
                        string tamanioF = fdisk[1];
                        size = stoi(tamanioF);

                        /* code –Size */
                    }
                    else if (fdisk[0] == "–Size")
                    {

                        cout << "tamaño  de la particion---" + fdisk[1];
                        cout << "\n";
                        string aux2 = fdisk[1];
                        size = stoi(aux2);
                        /* code */
                    }
                    else
                    {
                        cout << "\n"
                             << "FFFFFFFFF"
                             << "comando no reconocido por el sistema"

                             << "\n";
                    }
                }
                disco->crearparticion(size, type, path, name, unit, delete_, add);
                disco->imprimirdatosdisco(path);
                /* code */
            }

            else if (Estado == 4)
            {

                cout << "estado4";

                string name;
                string path;
                vector<string> _CMOUNT_;
                char Igual_CMOUNT_ = '=';
                int tamanio_Linea__CMOUNT_ = Linea_Comando.size();
                for (int rec__CMOUNT_ = 0; rec__CMOUNT_ < tamanio_Linea__CMOUNT_; rec__CMOUNT_++)
                {
                    string comandoMount = Linea_Comando[rec__CMOUNT_];
                    _CMOUNT_ = split(comandoMount, Igual_CMOUNT_);
                    if (_CMOUNT_[0] == "-path")
                    {

                        cout << "ruta del disco ---" + _CMOUNT_[1];
                        cout << "\n";
                        path = _CMOUNT_[1];
                    }
                    else if (_CMOUNT_[0] == "–path")
                    {

                        cout << "ruta del disco---" + _CMOUNT_[1];
                        cout << "\n";
                        path = _CMOUNT_[1];
                    }
                    else if (_CMOUNT_[0] == "-name")
                    {

                        cout << "nombre  de la particion---" + _CMOUNT_[1];
                        cout << "\n";

                        name = _CMOUNT_[1];
                    }
                    else if (_CMOUNT_[0] == "–name")
                    {

                        cout << "nombre  de la particion---" + _CMOUNT_[1];
                        cout << "\n";
                        name = _CMOUNT_[1];
                        /* code –name */
                    }
                }
                Lista->agregar(path, name);
                Lista->imprimir();
            }

            else if (Estado == 5)
            {
                ListaMONT *Lista = new ListaMONT();

                string id;
                vector<string> un_CMOUNT_;
                char Igual_un_CMOUNT_ = '=';
                int tamanio_Linea_un__CMOUNT_ = Linea_Comando.size();
                /* code */
                for (int efe = 0; efe < tamanio_Linea_un__CMOUNT_; efe++)
                {
                    un_CMOUNT_ = split(Linea_Comando[efe], Igual_un_CMOUNT_);

                    if (Linea_Comando[0] == "-id")
                    {
                        cout << "id  de la montura a eliminar---" + un_CMOUNT_[1];
                        cout << "\n";
                        id = un_CMOUNT_[1];
                        /* code */
                    }

                    /* code */
                }
                Lista->eliminar(id);
            }
            else if (Estado == 6)
            {

                int size = 0;

                string path = "";
                vector<string> exec;
                char Igual_exec = '=';
                int tamanio_Linea = Linea_Comando.size();

                for (int rec_comando = 1; rec_comando < tamanio_Linea; rec_comando++)
                {

                    exec = split(Linea_Comando[rec_comando], Igual_exec);
                    if (exec[0] == "-path")
                    {
                        std::cout << "se ejecutara el comando exec" << std::endl;
                        cout << "de todo lo que esta en la ruta"
                             << "--" << exec[1] << "\n";

                        analizar(leer(exec[1]));

                        /*
                         
                         para que cree este comando exec?  buen apregunta jajajjaja
                         pero enrealidad este señores sera un vergueo jajajaj porque basicamente lo 
                         que voy a hacer amigos amigas jajajaj es que cuando encontre el comando exec
                         voy a llamar otra al metodo al analizar pero obteniendo la cadena que me devuelva el archivo del path
                         */
                        /* code */
                    }
                    else
                    {

                        std::cout << "comando no reconocido por el sistemaaaaaaaaa" << std::endl;
                    }
                }
            }
            else if (Estado == 7)
            {

                int size;
                string type;
                string path;
                string name;
                string id;
                string unit;
                int add = 0;
                string delete_ = "";
                vector<string> rep;
                char Igualrep = '=';
                int tamanio_Linea_rep = Linea_Comando.size();
                for (int rec_comando = 1; rec_comando < tamanio_Linea_rep; rec_comando++)
                {

                    rep = split(Linea_Comando[rec_comando], Igualrep);
                    if (rep[0] == "-path")
                    {

                        cout << "ruta donde se guardara el reporte ---" + rep[1];
                        cout << "\n";
                        path = rep[1];
                    }
                    else if (rep[0] == "–path")
                    {
                        cout << "ruta donde se guardara el reporte ---" + rep[1];
                        cout << "\n";
                        path = rep[1];
                    }
                    else if (rep[0] == "–name")
                    {
                        cout << "REPORTE  ---" + rep[1];
                        cout << "\n";
                        name = rep[1];
                    }
                      else if (rep[0] == "-name")
                    {
                        cout << "REPORTE  ---" + rep[1];
                        cout << "\n";
                        name = rep[1];
                        //-id –
                    }
                    
                      else if (rep[0] == "-id")
                    {
                        cout << "id  de la particion ala que se le hara el reporte  ---" + rep[1];
                        cout << "\n";
                        id = rep[1];
                        //-id –
                    }
                    
                      else if (rep[0] == "–id")
                    {
                        cout << "nombre de la particion ala que se le hara el reporte  ---" + rep[1];
                        cout << "\n";
                        id = rep[1];
                        //-id –
                    }
                }
            }
        }
    }
}