#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned int)time(NULL));
    int num=(rand()%100)+1;
    int guess=0;
    do{
        cout<<"ENTER GUESS NUM:";
        cin>>guess;
        if(guess>num)
        cout<<"OOPS!...Guess lower"<<endl;
        else if(guess<num)
        cout<<"OOPS!..Guess higher"<<endl;
        else
        cout<<"HURRAY!..You win"<<endl;
    }while(guess !=num);
}