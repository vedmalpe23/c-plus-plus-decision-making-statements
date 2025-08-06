//program to use switch case
#include <iostream>
using namespace std;
int main() {
    int choice;
    cout<<"welecome to the mini fortune teller"<<endl;
    cout<<"pick a number between 1 to 5 to reveal your fortune:";
    cin>>choice;
    
    switch(choice){
        case 1:
        cout<<"A suprise is waiting for you today:"<<endl;
        break;
        case 2:
        cout<<"you will get a new opportuninty soon"<<endl;
        break;
        case 3:
        cout<<"someone secretly admire you"<<endl;
        
        break;
        case 4:
        cout<<"money may come your way , save it wisely"<<endl;
        break;
        case 5:
        cout<<"this year ,must be difficult for you"<<endl;
        break;
        
        
        

    }

 

    return 0;
}
