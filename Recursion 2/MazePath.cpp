// #include<iostream>
// using namespace std;
// int maze(int sr, int sc, int er, int ec){
//     if(sr>er || sc>ec) return 0;
//     if(sr==er && sr==er) return 1;

//     int rightWays = maze(sr , sc+1 , er , ec);
//     int downWays = maze(sr+1 , sc , er , ec);
//     int totalWays = rightWays + downWays;
//     return totalWays;
// }
// int main(){
//     cout<<maze(1,1,3,3);
// }

// #include<iostream>
// using namespace std;
// void printPath(int sr , int sc , int er , int ec , string s){
//     if(sr>er || sc>ec) return;
//     if(sr==er && sc==ec){
//         cout<<s<<endl;
//         return;
//     }
//     printPath(sr , sc+1 , er , ec , s + 'R');
//     printPath(sr+1 , sc , er , ec , s+'D');
// }
// int main(){
//     printPath(1,1,3,3,"");
// }

#include<iostream>
using namespace std;
int maze (int row , int column){
    if(row==1 && column==1) return 1;
    if(row<1 || column<1) return 0;
    
    int rightWays = maze (row , column - 1);
    int downWays = maze (row - 1 , column);
    int totalWays = rightWays + downWays ;
    return totalWays;
}
int main(){
    cout<<maze(3,4);
}
