#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct nodo{
      char dato;
      struct nodo *sgte;
};

typedef struct nodo *TPila;

/*                      Crear Nodo
--------------------------------------------------------------------*/

TPila crearNodo(char x)
{
      TPila newNodo = new(struct nodo);
      newNodo->dato = x;
      return newNodo;
}
/*                      Apilar
--------------------------------------------------------------------*/
void push(TPila &top, char x)
{
     TPila aux = crearNodo(x);
     aux->sgte = top;
     top = aux;
}
/*                      Desapilar
---------------------------------------------------------------------*/
char pop(TPila &top)
{
     int c ;
     TPila aux;
     
     aux = top ;
     c = aux->dato;   // asignamos el primer vamor de la pila
     top = aux->sgte ;
     delete(aux);
     return c;
}

/*                      Palindroma
---------------------------------------------------------------------*/
void verificarPalindroma( TPila &p, string cad)
{
     TPila aux;     
     
     /* Borrando los espacios de la cadena   */
     for(int i=0; i<cad.size(); i++)
          if(cad[i]==32)
              cad.erase(i,1);   // borramos el caracter espacio(ASCII 32)
     
     /* Apilamos cada uno de los caracteres, el ultimo sera el primero en la pila*/
     for(int i=0; i<cad.size(); i++)
          push(p, cad[i]);    


     /* Comparando la cadena con la pila        */
     for(int i=0; i<cad.size(); i++)
     {
          aux = p;   // apunta siempre a la cima de la pila para comparar 
          
          if(cad[i]== aux->dato)
               pop( p );
          else
             break;
     }
     
     if( p==NULL)
        cout << "\n\t La frase ES PALINDROMA..." << endl;
     else
        cout << "\n\t La frase NO ES PALINDROMA..." << endl;
}

/*                   FUNCION PRNCIPAL
-------------------------------------------------------------------*/

int main()
{
    TPila pila = NULL;    // creando Pila
    string cad;
    
    cout<<"\n\t\tVERIFICAR FRASE PALINDROMA CON PILAS \n\n";
    
    cout << " Ingrese palabra: ";
    getline(cin, cad);
    
    verificarPalindroma( pila, cad );
    
    cout<<"\n\n ";
    system("pause");
    return 0;
}


