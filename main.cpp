#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>

using namespace std;

struct tienda
{
    int num_art, anio, numoc;
    string nom_juego, clas, caracteristicas, desc, genero;
    float precio, iva, total;
};

int main()
{ 
    tienda compras[3];
    int opcion, busqueda;
    
    do
    {
        printf("\t ***MENU DE OPCIONES*** \n");
        printf(" 1.- Agregar Articulo \n 2.- Modificar Articulo \n 3.- Eliminar Articulo \n 4.- Lista de Articulos Vigentes \n 5.- Limpiar Pantalla \n 6.- Salir \n");
        //estoy usando online compiler y no me deja poner scanf_s por si se me olvida cambiarlo
        scanf("%d", &opcion);
        
        switch (opcion)
        {
        case 1:
            
            for (int i=0; i<3; i++)
            {
                compras[i].num_art = 20220000 + i;
                printf("NUMERO DE ARTICULO: %d \n", compras[i].num_art);
                int salida=1;
                /*do
                {
                    printf("Ingrese el num oc \n");
                    scanf_s("%d", &compras[i].numoc);
                    
                    if (compras[i].numoc == compras[i-1].numoc) || compras[i].numoc == compras[i-2].numoc)
                    {
                        printf("El num oc ya existe \n");
                        
                    }
                    else
                    {
                        salida = 2;
                    }
                } while (salida == 1);
                */
                do 
                {
                    printf("Ingrese el num oc \n");
                    scanf("%d", &compras[i].numoc);
                } while (compras[i].numoc == compras[i-1].numoc || compras[i].numoc == compras[i-2].numoc);
                
                printf("Ingrese el nombre del articulo \n");
                cin.ignore();
                getline(cin, compras[i].nom_juego);
                printf("Ingrese el anio de lanzamiento \n");
                scanf("%d", compras[i].anio);
                printf("Ingrese la clasificacion \n");
                cin.ignore();
                getline(cin, compras[i].clas);
                printf("Ingrese las caracteristicas \n");
                cin.ignore();
                getline(cin, compras[i].caracteristicas);
                printf("Ingrese la descripcion \n");
                cin.ignore();
                getline(cin, compras[i].desc);
                printf("Ingrese el genero \n");
                cin.ignore();
                getline(cin, compras[i].genero);
                printf("Ingrese el precio unitario \n");
                scanf("%f", compras[i].precio);
                compras[i].iva = compras[i].precio*.16;
                compras[i].total=compras[i].precio+compras[i].iva;
                
            }
            break;
        case 2:
        break;
         
        case 3:
          
        printf("Ingrese el num oc \n");
        scanf("%d", &busqueda);
            for (int i = 0; i < 3; i++)
            {
                if (busqueda ==compras[i].numoc)
                {
                    compras[i].numoc = 0;
                }
            }
            
            
        
        case 4: //lista
        int opcion2
        
        printf("1.- Num oc \n 2.- Listas Vigentes \n");
        scanf("%d", &opcion2);
            if (opcion2 == 1)
            {
            printf("Ingrese el num oc");
            scanf("%d", &busqueda);
            
                for (int i = 0; i < 3; i++)
                {
                    if (busqueda == compras[i].numoc)
                    {
                    printf("NUMERO DE ARTICULO: %d \n", compras[i].num_art);
                    printf("num OC: %d \n", compras[i].numoc);
                    printf("Nombre del articulo: %s", compras[i].nom_juego.c_str());
                    printf("Anio de lanzamiento: %d", compras[i].anio);
                    printf("Clasificacion: %s", compras[i].clas.c_str());
                    printf("Caracteristicas: %s",compras[i].caracteristicas.c_str());
                    printf("Descripcion: %s", compras[i].desc.c_str());
                    printf("Genero: %s", compras[i].genero.c_str());
                    printf("Precio unitario %f \n", compras[i].precio);
                    printf("IVA: %f \n", compras[i].iva);
                    printf("Total: %f \n", compras[i].total);
                    } 
                }
            }
            else
            {
                for (int i = 0; i < 3; i++)
                {
                    if (compras[i].numoc !=0)
                    {
                    printf("NUMERO DE ARTICULO: %d \n", compras[i].num_art);
                    printf("num OC: %d \n", compras[i].numoc);
                    printf("Nombre del articulo: %s", compras[i].nom_juego.c_str());
                    printf("Anio de lanzamiento: %d", compras[i].anio);
                    printf("Clasificacion: %s", compras[i].clas.c_str());
                    printf("Caracteristicas: %s",compras[i].caracteristicas.c_str());
                    printf("Descripcion: %s", compras[i].desc.c_str());
                    printf("Genero: %s", compras[i].genero.c_str());
                    printf("Precio unitario %f \n", compras[i].precio);
                    printf("IVA: %f \n", compras[i].iva);
                    printf("Total: %f \n", compras[i].total);
                    }
                }  
             }
        
        break;
        
        case 5:
        system("cls");
        break;
        
        case 6:
        printf("Saliendo... \n");
        break;
        
        default:
        printf("Intente de nuevo... \n");
        break;
        
        } 
    } while (opcion !=5);
    system("pause");
}




