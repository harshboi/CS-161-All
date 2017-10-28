/********************************************************************* 
 ** Program Filename:4thassignment.cpp
 ** Author:Harshvardhan Singh
 ** Date:2/19/2017
 ** Description:Wheel of Fortune game
 ** Input:number of rounds, spin,guess,buy vowel
 ** Output:Coreect guess,win,vowels bought and string print out
 *********************************************************************/
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string get_search_replace(int,string &,string &,int *,int,int *,int *,int *,int *,int *,int *);
void bankcorrupt(int ** ,int ** ,int ** ,int ** ,int,int **,int **,int **);
void set_replace_string(string,string &);
void next_players(int **,int);
int update_bank(int,int,int **,int,int **,int **,int **,int **,int **,int **);
int guess(string,string,int *,int,int *);
void next_players(int **,int );
int buy_vowel(int &,string &,int *,int,int *,int *,int *);

/***********************************
 * Func Name: Spin
 * Parameters: adress of which user; bank balance of all the users; and the number of players;
 * *******************************/
/*int spin(int *i,int *bank1,int *bank2,int *bank3,int players,int *bbank1,int *bbank2,int * bbank3)
  {
  int x;
  srand(time(NULL));
  x = rand()%21+1;
//x = 0;
//x = 21;
if(x == 0){
bankcorrupt(&i,&bank1,&bank2,&bank3,players,&bbank1,&bbank2,&bbank3); // Create the bankcorrupt function
}
else if(x == 21){
if (*i==1){
 *i = 2;
 }
 else if (*i == 2){
 if(players == 3){
 *i == 3;}
 else{
// cout << "vhjfvdjfbvd";
 *i = 1;
 }}
 else if (*i == 3){
 *i = 1;
 }
 }
 return x;
 }*/
/***************************************
 *Function: bankcorrupt
 *Use: changes the amount earned to 0 if
 * 0 is obtained on spinning the wheel
 * ************************************/
void bankcorrupt(int **i,int **bank1,int **bank2,int **bank3,int players,int **bbank1,int **bbank2,int **bbank3){
   if(**i == 1){
      **i = 2;
      **bank1 = **bank1 - **bbank1;
   }
   else if(**i == 2){
      if(players == 2){
	 **i = 1;
	 **bank2 = **bank2 - (**bbank2);
      }
      if(players == 3){
	 **i == 3;
	 **bank2 = **bank2 - **bbank2;
      }
   }
   else if(**i == 3){
      **i == 1;
      **bank3 = **bank3 - **bbank3; }
}  
/*
   string guess(string message, string replica){
   string x;/*
   int counter = 0;
   cout << "Enter a non vowel letter: ";
   getline(cin,x);
   for(int i = 0; i <= message.length(); i++){
   if(message.at(i) == x){
   cout << "The non vowel letter is at " << message.length(i) << endl;
   counter += 1; 
   }
//set_replace_string(message,replica);
// string rep = get_search_replace(replica,message,);
//return(rep);
}*/

string get_search_replace(int spin,string &rep,string &let,int *i,int players,int *bank1,int *bank2,int *bank3,int *bbank1,int *bbank2,int *bbank3){
   //cout << "Replica is " << rep << endl;
   cout << "Enter the word to search for: ";
   char x;
   int counter = 0;
   cin >> x;
   cout << endl;
   for(int i = 0;i<let.length();i++){
      if(let.at(i) == x){
	 rep[i] = x;
	 counter += 1;
      }
   }
   //cout << "The value of counter is: " << counter << endl;
   update_bank(counter,spin,&i,players,&bank1,&bank2,&bank3,&bbank1,&bbank2,&bbank3);
   if(counter == 0){
      next_players(&i,players);
   } 
   cout << rep;
   return(rep);
}

int buy_vowel(string &rep,string &let,int *i,int players,int *bank1,int *bank2,int *bank3){
   char vowel,a = 'a',e = 'e',ii = 'i',o = 'o',u = 'u';
   char inp;
   if(*i == 1){
      if(*bank1 >= 10){
	 *bank1 -= 10;
	 //cin.ignore();
	 //cin.clear(256,'\n');
	 cout << "Guess the letter: ";
	 cin >> inp;
	 for(int x = 0;x<let.length();x++){
	    if(let.at(x) == inp){
	       rep[x] = inp;
	       //			cout << "You found a letter" << endl;
	    }}
	 cout << rep << endl;
      }
      else{cout << "Bank balance less than 10" << endl;}
   }
   else if(*i == 2){
      if(*bank2 >= 10){
	 *bank2 -= 10;
	 cout << "Guess the vowel: ";
	 cin >> inp;
	 for(int x = 0;x<let.length();x++){
	    if(let.at(x) == inp){
	       rep[x] = inp;
	       //			cout << "You found a letter";
	    }}cout << rep;
      }
      else{cout << "Bank balance less than 10" << endl;}
   }
   else if(*i == 3){
      if(*bank3 >= 10){
	 *bank3 -= 10;
	 cout << "Guess the vowel: ";
	 cin >> inp;
	 for(int x = 0;x<let.length();x++){
	    if(let.at(x) == inp){
	       rep[x] = inp;
	       //	       cout << "You found a letter";
	    }} cout << rep << endl;
      }else{cout << "Bank balance less than 10" << endl;}
   }}

/***********************************
 * Func Name: Spin
 * Parameters: adress of which user; bank balance of all the users; and the number of players;
 * *******************************/
int spin(int *i,int *bank1,int *bank2,int *bank3,int players,int *bbank1,int *bbank2,int * bbank3)
{
   int x;
   srand(time(NULL));
   x = rand()%21+1;
   //x = 0;
   //x = 21;
   if(x == 0){
      bankcorrupt(&i,&bank1,&bank2,&bank3,players,&bbank1,&bbank2,&bbank3); // Create the bankcorrupt function
   }
   else if(x == 21){
      if (*i==1){
	 *i = 2;
      }
      else if (*i == 2){
	 if(players == 3){
	    *i == 3;}
	 else{
	    // cout << "vhjfvdjfbvd";
	    *i = 1;
	 }}
      else if (*i == 3){
	 *i = 1;
      }
   }
   return x;
}

int update_bank(int counter,int spin,int **i,int players,int **bank1,int **bank2,int **bank3,int **bbank1,int **bbank2,int **bbank3){
   if(counter != 0){
      if(**i == 1){
	 **bbank1 = **bank1;
	 **bank1 = **bank1 + (spin*counter);
      }
      else if(**i == 2){
	 **bank2 = **bank2;
	 **bank2 = **bank2 + (spin*counter);
      }
      else if(**i == 3){
	 **bank3 = **bank3;
	 **bank3 = **bank3 + (spin*counter);
      }
      return(0);
   }
   /*   else if(counter == 0){
	if(**i == 1){
    **i = 2;
    }
    else if(**i == 2){
    if (players == 2){
    **i = 1;
    }
    else if(players == 3){
    **i = 3;
    }
    }
    else if(**i == 3){
    **i = 1;
    }
    }*/
}   



void next_players(int **i,int players){
   //cout << "The value of **i is: " << **i << endl;
   if(**i == 1){
      // cout << "Inside";
      **i = 2;
   }
   else if(**i == 2){
      if (players == 2){
	 **i = 1;
      }
      else if(players == 3){
	 **i = 3;
      }
   }
   else if(**i == 3){
      **i = 1;
   }
}

void set_replace_string(string let,string &rep){
   rep = let;
   int x = rep.length();
   for(int i = 0; i < x;i++){
      if(rep.at(i) != ' '){
	 rep[i] = '-';
      }
      else if(rep.at(i) == ' '){
	 rep[i] = ' ';
      }
   }
   cout << rep << endl;
}

//void set_to_zero(){}

int guess(string message,string replica,int *i,int players,int *r){
   cin.clear();
   cin.ignore(256,'\n');
   cout << "Enter the letter: ";
   string user_a;
   getline(cin,user_a);
   int win = 0;
   if(message == user_a){
      cout << "You got it right" << endl;
      *r = *r+1;
      win += 1;
      // Get a funtion that reduces other peoples money to 0
   }
   else if(!(message == user_a)){
      //cout << " fbvjdvbdhfj vfdfv";
      next_players(&i,players);
      win = 0;
   }
   return(win);   
}
int winner(int bank1,int bank2,int bank3){
   if(bank1>bank2){
      cout << "Player 1 is the winner" << endl;
   }
   else if(bank2>bank1){
      cout << "Player 2 is the winner";
   }
   else if(bank1>bank3){
      cout << "Player 1 is the winner";
   }
   else if(bank2>bank3){
      cout << "Player 2 is the winner";
   }
   else if(bank3>bank1){
      cout << "Plater 3 is the winner";
   }
   else if(bank3>bank2){
      cout << "Plater 3 is the winner";
   }
}

void others_lose_money(int *i,int *bank1,int *bank2,int *bank3){
   if(*i == 1){
      *bank2 = 0;
      *bank3 = 0;
   }
   else if(*i == 2){
      *bank1 = 0;
      *bank3 = 0;
   }
   else if(*i == 3){
      *bank1 = 0;
      *bank2 = 0;
   }

}


int users(int a,int players,int rounds){
   //string message;
   string replica;
   string answer; // Mostly comment this string out. Not commented for checking puropses
   int bank1 = 0,bank2 = 0,bank3 = 0,inp,i = 1,round = 0,chance;   // i = 1 is player 1, i = 2 is player 2 and i = 3 is player 3
   int win;
   int finalw = 0;
   do{
      cin.clear();
      cin.ignore(256,'\n');
      string message;
      cout << "Enter a message: ";
      getline(cin,message);
      set_replace_string(message,replica);
      int next = 0;
      do{
	 int bbank1 = 0,bbank2 = 0,bbank3 = 0;
	 int sp = 0; // Gives
	 cout << "Player " << i << endl;
	 cout << "Do you want to spin (1), solve the puzzle (2), or buy a vowel (3): ";
	 cin >> inp;
	 if(inp == 1){
	    sp = spin(&i,&bank1,&bank2,&bank3,players,&bbank1,&bbank2,&bbank3);
	    cout << "Your number is: " << sp <<  endl;
	    if(!(sp == 0 or sp == 21)){
	       answer = get_search_replace(sp,replica,message,&i,players,&bank1,&bank2,&bank3,&bbank1,&bbank2,&bbank3);
	       replica = answer;
	    }
	 }
	 else if(inp == 2){
	    win = guess(message,replica,&i,players,&rounds);
	    round += win;
	    //	    cout << round;
	    if(win == 1){
	       next = 1;
	       others_lose_money(&i,&bank1,&bank2,&bank3);
	       i = 1;
	    }
	 } 
	 else if(inp == 3){
	    //  	buy_vowel();
	    buy_vowel(replica,message,&i,players,&bank1,&bank2,&bank3);
	 }
	 cout << endl;
	 cout << "Value of bank1 is: " << bank1 << endl;
	 cout << "Value of bank2 is: " << bank2 << endl;
	 cout << "Value of bank3 is: " << bank3 << endl;
      }while(!(message == answer) and(next == 0));// or ((round <= rounds)));
      cout << "RS: " << rounds << " R: " << round << endl;
      rounds -= 1;
   }while(round < rounds);
   winner(bank1,bank2,bank3);
}
int main(){
   int a = 0, players, rounds;
   cout << "How many players do you have: ";
   cin >> players;
   cout << "How many rounds for winning? ";
   cin >> rounds;

   users(a,players,rounds);

}
