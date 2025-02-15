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

    // int first;
    // int second;
    // int third;
    //
    // cout<<"enter the appropriate number, tho we are testing the fail state of an input stream: " <<endl;
    // cin>>first >> second >> third;
    //
    // cout <<"the first number is: "<<first<<endl;
    // cout <<"the second number is: "<<second<<endl;
    // cout <<"the third number is: "<<third<<endl;
    // cin.clear();  // this restores your input stream into its working state
    // cin.ignore(100, '\n'); //clear the buffer
    // cout<<"enter the numbers again, "<<" correct this time"<<endl;
    // cin>>first >> second >> third;
    // cout <<"the correct first number is: "<<first<<endl;
    // cout <<"the correct second number is: "<<second<<endl;
    // cout <<"the correct third number is: "<<third<<endl;


    // char ch;
    // cout<<"enter a some character: "<<endl;
    // cin.get(ch);  //this  reads the character in the input buffer
    // cout<<"this is your input "<<ch<<endl;

        //using putback and peek()
        // cout << "Enter a character: "<<endl;
        // char const ch = cin.peek();
        // if (ch == 'a')
        // {
        //     cout<<"this is the peeked character: "<<ch<<endl;
        // }
        // cin.get();
        // // cin.putback(ch);
        // cout <<"this has been put back into the input buffer (stream) "<< ch <<endl;

    // {
    //     char ch;
    //     cout << "enter a character" << endl;
    //     cin.get(ch);
    //     cout <<"you entered: " << ch <<endl;
    //     cin.putback(ch);
    //     ch = cin.peek();
    //     cout <<"looking at the current character inline in the input stream: " << ch <<endl;
    // }
    cout << "S/N" << " "<<"SQUARE" << " " <<  "CUBE" << endl;
    for (int index = 0; index < 11; index++)
    {
        int square = index * index;
        int cube = index * index * index;
        cout << index << "    " << square  << "     " << cube << endl;
    }

    return 0;
}