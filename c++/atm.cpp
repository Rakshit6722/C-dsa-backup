#include <iostream>
using namespace std;

class bank{

private:
string name;
int adno;
int mobno;
int accno;
string acctype;
float amount = 0.00;
float total = 0.00;

public:
void setvalue()
{
cout<<"Enter your Name: ";
cin>>name;
cout<<"Enter your Aadhaar Card Number: ";
cin>>adno;
cout<<"Enter your Mobile Number: ";
cin>>mobno;
cout<<"Enter your Account Number: ";
cin>>accno;
cout<<"Enter your Account Type: ";
cin>>acctype;
cout<<"Enter your Total Balance: ";
cin>>total;
}

void showdata()
{
cout<<"Name: "<<name<<endl;
cout<<"Aadhaar Number: "<<endl;
cout<<"Mobile Number: "<<endl;
cout<<"Account Number: "<<accno<<endl;
cout<<"Account Type: "<<acctype<<endl;
cout<<"Balance: "<<total<<endl;
}

void deposit()
{
cout<<"Enter the Ammount want to Deposit: Rs. ";
cin>>amount;
}

void showbalance()
{
total = total + amount;
cout<<"Total available balance is: Rs. "<<total;
}

void withdraw()
{
int x, abal;
cout<<"Enter ammount want to withdraw: Rs.";
cin>>x;
abal = total - x;
cout<<"Now available balance is: Rs."<<abal;
}
};

int main()
{
    bank b;
 
    int choice;
 
    while (1) {
        cout << "Enter Your Choice"<<endl;
        cout << "    1. Enter name, Aadhaar Number, Mobile Number, Account number, Account type\n";
        cout << "    2. Balance Enquiry\n";
        cout << "    3. Deposit Money\n";
        cout << "    4. Show Total balance\n";
        cout << "    5. Withdraw Money\n";
        cout << "    6. Cancel\n";
        cin >> choice;
 
        switch (choice) {
        case 1:
            b.setvalue();
            break;
        case 2:
            b.showdata();
            break;
        case 3:
            b.deposit();
            break;
        case 4:
            b.showbalance();
            break;
        case 5:
            b.withdraw();
            break;
        case 6:
        cout<<"Transaction Cancelled";
        break;
        default:
            cout << "Invalid Choice"<<endl;
        }
    }
}

