#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> insercion(vector<int> lista){
    bool cambio;
    for(int i = 0; i <lista.size()-1; i++){
        cambio = true;
        for(int j = i+1; j>0  && cambio; j--){
            if(lista[j]<lista[j-1]){
                swap(lista[j-1], lista[j]);
            }
            else{
                cambio = false;
            }
        }
    }
    return lista;
}

int main(){
    int n, value, cont=0, twin=0, twin2=0;
    vector<int> coins;
    cin >> n;
    for(int i=0; i<n; i++){ //cambiar 'n' a MAX
        cin >> value;
        coins.push_back(value);
        twin2 += value;
    }
    coins = insercion(coins);

    for(int j=n-1; j>=0 && twin<=twin2; j--){
        cont++;
        twin += coins[j]; twin2 -= coins[j];
    }
    cout << cont << endl;
    return 0;
};