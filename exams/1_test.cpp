#include <iostream>

using namespace std;

void recursive(int n){
   if(n<8){
      recursive(++n);
      cout << n << endl;
      //cout 
   }

}

int main(){
   recursive(4);

}
