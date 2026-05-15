#include<iostream>
using namespace std;
class Bank
{
    int X;//user id
    int Y;//balance
    int account_details[1001]={0};
    int amount[1001]={0};
    public:
    string CREATE(int X,int Y);
    string DEBIT(int X,int Y);
    string CREDIT(int X, int Y);
    int BALANCE(int X);
};
string Bank::CREATE(int X,int Y)
{
    amount[X]+=Y;
    if(account_details[X])
        return "false";
    account_details[X]=1;
    return "true";
}
string Bank::DEBIT(int X,int Y)
{
    if (account_details[X]==false)
        return "false";
    if(amount[X]<Y)
        return "false";
    amount[X]-=Y;
    return "true";
}
string Bank::CREDIT(int X,int Y)
{
    if(account_details[X]==false)
        return "false";
    amount[X]+=Y;
    return "true";
}
int Bank::BALANCE(int X)
{
    if(account_details[X]==false)
        return -1;
    return amount[X];
}
int main()
{
    Bank B1;
    int Q;
    cin>>Q;
    while(Q>0)
    {
        string query;
        cin>>query;
        if(query=="CREATE")
        {
            int X,Y;
            cin>>X>>Y;
            cout<<B1.CREATE(X,Y)<<endl;
        }
        else if(query=="DEBIT")
        {
            int X,Y;
            cin>>X>>Y;
            cout<<B1.DEBIT(X,Y)<<endl;
        }
        else if(query=="CREDIT")
        {
            int X,Y;
            cin>>X>>Y;
            cout<<B1.CREDIT(X,Y)<<endl;
        }
        else if(query=="BALANCE")
        {
            int X;
            cin>>X;
            cout<<B1.BALANCE(X)<<endl;
        }
        else 
        {
            cout<<"no such query";
        }
        Q--;
    }
    return 0;
}
