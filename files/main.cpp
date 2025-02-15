#include <iostream>
#include <string>
#include <fstream>
using namespace std;


// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main()
{
    // string name;
    // cout<<"enter your fullname"<<endl;
    // getline(cin, name); //this reads all line
    // cout<<"your name is "<< name << endl;

    ifstream inputData;
    ofstream outputData;
    char theStoredData;
    inputData.open(R"(C:\Users\DELL\Desktop\myData.txt)");
    outputData.open(R"(C:\Users\DELL\Desktop\myOutput.txt)");
    // getline(inputData, theStoredData);
    // outputData<<"the stored data gotten is ::  "<<theStoredData<<endl;
    // outputData.close();
    //
    // inputData.get(theStoredData);
    // outputData << theStoredData <<endl;
    // inputData.putback(theStoredData);
    // char result = inputData.peek();
    // outputData << "the peeked result: " << result<<endl;
    // outputData.close();
    // cout << theStoredData << endl;



}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.