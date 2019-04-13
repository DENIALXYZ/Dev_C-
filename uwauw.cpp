#include <iostream>
using namespace std;

int main(){
   int i, j, space, jml = 5;

   for(i = 0; i <= jml; i++){
      /*for(space = i; space < jml; space++){
         cout << " ";
      }*/
      for(j = 0; j < i;j++){
         cout <<"*";
      }
      cout << endl;
   }
   return 0;
}
