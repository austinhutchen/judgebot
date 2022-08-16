#ifndef bot_h
#define bot_h
#include <cmath>
#include <iostream>
using namespace std;
class bot {
public:

  bot() {srand(time(NULL));likeness_score = 5; }

  string lowercase(string input) {
    for (int x = 0; x < input.size(); x++) {
      if (input[x] >= 65 && input[x] <= 90) {
        input[x] += 32;
      } else {
        continue;
      }
    }
    // end of loop
    return input;
  }
//segfault here

string randword(int range){
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

  int round(float d) { return int(floor(d + 0.5)); }
  
  int get_score(string &name) {
    int c = 0; 
    string username = lowercase(name);
    for (int i = 0; i < name.size(); i++) {
      // play favorites with letters in name using ASCII (use lowercase function
      // for this)
      switch (username[i]) {
      // change case ranges to only two ranges
      case 97 ... 115:
        likeness_score--;
        break;
      case 116 ... 122:
        likeness_score++;
        break;
      default:
        if (c == 0) {
          cout << "Some parts of name not within proper character range."<< endl;
          c++;
        }
        break;
      }

      // play final formula with specific names and rand values
    }
    int length = name.size();
    if (length <= 4) {
      likeness_score = likeness_score+ 0.5;
    } else {
      likeness_score--;
    }

    return likeness_score;
  }

  string get_history(int &score) {
    string history = "";
    switch (score) {
    case 0 ... 5: { // worst case scenario fate. likely a bad fate with low rand range
      cout <<randword(50)<<endl;
      history = "bad fate";
    } break;
    case 6 ... 7: { // second to worst case scenario. higher rand range
    cout << randword(30) << endl;
    history="somewhat bad fate";
      break;
    }
    case 8 ... 9: {
      cout << randword(60)<<endl;
    history="amazing fate";
      break;
    }

    default:
      cout << "/ERROR/ Score is outside of real number range." << endl;
      break;
    }

    return history;
  }

private:
  int likeness_score;
  // score evaluated from 0-10
};
#endif
