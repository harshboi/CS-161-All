/*********************************************************************************
 ** Program: second_assignment.cpp 
 ** Author: Harshvardhan Singh
 ** Date: 1/20/2017 
 ** Description: Adventure game   
 ** Input: Will be the path you want to take
 ** Output: Will be the result of the path you take and even some random elements
 *********************************************************************************/ 

#include <iostream>
#include <string> 
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
   int re;

   do{
      int inp;
      // string
      string input;

      // random number generator
      int x;

      //cout << "X: " << x;

      srand(time(0));
      x = rand()%2;
      //

      cout << "Hello and welcome to the adventurers game! " << endl << endl;
      cout << "You are on an island with a boat, to go up enter \"N\", down \"S\", right \"E\": ";
      cin >> input;
      cout << endl;
      //char inp;
      if(!input.compare("N")){                      // input.compare("") evaluates to 0 if the strings match
	 cout << "You go sailing for days and reach another island" << endl << endl;
	 cout << "Enter 1 to go on to the island or 2 to pass by: ";
	 cin >> inp;
	 cout << endl;
	 if(inp == 1){
	    cout << "You got on the island and encounter another human stranded over there " << endl << endl;
	    cout << "Press 1 to befriend the islander, 2 to take him prisoner: ";
	    cin >> inp;
	    cout << endl;
	    if(inp == 1){
	       cout << "You befriended the islander and he is your ally. Press 1 to explore the Island, 2 to take him on the boat: ";
	       cin >> inp;
	       cout << endl;
	       if(inp == 1){
		  cout << "You explored the island and found a tribe. Press 1 to interact with them, 2 to walk away: ";
		  cin >> inp;
		  cout << endl;
		  if(inp == 1){
		     cout << "You interacted with the tribe and found about a mysterious box. Press 1 to take their quest, 2 to decline: "; 
		     cin >> inp;
		     cout << endl;
		     if(inp == 1){
			cout <<  " You take the quest and explore the islands. You reach a cave near a volcano."
			   <<  " Press 1 to go inside, 2 to explore the lake beside: ";
			cin >> inp;
			cout << endl;
			if(inp == 1){
			   cout << "You find a box, press 1 to open the box or 2 to walk out ";
			   cin >> inp;
			   cout << endl;
			   if(inp == 1){
			      cout << " You open the box, it turns out to be Pandora's box, Watch your destiny fulfill ";
			      cout << endl;
			      //Random Generator
			      if(x == 0){
				 cout << " You are punished by the Gods and are sent to hell " << endl;	
			      }
			      else if(x == 1){
				 cout << " You are rewarded by thr Godess of the Island and are made immortal . CONGRADULATIONS for completing the GAME " << endl;
			      }
			   }
			   else if(inp == 2){
			      cout << " Your partner opens the box out of curiosity, it turns out to be Pandora's box, "
				 << " Watch you destiny unfold " << endl << endl;		
			      //Random Generator
			      if(x == 0){
				 cout << " You are punished by the Gods and are sent to hell " << endl;	
			      }
			      else if(x == 1){
				 cout << " You are rewarded by thr Godess of the Island and are made a Immortal. CONGRADULATIONS for completing the GAME " << endl;

			      } 
			   }
			}

			else if(inp == 2){
			   cout << " You choose to explore the lake, the volcano explodes. GAME OVER ";
			}		
		     }
		     else if(inp == 2){
			cout << " You delcine and were forced to take the boat back. Press 1 to rebel, 2 to follow their order: ";
			cin >> inp;
			cout << endl;
			if(inp == 1){
			   cout << " You choose to rebel. You were gravely wounded and succumbed to your wounds ";
			} 
			else if(inp == 2){

			   cout << " You go back to the boat and set sale out on the sea "
			      << " You were betrayed by your friend and pushed out of the boat. YOU get eaten by a shark ";

			} 	
		     }	
		  }
		  if(inp == 2){
		     cout << " You decieded not to interact with the tribe and eplored the island"
			<< " You eventually took the boat back and got stranded another island and lived over there with another tribe. GAME OVER ";

		  }

	       }					


	       else if(inp == 2){

		  cout << "You took him on the boat. You were betrayed and pushed into the water. YOU DIE " << endl;
	       } 	
	    }
	    else if(inp == 2){
	       cout << "You fought with the islander and were defeated. Your taken prisoner. " << endl;
	       cout << " A wild tiger appears in front of you. Press 1 to ask him to untie you and fight with him. Enter 2 to run away  ";
	       cin >> inp;
	       cout << endl;
	       if(inp == 1){
		  cout << " You were beaten by the tiger and died while fighting. Also you were betrayed by the human. ";
	       }		
	       else if(inp == 2){
		  cout << " You escape and survive. Enter 1 to take the boat back, 2 to explore the island: ";
		  cin >> inp;
		  cout << endl;
		  if(inp == 1){
		     cout << "You take the boat back and after drifting for several days reach Hawaii. You get saved by the border patrol. "
			<< " You live a pretty normal life after that. GAME OVER ";
		  }
		  else if(inp == 2){
		     cout << " You wander on the island for hours and see the volcano errupt right in front of you. "
			<< " Press 1 to wait over there for you end or enter 2 to run towars your boat and escape from the island: ";
		     cin >> inp;
		     cout << endl;
		     if(inp == 1){
			cout << " You are saved by the Godess of the island and live on the island with the tribes men as a believer. THE END ";
		     }
		     else if(inp == 2){
			cout << "Your boat has drifted far away and you die on the island. Good Luck in your next life. GAME OVER ";
		     }
		  }
	       }
	    }
	 }
	 else if(inp == 2){
	    cout << " You keep going straight and go into the bermuda triangle and were never heard of after that  ";
	    cout << endl << endl;
	 }
      }
      else if(!input.compare("S")){
	 cout << "You get spotted by a ship and get rescued " <<endl;
      }                
      else if(!input.compare("E")){
	 cout << "You reach mysterious city of atlanta. Press 1 to explore the ruins, 2 to pass by ";
	 cin >> inp;
	 cout << endl;
	 if(inp == 1){
	    cout << "You explored the ruins and found an archaelogist team "
	       << "Press 1 to go ask them for help, 2 to hide on their boat ";
	    cin >> inp;
	    cout << endl;		
	    if(inp == 1){
	       cout << "You ask them for help and are saved by them and reach your country back "; 
	    }
	    else if(inp == 2){
	       cout << "You hid on their boat " << endl << endl;
	       if(x == 0){
		  cout << "Nobody returned for days and you took the boar on your own"
		     << " . You reach back to the island and find the nomadic tribe over their and live happily ever after ";
	       }
	       else if(x == 1){
		  cout << " They find you hiding in the boat. You are questioned sevearly and ask you to explain yourself ";
		  x = rand()%2;
		  cout << endl << endl;
		  // Random Generator 
		  if(x == 0){
		     cout << "They buy your story and drop you to your country ";
		  }
		  else if(x == 1){
		     cout << "They drop you back on the island you started. You meet the nomadic tribe and live with them happ"
			<< "ily ever after";
		  }
	       }
	    }
	 }
	 else if(inp == 2){
	    cout << " You go sailing for days and reach the cost of Mexico and are saved over there "<< endl;
	 }
      }
      cout << endl << endl;
      cout << "Enter 1 to play again: ";
      cin >> re;
   }while(re == 1);
}
