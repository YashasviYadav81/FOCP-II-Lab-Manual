#include<iostream>
using namespace std;
class bankAccount{
    private:
    string accountHolderName;
    public:
    int balance;
    int rewardPoints;

   bankAccount(string Name, int bal, int points){
        accountHolderName=Name;
        balance=bal;
        rewardPoints=points;
    }
     void withdraw(){
       balance=balance-500;
       rewardPoints=rewardPoints-20;
    }
    void displayAccount(){
        cout<<"Account holder name"<<accountHolderName<<endl;
        cout<<"Balance"<<balance<<endl;
        cout<<"Reward Points"<<rewardPoints<<endl;
    }
};
int main(){
bankAccount acc("Yashasvi", 5000,200);
cout<<"Before withdrawal"<<endl;
acc.displayAccount();
acc.withdraw();
cout<<"After Withdrawal"<<endl;
acc.displayAccount();
return 0;
}