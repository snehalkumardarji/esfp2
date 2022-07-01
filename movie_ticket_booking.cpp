// project about movie ticket booking (Payment).
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    int n;
    string films;
    string greet;
    string amount;
    cout<<"\t\t---Welcome--\n"<<endl;
    m:
    cout<<"\t\tPress 1 -> For Available Movies\n";
    cout<<"\t\tPress 2 -> For Available Movie Seats\n";
    cout<<"\t\tPress 3 -> For book films Ticket\n";
    cout<<"\t\tPress 4 -> To Get Safe Exit"<<endl;

    cout<<"Press From Above Content: ";
    cin>>n;

    switch(n)
    {
        case 1:
        {
            // number of movies.
            cout<<"\tCaptain marvel"<<endl;
            cout<<"\tKGF Chapters"<<endl;
            cout<<"\tRRR"<<endl;
            cout<<"\tHulk"<<endl;
            cout<<"\tThor"<<endl;
            goto m;
        }

        case 2:
        {
            cout<<"\nMovie name ? ";
            cin>>films;
            cout<<"\n\nEnter Movie Quality 4K OR 1080p: ";
            cin>>greet; // example 4K;
            if(films == "kgf chapters")
            {
                cout<<"Seats Available 50 out of 150"<<endl;
                if(greet == "4k")
                {
                    cout<<"\nPrice For 4K "<<films<<" is: 799 Rupee"<<endl;
                    cout<<"\nEnter YES for payment Proccess: ";
                    cin>>amount;
                    if(amount == "yes")
                    {
                        cout<<"\nPayment Recieved for - "<<films<<endl;
                    }
                    else if(amount == "no")
                    {
                        goto m;
                    }
                }
                else
                {
                    cout<<"\nPrice for 1080p "<<films<<" is: 499 Rupee"<<endl;
                    cout<<"\nEnter YES for payment proccess: ";
                    cin>>amount;
                    if(amount == "yes")
                    {
                        cout<<"\nPayment Recieved for - "<<films<<endl;
                    }
                    else if(amount == "no")
                    {
                        goto m;
                    }
                }
            }
            else if(films == "iron man")
            {
                cout<<"Seats Available 45 out of 150 "<<endl;
                if(greet == "4k")
                {
                    cout<<"\nPrice For 4k "<<films<<" is: 999 Rupee"<<endl;
                    cout<<"\nEnter YES for payment proccess: ";
                    cin>>amount;
                    if(amount == "yes")
                    {
                        cout<<"\nPayment Recieved for - "<<films<<endl;
                    }
                    else if(amount == "no")
                    {
                        goto m;
                    }
                }
                else
                {
                    cout<<"\nPrice for 1080p "<<films<<" is: 599 Rupee"<<endl;
                    cout<<"\nEnter YES for payment proccess: ";
                    cin>>amount;
                    if(amount == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<films<<endl;
                    }
                    else if(amount == "no")
                    {
                        goto m;
                    }
                }
            }
            else if(films == "thor")
            {
                cout<<"Seats Available 80 out of 150"<<endl;
                if(greet == "4k")
                {
                    cout<<"\nPrice For 4k "<<films<<" is: 699 Rupee"<<endl;
                    cout<<"\nEnter YES for payment proccess: ";
                    cin>>amount;
                    if(amount == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<films<<endl;

                    }
                    else if(amount == "no")
                    {
                        goto m;
                    }
                }
                else
                {
                    cout<<"\nPrice for 1080p "<<films<<" is: 499 Rupee"<<endl;
                    cout<<"\nEnter YES for payment proccess: ";
                    cin>>amount;
                    if(amount == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<films<<endl;
                    }
                    else if(amount == "no")
                    {
                        goto m;
                    }
                }
            }
            else if(films == "hulk")
            {
                cout<<"Seats Available are 67 OUT of 150"<<endl;
                if(greet == "4k")
                {
                    cout<<"\nPrice For 4k "<<films<<" is: 1199 Rupee"<<endl;
                    cout<<"\nEnter YES for payment proccess: ";
                    cin>>amount;
                    if(amount == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<films<<endl;
                    }
                    else if(amount == "no")
                    {
                        goto m;
                    }
                }
                else
                {
                    cout<<"\nPrice for 1080p "<<films<<" is: 999 Rupee"<<endl;
                    cout<<"\nEnter YES for payment: ";
                    cin>>amount;
                    if(amount == "yes")
                    {
                        cout<<"\nPayment Recieved for - "<<films<<endl;
                    }
                    else if(amount == "no")
                    {
                        goto m;
                    }
                }
            }else if(films == "captain marvel")
            {
                cout<<"Seats Available are 23 OUT of 150"<<endl;
                if(greet == "4k")
                {
                    cout<<"\nPrice For 4k "<<films<<" is: 799 Rupee"<<endl;
                    cout<<"\nEnter YES for payment proccess: ";
                    cin>>amount;
                    if(amount == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<films<<endl;
                    }
                    else if(amount == "no")
                    {
                        goto m;
                    }
                }
                else if(films == "need for speed")
                {
                    cout<<"So Sorry!! for Inconvinance: ZERO Seats!!"<<endl;
                    goto m;
                }
                else
                {
                    cout<<"\nPrice for 1080p "<<films<<" is: 499 Rupee"<<endl;
                    cout<<"\nEnter YES for payment proccess: ";
                    cin>>amount;
                    if(amount == "yes")
                    {
                        cout<<"\nPayment Recieved for "<<films<<endl;
                    }
                    else if(amount == "no")
                    {
                        goto m;
                    }
                }
            }
            else
                {
                    cout<<"Thus!! No Movie available"<<endl;
                }
                goto m;
        }

        case 3:
        {
            cout<<"\n\t\t_Ticket_Details_"<<endl;
            cout<<"\tYour Movie Show:- "<<films<<endl;
            cout<<"\tMovie Available In:- "<<greet<<endl;
            cout<<"\tPaid Successfully:- "<<amount<<endl;
            cout<<"\tMovie show timing will be conclude soon..";
            // creating file with object "creation"
            ofstream creation;

            creation.open("project_movie.txt", ios::out); // creating files 
            // inserting details into file. named:- "project_movie.txt".
            creation<<"\t\tYour MOVIE DETAILS\n";
            creation<<"\tYour Movie Show:- "<<films<<endl;
            creation<<"\tMovie Available In:- "<<greet<<endl;
            creation<<"\tPaid Successfully:- "<<amount<<endl;
            creation<<"\tMovie show timing will be concluded soon..";
            creation.close();

            goto m;
        }


        case 4:
        {
            cout<<"\nHope You Enjoyed...."<<endl;
            break;
        }
    }
}
