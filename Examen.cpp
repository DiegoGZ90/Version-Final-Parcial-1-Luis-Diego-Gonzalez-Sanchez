/*#include <iostream>  //Ejercicio 1//
using namespace std;

int main(int argc, char *argv[]) {
    int numero;
    do{
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;

    }while((numero<1) || (numero>10));

    for(int i=1; i<=10; i++){
        cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
    }
    return 0;
}*/   //Ejercicio 2 //
/*#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
    int num,i,p;
    cout<< "Ingrese tabla"<<endl;
    cin>> num;
    i = 1;
    cout<<endl;
    while (i<=10) {
        p = i*num;
        cout<<i<<" x "<<num<<" = "<<p<<endl;
        i=i+1;
    }
    return 0;
}*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ingrese Dia de la Semana: ";cin>>n;
    switch(n){
        case 1:{
            cout<<"lunes";cin;
            cout<<" Dia de Trabajo";
            break;
        }
        case 2:{
            cout<<"martes";cin;
            cout<<" Dia de trabajo";
            break;
        }
        case 3:{
            cout<<"miercoles";cin;
            cout<<"  Dia de trabajo";
            break;
        }
        case 4:{
            cout<<"jueves ";cin;
            cout<<" Dia de trabajo";
            break;
        }
        case 5:{
            cout<<"Viernes";cin;
            cout<<"Dia de trabajo";
            break;
        }
        case 6:{
            cout<<"sabado";cin;
            cout<<" Dia de trabajo";
            break;
        }
            break;
        case 7:{
            cout<<" domingo";cin;
            cout<<" Dia de trabajo para mi porque estudio sabado";
            break;
        }
    }
}

//Ejercicio 4 //
/*
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

string texto;
string linea;


int main() {

     ifstream archivo("examen.txt");

    while (getline(archivo,texto)){

        texto=texto+linea+"\n";
    }
    archivo.close();
   
    ofstream archivo2("examen.txt");
    archivo2<< texto <<"examen";

    return 0;
}*/
