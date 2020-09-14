#include <iostream>
using namespace std;
int main() {
 int a;
 int b;
 int c;
 cout << "enter a ";
 cin >> a;
 cout << "enter b ";
 cin >> b;
 a = a+b;
 b = b-a;
 b = -b;
 a = a-b;
cout << " a = " << a;
cout << " b = " << b;
}