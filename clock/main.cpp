#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int hours,minutes,seconds,error;
    error=0;
    while(error==0){
      cout<<"Enter HOUR : ";     cin>>hours;
      cout<<"Enter MINUTES : ";  cin>>minutes;
      cout<<"Enter SECONDS : ";  cin>>seconds;
      (hours < 24 && minutes < 60 && seconds < 60)? error++ : system("cls");
      }
    while(1){
        system("cls");
        cout<<hours<<" : "<<minutes<<" : "<<seconds<<" : "<<endl;
        Sleep(1000); seconds++;
        if(seconds>59){seconds=0;minutes++;}
        if(minutes>59){minutes=0;hours++;}
        if(hours>24){hours=0;}
    }

    return 0;
}
