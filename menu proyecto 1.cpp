/*
* Lenguaje de programacion 2
* Bachileres: Azuaje Kelvin / Rosales Zahiri
* Sistemas S51
*/

#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <cstdio>
#include <string.h>
#include "config.h"
#include "tamaño.h"  //se hace el llamado de el archivo tamaño.h

using namespace std;
/*
* Acontinuacion se declaran la variables
*para que funcione el menu de opciones
*esto aun sin ser orientado a objetos
*/

int opc, tipo, n, cont = 0, X; //se declaro la variable n para el menu de agregado, y un contador para la validacion
bool continuar; //esta variable boolean sera la condicion de validacion
float Peso, Prod_leche;
string Nombre, Raza, auxN, aux, auxR, NombreA, NombreB;
Vacas vacas[10];
char nom[15], nomB[15];
	
void menu(){
	
	do{ //Aqui comienza el menu, con un bucle do-while para que se ejecute mientra no se elija la opcion 3
		do{
		cout<<"**********MENU**********"<<endl;
		cout<<"**"<<setw(22)<<"**"<<endl;
		cout<<"** Elija una opcion"<<setw(5)<<"**"<<endl;
		cout<<"**1) Agregar Vacas"<<setw(6)<<"**"<<endl;
		cout<<"**2) Ordenar Vacas"<<setw(6)<<"**"<<endl;
		cout<<"**3) Salir"<<setw(14)<<"**"<<endl;
		cout<<"************************"<<endl;
		cin>>opc;
		continuar = false;
      	cin.clear();
      	if(cont > 0) cin.ignore(1024, '\n');
      		cin >> opc;
      	cont++;
      	if(cin.fail() && cin.rdstate()){
         		cout << "Valor incorrecto, ingrese un valor correcto" << endl;
         		continuar = true;
      		}
   		} while (continuar);
   		system("cls");
		
		switch (opc){ //por medio del valor colocado nos dirigimos a cualquier caso
		
			case 1: //en este se ingresan las vacas
			cout<<"Ingrese la cantidad de vacas a registar: ";
			cin>>n;
			system("cls");
			for(int i=0; i<n; i++){
				cout<<"Ingrese el nombre de la vaca: ";
				cin>>Nombre;
				getline(cin, Nombre);
			
				cout<<"Ingrese la raza: ";
				cin>>Raza;
				getline(cin, Raza);
		
				cout<<"Ingrese el peso de la vaca: ";
				cin>>Peso;
				continuar = false;
      			cin.clear();
      			if(cont > 0) cin.ignore(1024, '\n');
      				cin >> Peso;
      				cont++;
      			if(cin.fail() && cin.rdstate()){
         			cout << "Valor incorrecto, ingrese un valor correcto" << endl;
         			continuar = true;
      			}
   				} while (continuar);
   		
		cout<<"Ingrese la cantidad de leche promedio por dia: ";
		cin>>Prod_leche;
		continuar = false;
      	cin.clear();
      	if(cont > 0) cin.ignore(1024, '\n');
      		cin >> Prod_leche;
      		cont++;
      	if(cin.fail() && cin.rdstate()){
         		cout << "Valor incorrecto, ingrese un valor correcto" << endl;
         		continuar = true;
      		}
   		 while (continuar);
   		
		system("cls");
		break;
		
		case 2: //aqui se ordenan dependiendo el tipo
		cout<<"************ MENU DE ORDENAMIENTO ************"<<endl;
		cout<<"** Escoja la forma de ordenamiento"<<setw(12)<<"**"<<endl;
		cout<<"**"<<setw(44)<<"**"<<endl;
		cout<<"** 1) Ordenamiento por Nombre"<<setw(17)<<"**"<<endl;
		cout<<"** 2) Ordenamiento por Peso"<<setw(19)<<"**"<<endl;
		cout<<"** 3) Ordenamiento por Raza"<<setw(19)<<"**"<<endl;
		cout<<"** 4) Ordenamiento por Produccion de leche"<<setw(4)<<"**"<<endl;
		cout<<"**"<<setw(44)<<"**"<<endl;
		cout<<"**********************************************"<<endl;
		cin>>tipo;
		system("cls");
		//aun no esta terminado...
		switch (tipo){
		
		case 1:
			break;
			
		case 2:	
			break;
		}
			
		case 3: //aqui salimos del programa
			break;
			
		default: //validamos que se agregen los valores correctos al menu
			if(opc<1 || opc>3){
				cout<<"Valor incorrecto, ingrese un valor correcto!!!"<<endl;
			}
		}
	
	}while(opc !=3); //aqui se evalua la condicion para ver que hacer
}  

int main(int argc, char** argv) {
	
	menu(); //aqui se hace el llamado a la funcion menu
	
	return 0;
}
