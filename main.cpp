#include <iostream>
using namespace std;
int main() {
 int a;
 cout << "enter a ";
 cin >> a;
 int b;
 cout << "enter b ";
 cin >> b;
 int c;
 cout << "enter c ";
 cin >> c;
 if ((a>=1) && (a<=3)) {
   cout << "Число a лежит в интервале [1,3]" ;
 }
 else {
   cout << "Число a не лежит в интервале [1,3]" ;
 }
 
 if ((b>=1) && (b<=3)) {
   cout << "Число b лежит в интервале [1,3]" ;
 }
 else {
   cout << "Число b не лежит в интервале [1,3]" ; 
 }
 
 if ((c>=1) && (c<=3)) {
   cout << "Число c лежит в интервале [1,3]" ;
 }
 else {
   cout << "Число c не лежит в интервале [1,3]" ;
 }
 

cout << " a = " << a;

}