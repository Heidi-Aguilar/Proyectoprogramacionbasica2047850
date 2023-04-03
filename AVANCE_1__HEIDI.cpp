#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char nombre[1000], genero[1000], descripcion[1000], clasificacion[1000], consola[1000];
    int op, no, decision, preciou;
   
    //MENÚ DE OPCIONES
    cout << "\t -*-* MENU DE OPCIONES *-*-" << endl;
    cout << "1.- ALTA" << endl;
    cout << "2.- MODIFICACIÓN" << endl;
    cout << "3.- BAJA" << endl;
    cout << "4.- LISTA" << endl;
    cout << "5.- LIMPIAR PANTALLA" << endl;
    cout << "6.- SALIR" << endl;
    cin >> op;

    switch (op)
    {
    case 1: //ALTA DE ARTÍCULOS
    {
        cout << "Ingrese el numero de articulo" << endl;
        cin >> no;
        cout << "Ingrese el nombre del articulo" << endl;
        cin >> nombre;
        cout << "Ingrese una breve descripcion del articulo" << endl;
        cin >> descripcion;
        cout << "Ingrese el genero al que pertenece el articulo" << endl;
        cin >> genero;
        cout << "Clasificacion a la que pertenece el articulo" << endl;
        cin >> clasificacion;
        cout << "Tipo de consola a la que pertenece el articulo" << endl;
        cin >> consola;

        //PRECIO
        cout << "Ingrese el precio unitario del producto" << endl;
        cin >> preciou;
        preciou = preciou + (preciou * 0.16);

       
        cout << "El precio con impuestos es: " << preciou << endl;

        //regresar al menú
        cout << "Presione cualquier numero para volver al menu" << endl;
        cin >> decision;

        if (decision == 1)
        {
            system("pause");
            return main();
        }
        else
        {
            system("pause");
            exit(1);
        }
        break;
    }
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5: //LIMPIAR PANTALLA
        system("cls");
        return main();
        break;
    case 6: //SALIR
        exit(1);
        break;
    }
}