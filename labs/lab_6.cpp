#include <iostream>
#include <string>
#include <sys/time.h>
#include <cstdlib>

using std::cout;
using std::endl;
int fibonacci(int);
int fibonacci_rec(int);
/*
int factorial(int n){
   int y = 1;
   for(int i = n; i>0 ; i--){
      y *= i;
   }
}
*/
int main(){
   typedef struct timeval time;
   time stop, start;

   gettimeofday(&start,NULL);
   // Your function
   int x,y = 1;
   cout << "Factorial till which number: ";
   std::cin >> x;
//   fib_iter(x);
   //factorial(x);
   fibonacci(x);
   //fibonacci_rec(x);

   gettimeofday(&stop,NULL);

   if(stop.tv_sec > start.tv_sec)
      cout << "Seconds: " << stop.tv_sec-start.tv_sec << endl;
   else
      cout << "Micro: " << stop.tv_usec-start.tv_usec << endl;

   return 0;

}

int fibonacci(int n){
   int t1 = 0, t2 = 1, nextterm = 0;
   while(nextterm<=n){
      nextterm = t1+t2;
      t2 = nextterm;
      t1 = t2;
      //nextterm = t1+t2;
      cout << nextterm<< endl;
   }
   return nextterm;
}

int fibonacci_rec(int n){
   if((n == 1) || (n == 0)){
      if ((n==1) || (n == 0)){
	 return n;
      }
      else{
	 return(fibonacci_rec(n-1)+fibonacci_rec(n-2));
      }

   }




}
/*
   int fib_iter(int n){
//int n;
//cout << "Enter the number or which the fibonacci is to be calculated: ";
//cin >> n;
if(n != 0){
return(n*fib_iter(n-1));
}
else if(n == 0){
return (1);}
}*/
