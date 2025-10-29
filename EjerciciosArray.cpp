#include <iostream>
using namespace std;

int main()
{
   /*PROGRAMAS QUE UTILIZAN ARRAY */

   /*Programa en el que el usuario ingresa las edades de los siete enanos de Blancanieves*/
    int edades[6];
    cout<<"Ingrese las edades de los 7 enanos de Blancanieves"<<endl;
    
    for(int i=0; i<=6; i++)
    {
        cout <<"Enano " <<i<<" : "; 
        cin >> edades[i]; 

    }

     /*Para que el usuario pueda ver las edades ingresadas por él mismo tambien
     se utiliza un array*/

    cout<<"Las edades de los 7 enanos son: "<<endl;
    for (int i=0; i<=6; i++)
    {
        cout <<"Enano " <<i<<" : "<<edades[i]<<endl; 

    }

    /*Programa en el que el usuario ingresa sus calificaciones y luego puede leerlas*/

    int calificaciones[6]; 
    cout <<"Ingrese las calificaciones obtenidas en las 6 materias cursadas"<<endl;
    for (int i=0; i<=5; i++)
    { 
        cin>>calificaciones[i]; 

    }
    cout<<"Las calificaciones ingresadas por el alumno son: "; 
    for (int i=0; i<=5; i++)
     {
        cout<<calificaciones[i]<<", ";
     }
}