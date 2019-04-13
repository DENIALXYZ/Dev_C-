#include <iostream>
using namespace std;

int main(){
   int i, j, space, jml = 50;

   for(i = 1; i <= jml; i++){
      for(space = i; space < jml; space++){
         cout << " ";
      }
      for(j = 1; j <= (2 * i - 1); j++){
         cout << "*";
      }
      cout << "\n";
   }
   return 0;
}
