#include <iostream>
#include "bot.h"



int main(){
 bot bot1=bot();
 string name;
cout << "Enter your name below. No spaces." << endl;
cin>>name;
float score=bot1.get_score(name);

cout << bot1.get_history(score) << endl;








}