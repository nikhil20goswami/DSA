// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s = "Nikhil Puri Goswami ";
//     cout<<"Size of a string : "<<s.size()<<endl;
//     cout<<"Length of a string : "<<s.length()<<endl;

// }


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s = "abcd ";
//     cout<<"Original string is : "<<s<<endl;
//     s.push_back('e');
//     cout<<"Updated string is : "<<s<<endl;
//     s.pop_back();
//     cout<<"Updated string is : "<<s<<endl;
// }




// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s = "abcd";
//     cout<<"Original string is : "<<s<<endl;
//     s = s + "efg";
//     cout<<"Updated String is : "<<s<<endl;
// }

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "nikhil";
    cout<<"Original string is : "<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<"Updated String is : "<<s<<endl;
    sort(s.begin(),s.end());
    cout<<"Updated string is : "<<s<<endl;
}