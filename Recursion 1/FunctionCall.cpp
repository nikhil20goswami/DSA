// #include<iostream>
// using namespace std;
// void greet(){
//     cout<<"Ganpati Bappa Morya "<<endl;
// }
// int main(){
//     greet();
// }

// #include<iostream>
// using namespace std;
// int product(int a , int b){
//     return a * b ;
// }
// int main(){
//     cout<<product(2,4);
// }

// #include<iostream>
// using namespace std;
// void gun(){
//     cout<<"5 6 7 8  Ganpati hamare saath"<<endl;
// }
// void fun(){
//     cout<<"1 2 3 4 Ganpati ki jai jai kar"<<endl;
//     gun();
// }
// int main(){
//     fun();
// }


// #include<iostream>
// using namespace std;
// void fun(){
//     cout<<"Ganpati Bappa Morya"<<endl;
//     fun();
// }
// int main(){
//     fun();
// }


#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout<<"Ganpati Bappa Morya "<<endl ;
    fun(n-1);
}
int main(){
    fun(6);
}