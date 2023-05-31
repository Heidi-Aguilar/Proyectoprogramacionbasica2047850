#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>

using namespace std;
//declaracion de variables

struct tienda
{
	string nombre;
	int #item;
	char genero[100];
	string clasificacion;
	string descripcion;
	string consola, status;
	int precio;
	int preciott;
};
int contador, alta;
int decision1;
tienda* base; // uso de punteros
//funciones con void
void Alta();
void eliminar();
void listas();
void modificar();
void archivos();

int main()
{
	int opc;
	cout << "\t ***MENU DE OPCIONES***  \n" << endl;
	cout << "1.-Alta de articulos   \n" << endl;
	cout << "2.-Modificacion de articulos   \n" << endl;
	cout << "3.-Baja de articulos   \n" << endl;
	cout << "4.-Lista de articulos   \n" << endl;
	cout << "5.-Limpiar Pantalla   \n" << endl;
	cout << "6.-Salir   \n" << endl;
	cin >> opc;

	switch (opc)
	{
	case 1:
		Alta();
		return main();
		break;

	case 2:
		modificar();
		return main();
		break;


	case 3:
		eliminar();
		return main();
		break;


	case 4:
		listas();
		return main();
		break;

	case 5:
		system("cls"); //system("clear");
		return main();
		break;

	case 6:
		archivos();
		break;
	}
}
void Alta() 
{
	cout << "¿cuantos productos desea dar de alta? \n";
	cin >> alta;
	base = new tienda[alta]; // uso de new para hacer el arreglo dinamico
	for (int i = 0; i < alta; i++)
	{
		cout << "   \n" << endl;
		cout << "Alta de articulos \n" << endl;
		cin.ignore();
		cout << "Ingrese el nombre del articulo: \n";
		getline(cin, base[i].nombre);

		for (int i=0;i< alta; i++)
        {
         printf("Ingrese el numero de item:\n");
         scanf_s("%d",&numitem[i]);
         for (int j=-1;j<i; j++)
         {
             if (numitem[i]== numitem[j])
             {
                 do
                 {
                     printf("Este numero de item está ocupado");
                     scanf_s("%d",&#item[i]);
                 } while (#item[i]== #item[j]);
             }
         }
         while (getchar()!='\n');
         printf("Ingrese el nombre: \n");
         getline(cin, nombreli1): 


	    cin.ignore();
	    cout << "Genero del articulo \n";
		gets_s(base[i].genero);
		cin.ignore();
		cout << "Clasificacion del articulo \n";
		getline(cin, base[i].clasificacion);
		cin.ignore();
		cout << "Descripcion del articulo \n";
		getline(cin, base[i].descripcion);
		cout << "Tipo de consola del articulo \n";
		getline(cin, base[i].consola);
		cout << "Precio del articulo \n";
		cin >> base[i].precio;
		//DECLARACIÓN DE IVA
		base[i].preciott = (base[i].precio + (base[i].precio * 0.16));
		
	}
	

	cout << " " << endl;
	cout << "¿Desea agregar otro articulo?	(1.-Si   2.-No) " << endl;
	cin >> decision1;

	if (decision1 == 1)
	{
		return;
	}

	else
	{
		return;
	}

}

void listas() 
{
	int i = 0, dato = -1;
	string busqueda;
	int opcion;

	do
	{
		do
		{
			cout<<"Desea buscar las listas por"<<endl;
			cout<<"1. Genero"<<endl;
			cout<<"2. Clasificacion"<<endl;
			cout<<"3. Consola"<<endl;
			cout<<"4.Salir"<<endl;
			fflush(stdin);
			cin>>opcion;
		} while (opcion < 1 || opcion > 4);

		switch (opcion)
		{
			case 1:
			cout<<"Ingrese el genero el cual desea buscar: ";
			fflush(stdin);
			getline(cin, busqueda);

			for ( i = 0; i < alta; i++)
			{
				if (busqueda == base[i].genero)
				{
					dato = i;
					break;
				}
				
			}

			if (dato == -1)
			{
				cout<<"No se pudo encontrar el articulo";
			}
			else
			{
				cout << " Registro" << dato << endl;
				cout << base[dato].nombre << endl;
				cout << base[dato].#item << endl;
				cout << base[dato].genero << endl;
				cout << base[dato].clasificacion << endl;
				cout << base[dato].descripcion << endl;
				cout << base[dato].consola << endl;
				cout << base[dato].preciott << endl;
			}
			
			break;

			case 2:
				cout<<"Ingrese la clasificacion la cual desea buscar: ";
			fflush(stdin);
			getline(cin, busqueda);

			for ( i = 0; i < alta; i++)
			{
				if (busqueda == base[i].clasificacion)
				{
					dato = i;
					break;
				}
				
			}

			if (dato == -1)
			{
				cout<<"No se pudo encontrar el articulo";
			}
			else
			{
				cout << " Registro" << dato << endl;
				cout << base[dato].nombre << endl;
				cout << base[dato].#item << endl;
				cout << base[dato].genero << endl;
				cout << base[dato].clasificacion << endl;
				cout << base[dato].descripcion << endl;
				cout << base[dato].consola << endl;
				cout << base[dato].preciott << endl;
			}
			break;

			case 3:
				cout<<"Ingrese la consola la cual desea buscar: ";
			fflush(stdin);
			getline(cin, busqueda);

			for ( i = 0; i < alta; i++)
			{
				if (busqueda == base[i].consola)
				{
					dato = i;
					break;
				}
				
			}

			if (dato == -1)
			{
				cout<<"No se pudo encontrar el articulo";
			}
			else
			{
				cout << " Registro" << dato << endl;
				cout << base[dato].nombre << endl;
				cout << base[dato].#item << endl;
				cout << base[dato].genero << endl;
				cout << base[dato].clasificacion << endl;
				cout << base[dato].descripcion << endl;
				cout << base[dato].consola << endl;
				cout << base[dato].preciott << endl;
			}
			break;
		}
		
	} while (opcion != 4);
}
void eliminar() 
{
	int j;
	cout << "ingrese el registro a eliminar " << endl;
	cin >> j;
	j = j - 1;
	for (int i = j; i == j; i++)
	{
		cout << "Eliminando registro" << j + 1 << endl;
		base[i].status = "ELIMINADO";
	}
}
void modificar() 
{
	int j, opcion, op2;
	do
	{
		cout << "ingrese el numero registro a modificar" << endl;
		cin >> j;
		j = j - 1; // esto debido a que i inicia en 0

		for (int i = j; i == j; i++)
		{
			if ((base[i].status == "ELIMINADO"))
			{
				cout << "REGISTRO ELIMINADO" << i + 1 << endl;
				cout << "ingrese un registro valido \n" << endl;
				op2 = 1;
			}
			else
			{
				op2 = 2;
			}
		}
	} while (op2 == 1);
	cout << "ingrese que desea modificar 1.-Nombre, 2.-Numero, 3.- Genero. 4.-Clasificacion, 5.-Descripcion, 6.-Tipo de consola, 7.-Precio " << endl;
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese el nombre" << endl;
			getline(cin, base[i].nombre);
		}
		break;
	case 2:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese el numero" << endl;
			cin >> base[i].#item;
		}
		break;
	case 3:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese el genero" << endl;
			gets_s(base[i].genero);
		}
		break;

	case 4:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese el la clasificacion" << endl;
			getline(cin, base[i].clasificacion);
		}
		break;

	case 5:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese la descripcion" << endl;
			getline(cin, base[i].descripcion);
		}
		break;

	case 6:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese el tipo de consola" << endl;
			getline(cin, base[i].consola);
		}
		break;
	case 7:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese el precio sin IVA" << endl;
			cin >> base[i].precio;
			registro[i].preciott = (registro[i].precio + (registro[i].precio * 0.16));
		}
	}


}

void archivos() 
{
	ofstream archivo; 
	string nombrearchivo;
	string texto;
	int texto3;

	nombrearchivo = "Furrolandia.txt";

	archivo.open(nombrearchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		cout << "ERROR NO SE PUDO CREAR EL ARCHIVO";
		exit(1);
	}

	archivo << "NOMBRE" << "\t";
	archivo << "NUMERO" << "\t";
	archivo << "GENERO" << "\t";
	archivo << "CLASIFICACION" << "\t";
	archivo << "DESCRIPCION" << "\t";
	archivo << "TIPO DE CONSOLA" << "\t";
	archivo << "PRECIO" << "\t";
	archivo << "STATUS" << "\n";

	for (int i = 0; i < alta; i++)
	{
		if (base[i].status == "ELIMINADO")
		{
			texto2 = "REGISTRO ELIMINADO ";
			texto = i;
			archivo << texto2 << texto << "\n";
		}
		else
		{
			texto = base[i].nombre;
			archivo << texto << "\t" << "\t";
			texto3 = base[i].#item;
			archivo << texto3 << "\t" << "\t";
			texto = base[i].genero;
			archivo << texto << "\t " << "\t";
			texto = base[i].clasificacion;
			archivo << texto << "\t " << "\t";
			texto = base[i].descripcion;
			archivo << texto << "\t " << "\t";
			texto = base[i].consola;
			archivo << texto << "\t " << "\t";
			texto3 = base[i].preciott;
			archivo << texto3 << "\t " << "\n";
		}
	}


	archivo.close();
}