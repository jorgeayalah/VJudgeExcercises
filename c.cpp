#include <iostream>
#include <string>

int solve(string players){
    int cont0=0, cont1=0;
    for(int i=0; i<players.size() && cont0<7 && cont1<7; i++){
        if(cont0 >= 7 || cont1 >= 7){return 1}; //1 = "SI"
        if(players[i]=='0'){
            (cont0>0) ? cont0++ : cont0 = 1;
            cont1 = 0;
        }else if(players[i]=='1'){
            (cont1>0) ? cont1++ : cont1 = 1;
            cont0 = 0;
        }
    }
    return 0; // 0 = "NO"
}
int main(){
    string players;
    cin >> players;
    (solve(players)==1) ? cout << "SI" << endl : cout << "NO" << endl;
};