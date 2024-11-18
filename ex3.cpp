#include <iostream>
#define N 10
using namespace std;

int buscasequencialrecursiva(int x,int v[], int j){
    if(j == N){
        return -1;
    }
    else{
        if(v[j] == x){
            return j;
        }
        else{
            buscasequencialrecursiva(x,v,j+1);
        }
    }

}

int main(){
    int x, v[N], j = 0;
    cin >> x;
    for(int i = 0;i < N;i++){
        cin >> v[i];
    }
    cout << buscasequencialrecursiva(x,v,j) << endl;
}