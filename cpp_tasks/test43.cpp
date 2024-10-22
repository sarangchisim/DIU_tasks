#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> inputs; // vector to store inputs and memory allocation, resizing which is done automatically
    string line;
    int maxLength = 0;

    cout<<"Enter strings:"<<endl;

    while(cin>>line) { // taking inputs through "line" to check and store the inputs, also reducing complexity
        if(line == "end") break; // typing end will terminate taking inputs
        inputs.push_back(line);
        if(line.length() > maxLength){
            maxLength= line.length();  // stores highest len of string
        }
    }

    cout <<"\nRight-aligned:"<< endl;
    for (const auto& str: inputs) {
        cout<<setw(maxLength)<<str<<endl; // setw() is used to check how many character are needed to fill the maxLength
    }

    return 0;
}
/*

    cout <<"\nLeft-aligned:"<< endl;
    for(const auto& str: inputs){
        cout<<str<<endl;
    }

*/