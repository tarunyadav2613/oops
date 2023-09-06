#include <bits/stdc++.h>
#include <string>
using namespace std;
class Hotel
{
private:
    int NOD;
    int Rno;
    string name;
    int tarrif = 1000;

    int calculate()
    {
        if (tarrif * NOD > 10000)
        {
            return 1.05 * tarrif * NOD;
        }
        else
        {
            return tarrif * NOD;
        }
    }

public:
    void checkin()
    {
         
        cout << "enter the room number" << endl;
        cin >> Rno;
        cout << "enter the name of the customer" << endl;
        cin>>name;
        cout << "enter the number of days" << endl;
        cin >> NOD;
    }
    void checkout()
    {

        cout << "the name of the customer is " << name << endl;
        cout << "the room number is " << Rno << endl;
        cout << "the number of days is " << NOD << endl;
        cout << "\n"
             << endl;
        cout << "the total amount is " << calculate() << endl;
    }
};

int main()
{
    int choice;
    


    Hotel h1;
    cout << "welcome to the hotel" << endl;
    cout << "Please enter the details " << endl;
    
    cout<<"press 1 for checkin"<<endl;
    cout<<"press 2 for checkout"<<endl;
    cout<<"press 3 for exit"<<endl;
    cin>>choice;
    while(choice!=0){
    switch(choice)
    {
        case 1:
        h1.checkin();
        
        cout<<"now press 5 for checkout"<<endl;
        cin>>choice;
        if (choice==5)
        {
            h1.checkout();
            return 0;
        }
        else {
            cout<<"invalid choice"<<endl;
            }
            break;
        case 2:
        h1.checkout();
        break;
        case 3:
        cout<<"thank you for visiting"<<endl;
        break;
        default:
        cout<<"invalid choice"<<endl;
    }
    return 0;
 }
    return 0;
}