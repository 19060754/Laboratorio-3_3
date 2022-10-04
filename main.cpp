/**********************************************************************************************************************
 // FileName:        main.c
 // Program version: Replit
 // Company:         TECNM - ITCH
 // Description:     Laboratorio 3:Herencia y Polimorfismo; Inciso 3 EN C++ 
 // Authors:         Andrew Barrientos
 // Updated:         10/2022
 //Nota:  			EL SIGUIENTE CODIGO MUESTRA EL USO DE CLASES CON ARREGLOS
 //					Y CAPTURANDO LOS DATOS
************************************************************************/
//03-10-2022
#include <iostream>
#include <stdlib.h>
#include "Canal.hpp"
#include <cmath>
using namespace std;

/************************************************
    Inicializacion de cuenta
************************************************/
void Portada(void){
	printf("\n\t\t Laboratorio U1:Herencia y polimorfismo");
	printf("\n\n");
  printf("\n Alumno: Andrew Joshua Barrientos Lonzo 19060754");
  printf("\n Arquitectura de programacion de hardware");
  	printf("\n Semestre Agosto-Diciembre 2022");
	printf("\n Docente: M.C. Alfredo Chacon\n");
  printf("\n\n");
 printf("\n Advertencia: No fue posible diferenciar entre canales ya existentes, por ello es necesario que si se configuren varios que sean deliberadamente diferentes entre si\n");
printf("\n Cuando se de a elegir un canal uno debe insertar el numero de la posicion en la lista, no el numero de canal\n");
  printf("\n\n");
  
}
int n,ch,answ=1;
int Canal::n_Canal=0;
/************************************************
   MAIN
************************************************/
int main(int argc, char** argv) {
  Portada();
  system("pause");
  system("CLS");
  cout<<"Inserte el numero de canales: ";
	cin>> n;
	Canal m[n];
  m[1].setn_Canal(n);
  cout<<endl<<"Se activaran: "<<Canal::getn_Canal()<< " canales";
	//Capturando Datos
  
	for (int i=0;i<n;i++){
    cout<<endl<<"  - Canal N: "<<i+1<<" -";
		m[i].captura();
   }
  system("pause");
  system("CLS");
	  //cout << "\033[2J\033[0;0H";//Comentar para devc++, su unico proposito es borrar pantalla en Replit
	//Imprimiendo Datos
	for (int i=0;i<n;i++){
		m[i].muestraDatos();	
	 }
  system("pause");
  system("CLS");
  //Descomentar para devc++
  cout<<"\n";//Comentar para devc++
  do{
  cout<<"Elija un canal";
  cout<<"\n";
  for (int i=0;i<n;i++){
    cout<<i+1<<".-";
		m[i].menu();
    cout<<"\n";
	 }
  do{cin>>ch;
    if(ch<=0||ch>n){
     cout<<"Inserte una opcion valida";
      cout<<"\n";
    }
    }while(ch<=0||ch>n);
    ch=ch-1;
    m[ch].calculo();
    do{
    cout<<"\n";
    cout<<"Desea seguir midiendo?";
    cout<<"\n";
    cout<<"1.-Si";
    cout<<"\n";
    cout<<"2.-No";
    cout<<"\n";
    cin>>answ;
    if(answ!=1&&answ!=2){
      system("CLS");	
      cout<<"Inserte una opcion valida";
      cout<<"\n";
    }
    cout<<"\n";}while(answ!=1&&answ!=2);//Comentar para devc++
    }while(answ!=2);
  
	system("pause");
	return 0;
}
/*???????*/