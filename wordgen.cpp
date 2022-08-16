#include <iostream>
using namespace std;

string randword(int &range){
srand(time(NULL));
  // this algorithm keeps choosing a few of the same numbers
  // if the range is less than 24, the algorithm chooses to keep spaces empty
  // memory leaks occur when the range is too large, why?
string word;
long random;
bool even=false;
if(range%2!=0){
  even=false;
}
else{even=true;}
 // from 0 to upper limit of range
// the lower the range the more reasonable the answer
for(int i=0;i<range;i++){
  if(i==range/2&&even==true){
  word[i]=32;
  }
  else if(i==((range/2)+1)&&even==false){
  word[i]=32;
  }
  else{
   // is this algorithm safe? double check by checking rand range
int range = 26 ; //(122 - 97) + 1
int random = rand() % range + 97;
word[i]=random;
  }
}
return word;
}


int main(){
 int range;
cout << "Enter the size of the sentence you would like to create." << endl;
cin >> range;
cout <<"Your random word is:" << randword(range) << endl;




}