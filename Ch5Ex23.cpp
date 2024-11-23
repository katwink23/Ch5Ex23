/* File Name: Ch5Ex23.cpp
Programmer: Katlyn Winkelhake
Date: 23 Nov 2024
Requirements: Use loops to display the two patterns
*/


#include <iostream>
using namespace std;

void PatternA();
void PatternB();


int main(){
PatternA();
cout << endl;
PatternB();
}

void PatternA(){
  cout << "Pattern A" << endl
    << "---------" << endl;

  for (int a = 1; a <= 10; a++){
    for (int b = 0; b < a; b++){
      cout << "+";}
    cout << endl;
  
    
} 

  }

void PatternB(){
 cout << "Pattern B" << endl
 << "---------" << endl;
  
  for (int c = 10; c >= 1; c--){
     for (int d = 0; d < c; d++){
       cout << "+";}
   cout << endl;
}
}