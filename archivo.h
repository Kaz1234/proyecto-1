#include <iostream>

using namespace std;

class Vacas{
	
	public:
		
		void setNombre(string h);
		void setRaza(string h);
		void setPeso(float h);
		void setProd_leche(float h);
		
		string getNombre();
		string getRaza();
		float getPeso();
		float getProd_leche();
		
		void addNombre(string h);
		void addRaza(string h);
		void addPeso(float h);
		void addProd_leche(float h);
		
		Vacas();
		~Vacas();
		
		private:
			float Peso, Prod_leche;
			string Nombre, Raza;

};
