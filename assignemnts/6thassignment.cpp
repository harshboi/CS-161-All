/*********************************************************************
** Program Filename:6thassignment.cpp
** Author: Harshvardhan Singh
** Date: 3-24-2016
** Description: Madlibs
** Input: No input
** Output: Will output you the story
*********************************************************************/  
#include <iostream>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string.h>

using namespace std;

/*********************************************************************   
** Function: Random Generator
** Description: Creates a random number
** Parameters: x, 1 for noun, 2 for verb, 3 for adjective
** Pre-Conditions: No pre-conditions
** Post-Conditions: No Post-Condtions
** Return: returns a random number less than 25
**********************************************************************/ 
int random_generator(int x){
   srand(time(NULL));
   int random;
   if(x == 1){
      random = rand()%26;
   }
   else if(x == 2){
      random = rand()%26;
   }
   else{
      random = rand()%26;
   }
}

/*********************************************************************   
** Function: print_file
** Description: Prints the contents of the file
** Parameters: type of word, whether ing is required and the character
array with the nouns, verb or adjectives
** Pre-Conditions: -
** Post-Conditions: -  
** Return: The adjective, verb or noun
**********************************************************************/ 
int print_file(char type, int ing,char array[][30]){// Function being called in cout and hence this function cannot be void and has to return something. If the function was not called in a cout then this function can be of the type void.
   if(type == 'n'){
      int ran = random_generator(1);
   }

}

/*************************************
 * Func Inside: print_file(int) will take in a 0 or 1 depending on there being an ing at the end. If 0 then no ing, 1 contains ing
 ************************************/
/*********************************************************************   
** Function: story
** Description: Contains the 3 stories
** Parameters: takes in the story number, the character arrays for
nouns, verbs and adjectives
** Pre-Conditions: -
** Post-Conditions: -  
** Return:  Is type VOID
**********************************************************************/ 
void story(int num,char noun[][30],char adject[][30],char verb[][30]){
   if(num == 1){
      char type; // Redundant function parameters in print_file. Could be modified to print_file(0/1,type_of_word);
      cout << "Most doctors agree that bicyle " << print_file('v',1,noun)<< " is a/an " << print_file('a',0,adject) 
	 << " form of exercise. " << print_file('v',1,verb) << " a bicyle enables toy to develop your " << print_file('n',0,noun) << " muscles, as well as " << "increase the rate of your " << print_file('n',0,noun) << " beat. More " << print_file('n',1,noun) << " around the world " << print_file('v',0,verb) << " bicycles than drive " << print_file('n',0,noun) << ". No matter what kind of " << print_file('n',0,noun) << " you " << print_file('v',0,verb)
	 << " ,always be sure to wear a/an " << print_file('a',0,adject) << " park again and hope it doesn't " << print_file('a',0,adject) << ".";
   }
}

/*********************************************************************   
** Function: flush
** Description: Flushed the contents of the array into the respective
arrays
** Parameters: The noun, verb and adjective arrays
** Pre-Conditions: -
** Post-Conditions: -   
** Return: Nothing as function is type VOID
**********************************************************************/ 
void flush(char noun[][30],char verb[][30],char adject[][30]){//[][30]){
   int n1 = 0,v1 = 0,a1 = 0;
   char blah[256],temp1[256];
   for(int i = 0;i<75;i++){
      cin >> blah;
      char temp[256];
      if(blah[0] == 'n'){
	 cin >> temp;
	 //strcpy(noun[n1],temp);
	 n1++;
      }
      else if(blah[0] == 'v'){
	 cin >> temp;
	 strcpy(verb[v1],temp);
	 cout << verb[v1] << endl;
	 v1++;
      }
      else if(blah[0] == 'a'){
	 //cin >> adject[a1];
	 cin >> temp;
	 strcpy(adject[a1],temp);
	 //cout << adject[a1] << endl;
	 a1++;
	// for(int i=0;i<strlen(temp);i++)
	 //temp1[i] = temp[i];
      }
      if(cin.eof()){
      	break;
      }
   }
}
//char first,second,third, blah[256];
//cin >> blah;
//cout <<"First is '" << blah << "'" << endl;
//cin.getline(blah,255);
//strcpy(array[0],blah);
/*
   if(blah[0] == 'n'){
//array[0] = 'N';
//for(int i = 0;i<3;i++){
do{
//(array[i]) = first;
// for(int j = 0;j<1;j++)){
cin.getline(array[i][0],25); //>> array[i][0];
cout << "fvdfvd " << array[i][0] << endl;
//cin >> blah;
i += 1;
// }
}while(blah[0] == 'n');
//  }
*/

/*********************************************************************   
** Function: Error
** Description: Handles bad input on the command line
** Parameters: argc and argv
** Pre-Conditions: -
** Post-Conditions: -  
** Return: Will return 1 if no error
**********************************************************************/ 
int error(int argc,char *argv[]){
   if(argc != 2){
      cout << "Bad input" << endl;
      exit(1);
   }
   cout << argv[1];
   if(*argv[1] != '1'){
      cout << "Please enter the right story number next time" << endl;
      exit(1);
   }
}

/*********************************************************************   
** Function: main
** Description: Creates the 3 arrays and calls all the functions
** Parameters: argc and argv
** Pre-Conditions: -
** Post-Conditions: -  
** Return: will return 1 as the program quits
**********************************************************************/ 
int main(int argc,char *argv[]){
   cout << argc << endl;
   int choice = *argv[1];
   int num;
   error(argc,argv);
   //cin >> num;
   char noun[25][30];
   char verb[25][30];
   char adject[25][30];
   /*char array1[25][30];
     char *array[25];
     for(int i = 0;i<25;i++){
     cout << "vdsvd" << endl;
     array[i] = new char[30];
   //array[1] = new char[30];
   //array[2] = new char[30];
   }*/
   flush(noun,verb,adject);
   //char *array1[3];
   //array[0] = new int[30];
   story(choice,noun,verb,adject);
   for(int i = 0;i<2;i++){
      //  cout << "reached";
      cout << adject[i];
   }

}
/*********************************************************************   
** Function:
** Description:  
** Parameters:   
** Pre-Conditions:  
** Post-Conditions:   
** Return:  
**********************************************************************/ 
