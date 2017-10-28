#include <iostream>
using namespace std;
float height(float);
float areaa(float, float);

int main(){
   int n;
   float a;
   float b;
   float w;
   float area;
   float h;
   float x;
   float tarea;
   cout << "Enter the beginning x value: ";
   cin >> a;
   cout << "Enter the ending x value: ";
   cin >> b;
   cout << "Enter the number of rectangles: ";
   cin >> n;
   w = float((b-a)/n);
   x = a;
   for(int i=0;i<n;i++){
      h = height(x);
      x = x+w;
      //cout << x << endl;
      //area = w*h;
      float area = areaa(w,h);
      earea = tarea + area;
   }
   cout << "Area is " << tarea; 

}

float height(float x){
   float h = 2 * x;
   return h;
}

float areaa(float w, float h){
   float aa;
   aa = w*h;
   cout << aa << endl;
   return(aa);
}

