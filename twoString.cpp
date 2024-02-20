#include <bits/stdc++.h>
using namespace std;

int main(){
string firstName ="";
string lastName ="";
cout<<"Enter your first name: "<<firstName;
getline(cin,firstName);
cout<<endl;
cout<<"Enter your last name: "<<lastName;
getline(cin,lastName);
cout<<endl;
string fullName = firstName+ " "+lastName;
cout<<fullName<<endl;

}
