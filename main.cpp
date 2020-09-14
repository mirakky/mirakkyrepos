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

std::swap(a,b);

cout << " a = " << a;
cout << " b = " << b;
}