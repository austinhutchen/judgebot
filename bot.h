
#ifndef bot_h
#define bot_h
#include <iostream>
using namespace std;
class bot{
public:
bot(){
 likeness_score=5;
}
string lowercase(string input){
 
for(int x=0;x<input.size();x++){
if(input[x]>=65&&input[x]<=90){
int e=input[x]+32;
input[x]=e;
}
else{continue;}
}
// end of loop
return input;
}

int get_score(string &name){
 int c=0;
 srand(time(NULL));
 long random=rand()%11; // random from 0 to 11
string username=lowercase(name);
for(int i=0;i<name.size();i++){
// play favorites with letters in name using ASCII (use lowercase function for this)
switch(username[i]){
// cases depend on lowercase ascii value in range 97-122
case 97 ... 100:
// from a to d
likeness_score+=0.5;
break;
case 101 ... 110:
likeness_score-=0.5;
break;
case 111 ... 117:
likeness_score--;
break;
case 118 ... 122:
likeness_score++;
break;
default: if(c==0){cout << "Some parts of name not within proper character range." << endl;
c++;}
break;
}
// formula to convert within range of name size below

// play final formula with specific names and rand values
}
int length=name.size();
if(length<4){
 likeness_score+=0.5;
}
else{likeness_score--;}





}





private:
float likeness_score;
// score evaluated from 0-10









};
#endif

