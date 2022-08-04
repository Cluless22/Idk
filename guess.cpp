#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
  srand(time(NULL));
  int random = rand() % 100 + 1;
  cout << "I'm thinking of a number between 1 and 100! Try to guess it!" << endl;
  int guess = -1;
  while(guess != random){
  cin >> guess;
  if(guess != random){
    cout << "Nope! ";
    if(guess < random){
      cout << "Too low! ";
    }else if(guess > random){
      cout << "Too high! ";
    }
    cout << "Guess again!" << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
  }
  }
  cout << "Yay! You got it!" << endl;
  return 0;
}