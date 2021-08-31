#include <iostream>
#include <string>
using namespace std;

string solve(string players){
    int cont0=0, cont1=0;
    for(int i=0; i<players.size() && (cont0<7 && cont1<7); i++){
        if(players[i]=='0'){
            (cont0>0) ? cont0++ : cont0 = 1;
            cont1 = 0;
        }else if(players[i]=='1'){
            (cont1>0) ? cont1++ : cont1 = 1;
            cont0 = 0;
        }
        if(cont0 >= 7 || cont1 >= 7){return "YES";}
    }
    return "NO";
}
int main(){
    string players;
    cin >> players;
    cout << solve(players) << endl;
};