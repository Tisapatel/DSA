#include <iostream>
using namespace std;

int main() {
  
  double score;
  char Digit;

  cout<<"enter score:";
  cin>>score;

  if(score>=80 && score <=99)
  {
     cout<<"Your Grade is A.Excelent Work! You are eligible for the next level:)";
  }
  else if(score>=70 && score <=80)
  {
     cout<<"Your Grade is B. Well Done!";
  }
   else if(score>=60 && score <=70)
  {
    cout<<"Your Grade is C. Good Job!";
  }
   else if(score>=50 && score <=60)
  {
     cout<<"Your Grade is D.You Passed, But Could Do Better!";
  }
   else if(score>=40 && score <=50)
  {
    cout<<"Your Grade is F.Sorry, You failed:(";
  }
  else{
    "Invalid score";
  }
  return 0;
}