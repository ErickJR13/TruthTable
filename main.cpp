//
//  main.cpp
//  Truth Table
//
//  Created by Erick Jean Reyes on 12/7/16.
//  Copyright © 2016 Erick Jean Reyes. All rights reserved.
//

#include <iostream>
#include <string>
void andtable (std::string, std::string);
void ortable (std::string, std::string);
void thentable (std::string, std::string);
void thankyou (std::string);
using namespace std;

int main()
{
    
    string operation; string P; string Q;
    
    cout<<"Welcome to the truth table app."<<endl;
    cout<<endl;
    cout<<"This will help you find out the truth value of two variables."<<endl;
    cout<<endl;
    cout<<"This app was made by Erick Jean Reyes"<<endl;
    cout<<endl;
    cout<<"What is the value you are trying to find out? Enter 'and', 'or', or 'then'"<<endl;
    cout<<endl;
    cout<<"(Please enter the terms in small letter (no CAPS accepted in any part of this program))"<<endl;
    cin>>operation;
    
    if (operation == "and")
        
    {
        andtable (P, Q);
    }
    
    if (operation == "or")
        
    {
        ortable (P, Q);
    }
    
    if (operation == "then")
        
    {
        thentable (P, Q);
    }
    
     cout<<endl;
     cout<<"Thank you for using my program. If you would like to use it again, please close and re-open the app."<<endl;
    system ("pause");
    
   }

void andtable (string P, string Q)
{
    cout<<"You entered 'and'."<<endl;
    cout<<"What is the value of P? (True or False)"<<endl;
    cin>>P;
    
    cout<<"What is the value of Q? (True or False)"<<endl;
    cin>>Q;
    
    if (P == "true" && Q == "true")
    {
        cout<<"The value of P being true and Q being true is True"<<endl;
    }
    
    if (P == "true" && Q == "false")
    {
        cout<<"The value of P being true and Q being false is False"<<endl;
    }
    
    if (P == "false" && Q == "true")
    {
        cout<<"The value of P being false and Q being true is False"<<endl;
    }
    
    if (P == "false" && Q == "false")
    {
        cout<<"The value of P being false and Q being false is False"<<endl;
    }

}

void ortable (string P, string Q)
{
    
    cout<<"You entered 'or'."<<endl;
    cout<<"What is the value of P? (True or False)"<<endl;
    cin>>P;
    
    cout<<"What is the value of Q? (True or False)"<<endl;
    cin>>Q;
    
    if (P == "true" && Q == "true")
    {
        cout<<"The value of P being true OR Q being true is True"<<endl;
    }
    
    if (P == "true" && Q == "false")
    {
        cout<<"The value of P being true OR Q being false is True"<<endl;
    }
    
    if (P == "false" && Q == "true")
    {
        cout<<"The value of P being false OR Q being true is False"<<endl;
    }
    
    if (P == "false" && Q == "false")
    {
        cout<<"The value of P being false OR Q being false is False"<<endl;
    }

}

void thentable (string P, string Q)
{
    cout<<"You entered 'then (->)'."<<endl;
    cout<<"What is the value of P? (True or False)"<<endl;
    cin>>P;
    
    cout<<"What is the value of Q? (True or False)"<<endl;
    cin>>Q;
    
    if (P == "true" && Q == "true")
    {
        cout<<"The value of P being true then Q being true is True"<<endl;
    }
    
    if (P == "true" && Q == "false")
    {
        cout<<"The value of P being true then Q being false is False"<<endl;
    }
    
    if (P == "false" && Q == "true")
    {
        cout<<"The value of P being false then Q being true is True"<<endl;
    }
    
    if (P == "false" && Q == "false")
    {
        cout<<"The value of P being false then Q being false is True"<<endl;
    }

}




