#include <iostream>

using namespace std;

void draw_rect(int i){
   if(i>0){
      //cout << i << endl;
      //draw_rect(--i);
      cout << i << endl;
      cout << "**********" << endl;
      cout << "*        *" << endl;
      cout << "*        *" << endl;
      cout << "**********" << endl;
      draw_rect(--i);
   }
}

int main(){
   int i =3;
   draw_rect(i);
}
