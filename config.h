#include <iostream>

using namespace std;

class Vacas{
	
	public:
		void setVacas(string Nombre, string Raza, float Peso, float, float Prod_leche);
		void setNombre();
		void setRaza();
		void setPeso();
		void setProd_leche();
		
		string getNombre();
		string getRaza();
		float getPeso();
		float getProd_leche();
		
		void addNombre(string Nombre);
		void addRaza(string Raza);
		void addPeso(float Peso);
		void addProd_leche(float Prod_leche);
		
		private:
			float Peso, Prod_leche;
			string Nombre, Raza;
			
};
