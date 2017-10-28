#include <iostream>
#include <string.h>

using namespace std;

int main(){
   /*string *harsh;
     harsh = new string[100];
     harsh[0] = "hi i am harsh";
     cout << harsh[0]; 
     cout << harsh << endl;
     cout << &harsh << endl;
   //*/
   char str[20];
   cin.getline(str,20); 
   cout << "Void*str: " << (void *)str << endl;
   cout << "str is: " << str[10] << endl; // Why does this give out all the characters in the srtring and not the adress or the first character stored in it
   cout << "str[1] is: " << str[1] << endl;

   cout << "DOUBLE POINTERS:-" << endl;
   int x;
   cout << "How many elements in the pointer";
   cin >> x;
   cin.clear();
   cin.ignore(256,'\n');
   char **names = NULL;
   names = new char*[x];
   for(int j=0;j<x;j++){
      names[j] = new char[100];
   }
   char name[50];
   cout << "What is your name: ";
   cin.getline(name,50);
   for(int i = 0;i<strlen(name);i++){
      //names[0][1] = 'j';
      names[0][i] = name[i];
   }
   cout << names;
   for(int i = 0;i<strlen(names[0]);i++){
      cout << names[0][i];

   }
   cout << strlen(names[0]);
}
