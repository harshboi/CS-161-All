#include <iostream>
#include <cmath>

#define COLS 3

using namespace std;

void print_board(int array[][3]){
   for(int i = 0;i<3;i++){
      for(int j = 0;j<3;j++){
	 cout << array[i][j]; 
      	 cout << " ";
      }
   cout << endl;
   }
}

void move_the_disk(int disks,int b[][COLS],int from,int m,int rows){
   int lowest;
   int i;
   for(i=rows-1;i>=0 &&b[i][from]!=0;i--){
      disks = i;
   }
   for(i = rows-1;i>=0;i--){
      if(b[i][m]!=0){
      }
      else{
      	lowest = i;
	break;
      }
   }
   cout << "_____________________"<<endl;
   b[lowest][m] = b[disks][from];
   b[disks][from];
}


void towers(int disks,int b[][COLS],int from_col,int to_col,int spare,int rows){
   if(disks>=1){
      towers(disks-1,b,from_col,spare,to_col,rows);
      move_the_disk(disks,b,from_col,to_col,rows);
      print_board(b);
      towers(disks-1,b,spare,to_col,from_col,rows);


   }
}

int main(){
   int array[][3] = {{1,0,0},{2,0,0},{3,0,0}};   //{{1,2,3},{0,0,0},{0,0,0}};
   print_board(array);
   //int disks = sizeof(array[0]);
   int disks = 3;
   //cout << disks << endl;
   int from_col = 0;
   int spare = 1;
   int to_col = 2;
   int rows = 3;
   towers(disks,array,from_col,to_col,spare,rows);

}
