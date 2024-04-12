#include <iostream>

using namespace std;

int main() {
   int space = 4;

   for (int i = 1; i <= 5; i++) {
       for (int j = 1; j <= space; j++) {
           cout << " ";
       }
       for (int j = 1; j <= i; j++) {
           cout << "* ";
       }
       cout << endl;
       space--;
   }
   

   return 0;
}