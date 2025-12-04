#include<iostream>
using namespace std;

double Celsius(){
    double Celsius, Farenheit;
    cout<<"Ingrese la temperatura en Celsius: "<<endl;
    cin>>Celsius;  
    Farenheit = (Celsius * 9/5) + 32; 
    return Farenheit; 
}

double Farenheit(){
    double Farenheit, Celsius; 
    cout<<"Ingrese la temperatura en Farenheit: "<<endl;
    cin>>Farenheit;
    Celsius = (Farenheit - 32) * 5/9; 
    return Celsius; 
}


int main(){
char conversion; 
double resultado;
cout << "Convertidor de Temperatura" << endl;
cout <<"Ingrese la letra 'C' para convertir de Celsius a Farenheit o la letra 'F'para convertir de Farenhheit a Celsius"<<endl;
cout<<"Si desea salir presione la letra 'E'"<<endl; 
cin>>conversion; 
if (conversion=='C' || conversion=='c')
        {
             resultado = Celsius();
              cout<<"La temperatura en grados Farenheit es "<<resultado<<endl;
         }
else if (conversion=='F'|| conversion=='f')
     {
             resultado = Farenheit();
             cout<<"La temperatura en grados Celsius es "<<resultado<<endl;
             
         }
else if (conversion=='E' || conversion=='e')
    {
        cout<<"Gracias por usar el convertidor de temperatura"<<endl;
    }
else 
    {
        cout<<"Opcion no valida"<<endl;
    }

return 0;
}
    