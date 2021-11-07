#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string>
#include<fstream>
using namespace std;
 // Cree primero una clase base, registre el nombre y el g�nero
class game
{   public:
         char name [100]; // define el nombre
         string sex; // Definir g�nero
	 int sex_choice; // Datos enteros para seleccionar g�nero
	void show();           
};
void game::show()
{ 
         cout << "Ingrese el nombre del rol que desea crear:";
    cin >> name;
int tag=1;
while (tag)
	{
		 cout << "Seleccione el rol de g�nero: (0. Masculino 1. Femenino):" << endl ;;
        cin >> sex_choice;
		switch (sex_choice)
		{
		 caso 0: sexo = "Masculino"; etiqueta = 0; descanso;
                 caso 1: sexo = " "; etiqueta = 0; descanso;
                 predeterminado: cout << "Error de entrada, vuelva a ingresar" << endl; break;
		}
	}
}
 // game2 registra raza y ocupaci�n

class game2:public game            
{
public:
 string race; // Definir carrera
 int race_choice; // elecci�n de carrera
 intcupation_choice; // Elecci�n de ocupaci�n
void Rrace();
};
 void game2 :: Rrace () // La funci�n miembro selecciona raza y ocupaci�n      
{   
int tag = 1;
while (tag)
{
 cout << "Seleccione raza: 0. Humano 1. Elfo 2. Orco 3. Enano 4. Elemento" << endl;
cin >> race_choice;
switch (race_choice)
{
 caso 0: raza = "humano"; etiqueta = 0; descanso;
 caso 1: raza = "elfo"; etiqueta = 0; descanso;
 caso 2: raza = "Orco"; etiqueta = 0; descanso;
 caso 3: raza = "Enano"; etiqueta = 0; descanso;
 caso 4: raza = "elemento"; etiqueta = 0; descanso;
 valor predeterminado: cout << "Error de entrada, �int�ntalo de nuevo!" << endl; break;
}
}
while (1)
{
switch (race_choice)
{
 caso 1: cout << "Elige tu profesi�n: 0. Berserker 1. Paladin 2. Assassin 3. Hunter 4. Priest 5. Wizard" << endl; break;
 caso 2: cout << "Elige tu profesi�n: 2. Asesino 3. Cazador 4. Sacerdote 5. Asistente" << endl; break;
 caso 3: cout << "Elige tu profesi�n: 0. Berserker 3. Hunter 4. Priest" << endl; break;
caso 4: cout << "Elige tu profesi�n: 0. Berserker 1. Paladin 4. Priest" << endl; break;
 caso 5: cout << "Elige tu profesi�n: 4. Sacerdote 5. Asistente" << endl; break;
}
cin >> occupation_choice;
if (race_choice == 0 && (occupation_choice >= 0&& occupation_choice <= 5)) break;
else if (race_choice == 1&& (occupation_choice > 1 && occupation_choice < 6)) break;
else if (race_choice == 2 && (occupation_choice == 0 || occupation_choice == 3 || occupation_choice == 4)) break;
else if (race_choice == 3 && (occupation_choice == 0 || occupation_choice == 1 || occupation_choice == 4)) break;
else if (race_choice == 4 && (occupation_choice > 3 && occupation_choice < 6)) break;
 else cout << "Error de entrada, vuelva a ingresar" << endl;
}
 if (cupation_choice == 0) ocupaci�n = "Berger";
 if (cupation_choice == 1) ocupaci�n = "Paladin";
 if (cupation_choice == 2) ocupaci�n = "Asesino";
 if (cupation_choice == 3) ocupaci�n = "Cazador";
 if (cupation_choice == 4) ocupaci�n = "Sacerdote";
 if (cupation_choice == 5) ocupaci�n = "Witcher";
}


 Atributo de clase: juego p�blico2 // Define la clase derivada de la clase de raza, genera atributos aleatorios
{
public:
	 int fuerza; // fuerza
	 int agility; // agilidad
	 int physical; // Fuerza f�sica
	 int intelligence; // inteligencia
	 int sabidur�a; // sabidur�a
	 int HP; // HP
	 int MP; // Valor m�gico
	 void output_attribute (); // Dependiendo de la funci�n de determinaci�n de atributos ocupacionales
	 void rad (int rand1, int rand2, int rand3, int rand4, int rand5); // funci�n num�rica generada aleatoriamente
};

void Attribute::rad(int rand1, int rand2, int rand3, int rand4, int rand5)
{
	int sum;
	 srand ((unsigned) time (NULL)); // Valor de atributo aleatorio
	do
	{
		strength= rand() % 10 + rand1;
		agility = rand() % 10 + rand2;
		physical = rand() % 10 + rand3;
		intelligence = rand() % 10 + rand4;
		wisdom = rand() % 10 + rand5;
		sum = strength + agility + physical + intelligence + wisdom;
	 } while (sum! = 100); // 5 El valor total de los atributos es 100
	 HP = f�sico * 20; // El valor de vida es 20 veces la fuerza f�sica
	 MP = (sabidur�a + inteligencia) * 10; // El valor m�gico es 10 veces la inteligencia e inteligencia
 
}
 atributo vac�o :: output_attribute () // atributo inicial
{
	 if (ocupaci�n == "Berger") rad (35, 15, 25, 5, 5);
	 if (ocupaci�n == "Palad�n") rad (20, 10, 25, 15, 15);
	 if (ocupaci�n == "Asesino") rad (15, 30, 15, 10, 15);
	 if (ocupaci�n == "Cazador") rad (10, 35, 10, 5, 25);
	 if (ocupaci�n == "sacerdote") rad (10, 25, 10, 30, 20);
	 if (ocupaci�n == "brujo") rad (5, 15, 5, 15, 45);
}

  	
 int main()     
 {   int sign=1;
	 Atributo a1; // Crear objeto
	while(sign)
	{	
	 srand ((unsigned) time (NULL)); // n�mero aleatorio
    
	 a1.show (); // Llama a la funci�n de seleccionar nombre y g�nero
	 a1.Rrace (); // Llama a la funci�n de seleccionar raza y ocupaci�n
	 a1.output_attribute (); // funci�n de salida
     cout<<endl;
	 cout << "Nombre \ t" << a1.name << endl;
     cout<<endl;
	 cout << "Gender \ t" << a1.sex << endl;
	 cout<<endl;
	 cout << "raza \ t" << a1.race << endl;
	 cout<<endl;
	 cout << "Ocupaci�n \ t" << a1.occupation << endl;
	 cout<<endl;
         cout << "fuerza \ t" << a1.fuerza << endl;
	cout<<endl;
	 cout << "Agile \ t" << a1.agility << endl;
	cout<<endl;
	 cout << "Fuerza f�sica \ t" << a1.f�sica << endl;
	cout<<endl;
	 cout << "  \ t" << a1.inteligencia << endl;
	cout<<endl;
	 cout << "  \ t" << a1.wisdom << endl;
	cout<<endl;
	 cout << "HP \ t" << a1.HP << endl;
	cout<<endl;
	 cout << "Mana \ t" << a1.MP << endl;
	cout<<endl;

	 int choose;
	  cout << "�Est� satisfecho con el rol creado, 0 satisfecho, 1 insatisfecho:";
	 cin>>choose;
	  if (elegir == 0) // escribir texto
	 {  sign=0;
		 ofstream outfile;   
  	outfile.open ("save.txt"); // Abre el archivo
  	   archivo de salida << "Nombre:" << a1.name << endl;
  	   archivo de salida << "Sexo:" << a1.sex << endl;
  	   outfile << "raza:" << a1.race << endl;
  	   outfile << "Ocupaci�n:" << a1.occupation << endl;
  	   outfile << "Fuerza:" << a1.fuerza << endl;
  	   outfile << "Agilidad:" << a1.agility << endl;
  	   outfile << "Fuerza f�sica:" << a1.physical << endl;
  	   archivo de salida << "Inteligencia:" << a1.inteligencia << endl;
  	   outfile << "Sabidur�a:" << a1.wisdom << endl;
  	   archivo de salida << "HP:" << a1.HP << endl;
  	   outfile << "Mana:" << a1.MP << endl;
         outfile.close (); // Cerrar el archivo
	 }
	  else sign = 1; // Signo de bucle
	}
	return 0;
}
