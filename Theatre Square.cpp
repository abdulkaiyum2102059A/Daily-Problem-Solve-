#include<iostream>
using namespace std;
int main(){
int n,m,a;
cin>>n>>m>>a;
if((n*m)>(2*(a*a))){
    cout<<2*((n*m)/(a*a));
}else if((a*a)>(n*m)){
cout<<a/a;
}
else
cout<<(n*m)/(a*a);

}
