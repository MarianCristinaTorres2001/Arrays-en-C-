#include <iostream>
using namespace std;

int main()
{
     /*Algoritmo Meteorologico
     mediante este algoritmo el usuario determina el promedio anual de lluvias de la region Centro,
     el mes con menor lluvia de la region sur, la region que tiene mayor porcentaje de lluvias*/
     double meses[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
     double SumaCentro=0, AuxMayorNorte=0,  AuxMayorCentro=0,  AuxMayorSur=0, AuxMeses=0, AuxMenor; 
    
    
    double norte[12]={7.2, 5.4, 3.2, 1.2, 0.4, 0.0, 0.2, 1.6, 3.7, 6.5, 8.3, 6.9};
    double sur[12]={6.8, 5.9, 4.3, 2.4, 1.3, 2.6, 3.1, 3.3, 2.1, 4.1, 5.9, 7.4};
    double centro[12]={5.2, 4.9, 3.8, 2.1, 1.0, 0.3, 0.0, 0.1, 1.4, 3.2, 4.8, 6.1};

    for (int i=0; i<=11; i++)
    {
        SumaCentro=SumaCentro+centro[i]; 

    }
    cout<<"El promedio anual de lluvias en la region centro es: "<<SumaCentro/12<<" pulgadas"<<endl;

    for (int i=0; i<=11; i++)
        {

            if (norte[i]>AuxMayorNorte)
            {
                AuxMayorNorte=norte[i];
            }
        }

        AuxMenor=sur[0];
    for (int i=0; i<=11; i++)
        { 
        if (sur[i]<AuxMenor)
        {
            AuxMenor=sur[i];
            sur[i]=meses[i];
            AuxMeses=meses[i];
        }
        }
         cout<<"El mes con menor lluvia en la region sur es: "<<AuxMeses<<endl;
                                                            

    for (int i=0; i<=11; i++)
        {

            if (sur[i]>AuxMayorSur)
            {
                AuxMayorSur=sur[i];
            }
        }

    for (int i=0; i<=11; i++)
        {

            if (centro[i]>AuxMayorCentro)
            {
                AuxMayorCentro=centro[i];
            }
        }

    if (AuxMayorNorte>AuxMayorCentro && AuxMayorNorte>AuxMayorSur)
         {cout<<"La region con mayor porcentaje de lluvias es la region norte con "<<AuxMayorNorte<<" pulgadas"<<endl;}

         else if (AuxMayorCentro>AuxMayorNorte && AuxMayorCentro>AuxMayorSur)
            {cout<<"La region con mayor porcentaje de lluvias es la region centro con "<<AuxMayorCentro<<" pulgadas"<<endl;}
            else 
                {cout<<"La region con mayor porcentaje de lluvias es la region sur con "<<AuxMayorSur<<" pulgadas"<<endl;}



    
    





  return 0;   
}