// This is a test of the operators in c++

#include <iostream>
using namespace std;

int main(){
    int choose;
    int x, y;

    while(choose!=0){
        cout<<"\n";
        cout<<"Type a number: ";
        cin>>x;
        cout<<"\n";
        cout<<"Type 1 to do +="<<endl;
        cout<<"Type 2 to do -="<<endl;
        cout<<"Type 3 to do *="<<endl;
        cout<<"Type 4 to do /="<<endl;
        cout<<"Type 5 to do >>="<<endl;
        cout<<"Type 6 to do <<="<<endl;
        cout<<"Type 7 to do &="<<endl;
        cout<<"Type 8 to do ^="<<endl;
        cout<<"Type 9 to do |="<<endl;
        cout<<"Type 0 to leave"<<endl;
        cout<<"\n";
        cout<<"Type a function: ";
        cin>>choose;
        cout<<"Type another number: ";
        cin>>y;
        cout<<"\n";

        if (choose == 1) x+=x;
        else if (choose == 2) x-=y;
        else if (choose == 3) x*=y;
        else if (choose == 4) x/=y;
        else if (choose == 5) x>>=y; // Shift bits left
        else if (choose == 6) x<<=y; // Shift bits right
        else if (choose == 7) x&=y;
        else if (choose == 8) x^=y;
        else if (choose == 9) x|=y;
        else break;

        cout<<"Result: "<<x<<endl;
        cout<<"Type 0, if you wanna leave"<<endl;
        cin>>choose;
    }



}