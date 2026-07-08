#include<bits/stdc++.h>
using namespace std;
int main(){

int x,y;
cin>>x>>y;

//cout<< min({2,3,4,5,6,7,1})<<endl;
//cout<< max({2,3,4,5,6,8,7,100,23})<<endl;

cout<<min(x,y)<<endl;
cout<<max(x,y)<<endl;

swap(x,y);

cout<<x<<" " <<y;




    return 0;
}