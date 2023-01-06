#include <iostream>
#include <string>
#include <cstdlib>
#include<ctime>
using namespace std;

int main(){
    int g;
string gt;
    cout <<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    g = rand()%9 ;
    
    switch (g)
    {
    case 0:
        gt = "A";
        break;
    case 1:
        gt = "B+";
        break;
    case 2:
        gt = "B";
        break;
    case 3:
        gt = "C+";
        break;
    case 4:
        gt = "C";
        break;        
    case 5:
        gt = "D+";
        break;
    case 6:
        gt = "D";
        break;
    case 7:
        gt = "F";
        break;
    default:
    gt = "W";
        break;
    }
    cout<<"You will get "<<gt <<" in this 261102.";
    return 0;
}