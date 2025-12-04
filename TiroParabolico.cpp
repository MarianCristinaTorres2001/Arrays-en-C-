#include<iostream>
#include<cmath>
using namespace std;

const float g=9.81; // Aceleración debida a la gravedad en m/s²//

float altura_maxima(float velocidad_inicial, float angulo){
    float altura;
    float angulo_rad = angulo * 3.14159 / 180.0;
    altura = (velocidad_inicial * velocidad_inicial * sin(angulo_rad) * sin(angulo_rad)) / (2 * g);
    return altura;
}

float alcance_horizontal(float velocidad_inicial, float angulo){
    float alcance;
    float angulo_rad = angulo * 3.14159 / 180.0;
    alcance = (velocidad_inicial * velocidad_inicial * sin(2 * angulo_rad)) / g;
    return alcance;
}

float tiempo_vuelo(float velocidad_inicial, float angulo){
    float tiempo;
    float angulo_rad = angulo * 3.14159 / 180.0;
    tiempo = (2 * velocidad_inicial * sin(angulo_rad)) / g;
    return tiempo;
}

float posicion_en_tiempo(float velocidad_inicial, float angulo, float tiempodeseado){
    float angulo_rad = angulo * 3.14159 / 180.0;
    cout<<"Ingrese el tiempo en segundos en el cual desea conocer la posicion: "<<endl;
    cin>>tiempodeseado;
    float x = velocidad_inicial * cos(angulo_rad) * tiempodeseado;
    float y = (velocidad_inicial * sin(angulo_rad) * tiempodeseado) - (0.5 * g * tiempodeseado * tiempodeseado);
    cout << "Posicion en t=" << tiempodeseado << "s: (" << x << ", " << y << ")" << endl;
    return 0;
}

int main(){
cout<<"Programa de Tiro Parabólico"<<endl;
float velocidad_inicial, angulo, tiempo, resultado;
char opcion;

cout<<"Las operaciones que puede realizar el programa se aprecian en el siguiente menu: "<<endl;
cout<<"-------------------------------------------"<<endl;
cout<<"A-------- Calcular la altura vertical maxima"<<endl;
cout<<"B-------- Calcular el alcance horizontal maximo"<<endl;
cout<<"C-------- Calcular el tiempo de vuelo"<<endl;
cout <<"D--------Calcular la posicion 'x' y 'y' en un tiempo determinado"<<endl;
cout<<"-------------------------------------------"<<endl;
cout<<"Escriba la letra correspondiente a la operacion que desea realizar "<<endl;
cin>>opcion;
cout<<"Escriba la velocidad inicial del proyectil"<<endl;
cin>>velocidad_inicial;
cout<<"Escriba el angulo del proyectil"<<endl;
cin>>angulo; 
cout<<"Escriba el tiempo que tarda el proyectil en el aire"<<endl;
cin>>tiempo; 

switch (opcion)
{
case 'A':
    resultado = altura_maxima(velocidad_inicial, angulo);
    cout<<"La altura maxima vertical alcanzada por el proyectil es: "<<resultado<<endl;
    break;
case 'B':
    resultado = alcance_horizontal(velocidad_inicial, angulo);
    cout<<"El alcance horizontal maximo del proyectil es: "<<resultado<<endl;
    break;
case 'C':
    resultado = tiempo_vuelo(velocidad_inicial, angulo);
    cout<<"El tiempo de vuelo del proyectil es: "<<resultado<<endl;
    break;
case 'D':
    resultado = posicion_en_tiempo(velocidad_inicial, angulo, tiempo);
    break;

default:
    break;
}

return 0;

}
