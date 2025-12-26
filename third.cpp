#include <iostream>
using namespace std;

void country(int x,string name="china"){
cout<<x<<endl;
cout<<name<<endl;
}

int main(){
  country(65,"nepal");                                                   
    country(65);              
    return 0;
}