#include <iostream>
#define N 10
using namespace std;

int buscabinaria(int x,int v[],int inicio,int fim){
    if(inicio > fim){
        return -1;
    }
    else{
        int meio = (inicio+fim)/2;
        if (x == v[meio]){
            return meio;
        }
        else{
            if (x < v[meio])
                buscabinaria(x, v, inicio, meio - 1);
            else
                buscabinaria(x, v, meio + 1, fim);
        }
    }

}

int main(){
    int x, v[N], inicio = 0, fim = N-1;
    cin >> x;
    for(int i = 0;i < N;i++){
        cin >> v[i];
    }
    cout << buscabinaria(x,v,inicio,fim) << endl;
}