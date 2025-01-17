#include <iostream>
#include <string>
using namespace std;

int main() {
  int marks;
  char grade;
  cin>>marks;
      

      grade = marks<70 ? 'D':
      
      marks<80 ? 'C':
      marks<90 ? 'B':
      'A' ;

      cout<<"your grade is "<<grade <<".";

      switch ( grade)
      {
        case 'A':
        cout<<"Remark:Excellent Performance!";
        break;
        case 'B':
        cout<<"Remark:Good Performance!";
        break;
        case 'C':
        cout<<"Remark:Average Performance!";
        break;
        case 'D':
        cout<<"Remark:Below Average. Need Improvement!";
        break;
        default:
        cout<<"you are fail!";
        break;

       }

    //   if(grade=='A'|| grade == 'B'|| grade =='C'){
    //     cout<<"you pass";
    //   }
    //   else(grade=='d'){
    //     cout <<"you are fail";

    //   }


    if(grade=='A'||grade=='B'||grade=='C'||grade=='D'){
        cout<<"Congratulation! You are eligible for the next level";
    }
    else{
        cout<<"failed";
}
      



}