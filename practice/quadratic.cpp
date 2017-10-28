#include <iostream>
#include <cmath>

using namespace std;
float quad(float, float, float);

int main(){
   float a = 0;
   float b = 0;
   float c = 0;
   cout << "Whats the value of a: ";
   cin >> a;
   cout << "Whats the value of b: ";
   cin >> b;
   cout << "Whats the value of c: ";
   cin >> c;
   quad(a,b,c);
}


float quad(float a, float b, float c){
   float ans = (-1)*b +(sqrt(pow(b,2)-4*a*c));
   cout << ans << endl;
   ans = (-1)*b -(sqrt(pow(b,2)-4*a*c));
   cout << ans << endl;

}

