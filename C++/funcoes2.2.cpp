#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

bool b();
char d();

int main(){

cout<<"Yo"<<d()<<"\n";
cout<<b()<<"\n";
if(b()){
    cout<<"true \n";
}else{
    cout<<"false \n";
}
//system("CLS");
system("pause");
return 0;
}

char d(){
return 'h';
}

bool b(){
return false;
}
