#include <iostream>

using namespace std;

int* create_mem(){
   return (new int[5]);
}

int main(){

   // Dynamic allocation of arrays
/*
   int **x = NULL;
   cout << x << endl;
   int y = 10;
   int j = 0;
   x = new int* [y];
   cout << x[1];
   for(int i = 0;i<y;i++){
      x[i] = new int[50];
      //y[i] = 2*i;

      cout << x[i][j++] << endl;
   
   }
*/
   int *y = NULL;
   int x = 10;
   y = new int [10];
   for(int i = 0; i<10;i++){
     y[i] = 10;
     cout << y[i] << endl;
  } 
  int *a = NULL; a = create_mem();
  int **yy = NULL;
  yy = new int* [10];
  for(int i = 0;i<10;i++){
     yy[i] = new int[10];
  }
  int *poin = NULL;
  poin = new int [10];

  int stat[10][20];
  cout << stat[0] << endl;

}
