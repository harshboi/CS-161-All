#include <iostream>
#include <string>

using namespace std;

void func(int *i){
   cout << "inside func" << endl;
   *i = 2;
   cout << "func " << *i;
    //delete i;
}

int* assign(int *i){
   cout << "Assign" << endl;
   i = new int;
   //return(i);
}

void del(int *i){
   delete i;

}

char* assign1(char *c){
   cout << "Size: ";
   int y;
   cin >> y;
   c = new char[y+1];
   return(c);
}



int main(){
   int* i = NULL;
   //i = new int;
   cout << "main" << endl;
   i = assign(i);
   func(i);
   cout << *i << endl;
   // delete []i;
    cout << *i << endl; 
   int y;
//   int j = 0;
}
