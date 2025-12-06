
/*

Vetores são estruturas de dados que armazenam uma coleção de elementos do mesmo tipo em posições contíguas na memória. Eles permitem o acesso rápido aos elementos através de índices.
Aqui estão algumas operações comuns que podem ser realizadas com vetores em C++:

1-Leia 10 números e imprima o maior e o menor.

2-Inverta os elementos de um vetor.

3-Busque um número dentro do vetor (busca linear).

4-Some todos os elementos de um vetor.

5-Conte quantas vezes um número aparece.

*/

#include <iostream>
#include <limits> 
using namespace std;

int main(){
  int n,menor=0,maior=0;
    int vetor[n];
  

    cout<<"Informe o tamanho do vetor";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Informe o elemento "<< i+1 <<": ";
        cin>>vetor[i];

        if(vetor[i]> maior){
            maior=vetor[i];
        }else{
            menor=vetor[i];
        
    }
  }
    cout<< "imprimindo o vetor: "<< endl;
    cout<<"imprimindo o menor: "<<menor<<endl;
    cout<<"imprimindo o maior: "<<maior<<endl;
  return 0;
}
