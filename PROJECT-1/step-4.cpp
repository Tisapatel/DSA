#include <iostream>
using namespace std;

int main() {
  int score;

  cout << "Enter your score: ";
  cin >> score;

 
  char grade = (score >= 90) ? 'A' : 
                (score >= 80) ? 'B' : 
                (score >= 70) ? 'C' :
                (score >= 60) ? 'D' : 'F';


  cout << "Your grade is " << grade;

 
  switch (grade) {
    case 'A':
      cout << ". Excellent work!";
      break;
    case 'B':
      cout << ". Well done!";
      break;
    case 'C':
      cout << ". Good job.";
      break;
    case 'D':
      cout << ". You Passed, but you could do better.";
      break;
    case 'F':
      cout << ". Sorry, you failed.";
      break;
  }

  if (grade >= 'A' && grade <= 'D') {
    cout << "\nCongratulations! You are eligible for the next level.";
  } else if (grade == 'F') {
    cout << "\nPlease try again next time.";
  }

  cout << endl;

  return 0;
}