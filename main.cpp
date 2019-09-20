#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class input
{
public:
    char category[15][15];
    int fee[15],i;
    int num_category;
    void getdata();
};

class user: public input
{
public:
    int quantity[15];
    int type;
    void userfunction(void);
    void display();
};

class menu: public user
{
public:
    char letter;
    void mainmenu(void);
    void showdata(void);
};

void menu::mainmenu(void)
{
    system("cls");

    cout<<"WELCOME TO TOLL PLAZA MANAGEMENT SYSTEM"<<endl;
    cout<<"[1]. Input Data"<<endl;
    cout<<"[2]. User Window"<<endl;
    cout<<"[3]. Show Data"<<endl;
    cout<<"[4]. Show Result"<<endl;
    cout<<"[5]. Exit...."<<endl;

    cout<<"Only press a button as you choice...:\n";

    letter=getche();

    if(letter=='1'){
            getdata();
        mainmenu();
    }
    else if(letter=='2'){
        userfunction();
        mainmenu();
    }
    else if(letter=='3'){
            showdata();
        mainmenu();
    }
    else if(letter=='4'){
            display();
        mainmenu();
    }
    else if(letter=='5')
        exit(0);
    else mainmenu();
}

void input::getdata(void)
{
    system("cls");

    cout<<"Enter How many category of the vehicle:"<<endl;
    cin>>num_category;
    cout<<"Enter vehicle type and fee:"<<endl;

    for(i=1;i<=num_category;i++){
        cin>>category[i];
        cin>>fee[i];
    }
   return;
}
void user:: userfunction(void)
{
    char ch;
    for(i=0;i<=num_category;i++){
        quantity[i]=0;
    }
    while(ch!=EOF){
            system("cls");
    cout<<"SL. "<<"Category:"<<"\t\t"<<"Fee"<<endl;
    for(i=1;i<=num_category;i++){
        cout<<i<<". "<<category[i]<<"\t\t"<<fee[i]<<endl;
    }
    cout<<"Please enter your choice:--";
    cin>>type;

    for(i=1; i<=num_category;i++){
        if(i==type)
            quantity[i]++;
    }
    cout<<"Enter any key to continue....\n";
    cout<<"Enter 0 to exit....";

    ch=getche();
    if(ch=='0')
        return;
    }
}
void menu::showdata(void)
{
    system("cls");

    cout<<"\nVehicle Category and Fee...\n"<<endl;
    cout<<"\nSL. "<<"Category:"<<"\t\t"<<"Fee"<<endl;
    for(i=1;i<=num_category;i++){
        cout<<i<<". "<<category[i]<<"\t\t"<<fee[i]<<endl;
    }
    cout<<"Enter anykey to continue...";
    getch();
}

void user:: display()
{
    system("cls");

    cout<<"\nResult after the day............\n"<<endl;
    cout<<"\nSL. "<<"Category:"<<"\t\t"<<"Fee"<<endl;
    for(i=1;i<=num_category;i++){

        cout<<i<<". "<<category[i]<<"\t\t"<<(fee[i]*quantity[i])<<endl;
    }
    cout<<"Enter anykey to continue...";
    getch();
}
int main()
{
    system("color f0");
    menu ob;
    ob.mainmenu();
    return 0;
}
