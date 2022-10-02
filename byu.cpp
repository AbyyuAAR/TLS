#include <iostream>
using namespace std;
int main() {
float a,b;
char op;

cout << "Byu's calculator <3\n";
cout << "insert equation\n";
cin >>a>>op>>b;
cout << "\n";

switch(op) {

case '+':
cout << a << op << b <<"="<< a+b;
break;

case '-':
cout << a << op << b <<"="<< a-b;
break;

case 'x':
cout << a << op << b <<"="<< a*b;
break;

case '/':
cout << a << op << b <<"="<<a/b;
break;

default :
cout << "your mom!!!";
break;
}

cout << "\n thank you for using our services";

}