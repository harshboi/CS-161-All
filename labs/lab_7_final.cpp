#include <iostream>

#include <string.h>  // Used for c style strings

using namespace std;
void get_string(char []);
void set_replace_string(char [],char []);
void get_search_replace(char [],char []);

int main(){
   //char mssg[255] = {'h','e'};  // This is the same as entering in he (char mssg[255] = 'he')
   //char mssg = 'f';    // Not the same as char mssg[], if with double quotes then it means is an array and requires double quotes
   char mssg[255];
   get_string(mssg);
   cout << mssg << endl;
   char replica[255];
   set_replace_string(mssg,replica);
   cout << replica << endl;
   get_search_replace(mssg,replica);
   cout << mssg[4] << endl;
   //cout << "Enter the message: ";
   //cin >> mssg;
  // cin.getline(mssg,255);
//   cout << mssg;
   //cout << "MSSG is: " << mssg << endl;
}

void get_string(char mssg[255]){
   cout << "Enter the message: ";
   cin.getline(mssg,255);
}


void set_replace_string(char mssg[255],char rep[255]){
   for(int i=0;i<strlen(mssg);i++){
      if(mssg[i]==' '){
	 rep[i] = ' ';
      }
      else{
	 rep[i] = '-';
      }
   }
}


void get_search_replace(char mssg[255],char rep[255]){
   char guess[256];
   cout << "Guess the letter: ";
   cin.getline(guess,256);
   for(int i=0;i<strlen(mssg);i++){
      if(mssg[i] == guess[i]){
	 rep[i] = mssg[i];
      }
   }
   cout << rep << endl;
   cout << strlen(mssg);
}
