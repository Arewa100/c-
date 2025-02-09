#include <iostream>
using namespace std;

int main() {

    // char a;
    // char b;
    //
    // cout<<"Enter the second characters: "<<endl;
    // cin>>a;
    // cin.ignore(100, '\n');
    // cin>> b;
    // cout <<a<<" "<<b<<endl;

    int first;
    int second;
    int third;

    cout<<"enter the appropriate number, tho we are testing the fail state of an input stream: " <<endl;
    cin>>first >> second >> third;

    cout <<"the first number is: "<<first<<endl;
    cout <<"the second number is: "<<second<<endl;
    cout <<"the third number is: "<<third<<endl;
    cin.clear();  // this restores your input stream into its working state
    cin.ignore(100, '\n'); //clear the buffer
    cout<<"enter the numbers again, "<<" correct this time"<<endl;
    cin>>first >> second >> third;
    cout <<"the correct first number is: "<<first<<endl;
    cout <<"the correct second number is: "<<second<<endl;
    cout <<"the correct third number is: "<<third<<endl;
}