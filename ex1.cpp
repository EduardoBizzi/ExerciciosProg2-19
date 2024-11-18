#include <iostream>
#define N 10
using namespace std;

int buscasequencial(int x,int v[]){
    for(int j = 0;j < N;j++){
        if(v[j] == x){
            return j;
        }
        if(j == N-1 && v[j] != x){
            return -1;
        }
    }
}

int main(){
    int x, v[N];
    cin >> x;
    for(int i = 0;i < N;i++){
        cin >> v[i];
    }
    buscasequencial(x,v);
}