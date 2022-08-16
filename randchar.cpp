#include <iostream>
#include <ctime>
using namespace std;

char randchar(){
 int range=25;
char randc;
srand(time(NULL));
int random = rand() % range + 97;
randc=random;
 return randc;
}

int main(){
cout << "Your random character is:" << endl;
cout << randchar() << endl;








 return 0;
}