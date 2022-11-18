#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

//declaracion de variables

int* item, * year, registros, opcion, n = 1;
string* nombre, * clasificacion, * caracteristica, * genero, * descripcion;
float* precio, * iva, * total;

void Alta();
void Modificar();
void Eliminar();
void Lista();
void Archivo();

int main()
{
	int opcion;
	printf("\t ***JOYSTICK-GAMES*** \n");
	printf("1.- Alta de Articulos \n 2.- Modificar Articulos \n 3.- Eliminar Articulos \n 4.- Lista de Articulos Vigentes \n 5.- Limpiar Pantalla \n 6.- Salir \n");
	scanf_s("%d", &opcion);

	switch (opcion)
	{
	case 1:
		///
		Alta();
		system("pause");
		return main();
		break;

	case 2:
		///
		Modificar();
		system("pause");
		return main();
		break;

	case 3:
		///
		Eliminar();
		system("pause");
		return main();
		break;

	case 4:
		///
		Lista();
		system("pause");
		return main();
		break;

	case 5:
		///
		system("cls");
		return main();
		break;

	case 6:
		///
		Archivo();
		exit(1);
		return main();
		break;

	default:
		///
		printf("Intente de nuevo \n");
		system("pause");
		return main();
		break;
	}
}

void Alta()
{
	printf("Cuantos registros desea dar de alta? \n");
	scanf_s("%d", &registros);
	item = new int[registros];
	year = new int[registros];
	nombre = new string[registros];
	clasificacion = new string[registros];
	caracteristica = new string[registros];
	genero = new string[registros];
	descripcion = new string[registros];
	precio = new float[registros];
	iva = new float[registros];
	total = new float[registros];

	//arreglo

	for (int i = 0; i < registros; i++)
	{
		printf("Ingrese el articulo \n");
		scanf_s("%d", &item[i]);
		do
		{
			if (item[i] != item[i - n])
			{
				n = n + 1;
			}
			else
			{
				printf("El articulo ya existe \n");
				printf("Ingrese el articulo \n");
				scanf_s("%d", &item[i]);
			}
		} while (n < registros);
		printf("Ingrese el a%o \n", 164);
		
		scanf_s("%d", &year[i]);
		printf("Ingrese el nombre del juego \n");
		cin.ignore();
		getline(cin, nombre[i]);
		printf("Ingrese la clasificacion del juego \n");
		cin.ignore();
		getline(cin, clasificacion[i]);
		printf("Ingrese las caracteristicas del juego \n");
		cin.ignore();
		getline(cin, caracteristica[i]);
		printf("Ingrese el genero del juego \n");
		cin.ignore();
		getline(cin, genero[i]);
		printf("Ingrese la descripcion del juego \n");
		cin.ignore();
		getline(cin, descripcion[i]);
		printf("Ingrese el precio del juego \n");
		scanf_s("%f", &precio[i]);
		iva[i] = precio[i] * .16;
		total[i] = precio[i] + iva[i];

		int op3;

		printf("Desea volver a ingresar otro articulo? \n");
		printf("1.- Si \n 2.- No \n");
		scanf_s("%d", &op3);
		switch (op3)
		{
		case 1:
			Alta();
			system("pause");
			break;

		case 2:
			system("cls");
			break;

		default:
			printf("Intente de nuevo \n");
			system("pause");
			return Alta();
		}


	}
}

void Modificar()
{
	int modificar;

	do
	{
		printf("Ingrese el numero de articulo a modificar \n");
		scanf_s("%d", &modificar);
	} while (modificar <= 0);
	for (int i = 0; i < registros; i++)
	{
		if (modificar == item[i])
		{
			int op4;
			printf("Que es lo que quiere modificar del articulo? \n");
			printf("1.- A%o \n 2.- Nombre \n 3.- Clasificacion \n 4.- Caracteristicas \n 5.- Genero \n 6.- Descripcion \n 7.- Precio \n", 164);
			scanf_s("%d", &op4);

			switch (op4)
			{
			case 1:
				///
				printf("Ingrese el a%o \n", 164);
				scanf_s("%d", &year[i]);
				system("cls");
				break;

			case 2:
				///
				printf("Ingrese el nombre \n");
				cin.ignore();
				getline(cin, nombre[i]);
				system("cls");
				break;

			case 3:
				///
				printf("Ingrese la clasificacion \n");
				cin.ignore();
				getline(cin, clasificacion[i]);
				system("cls");
				break;

			case 4:
				///
				printf("Ingrese las caracteristicas \n");
				cin.ignore();
				getline(cin, caracteristica[i]);
				system("cls");
				break;

			case 5:
				///
				printf("Ingrese el genero \n");
				cin.ignore();
				getline(cin, genero[i]);
				system("cls");
				break;

			case 6:
				///
				printf("Ingrese la descripcion \n");
				cin.ignore();
				getline(cin, descripcion[i]);
				system("cls");
				break;

			case 7:
				///
				printf("Ingrese el precio \n");
				scanf_s("%f", &precio[i]);
				iva[i] = precio[i] * .16;
				total[i] = precio[i] + iva[i];
				system("cls");
				break;

			default:
				printf("Intente de nuevo \n");
				system("pause");
				return Modificar();
			}
		}
	}

}

void Eliminar()
{
	int eliminar;
	printf("Ingrese el numero de articulo a eliminar \n");
	scanf_s("%d", &eliminar);

	for (int i = 0; i < registros; i++)
	{
		if (eliminar == item[i])
		{
			item[i] = 0;
		}
	}
}

void Lista()
{
	int op2;
	string busc;

	printf("1.- Clasificacion \n 2.- Genero \n");
	scanf_s("%d", &op2);
	switch (op2)
	{
	case 1:
		printf("Ingrese la clasificacion a buscar \n");
		cin.ignore();
		getline(cin, busc);
		for (int i = 0; i < registros; i++)
		{
			if (clasificacion[i] == busc)
			{
				if (item[i] != 0)
				{
					printf("ARTICULO: %d", item[i]);
					printf("A%o: %d", year[i], 164);
					printf("Videojuego: %s", nombre[i].c_str());
					printf("Clasificacion: %s", clasificacion[i].c_str());
					printf("Genero: %s", genero[i].c_str());
					printf("Caracteristicas: %s", caracteristica[i].c_str());
					printf("Descripcion: %s", descripcion[i].c_str());
					printf("Subtotal: %f", precio[i]);
					printf("IVA: %f", iva[i]);
					printf("Total: %f", total[i]);
				}
			}
		}
	case 2:
		printf("Ingrese el genero a buscar \n");
		cin.ignore();
		getline(cin, busc);
		for (int i = 0; i < registros; i++)
		{
			if (genero[i] == busc)
			{
				if (item[i] != 0)
				{
					printf("ARTICULO: %d", item[i]);
					printf("A%o: %d", year[i], 164);
					printf("Videojuego: %s", nombre[i].c_str());
					printf("Clasificacion: %s", clasificacion[i].c_str());
					printf("Genero: %s", genero[i].c_str());
					printf("Caracteristicas: %s", caracteristica[i].c_str());
					printf("Descripcion: %s", descripcion[i].c_str());
					printf("Subtotal: %f", precio[i]);
					printf("IVA: %f", iva[i]);
					printf("Total: %f", total[i]);

				}
			}
		}
	default:
		printf("Intente de nuevo \n");
		system("pause");
		return Lista();
	}
}

void Archivo()
{
	ofstream archivos;
	string file;

	file = "ARCHIVO-DE-JUEGOS";
	archivos.open(file.c_str(), ios::out);

	if (archivos.fail())
	{
		printf("ERROR NO SE GENERO EL ARCHIVO \n");
		system("pause");
		exit(1);
	}

	archivos << "\t \t INFORMACION-JOYSTICK-GAMES \n";
	for (int i = 0; i < registros; i++)
	{
		if (item[i] != 0)
		{
			archivos << "DATO \n" << i + 1 << endl;
			archivos << "ARTICULO:" << item[i] << endl;
			archivos << ("A%o \n", 164) << year[i] << endl;
			archivos << "Videojuego: \n" << nombre[i].c_str() << endl;
			archivos << "Clasificacion: \n" << clasificacion[i].c_str() << endl;
			archivos << "Genero: \n" << genero[i].c_str() << endl;
			archivos << "Caracteristicas: \n" << caracteristica[i].c_str() << endl;
			archivos << "Descripcion: \n" << descripcion[i].c_str() << endl;
			archivos << "Subtotal: \n" << precio[i] << endl;
			archivos << "Total: \n" << total[i] << endl;
		}
	}
}
