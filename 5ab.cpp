#include <iostream>
using namespace std;
int a;
char item;
void count(){
  for (int k = 0; k < 1; k++){
      cout<<"Enter a number\n";
      cin>>a;
      cout<<"Enter the character you want to use\n";
      cin>>item;
      for (int f = 0; f < a; f++){
        cout<<item;
      }
  }
  }
  

int main() {
  count();
}