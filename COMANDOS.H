
#include "string"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <ctime>
#include <sstream>

#include <string.h>
#include <sys/stat.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <time.h>
#include <sstream>
#include <cstdlib>
#include <fstream>
#include "EDD.H"
#include <string>
using namespace std;

/**
 * mount mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmount
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmount
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountvv
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountvv
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountvv
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountvvv
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountv
 * vmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountv
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmount
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmount
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountv
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountv
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmount
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountv
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountvvvvvv
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountvvv
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountvv
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountv
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmount
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmount
 * mountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountmountv
 * 
 * 
 * 
 * 
 * 
 */
class Mont
{

public:
    Mont()
    {
    }
    Mont *sig;
    Mont *ant;
    vector<particion> Particiones;
    Mont(string ruta, string nombre);
    string nombre;
    string ruta;
    int NombreDisco;
    string id;
    void ImprimirX(string path);
};
void Mont::ImprimirX(string path)
{

    FILE *arch;
    arch = fopen(path.c_str(), "rb+");
    if (arch == NULL)
    {
        //return 0;
    }
    mbr MBR;
    fseek(arch, 0, SEEK_SET);
    fread(&MBR, sizeof(mbr), 1, arch);
    fclose(arch);
    std::cout << "\n----------DATOS DEL DISCO-----\n";
    std::cout << "\nMBR NAME: " << MBR.mbr_disk_signature;
    std::cout << "\nMBR SIZE: " << MBR.mbr_tamano;

    for (int i = 0; i < 4; i++)
    {
        //  if(MBR.mbr_partitions[i]!=NULL){
        if (MBR.mbr_partitions[i].part_status == '1')
        {
            std::cout << "\n\nPARTICION : " << i;
            std::cout << "\nPARTICION STATUS : " << MBR.mbr_partitions[i].part_status;
            std::cout << "\nPARTICION TYPE : " << MBR.mbr_partitions[i].part_type;
            std::cout << "\nPARTICION FIT : " << MBR.mbr_partitions[i].part_fit;
            std::cout << "\nPARTICION START : " << MBR.mbr_partitions[i].part_start;
            std::cout << "\nPARTICION SIZE : " << MBR.mbr_partitions[i].part_size;
            std::cout << "\nPARTICION NAME : " << MBR.mbr_partitions[i].part_name;
            // }
        }
    }
}
Mont::Mont(string ruta, string nombre)
{

    this->ruta = ruta;
    this->id = "35";

    FILE *arch;
    arch = fopen(ruta.c_str(), "rb+");
    if (arch == NULL)
    {
    }

    mbr MBR;
    fseek(arch, 0, SEEK_SET);
    fread(&MBR, sizeof(mbr), 1, arch);
    fclose(arch);
    this->id += to_string(MBR.mbr_disk_signature);

    string aux;
    aux = 65 +
          rand() % (90 - 25);
    this->id += aux;
    this->NombreDisco = MBR.mbr_disk_signature;
    for (int i = 0; i < 4; i++)
    {
        //  if(MBR.mbr_partitions[i]!=NULL){
        if (MBR.mbr_partitions[i].part_name == nombre)
        {
            std::cout << "encontrada la siguiuiente particion" << std::endl;
            this->Particiones.push_back(MBR.mbr_partitions[i]);
            std::cout << "\nNOmbre de la parcion:::::::::::::::::::::: : " << MBR.mbr_partitions[i].part_name;
            std::cout << "\nEstado de la particion:::::::::::: : " << MBR.mbr_partitions[i].part_status;
            std::cout << "\nTipo Particion:::::::::::::::::::::::: : " << MBR.mbr_partitions[i].part_type;

            std::cout << "\nInicio de la particion:::::::::::::::::::::::::::" << MBR.mbr_partitions[i].part_start;
            std::cout << "\nTamaño de la particion:::::::::::::::::::::" << MBR.mbr_partitions[i].part_size;
            std::cout << "\nAjute ::::::::::::::::::::::::::::::::::::" << MBR.mbr_partitions[i].part_fit;
        }
    }

    std::cout << "\n"
              << "montado creado correctamente presione ENTER si quiere continuar" << this->id;
    std::cin.get();
}
class ListaMONT
{

public:
    Mont *primero;
    Mont *final;
    int contDisco;
    int contParticiones;
    ListaMONT()
    {

        primero = NULL;
        final = NULL;
        contDisco = 0;
    }

    void imprimir()
    {
        Mont *alv = this->primero;
        while (alv != NULL)
        {
            cout << "id----" << alv->id << "\n"
                 << "---ruta---" << alv->ruta << "----Nombre del disco MOntado" << alv->NombreDisco
                 << "\n"
                 << "---";

            cout << alv->Particiones.size() << "------*-*-*-*-";
            for (int i = 0; i < alv->Particiones.size(); i++)
            {
                cout << "start---" << alv->Particiones[i].part_start << "\n";
                cout << "fit---" << alv->Particiones[i].part_fit << "\n";
                cout << "size---" << alv->Particiones[i].part_size << "\n";
                cout << "status---" << alv->Particiones[i].part_status << "\n";

                /* code */
            }
            std::cout << "---";
            std::cin.get();

            alv = alv->sig;
        }
    }
    void agregar(string ruta, string nombre)
    {

        Mont *alv = new Mont(ruta, nombre);
        alv->id = obtenerID(alv, nombre);
        if (this->primero != NULL)
        {
            this->final->sig = alv;
            alv->ant = this->final;
            alv->sig = NULL;
            this->final = alv;
        }
        else
        {

            this->primero = alv;
            this->final = this->primero;
            this->primero->sig = NULL;
            this->primero->ant = NULL;
        }
    }
    bool validarNombre(int nombre)
    {
        Mont *rec = new Mont();
        rec = this->primero;
        while (rec != NULL)
        {
            if (rec->NombreDisco == nombre)
            {
                return true;
                /* code */
            }

            rec = rec->sig; /* code */
        }

        return false;
    }
    int obtener(int nombre, string part)
    {

        Mont *rec = new Mont();
        rec = this->primero;
        int cont = 0;
        while (rec != NULL)
        {
            if (rec->NombreDisco == nombre)

            {
                if (rec->Particiones[0].part_name == part)
                {
                    /* code */
                }

                cont++;
                cout << "\n"
                     << "siuuuuuuuuuuu" << cont << "\n";
                /* code */
            }

            rec = rec->sig; /* code */
        }

        return cont;
    }
    string encontrar_ruta(string ID)
    {

        string ruta = "";
        Mont *alv = new Mont();
        alv = this->primero;

        while (alv != NULL)
        {
            if (alv->id == ID)
            {
                std::cout << "se encontro el ide de la particon ala que se le hara el reporte" << std::endl;
                ruta = alv->ruta;
                /* code */
            }
            return ruta;

            alv = alv->sig; /* code */
        }
    }
    string obtenerID(Mont *efe, string nombre_part)
    {
        string ID = "35";
        int cont_part = 0;
        if (validarNombre(efe->NombreDisco) == true)
        {
            ID += to_string(this->contDisco);
            cont_part = obtener(efe->NombreDisco, nombre_part);

            string aux_cont;
            aux_cont = 65 + cont_part;
            cout << "\n"
                 << "ID" << aux_cont << "---";
            ID += aux_cont;

            /* code */

            /* code */
        }
        else
        {
            this->contDisco++;
            ID += to_string(this->contDisco);
            cont_part = obtener(efe->NombreDisco, nombre_part);
            /*    if (cont_part>0)
            { cont_part++;
                /* code 
            }
            */
            string aux_cont;
            aux_cont = 65 + cont_part;
            cout << "\n"
                 << "ID" << aux_cont << "---";
            ID += aux_cont;
        }
        return ID;
    }
    void eliminar(string id)
    {
        bool a = false;
        Mont *alv = this->primero;
        Mont *alv2 = new Mont();
        while (alv != NULL)

        {
            if (alv->id == id)
            {
                cout << "se encontro el id del mount---" + id;
                cout << "\n";
                a = true;
                if (alv == this->primero)
                {

                    this->primero = this->primero->sig;
                }
                else if (alv->sig == NULL)
                {
                    alv->ant = this->final;
                }

                else
                {

                    alv->sig->ant = alv->ant;
                    alv->ant->sig = alv->sig;
                }
            }

            alv = alv->sig;
        }

        if (a == true)
        {
            cout << "se encontro el id del mount---" + id;
            cout << "\n";
        }

        else
        {

            cout << " noooooooooooooooo se encontro el id del mount---" + id;
            cout << "\n";
        }
    }
};

/* REPORTE  REPORTE REPORTE REPORTE REPORTE REPORTE REPORTE REPORTE REPORTE 
REPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTE
REPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEVVV
REPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTE
REPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEV
REPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTE * /
REPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEV
REPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTE
REPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTE
REPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEV
VREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTE
REPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTE
REPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEVVVREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTE
REPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTE
REPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEVV
REPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEREPORTEVVVREPORTE
*/

class Reporte
{

public:
    Reporte()
    {
    }

    void reporte(string name, string path, string id, ListaMONT *efe);
    void MBR_(string path, string id, ListaMONT *efe);
};
void Reporte::reporte(string name, string path, string id, ListaMONT *efe)
{

    /**AHORA LO QUE HARE SERA SIMPLEMENTE  IR  VERIFIANDO QUE TIPO DE REPORTE PIDE XD Y PUES YA ARMAR EL VERGUEO */
    if (name == "mbr")

    {
        std::cout << "se creara el reporte del MBR" << std::endl;
        MBR_(path, id, efe);
    }
}
void Reporte ::MBR_(string path, string id, ListaMONT *efe)
{
    Mont *alv = new Mont();
    string ruta;
    alv = efe->primero;
    ruta = efe->encontrar_ruta(id);

    FILE *arch;
    arch = fopen(ruta.c_str(), "rb+");
    if (arch == NULL)
    {
        //return 0;
    }
    mbr MBR;
    fseek(arch, 0, SEEK_SET);
    fread(&MBR, sizeof(mbr), 1, arch);
    fclose(arch);
    ofstream ar;

    ar.open("MBR.txt", ios::out);
    if (ar.fail())
    {
        cout << "F";
    }
    ar << "digraph G{ \n";

    ar << "     node [shape=record fontname=Arial]";
    ar << "disco [label="
       << "\""
       << "DISCO----" << MBR.mbr_disk_signature << "\"";
    ar << "  aHtmlTable ["
       << "shape = plaintext"
       << "color = orange"
       << "  label = <"

       << "       <table border = '1' cellborder = '1'> ";
    ar << "<tr><td>"
       << "NOMBRE "
       << "</td>"
       << "<td>"
       << "valor"
       << "</td></tr>";

    ar << "<tr><td>"
       << "tamaño_MBR "
       << "</td>"
       << "<td>" << MBR.mbr_tamano << "</td></tr>";

    ar << "<tr><td>"
       << "FECHA_CREACION"
       << "</td>"
       << "<td>" << MBR.mbr_fecha_creacion << "</td></tr>";

    ar << "<tr><td>"
       << "FIT "
       << "</td>"
       << "<td>" << MBR.disk_fit << "</td></tr>";
    int cont_ = 0;
    for (int i = 0; i < 4; i++)
    {
        //  if(MBR.mbr_partitions[i]!=NULL){
        if (MBR.mbr_partitions[i].part_status == '1')
        {
            cont_++;
            string cont;
            cont = to_string(cont_);
            ar << "<tr><td>"
               << "par_status_ " << cont
               << "</td>"
               << "<td>" << MBR.mbr_partitions[i].part_status << "</td></tr>";
            ar << "<tr><td>"
               << "par_type_ " << cont
               << "</td>"
               << "<td>" << MBR.mbr_partitions[i].part_type << "</td></tr>";
            ar << "<tr><td>"
               << "par_fit_ " << cont
               << "</td>"
               << "<td>" << MBR.mbr_partitions[i].part_fit << "</td></tr>";
            ar << "<tr><td>"
               << "par_star_ " << cont
               << "</td>"
               << "<td>" << MBR.mbr_partitions[i].part_start << "</td></tr>";
            ar << "<tr><td>"
               << "par_size_ " << cont
               << "</td>"
               << "<td>" << MBR.mbr_partitions[i].part_size << "</td></tr>";
            ar << "<tr><td>"
               << "par_name_ " << cont
               << "</td>"
               << "<td>" << MBR.mbr_partitions[i].part_name << "</td></tr>";
            ar << "<tr><td>"
               << "par_status " << cont
               << "</td>"
               << "<td>" << MBR.mbr_partitions[i].part_status << "</td></tr>";
            // }

        }
    }
    ar<<"   </table>  >];}";
    ar.close();


    //primero recorro para encontrar el disco
}

/**
 disco disco disco * @brief 
 disco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco disco* 
 disco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco disco
 disco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco disco
 disco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco disco
 disco disco disco discodisco disco disco discovdisco disco disco discovvdisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco disco
 disco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco disco
 disco disco disco discodisco disco disco discovdisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco disco
 disco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco discodisco disco disco disco

  
 * 
 * 
 * 
 * 
 */
class MKDISCO
{
public:
    MKDISCO()
    {
    }
    int size;
    static int cont;
    string fechacreacion;
    string unidad_disko;
    string path;
    string fit;
    void crear_disco(string path, string unidad_disko, int size);
};
void MKDISCO::crear_disco(string path, string unidad_disko, int size)
{
    MKDISCO *disco = new MKDISCO();
    disco->unidad_disko = unidad_disko;
    disco->size = size;
    disco->path = path;

    mbr MBR_P;
    FILE *arch;
    arch = fopen(disco->path.c_str(), "wb");
    if (arch == NULL)
    {
        disco->path = "-path=/home/juandiegoalv/Escritorio/proyecto1/discoQUEMADO.dk";
        arch = fopen(disco->path.c_str(), "wb");

        exit(1);
    }

    char buffer[1024];

    if (disco->unidad_disko == "K")
    {

        MBR_P.mbr_tamano = disco->size * 1024;

        for (int i = 0; i < 1024; i++)
            buffer[i] = '\0';

        for (int i = 0; i < (disco->size); i++)
            fwrite(&buffer, 1024, 1, arch);

        fclose(arch);
    }

    else if (disco->unidad_disko == "M" || disco->unidad_disko.empty() == 1)
    {
        MBR_P.mbr_tamano = disco->size * 1024 * 1024;
        for (int i = 0; i < 1024; i++)
            buffer[i] = '\0';
        for (int i = 0; i < (disco->size * 1024); i++)
            fwrite(&buffer, 1024, 1, arch);
        fclose(arch);
    }

    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    std::ostringstream oss;
    oss << std::put_time(&tm, "%d-%m-%Y %H-%M-%S");
    auto str = oss.str();

    std::cout << str << std::endl;
    string fecha = str;
    disco->fechacreacion = fecha;
    cont++;
    MBR_P.mbr_disk_signature = (rand() % 10);
    strcpy(MBR_P.mbr_fecha_creacion, fecha.c_str());

    if (disco->fit.empty() == true)
    {
        strcpy(MBR_P.disk_fit, "F");
    }
    else
    {
        strcpy(MBR_P.disk_fit, disco->fit.c_str());
    }

    particion Particion_VACIA;
    Particion_VACIA.part_status = '0';
    Particion_VACIA.part_type = '-';
    Particion_VACIA.part_fit = '-';
    Particion_VACIA.part_start = -1;
    Particion_VACIA.part_size = -1;
    Particion_VACIA.part_name[0] = '\0';
    for (int i = 0; i < 4; i++)
        MBR_P.mbr_partitions[i] = Particion_VACIA;

    arch = fopen(disco->path.c_str(), "rb+");
    if (arch != NULL)
    {
        fseek(arch, 0, SEEK_SET);
        fwrite(&MBR_P, sizeof(mbr), 1, arch);
        fclose(arch);

        std::cout << "Disco creado correctamente presione ENTER si quiere continuar";
        std::cin.get();
    }
}

/* partition partitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartition
partitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartition
partitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionv
partitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionv
partitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartition
partitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionv
vcpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionv
partitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionv
partitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartition
partitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionvv
vpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionvpartition*/
/*
partitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitionpartitio
*/

class partition
{
public:
    partition()
    {
    }
    int size;
    string type;
    string unit;
    string path;
    string fit;
    string borrar;
    string name;
    void agregar(int size, string type, string path, string name, string unit, string borrar, string add);
    void crearparticion(int size, string type, string path, string name, string unit, string borrar, int add);
    void imprimirdatosdisco(string path);
};
void partition::agregar(int size, string type, string path, string name, string unit, string borrar, string add)
{
}
void partition::crearparticion(int size, string type, string path, string name, string unit, string borrar, int add)
{

    partition *disco = new partition();

    FILE *arch;
    disco->name = name;
    disco->path = path;
    disco->size = size;
    disco->type = type;
    disco->unit = unit;

    std::cout << "tipo de particon entrante" << disco->type << std::endl;
    int tamanoparticion;

    //vamos a arreglar esta sheat xd jajaja
    /*
   lo que vamos a hacer primero es verificar que no se quiera eliminar  la particion 
   y tambien vamos a ver si se quiere agregar 
   luego ya veremos el tipo que es y voy  acrear ahi un par de metodos para ver a cual irme y asi sucesivamente ...
   */

    if (borrar == "")
    {

        if (add > 0)
        {

            /* code */
        }
        else
        {
            if (disco->type == "P" || disco->type.empty() == true)
            {
                std::cout << "viene una primaria" << std::endl;

                /* en este  apartado voy a manejar solo particiones primarias*/

                arch = fopen(disco->path.c_str(), "rb+");

                if (arch == NULL)
                {

                    std::cout << "efe el disco que anda buscando amigo mio no existe " << std::endl;
                    return;
                }

                fseek(arch, 0, SEEK_SET);
                mbr MBR;

                fread(&MBR, sizeof(mbr), 1, arch);

                for (int rec_mbr = 0; rec_mbr < 4; rec_mbr++)
                {
                    if (MBR.mbr_partitions[rec_mbr].part_status == '0')
                    {
                        MBR.mbr_partitions[rec_mbr].part_type = 'P';

                        if (disco->unit == "K" || disco->unit.empty() == true)
                        {
                            tamanoparticion = disco->size * 1024;
                        }
                        else if (disco->unit == "M")
                        {
                            tamanoparticion = disco->size * 1024 * 1024;
                        }
                        else if (disco->unit == "B")
                        {
                            tamanoparticion = disco->size;
                        }

                        if (disco->fit == "B")
                        {
                            MBR.mbr_partitions[rec_mbr].part_fit = 'B';
                        }
                        else if (disco->fit == "F")
                        {
                            MBR.mbr_partitions[rec_mbr].part_fit = 'F';
                        }
                        else if (disco->fit == "W" || disco->fit.empty() == true)
                        {
                            MBR.mbr_partitions[rec_mbr].part_fit = 'W';
                        }

                        if (tamanoparticion < MBR.mbr_tamano)
                        {
                            std::cout << "si se puede crear la particion xdxd" << std::endl;
                            /* code */
                            strcpy(MBR.mbr_partitions[rec_mbr].part_name, disco->name.c_str());
                            MBR.mbr_partitions[rec_mbr].part_status = '1';

                            MBR.mbr_partitions[rec_mbr].part_size = tamanoparticion;
                            if (rec_mbr == 0)
                            {
                                MBR.mbr_partitions[rec_mbr].part_start = sizeof(mbr);
                                /* code */
                            }
                            else
                            {

                                if (rec_mbr > 0)
                                {
                                    MBR.mbr_partitions[rec_mbr].part_start = MBR.mbr_partitions[rec_mbr - 1].part_start + tamanoparticion;

                                    /* code */
                                }
                            }
                        }
                        else
                        {

                            std::cout << "no es posible crear la particion efe chavo" << std::endl;
                        }

                        fseek(arch, 0, SEEK_SET);
                        fwrite(&MBR, sizeof(mbr), 1, arch);
                        fclose(arch);
                        std::cout << "Particion creadaaaaaa correctamente presione ENTER si quiere continuar";
                        std::cin.get();

                        break;
                    }

                    /* code */
                }
            }
            else if (disco->type == "E")
            {

                bool validate = false;
                arch = fopen(disco->path.c_str(), "rb+");

                if (arch == NULL)
                {

                    std::cout << "disco inexistenteeeeee";
                    return;
                }

                fseek(arch, 0, SEEK_SET);
                mbr MBR;

                fread(&MBR, sizeof(mbr), 1, arch);

                for (int rec_mbr = 0; rec_mbr < 4; rec_mbr++)
                {
                    if (MBR.mbr_partitions[rec_mbr].part_type == 'E')
                    {
                        /* code */
                        std::cout << "ya existe una extendida " << std::endl;
                        validate = true;
                        break;
                    }
                }
                if (validate == true)
                {
                    std::cout << "ya existe una extendida entonces ya nose puede crear otra" << std::endl;
                    /* code */
                }
                else

                {

                    std::cout << "si podes crear una extendida wuuu" << std::endl;

                    for (int rec_mbr = 0; rec_mbr < 4; rec_mbr++)
                    {

                        if (MBR.mbr_partitions[rec_mbr].part_status == '0')
                        {

                            MBR.mbr_partitions[rec_mbr].part_type = 'E';
                            ebr auxiliar;
                            auxiliar.part_fit = '-';
                            auxiliar.part_name[0] = '\0';
                            auxiliar.part_next = -1;
                            auxiliar.part_size = -1;
                            auxiliar.part_start = -1;
                            auxiliar.part_status = '0';
                            fseek(arch, MBR.mbr_partitions[rec_mbr].part_start, SEEK_SET);
                            fwrite(&auxiliar, sizeof(ebr), 1, arch);

                            if (disco->unit == "K" || disco->unit.empty() == true)
                            {
                                tamanoparticion = disco->size * 1024;
                            }
                            else if (disco->unit == "M")
                            {
                                tamanoparticion = disco->size * 1024 * 1024;
                            }
                            else if (disco->unit == "B")
                            {
                                tamanoparticion = disco->size;
                            }

                            if (disco->fit == "B")
                            {
                                MBR.mbr_partitions[rec_mbr].part_fit = 'B';
                            }
                            else if (disco->fit == "F")
                            {
                                MBR.mbr_partitions[rec_mbr].part_fit = 'F';
                            }
                            else if (disco->fit == "W" || disco->fit.empty() == true)
                            {
                                MBR.mbr_partitions[rec_mbr].part_fit = 'W';
                            }
                            if (tamanoparticion < MBR.mbr_tamano)
                            {
                                std::cout << "si se puede crear la particion xdxd" << std::endl;
                                /* code */
                                strcpy(MBR.mbr_partitions[rec_mbr].part_name, disco->name.c_str());
                                MBR.mbr_partitions[rec_mbr].part_status = '1';

                                MBR.mbr_partitions[rec_mbr].part_size = tamanoparticion;
                                if (rec_mbr == 0)
                                {
                                    MBR.mbr_partitions[rec_mbr].part_start = sizeof(mbr);
                                    /* code */
                                }
                                else
                                {

                                    if (rec_mbr > 0)
                                    {
                                        MBR.mbr_partitions[rec_mbr].part_start = MBR.mbr_partitions[rec_mbr - 1].part_start + tamanoparticion;

                                        /* code */
                                    }
                                }
                            }
                            else
                            {

                                std::cout << "no es posible crear la particion efe chavo" << std::endl;
                            }

                            fseek(arch, 0, SEEK_SET);
                            fwrite(&MBR, sizeof(mbr), 1, arch);
                            fclose(arch);
                            std::cout << "Particion creadaaaaaa correctamente presione ENTER si quiere continuar";
                            std::cin.get();
                            break;
                        }
                    }
                }
            }

            //implementar metodo borrar
        }

        /* code */
    }
    else if (borrar == "fast")
    {
        arch = fopen(disco->path.c_str(), "rb+");

        if (arch == NULL)
        {

            std::cout << "Error!\n El disco no existe\n";
            return;
        }

        fseek(arch, 0, SEEK_SET);
        mbr MBR;

        fread(&MBR, sizeof(mbr), 1, arch);

        for (int rec = 0; rec < 4; rec++)
        {

            if (MBR.mbr_partitions[rec].part_name == name)
            {
                std::cout << "se encontro la particion y  SE ELIMINARA DE MANERA RAPIDA :3" << MBR.mbr_partitions[rec].part_name << std::endl;
                MBR.mbr_partitions[rec].part_status = '0';
                MBR.mbr_partitions[rec].part_type = '-';
                MBR.mbr_partitions[rec].part_fit = '-';
                MBR.mbr_partitions[rec].part_start = -1;
                MBR.mbr_partitions[rec].part_size = -1;
                MBR.mbr_partitions[rec].part_name[0] = '\0';

                fseek(arch, 0, SEEK_SET);
                fwrite(&MBR, sizeof(mbr), 1, arch);
                fclose(arch);

                /* code */
            }

            /* code */
        }
    }

    else if (borrar == "full")
    {
        arch = fopen(disco->path.c_str(), "rb+");

        if (arch == NULL)
        {

            std::cout << "Efe!\n efe\n";
            return;
        }

        fseek(arch, 0, SEEK_SET);
        mbr MBR;

        fread(&MBR, sizeof(mbr), 1, arch);
        char buff;
        buff = '\0';
        for (int rec = 0; rec < 4; rec++)
        {

            if (MBR.mbr_partitions[rec].part_name == name)
            {
                std::cout << "se encontro la particion y se va a llenar de 0 todo el espacio en el que estaba la particion" << MBR.mbr_partitions[rec].part_name << std::endl;
                fseek(arch, MBR.mbr_partitions[rec].part_start, SEEK_SET);
                for (int i = 0; i < MBR.mbr_partitions[rec].part_size; i++)
                { //lleno de ceros el archivo

                    fwrite(&buff, sizeof(buff), 1, arch);
                    //--PART_STAR ES 100 - 101 -102 -103
                    fseek(arch, MBR.mbr_partitions[rec].part_start + i, SEEK_SET); // AGREGUE ESTA LINEA
                }
                MBR.mbr_partitions[rec].part_status = '0';
                MBR.mbr_partitions[rec].part_type = '-';
                MBR.mbr_partitions[rec].part_fit = '-';
                MBR.mbr_partitions[rec].part_start = -1;
                MBR.mbr_partitions[rec].part_size = -1;
                MBR.mbr_partitions[rec].part_name[0] = '\0';

                fseek(arch, 0, SEEK_SET);
                fwrite(&MBR, sizeof(mbr), 1, arch);
                fclose(arch);

                /* code */
            }

            /* code */
        }
    }
}

void partition::imprimirdatosdisco(string path)
{

    FILE *arch;
    arch = fopen(path.c_str(), "rb+");
    if (arch == NULL)
    {
        //return 0;
    }
    mbr MBR;
    fseek(arch, 0, SEEK_SET);
    fread(&MBR, sizeof(mbr), 1, arch);
    fclose(arch);
    std::cout << "\n----------DATOS DEL DISCO-----\n";
    std::cout << "\nMBR NAME: " << MBR.mbr_disk_signature;
    std::cout << "\nMBR SIZE: " << MBR.mbr_tamano;

    for (int i = 0; i < 4; i++)
    {
        //  if(MBR.mbr_partitions[i]!=NULL){
        if (MBR.mbr_partitions[i].part_status == '1')
        {
            std::cout << "\nNOmbre de la parcion:::::::::::::::::::::: : " << MBR.mbr_partitions[i].part_name;
            std::cout << "\nEstado de la particion:::::::::::: : " << MBR.mbr_partitions[i].part_status;
            std::cout << "\nTipo Particion:::::::::::::::::::::::: : " << MBR.mbr_partitions[i].part_type;

            std::cout << "\nInicio de la particion:::::::::::::::::::::::::::" << MBR.mbr_partitions[i].part_start;
            std::cout << "\nTamaño de la particion:::::::::::::::::::::" << MBR.mbr_partitions[i].part_size;
            std::cout << "\nAjute ::::::::::::::::::::::::::::::::::::" << MBR.mbr_partitions[i].part_fit;

            // }
        }
    }
}
