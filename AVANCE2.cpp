#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <wchar.h>

using namespace std;

struct productos
{
    char nombre[1000], genero[1000], descripcion[1000], clasificacion[1000], consola[1000];
    int no, decision;
    float preciou, precioi;
}

int main()
{
    productos alta[3];
    int op;

    do
    {
         //MENÚ DE OPCIONES
        printf("\t -*-* MENU DE OPCIONES *-*- \n");
        printf("2.- MODIFICACIÓN \n");
        printf("3.- BAJA \n");
        printf("4.- LISTA \n");
        printf("5.- LIMPIAR PANTALLA \n");
        printf("6.- SALIR \n");
        scanf("%d", &op);

        switch (op)
        {
        case 1: //ALTA DE ARTÍCULOS
             for (int i = 0; i < 3; i++)
             {
                 printf("\n Ingrese el numero de articulo \n");
                 scanf("%d", &alta[i].no);

                 cin.ignore();
                 printf("\n Ingrese el nombre del articulo \n");
                 getline(cin, alta[i].nombre);
                 printf("\n Ingrese una breve descripcion del articulo \n");
                 getline(cin, alta[3].descripcion);
                 printf("\n Ingrese el genero al que pertenece el articulo \n");
                 getline(cin, alta[3].genero);
                 printf("\n Clasificacion a la que pertenece el articulo \n");
                 gets(cin, alta[3].clasificacion);
                 printf("\n Tipo de consola a la que pertenece el articulo \n");
                 getline(cin, alta[3].consola);

                 //PRECIO
                 printf("\n Ingrese el precio unitario del producto \n");
                 scanf("%f", &alta[i].preciou);
             
                 alta[i].precioi = alta[i].preciou + (alta[i].preciou * 0.16);

                 //regresar al menú
                 printf("\n Presione 1 para volver al menu \n");
                 scanf("%f", &alta[i].decision);
             

                 if (decision == 1)
                 {
                     system("pause");
                     return main();
                 }
                 else
                 {
                     do
                     {
                         printf("\n Presione 1 para volver al menu \n");
                         scanf("%f", &alta[i].decision);
                     } while (decision != 1);
                 }
                 i = i + 1;
             }
             break;
        case 2:
             break;
        case 3:
             break;
        case 4: //LISTA DE ARTÍCULOS
             for (int i = 0; i < 3; i++)
             {
                 printf("\n NO. ARTÍCULO: %d \n", alta[i].no);
                 printf("\n NOMBRE DEL ARTÍCULO: %s \n", alta[i].nombre);
                 printf("\n DESCRIPCIÓN: %s \n", alta[i].descripcion);
                 printf("\n GÉNERO: %s \n", alta[i].genero);
                 printf("\n CLASIFICACIÓN: %s \n", alta[i].clasificacion);
                 printf("\n TIPO DE CONSOLA: %s \n", alta[i].consola);
                 printf("\n PRECIO UNITARIO: %f \n", alta[i].preciou);
                 printf("\n PRECIO CON IMPUESTOS: %f \n", alta[i].precioi);

                 i = i + 1;
             }
             break;
        case 5: //LIMPIAR PANTALLA
             system("cls");
             return main();
             break;
        case 6: //SALIR
             exit(1);
             break;
        }
    } while (op!=6);
    
}