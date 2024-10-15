#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string pin ;
    string userpin;
    int choice;
    int deposit,withdrwal;
    int num1,num2;
    int sub,sim;
    int press;
    int ACC,BCC;
    int E,A,R,W;
    int ha;
    string a,b;
    int r,j;
    string name;

do{


cout<<"WELCOME TO ABCA BANK OF ALL"<<endl<<endl;
cout<<"HOW MAY WE ASSIT YOU TODAY"<<endl<<endl;
cout<<"1:WOULD YOU LIKE TO OPEN AN ACCOUNT"<<endl;
cout<<"2:WOULD YOU LIKE TO LOG IN"<<endl;
cout<<"3::EXIT"<<endl;
cin>>ha;

if(ha == 1){
    cout<<"PERSONAL INFORMATION"<<endl<<endl;
    cout<<"NAME"<<endl;
    cin>>a;
cout<<endl;
    cout<<"SURNAME"<<endl;
    cin>>b;
    cout<<endl;
    cout<<"PHONE NUMBER"<<endl;
    cin>>r;
    cout<<endl;
    cout<<"SAVINCE ACCOUNT OPEND"<<endl;
    cout<<a<<"\t" <<b<<"\t"<<"+27"<<r<<endl<<endl;
    cout<<"GO TO YOUR CLOSEST BRANCH TO COLLECT YOUR CARD"<<endl;
    cout<<"THANK YOU"<<endl<<endl;
break;
}
else if (ha > 3)
{
    cout<<" PLEASE EXIT AND TRY AGAIN"<<endl;
    break;
}
else if(ha == 3) {
    cout<<"THANK YOU FOR VISITING ABCA BANK OF ALL"<<endl;
    break;
}
if(ha == 2){

cout<<"ENTER YOUR LOGINS"<<endl;
cout<<"ENTER NAME::";
cin>>name;
for(char &c : name){
    c = toupper(c);
}
cout<<"ENTER PIN ::";
cin>>pin ;
cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"  <<endl<<endl;
}

if (pin== pin)
        {
        cout<<"WELCOME "<<name<<" HOW MAY WE HELP YOU"<<endl<<endl;

        cout<<"1:DEPOSIT"<<endl;
        cout<<"2:WITHDRAWAL"<<endl;
        cout<<"3:BALANCE CHECK"<<endl;
        cout<<"4:REPORT STOLEN CARD"<<endl;
        cout<<"5:EXIT"<<endl;
        cin>>choice;
        }

        if (choice > 5)
            {
                cout<<"PLEASE  CHOOSE NUMBER 1 TO 5"<<endl;

            }

switch (choice)
{


case 1:
    cout<<"WHICH ACCOUNT WOULD YOU LIKE TO DEPOSIT TO"<<endl<<endl;
    cout<<"1::93472843  SAVINGS ACCOUNT"<<endl;
    cout<<"2::64462836  EXTRA SAVINGS ACCOUNT"<<endl;
    cin>>ACC;
    if (ACC == 1){
    cout<<"SAVINGS ACCOUNT"<<endl;
    cout<<"AVAILABLE BALANCE  R"<<num1<<endl;
    cout<<"AMOUNT  R";
    cin>>deposit;
    sub = num2 += deposit;
    cout<<"YOU DEPOSITED R"<<deposit  <<"  IN YOUR SAVINGS ACCCOUT"<<endl;
    cout<<"AVAILABLE AMOUNT R"<<sub<<endl;
    }


    cout<<"WOULD YOU LIKE TO DO ANOTHER TRANSATION"<<endl;
    cout<<"1::YES AND 2::NO"<<endl;
    cin>>j;
    if(j == 2){
        cout<<"THANK YOU FOR VISITING ABCA BANK OF ALL"<<endl;
    }
 break;

case 2:
    cout<<"WHICH ACCOUNT WOULD YOU LIKE TO WITHDRAW FROM"<<endl<<endl;
    cout<<"1::93472843  SAVINGS ACCOUNT"<<endl;
    cout<<"2::64462836  EXTRA SAVINGS ACCOUNT"<<endl;
    cin>>BCC;
    cout<<"WITHDRAWAL AMOUNT  R";
    cin>>withdrwal;
    if (withdrwal > num1 ){
        cout<<"invalid amount"<<endl;
        cout<<"You can not exceed R";
        cout<<num1<<endl;
    }
    else{
    sim = num1 -= withdrwal;
    cout<<"SUCCESSFULLY WITHDRAWN  R";
    cout<<withdrwal<<endl <<endl;
    cout<<"AVAILABLE BALNCE  R";
    cout<<sim <<endl;
    }
    cout<<"WOULD YOU LIKE TO DO ANOTHER TRANSACTION"<<endl;
    cout<<"1::YES AND 2::NO"<<endl;
    cin>>j;
    if(j == 2){
        cout<<"THANK YOU FOR VISITING ABCA BANK OF ALL"<<endl;
    }
    break;

case 3:
    cout<<"AVAILABLE BALANCE  R"<<num1<<endl;
    cout<<"WOULD YOU LIKE TO DO ANOTHER TRANSACTION"<<endl;
    cout<<"1::YES AND 2::NO"<<endl;
    cin>>j;
        if(j == 2){
        cout<<"THANK YOU FOR VISITING ABCA BANK OF ALL"<<endl;

    }

break;
case 4:
    cout<<"WOULD YOU LIKE TO REPOERT STOLEN CARD"<<endl;
    cout<<"PRESS 1:YES 2:NO"<<endl;

    cin>>press;
    if (press == 1){
        cout<<"SUCCESSFULLY REPORTED"<<endl;
        cout<<"YOU WILL RECIEVE A MESSAGE TO CONFIRM YOUR STOLEN CARD"<<endl;
        cout<<"THANK YOU FOR YOUR TIME"<<endl;
        cout<<"HAVE A WONDERFUL DAY"<<endl;
    }
    else{
        cout<<"THANK YOU FOR VISITING US"<<endl;
        cout<<"HAVE A WONDERFUL DAY";
    }
    break;
}
}
while(choice != 6);


    return 0;
    }




