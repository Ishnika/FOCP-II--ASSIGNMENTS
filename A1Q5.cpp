#include<iostream>
using namespace std;
class MovieTicket
{
    int X;//customer id 
    int Y;//movie id
    int cust_details[1001][1001]={false};
    int movie_details[1001]={0};
    public:
    string BOOK(int X,int Y);
    string CANCEL(int X,int Y);
    string IS_BOOKED(int X,int Y);
    int AVAILABLE_TICKET(int Y);
};
string MovieTicket::BOOK(int X,int Y)
{
    if(cust_details[X][Y])
        return "false";
    if(movie_details[Y]>=100)
        return "false";
    cust_details[X][Y]=true;
    movie_details[Y]+=1;
    return "true";
}
string MovieTicket::CANCEL(int X,int Y)
{
    if(cust_details[X][Y]==false)
        return "false";
    if(movie_details[Y]<=0)
        return "false" ;
    cust_details[X][Y]=false;
    movie_details[Y]-=1;
    return "true";
}
string MovieTicket::IS_BOOKED(int X,int Y)
{
    if(cust_details[X][Y])
        return "true";
    else 
        return "false";
}
int MovieTicket::AVAILABLE_TICKET(int Y)
{
    return(100-movie_details[Y]);
}
int main()
{
    MovieTicket M1;
    int Q;
    cin>>Q;
    while(Q>0)
    {
        string query;
        cin>>query;
        if(query=="BOOK")
        {
            int X,Y;
            cin>>X>>Y;
            cout<<M1.BOOK(X,Y)<<endl;
        }
        else if(query=="CANCEL")
        {
            int X,Y;
            cin>>X>>Y;
            cout<<M1.CANCEL(X,Y)<<endl;
        }
        else if(query=="IS_BOOKED")
        {
            int X,Y;
            cin>>X>>Y;
            cout<<M1.IS_BOOKED(X,Y)<<endl;
        }
        else if(query=="AVAILABLE_TICKET")
        {
            int Y;
            cin>>Y;
            cout<<M1.AVAILABLE_TICKET(Y)<<endl;
        }
        Q--;
    }
    return 0;
}
