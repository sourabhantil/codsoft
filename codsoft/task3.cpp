#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int num , guess , tries=0;
    srand(time(0));    
    num=rand() % 100 + 1;
cout<<("Guess My Number Game\n\n");
cout<<("num");
do 
{
    cout<<("enter a Guess between 1 and 100:");
    cin>>guess;
    tries++;
    if(guess>num)
    cout<<("too high!\n\n");
    else if (guess<num)
        cout<<("too low!\n\n");
    else     
        cout<<("\n correct! you got it in")<<tries<<"guesses!\n";
}
    while(guess!=num);
     
    return 0;
}

