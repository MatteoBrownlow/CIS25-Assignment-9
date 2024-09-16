#include <iostream>
using namespace std;

int main(){ 
  string answer;
  cout << "Are you a US citizen? Type yes or no" << endl;
  cin >> answer;
  if(answer == yes){
    cout << "Do you have a bachelor's degree? Type yes or no" << endl;
    cin >> answer;
    if(answer == no){
      cout << "Do you have at least two years experience? Type yes or no" << endl;
      cin << answer;
      if(answer == no){
        cout << "You are not eligible for a job" << endl;
        return 0;
      }
    }
  }
  cout << "You are eligible for a job" << endl;
  return 0;
}
