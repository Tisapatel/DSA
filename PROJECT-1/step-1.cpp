#include <iostream>
using namespace std;

int main() {

     double avg;
     string grade;


     cout<<"Enter A score:";
     cin>>avg;

     grade = avg >=90 ? "your Grade is A"
                : avg >=80 ? "your Grade is B"
                : avg >=70 ? "your Grade is C"
                : avg >=60 ? "your Grade is D"
                : avg >=40 ? "your Grade is E" : "Your Grade is F";
    cout<<grade;

  return 0;
}