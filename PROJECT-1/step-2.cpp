#include <iostream>
using namespace std;

int main() {
  
  double score;
  char grade;

  cout<<"enter score:";
  cin>>score;

  if(score>=90 && score <=99)
  {
    grade='A';
  }
  else if(score>=80 && score <=90)
  {
    grade='B';
  }
   else if(score>=70 && score <=80)
  {
    grade='C';
  }
   else if(score>=60 && score <=70)
  {
    grade='D';
  }
   else if(score>=50 && score <=60)
  {
    grade='F';
  }
  else{
    "Invalid score";
  }
  switch (grade)
  {
  case 'A':
   cout<<"Excelent Work!!";
  break;
  case 'B':
   cout<<"Well Done!!";
  break;
  case 'C':
   cout<<"Good Job!!";
  break;
  case 'D':
   cout<<"You Passed, But Could Do Better!";
  break;
  
  default:
   cout<<"Sorry, You failed:(";
  break;
  }
  return 0;
}