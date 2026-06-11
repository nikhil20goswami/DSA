#include<iostream>
using namespace std;
int main(){
    int n=5;
    int x=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2==1){
                cout<<" "<<x++;
            }
            else{
                cout<<" "<<--x;
            }
        }
        x+=n;
        cout<<endl;
    }
    return 0;
}