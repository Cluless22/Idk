#include <iostream>
#include <string>
using namespace std;

int main(){
  cout << "This program makes secret messages! Input some text to make secret!" << endl;
  string message;
  getline(cin, message);
  string code;
  int length = message.length();
  for(int i = 0; i < length; i = i + 1){
    code = message[i] + code;
  }
  for(int i = 0; i < length; i = i + 1){
    if(code[i] >= 'a' && code[i] < 'z'){
      code[i] = code[i] + 1;
    }else if(code[i] == 'z'){
      code[i] = 'a';
    }else if(code[i] >= 'A' && code[i] < 'Z'){
      code[i] = code[i] + 1;
    }else if(code[i] == 'Z'){
      code[i] = 'A';
    }
  }
  cout << code << endl;
  return 0;
}
