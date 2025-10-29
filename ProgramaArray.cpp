#include <iostream>
using namespace std;

int main()
{
    
    int calificaciones[7];
    calificaciones[0]=10;
    calificaciones[1]=9; 
    calificaciones[2]=10;
    calificaciones[3]=8;
    calificaciones[4]=7;    
    calificaciones[5]=9;
    calificaciones[6]=10;

    for (int i=0; i<=6; i++)
    {
        cout<<"La calificacion del alumno "<<i<<" es: "<<calificaciones[i]<<endl;
    }

    /*Segunda version del algoritmo Meteorologico que funciona raro. 
     Mediante este algoritmo el usuario determina el promedio anual de lluvias de la region Centro,
     el mes con menor lluvia de la region sur, la region que tiene mayor porcentaje de lluvias*/
     double SumaCentro=0, AuxMayor, AuxMenor; 
    string AuxRegion, AuxMeses;
    double norte[12]={7.2, 5.4, 3.2, 1.2, 0.4, 0.0, 0.2, 1.6, 3.7, 6.5, 8.3, 6.9};
    double sur[12]={6.8, 5.9, 4.3, 2.4, 1.3, 2.6, 3.1, 3.3, 2.1, 4.1, 5.9, 0};
    double centro[12]={5.2, 4.9, 3.8, 2.1, 1.0, 0.3, 0.0, 0.1, 1.4, 10, 4.8, 6.1}; 
    string meses[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio","agosto", "septiembre", "octubre", "noviembre", "diciembre"};

    /*Promedio anual de lluvias en la region centro*/
    for (int i=0; i<=11; i++)
    {
        SumaCentro=SumaCentro+centro[i]; 
    }
    cout<<"El promedio anual de lluvias en la region centro es: " <<SumaCentro/12<< " pulgadas"<<endl;

    /*Mes con menor lluvia en la region sur*/
    AuxMenor=sur[0];
    AuxMeses = meses[0];
    for (int i=0; i<=11; i++)
    {
       if(sur[i]<AuxMenor)
       {   
           AuxMenor=sur[i];
           AuxMeses = meses[i];
       }
    }
    cout<<"El mes con menor lluvia en la region sur es: "<<AuxMeses<<endl;


    /*La region que tiene mayor porcentaje de lluvias*/
    AuxMayor=norte[0];
     for (int i=0; i<=11; i++)
    {  
       if (norte[i]>=AuxMayor)
         {
                AuxMayor=norte[i];
                AuxRegion="Norte";
         }

        else if(centro[i]>=AuxMayor)
         {
                AuxMayor=centro[i];
                AuxRegion="Centro";
         }

        else if(sur[i]>=AuxMayor)
         {
                AuxMayor=sur[i];
                AuxRegion="Sur";
         }

    }
    cout<<"La region con mayor porcentaje de lluvias es: "<<AuxRegion<<endl;


    /*Algoritmo que indica al usuario cuanto debe pagar para llamadas internacional, nacional y local*/
    int internacional, nacional, local;
    double SumaLocal=0, SumaNacional=0, SumaInternacional=0;
    cout<<"Ingrese el numero de llamadas internacionales: ";
    cin>>internacional;
    int llamadasinter[internacional];
    cout<<"Ingrese el numero de llamadas nacionales: ";
    cin>>nacional;
    int llamadasnacio[internacional];
    cout<<"Ingrese el numero de llamadas locales: ";
    cin>>local;
    int llamadasloc[local];

    for(int i=1; i<=internacional; i++)
    {
        cout<<"Ingrese la duracion en minutos de la llamada internacional "<<i<<": ";
        cin>>llamadasinter[i];
       if (llamadasinter[i]<=3)
       {
            SumaInternacional=SumaInternacional+7.59;
       }
                else
                {
                    int ExtraInter=llamadasinter[i]-3;
                    SumaInternacional=SumaInternacional + 7.59 + (ExtraInter*3.3);
                }

     }
     cout<<"El total a pagar por llamadas internacionales es: "<<SumaInternacional<<endl;

     for(int j=1; j<=nacional; j++)
    {
        cout<<"Ingrese la duracion en minutos de la llamada nacional "<<j<<": ";
        cin>>llamadasinter[j];
       if (llamadasnacio[j]<=3)
       {
            SumaInternacional=SumaInternacional+1.20;
       }
                else
                {
                    int ExtraNacio=llamadasinter[j]-3;
                    SumaNacional=SumaNacional + 1.20 + (ExtraNacio*0.48);
                }

     }
     cout<<"El total a pagar por llamadas internacionales es: "<<SumaNacional<<endl;

     
     if (local<=50)
     {
        cout<<"El total a pagar por llamadas locales es: 0"<<endl;
     }
                else 
                {
                SumaLocal=local *0.60;
                cout<<"El total a pagar por llamadas locales es: "<<SumaLocal<<endl;
                }

    cout<<"El total a pagar por todas las llamadas es: "<<SumaInternacional+SumaNacional+SumaLocal<<endl;
     

    /*Algoritmo para determinar a la cantidad de personas que tiene sueldos inflados.
    Se proporcionan los sueldos de cinco personas y de eso se determina la cantidad de los que tienen
    sueldos mayor al promedio*/

    double sueldos[5];
    double SumaSueldos=0, PromedioSueldos=0;
    int Contador=0; 

    for (int i=0; i<=4; i++)
    {
        cout<<"Ingrese el sueldo de la persona "<<i+1<<": ";
        cin>>sueldos[i];
        SumaSueldos=SumaSueldos+sueldos[i];
    }
    PromedioSueldos=SumaSueldos/5;

    for (int j=0; j<=4; j++)
    {
        if (sueldos[j]>PromedioSueldos)
        {
            Contador=Contador+1;
        }
    }
    cout<<"La cantidad de personas con sueldos inflados (superior al promedio) es: "<<Contador<<endl;

    /*Algoritmo para en el que se propociona la tonealda de cereal cosechada cada mes
    durante un año y despues se determina a) el promedio anual, b)la cantidad de meses que el promedio
    fue inferior y c)la cantidad de meses que el promedio fue superior */

    double cereal[12];
    double SumaCereal=0, PromedioCereal=0, ContadorInferior=0, ContadorSuperior=0;

    for (int i=1; i<=12; i++)
    {
        cout <<"Ingrese la tonelada de cereal cosechada en el mes "<<i<<": ";
        cin>>cereal[i]; 
        SumaCereal=SumaCereal+cereal[i];
    }
    PromedioCereal=SumaCereal/12;

    for (int j=1; j<=12; j++)
    {
        if (cereal[j]<PromedioCereal)
        {
            ContadorInferior=ContadorInferior+1;
            cout <<"En el mes numero "<<j<<" la produccion fue inferior al promedio"<<endl;
        }
        else if (cereal[j]>PromedioCereal)
        {
            ContadorSuperior=ContadorSuperior+1;
            cout <<"En el mes numero "<<j<<" la produccion fue superior al promedio"<<endl;
        }
    }

       cout<<"El promedio anual de cereal cosechado es: "<<PromedioCereal<<endl;
       cout<<"La cantidad de meses con produccion inferior al promedio es: "<<ContadorInferior<<endl;
       cout<<"La cantidad de meses con produccion superior al promedio es: "<<ContadorSuperior<<endl;

       /* Algoritmo para una tienda, en el que el trabajador ingresa la cantidad de ventas mensuales que tuvieron
       y de cuanto dinero fueron estas; posteriormente indica las ventas menores a $800, las que estan entre $800 y $1000
       y las que son mayores a $1000 */

       int Cantidad,ContadorMenor=0, ContadorEntre=0, ContadorMayor=0;
       double venta[Cantidad];
       cout<<"Ingrese la cantidad de ventas mensuales realizadas: ";
       cin>>Cantidad;

         for (int i=1; i<=Cantidad; i++)
         {
                cout<<"Ingrese el monto de la venta numero "<<i<<": ";
                cin>>venta[i];
         }

        for (int i=1; i<=Cantidad; i++)
        {

            if (venta[i]<800)
            {
                ContadorMenor=ContadorMenor+1;
                cout<<"La venta numero "<<i<<" es menor a $800"<<endl;
            }
            else if (venta[i]>=800 && venta[i]<=1000)
            {
                ContadorEntre=ContadorEntre+1;
                cout<<"La venta numero "<<i<<" esta entre $800 y $1000"<<endl;
            }
            else if (venta[i]>1000)
            {
                ContadorMayor=ContadorMayor+1;
                cout<<"La venta numero "<<i<<" es mayor a $1000"<<endl;
            }
        }
        cout<<"El total de ventas menores a $800 es: "<<ContadorMenor<<endl;
        cout<<"El total de ventas entre $800 y $1000 es: "<<ContadorEntre<<endl;
        cout<<"El total de ventas mayores a $1000 es: "<<ContadorMayor<<endl;

        /*Programa que hace la suma de los elementos de dos arreglos y el resultado lo guarda en un tercer arreglo*/
        int tamaño; 
        cout<<"Ingrese el tamano de los arreglos: ";
        cin>>tamaño;
        double arreglo1[tamaño], arreglo2[tamaño], arregloSuma[tamaño];

        for (int i=1; i<=tamaño; i++)
                {
                    cout<<"Ingrese el elemento "<<i<<" del primer arreglo: ";
                    cin>>arreglo1[i];
                }
                
         for (int i=1; i<=tamaño; i++)
                {
                    cout<<"Ingrese el elemento "<<i<<" del segundo arreglo: ";
                    cin>>arreglo2[i];
                }
         
        for (int i=1; i<=tamaño; i++)
                {
                  arregloSuma[i]=arreglo1[i]+arreglo2[i];
                  cout<<"El elemento "<<i<<" del arreglo suma es: "<<arregloSuma[i]<<endl;
                }

        /*Programa que determina la suma de los numeros pares comprendidos entre 50 y 100*/
        double SumaPares=0;

        for (int i=50; i<=100; i++)
        {
            if (i%2==0)
            {
                cout<<i<<endl;
                SumaPares=SumaPares+i;
            }
        }
        cout<<"La suma de los numeros pares comprendidos entre 50 y 100 es: "<<SumaPares<<endl;



  
    return 0; 
}