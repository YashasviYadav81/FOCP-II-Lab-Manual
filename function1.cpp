#include<iostream>
using namespace std;
int sum(int x,int y ){
    return x+y;
}
int subtract(int x, int y){
    return x-y;
}
int multiply(int x, int y){
    return x*y;
}
int divide(int x, int y){
    return x/y;
}
int main(){
    int a, b, choice; 
    cin>>a;
    cin>>b;
    cout<< "Enter your choice";
    cin>>choice;
    if(choice==1){
        int result=sum(a,b);
        cout<<result<<endl;
    }
    else if(choice==2){
        int result=subtract(a,b);
        cout<<result<<endl;
    }
    else if(choice==3){
         int result=multiply(a,b);
          cout<<result<<endl;
    }
    else if(choice==4){
        int result=divide(a,b);
         cout<<result<<endl;
    }
    else{
        cout<<"Error"<<endl;
    }
return 0;
}