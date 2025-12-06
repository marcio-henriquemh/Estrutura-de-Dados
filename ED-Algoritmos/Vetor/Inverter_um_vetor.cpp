

#include<iostream>
using namespace std;




int main(){
    int n,tamanho;
    int vetor[tamanho];
    int inverter[n];

    cout<<"informe o tamanho do vetor: ";
    cin>>tamanho;
    for (int i = 0; i < tamanho; i++)
    {
        cout<<"informe o elemento "<<i+1<<": ";
        cin>>vetor[i];
    }

    for (int i = 0; i < n; i++)
    {
        inverter[i]=vetor[n-1-i];
    }

    cout<<"Vetor invertido: ";
    for (int i = 0; i < tamanho; i++)
    {
        cout<<inverter[i]<<" "; 
    }

}