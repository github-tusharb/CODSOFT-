#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
    int num,guess,nguesses{1};
    srand(time(0));
    num=rand()%100+1;
    do{

        cout<<"Please guess the number between 1-100"<<endl;
        cin>>guess;
        if(guess>num){
            cout<<"too high !!! the number is LOWER than "<<guess<<" , Try again.\n"<<endl;

        }
        else if(guess<num){
          cout<<"too low !!! the number is HIGHER than "<<guess<<" ,Give it another shot!.\n"<<endl;
}
        else{

            cout<<"Conguratulations !! You've guessed the number: "<<num<<"\n"<<"\n"<<" It took you " <<nguesses<<" Attempts to guess the right number. "<<
            "\n"<<"\n"<<"......................Thank you for playing......................."<<            
            endl;
        }
        nguesses++;
    }
    while(guess!=num);

return 0;
}
