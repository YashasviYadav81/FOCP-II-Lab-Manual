
#include <iostream>
using namespace std;
int main(){
    int marks;
    cin>> marks;
    switch(marks/10){
      case 10:
      cout<<"Grade A+\n";
      break;
      case 9:
      cout<<"Grade A\n";
      break;
      case 8:
      cout<<"Grade B+\n";
      break;
      case 7:
      cout<<"Grade B\n";
      break;

      default:
      cout<<"Fail\n"<<endl;
    }

    return 0;
} 


//  g++ .\question1.cpp
//  .\a.exe