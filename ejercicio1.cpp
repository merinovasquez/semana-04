#include <iostream>
using namespace std;

int main()

{
    // Creacion de variable
    int n=0;
    //Ingreso de datos
    
    cout<<"Ingrese el numero de datos:"<< endl;
    cin>>n;
    
    //Variable total
    int total=0;
    
    //for antiguo
    for(int i =2; i <=n; i+=2)
    {
        total = total + i;
    }
    // mostrar el resultado
    
    cout<<"El total es:" << total <<endl;
    
    return 0;
    
    
    
    
}