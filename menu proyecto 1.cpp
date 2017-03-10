/*
* Lenguaje de programacion 2
* Bachileres: Azuaje Kelvin CI: 25799617 / Rosales Zahiri CI: 25450708
* Sistemas S51
*/

#include <iostream>
#include <iomanip>

using namespace std;

/*
* Acontinuacion se declaran la variables
*para que funcione el menu de opciones
*esto aun sinser orientado a objetos
*/

int opc, tipo;
float Peso, Prod_leche;
string Nombre, Raza;
	
void menu(){
	
	do{ //Aqui comienza el menu, con un bucle do-while para que se ejecute mientra no se elija la opcion 3
		cout<<"**********MENU**********"<<endl;
		cout<<"**"<<setw(22)<<"**"<<endl;
		cout<<"** Elija una opcion"<<setw(5)<<"**"<<endl;
		cout<<"**1) Agregar Vacas"<<setw(6)<<"**"<<endl;
		cout<<"**2) Ordenar Vacas"<<setw(6)<<"**"<<endl;
		cout<<"**3) Salir"<<setw(14)<<"**"<<endl;
		cout<<"************************"<<endl;
		cin>>opc;
		system("cls");
		
		switch (opc){ //por medio del valor colocado nos dirigimos a cualquier caso
		
		case 1: //en este se ingresan las vacas
		cout<<"Ingrese el nombre de la vaca: ";
		cin>>Nombre;
		cout<<"Ingrese la raza: ";
		cin>>Raza;
		cout<<"Ingrese el peso de la vaca: ";
		cin>>Peso;
		cout<<"Ingrese la cantidad de leche promedio por dia: ";
		cin>>Prod_leche;
		system("cls");
		break;
		
		case 2: //aqui se ordenan dependiendo el tipo
		cout<<"Escoja la forma de ordenamiento"<<endl<<endl;
		cout<<"1) Ordenamiento por nombre"<<endl;
		cout<<"2) Ordenamiento por peso"<<endl;
		cin>>tipo;
		system("cls");
		//aun no esta terminado...
		switch (tipo){
		
		case 1:
			cout<<"aqui se mostrara por nombre en orden alfabetico"<<endl;
			break;
			
		case 2:
			cout<<"aqui se mostrara por peso de menor a mayor"<<endl;
			break;
		}
			
		case 3: //aqui salimos del programa
			break;
		}
	} while(opc !=3); //aqui se evalua la condicion para ver que hacer
}

int main(int argc, char** argv) {
	
	menu(); //aqui se hace el llamado a la funcion menu
	
	return 0;
}
