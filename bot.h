#ifndef bot_h
#define bot_h
#include <cmath>
#include <iostream>
using namespace std;
class bot {
public:

  bot() { srand(time(NULL));likeness_score = 5; }

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
string randsentence(int range){
  string word="";
long random;
 // from 0 to upper limit of range
// the lower the range the more reasonable the answer
for(int i=0;i<range++;i++){
  if(i==range/2){
  word[i]=32;
  }
  else{
random = 97+rand()%122;
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
      // cases depend on lowercase ascii value in range 97-122
      case 97 ... 100:
        // from a to d
        likeness_score += 0.5;
        break;
      case 101 ... 110:
        likeness_score -= 0.5;
        break;
      case 111 ... 117:
        likeness_score--;
        break;
      case 118 ... 122:
        likeness_score++;
        break;
      default:
        if (c == 0) {
          cout << "Some parts of name not within proper character range."
               << endl;
          c++;
        }
        break;
      }

      // play final formula with specific names and rand values
    }
    int length = name.size();
    if (length <= 4) {
      likeness_score += 0.5;
    } else {
      likeness_score--;
    }

    return likeness_score;
  }

  string get_history(float &score) {
    string history = "";
    int r_score = round(score);
    switch (r_score) {
    case 0 ... 5: { // worst case scenario fate. likely a bad fate with low rand range
      cout <<randsentence(50);
      history = "      ";
    } break;
    case 6 ... 7: { // second to worst case scenario. higher rand range
    history="";
      break;
    }
    case 8 ... 9: {
    history="";
      break;
    }

    default:
      cout << "/ERROR/ Score is outside of real number range." << endl;
      break;
    }

    return history;
  }

private:
  float likeness_score;
  // score evaluated from 0-10
};
#endif
