#include <iostream>
using namespace std;

int main()
{
    int arreglo[10]= {1,4,5,3,10,200,21,11,66,67};
    int min = arreglo [0];
    
    // Recorriamos el arreglo
    for(auto i: arreglo)
    {
        // Si la variable max es menor que i;mas se conviert en i
        if( i < min)
         min = i;
    }
    
    cout <<"El valor minimo es: " << min << endl;
    
    return 0;
    
}