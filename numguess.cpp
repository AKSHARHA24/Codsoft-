#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std ;
int main()
{
 while (true)
 {
  cout<<"WELCOME TO NUMBER GUESSING GAME"<<endl;
  cout<<"YOU HAVE THREE LEVELS:"<<endl;
  cout<<" 1 -> EASY "<<endl;
  cout<<" 2 -> MEDIUM "<<endl;
  cout<<" 3 -> DIFFICULT" << endl;
  cout<<" IF YOU WANT TO QUIT A GAME ENTER 0" << endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout<<"SELECT YOUR LEVEL OF PLAY:" << endl;
  int select;
  cin>>select;
  int secretnum;
  int guess;
  srand(time(0));
  secretnum =1+(rand() % 100);
 if (select==1)
 {
   cout<<"YOU HAVE CHOOSEN EASY LEVEL" << endl;
   cout<<endl;
   cout<<"YOU CAN GUESS NUMBER UPTO 10 TIMES" << endl;
   int choiceleft=10;
   for (int i=1;i<=10;i++)
   {
     cout<<"ENTER YOUR GUESSING NUMBER ::";
     cin>>guess ;
     cout<<endl;
     if (guess==secretnum)
     {
       cout<<"YOUR GUESSING IS CORRECT!!" <<endl;
       cout<<"CONGRATULATIONS!!YOU HAVE WON" << endl;
       cout<<"TRY NEXT LEVEL "<<endl;
       cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      }
      else if(guess>secretnum)
      {
       cout<<"YOUR GUESSING IS WRONG" << endl;
       cout<<"YOUR NUMBER IS GREATER THAN THE SECRET NUMBER" << endl;
       cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      }
      else
      {
       cout<<"YOUR GUESSING IS WRONG" << endl;
       cout<<"YOUR NUMBER IS SMALLER THAN THE SECRET NUMBER" << endl;
       cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      }
    choiceleft --;
    cout<<"YOU HAVE ONLY " ;  
    cout<<choiceleft<<" CHANCES TO PLAY"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    if (choiceleft==0)
     {
      cout<<"YOU HAVE LOST YOUR GAME :(" << endl;
      cout<<"TRY AGAIN !!" << endl;
      cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
     }
    
   }
 } 
   
else if(select==2)
 {
   cout<<"YOU HAVE CHOOSEN MEDIUM LEVEL" << endl;
   cout<<endl;
   cout<<"YOU CAN GUESS NUMBER UPTO 6 TIMES" << endl;
   int choiceleft=6;
   for (int i=1;i<=6;i++)
   {
     cout<<"ENTER YOUR GUESSING NUMBER ::";
     cin>>guess ;
     cout<<endl;
     if (guess==secretnum)
     {
       cout<<"YOUR GUESSING IS CORRECT!!" <<endl;
       cout<<"CONGRATULATIONS!!YOU HAVE WON" << endl;
       cout<<"TRY NEXT LEVEL "<<endl;
       cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      }
      else if(guess>secretnum)
      {
       cout<<"YOUR GUESSING IS WRONG" << endl;
       cout<<"YOUR NUMBER IS GREATER THAN THE SECRET NUMBER" << endl;
       cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      }
      else
      {
       cout<<"YOUR GUESSING IS WRONG" << endl;
       cout<<"YOUR NUMBER IS SMALLER THAN THE SECRET NUMBER" << endl;
       cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      }
    choiceleft --;
    cout<<"YOU HAVE ONLY " ;  
    cout<<choiceleft<<" CHANCES TO PLAY"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    if (choiceleft==0)
     {
      cout<<"YOU HAVE LOST YOUR GAME :(" << endl;
      cout<<"TRY AGAIN !!" << endl;
      cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
     }
    
   }
 } 
   
 else if(select==3)
 {
   cout<<"YOU HAVE CHOOSEN DIFFICULT LEVEL" << endl;
   cout<<endl;
   cout<<"YOU CAN GUESS NUMBER UPTO 10 TIMES" << endl;
   int choiceleft=3;
   for (int i=1;i<=3;i++)
   {
     cout<<"ENTER YOUR GUESSING NUMBER ::";
     cin>>guess ;
     cout<<endl;
     if (guess==secretnum)
     {
       cout<<"YOUR GUESSING IS CORRECT!!" <<endl;
       cout<<"CONGRATULATIONS!!YOU HAVE WON" << endl;
       cout<<"TRY NEXT LEVEL "<<endl;
       cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      }
      else if(guess>secretnum)
      {
       cout<<"YOUR GUESSING IS WRONG" << endl;
       cout<<"YOUR NUMBER IS GREATER THAN THE SECRET NUMBER" << endl;
       cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      }
      else
      {
       cout<<"YOUR GUESSING IS WRONG" << endl;
       cout<<"YOUR NUMBER IS SMALLER THAN THE SECRET NUMBER" << endl;
       cout<<"~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      }
    choiceleft --;
    cout<<"YOU HAVE ONLY " ;  
    cout<<choiceleft<<" CHANCES TO PLAY"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    if (choiceleft==0)
     {
      cout<<"YOU HAVE LOST YOUR GAME :(" << endl;
      cout<<"TRY AGAIN !!" << endl;
      cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
     }
    
   }
 } 
 else if (select==0)
 {
 cout<<"YOU QUITTED THE GAME " << endl;
 cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
 }
 else
 {
 cout << "YOU ENTERED WRONG OPTION" << endl;
 cout << "ENTER APPROPRIATE OPTION" << endl;
 cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
 }
 }
 return 0;
 }
  
  
  