// Case 1 

// #include<iostream>
// using namespace std;
// void fun(int x = 7, int y = 8){
//     cout<<x<<" "<<y;
// }
// int main(){
//     fun();
// }

// Case 2 

// #include<iostream>
// using namespace std;
// void fun(int x = 7, int y = 8){
//     cout<<x<<" "<<y;
// }
// int main(){
//     fun(4,8);
// }

// Case 3

// #include<iostream>
// using namespace std;
// void fun(int x = 7, int y = 8){
//     cout<<x<<" "<<y;
// }
// int main(){
//     fun(4);
// }

//Case 4

// #include<iostream>
// using namespace std;
// void fun(int x , float y){
//     cout<<x<<" "<<y;
// }
// int main(){
//     fun(4,20.11);
// }

// Case 5

// #include<iostream>
// using namespace std;
// void fun(int x = 8 , float y = 20.11){
//     cout<<x<<" "<<y;
// }
// int main(){
//     fun(4);
// }

// Case 6

#include<iostream>
using namespace std;
void fun(int x , bool y = true){
    cout<<x<<" "<<y;
}
int main(){
    fun(false);
}
