#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<string>
#include<fstream>
using namespace std;
 // Cree primero una clase base, registre el nombre y el género
class game
{   public:
         char name [100]; // define el nombre
         string sex; // Definir género
	 int sex_choice; // Datos enteros para seleccionar género
	void show();           
};
void game::show()
{ 
         cout << "Ingrese el nombre del rol que desea crear:";
    cin >> name;
int tag=1;
while (tag)
	{
		 cout << "Seleccione el rol de género: (0. Masculino 1. Femenino):" << endl ;;
        cin >> sex_choice;
		switch (sex_choice)
		{
		 caso 0: sexo = "Masculino"; etiqueta = 0; descanso;
                 caso 1: sexo = " "; etiqueta = 0; descanso;
                 predeterminado: cout << "Error de entrada, vuelva a ingresar" << endl; break;
		}
	}
}
 // game2 registra raza y ocupación

class game2:public game            
{
public:
 string race; // Definir carrera
 int race_choice; // elección de carrera
 intcupation_choice; // Elección de ocupación
void Rrace();
};
 void game2 :: Rrace () // La función miembro selecciona raza y ocupación      
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
 valor predeterminado: cout << "Error de entrada, ¡inténtalo de nuevo!" << endl; break;
}
}
while (1)
{
switch (race_choice)
{
 caso 1: cout << "Elige tu profesión: 0. Berserker 1. Paladin 2. Assassin 3. Hunter 4. Priest 5. Wizard" << endl; break;
 caso 2: cout << "Elige tu profesión: 2. Asesino 3. Cazador 4. Sacerdote 5. Asistente" << endl; break;
 caso 3: cout << "Elige tu profesión: 0. Berserker 3. Hunter 4. Priest" << endl; break;
caso 4: cout << "Elige tu profesión: 0. Berserker 1. Paladin 4. Priest" << endl; break;
 caso 5: cout << "Elige tu profesión: 4. Sacerdote 5. Asistente" << endl; break;
}
cin >> occupation_choice;
if (race_choice == 0 && (occupation_choice >= 0&& occupation_choice <= 5)) break;
else if (race_choice == 1&& (occupation_choice > 1 && occupation_choice < 6)) break;
else if (race_choice == 2 && (occupation_choice == 0 || occupation_choice == 3 || occupation_choice == 4)) break;
else if (race_choice == 3 && (occupation_choice == 0 || occupation_choice == 1 || occupation_choice == 4)) break;
else if (race_choice == 4 && (occupation_choice > 3 && occupation_choice < 6)) break;
 else cout << "Error de entrada, vuelva a ingresar" << endl;
}
 if (cupation_choice == 0) ocupación = "Berger";
 if (cupation_choice == 1) ocupación = "Paladin";
 if (cupation_choice == 2) ocupación = "Asesino";
 if (cupation_choice == 3) ocupación = "Cazador";
 if (cupation_choice == 4) ocupación = "Sacerdote";
 if (cupation_choice == 5) ocupación = "Witcher";
}


 Atributo de clase: juego público2 // Define la clase derivada de la clase de raza, genera atributos aleatorios
{
public:
	 int fuerza; // fuerza
	 int agility; // agilidad
	 int physical; // Fuerza física
	 int intelligence; // inteligencia
	 int sabiduría; // sabiduría
	 int HP; // HP
	 int MP; // Valor mágico
	 void output_attribute (); // Dependiendo de la función de determinación de atributos ocupacionales
	 void rad (int rand1, int rand2, int rand3, int rand4, int rand5); // función numérica generada aleatoriamente
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
	 HP = físico * 20; // El valor de vida es 20 veces la fuerza física
	 MP = (sabiduría + inteligencia) * 10; // El valor mágico es 10 veces la inteligencia e inteligencia
 
}
 atributo vacío :: output_attribute () // atributo inicial
{
	 if (ocupación == "Berger") rad (35, 15, 25, 5, 5);
	 if (ocupación == "Paladín") rad (20, 10, 25, 15, 15);
	 if (ocupación == "Asesino") rad (15, 30, 15, 10, 15);
	 if (ocupación == "Cazador") rad (10, 35, 10, 5, 25);
	 if (ocupación == "sacerdote") rad (10, 25, 10, 30, 20);
	 if (ocupación == "brujo") rad (5, 15, 5, 15, 45);
}

  	
 int main()     
 {   int sign=1;
	 Atributo a1; // Crear objeto
	while(sign)
	{	
	 srand ((unsigned) time (NULL)); // número aleatorio
    
	 a1.show (); // Llama a la función de seleccionar nombre y género
	 a1.Rrace (); // Llama a la función de seleccionar raza y ocupación
	 a1.output_attribute (); // función de salida
     cout<<endl;
	 cout << "Nombre \ t" << a1.name << endl;
     cout<<endl;
	 cout << "Gender \ t" << a1.sex << endl;
	 cout<<endl;
	 cout << "raza \ t" << a1.race << endl;
	 cout<<endl;
	 cout << "Ocupación \ t" << a1.occupation << endl;
	 cout<<endl;
         cout << "fuerza \ t" << a1.fuerza << endl;
	cout<<endl;
	 cout << "Agile \ t" << a1.agility << endl;
	cout<<endl;
	 cout << "Fuerza física \ t" << a1.física << endl;
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
	  cout << "¿Está satisfecho con el rol creado, 0 satisfecho, 1 insatisfecho:";
	 cin>>choose;
	  if (elegir == 0) // escribir texto
	 {  sign=0;
		 ofstream outfile;   
  	outfile.open ("save.txt"); // Abre el archivo
  	   archivo de salida << "Nombre:" << a1.name << endl;
  	   archivo de salida << "Sexo:" << a1.sex << endl;
  	   outfile << "raza:" << a1.race << endl;
  	   outfile << "Ocupación:" << a1.occupation << endl;
  	   outfile << "Fuerza:" << a1.fuerza << endl;
  	   outfile << "Agilidad:" << a1.agility << endl;
  	   outfile << "Fuerza física:" << a1.physical << endl;
  	   archivo de salida << "Inteligencia:" << a1.inteligencia << endl;
  	   outfile << "Sabiduría:" << a1.wisdom << endl;
  	   archivo de salida << "HP:" << a1.HP << endl;
  	   outfile << "Mana:" << a1.MP << endl;
         outfile.close (); // Cerrar el archivo
	 }
	  else sign = 1; // Signo de bucle
	}
	return 0;
}
