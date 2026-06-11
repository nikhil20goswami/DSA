// #include<iostream>
// using namespace std;
// int main(){
//     int x = 7;
//     int *ptr = &x;
//     cout<<ptr<<endl;
//     ptr = ptr + 1;
//     cout<<ptr<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     bool flag = true;
//     bool *ptr = &flag;
//     cout<<ptr<<endl;
//     ptr = ptr + 1;
//     cout<<ptr<<endl;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 4;
//     cout<<&x<<endl;
//     int *ptr = &x;
//     cout<<*ptr<<endl;
//     ptr = ptr + 1;
//     cout<<ptr<<endl;
// }


#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int *ptr = &x;
    cout<<*ptr<<endl;
    *ptr = *ptr + 1;
    cout<<*ptr<<endl;
}