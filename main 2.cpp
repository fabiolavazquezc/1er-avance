#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numarticulo, lanzamiento, opcion;
    float precio_unitario, total;
    string videojuego, clasificacion, caracteristicas, desc, genero;
    
    cout<<"\t ***TIENDA DE VIDEOJUEGOS*** \n";
    cout<<"1.-Agregar Articulo\n2.-Modificar Articulo\n3.-Eliminar Articulo\n4.-Lista de Articulos\n5.-Limpiar pantalla\n6.-Salir\n";
    cin>>opcion;
    
    switch(opcion)
    {
        case 1 : //Agregar Articulo
        cout<<"Ingrese el numero de articulo\n";
        cin>>numarticulo;
        cout<<"Ingrese el nombre del videojuego\n";
        cin>>videojuego;
        cin.ignore(); //ignora el primer espacio
        getline(cin, videojuego); //permite ejecutar los espacios de la variable
        cout<<"Ingrese el año de lanzamiento del videojuego\n";
        cin>>lanzamiento;
        cout<<"Ingrese la clasificacion del videojuego\n";
        cin.ignore();
        getline(cin, clasificacion);
        cout<<"Ingrese las caracteristicas del videojuego\n";
        cin.ignore();
        getline(cin, caracteristicas);
        cout<<"Ingrese la descripcion del videojuego\n";
        cin.ignore();
        getline(cin, desc);
        cout<<"Ingrese el genero del videojuego\n";
        cin.ignore();
        getline(cin, genero);
        cout<<"Ingrese el precio unitario del videojuego\n";
        cin>>precio_unitario;
        return main();
        break;
        
        case 2: //Modificar articulo
        break;
        
        case 3: //Eliminar articulo
        break;
        
        case 4: //Lista de Articulos
        break;
        
        case 5: //Limpiar pantalla
        system("cls");
        break;
        
        case 6: //Salir
        cout<<"Gracias por utilizar el programa\n";
        break;
        
        default: 
        cout<<"Ingrese una opcion correct\n";
        return main();
    }
}
