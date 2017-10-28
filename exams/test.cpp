#include <iostream>

using namespace std;

int f1(int x,int y){
   cout << "The value of x is " << x << endl;
   cout << "The value of y is " << y << endl;
   if(x<0 || y<0){
      return x-y;
   }
   else{
      return(f1(x-1,y) + f1(x,y-1));
   }
}

int main(){
   cout << f1(1,2) << endl;
}
