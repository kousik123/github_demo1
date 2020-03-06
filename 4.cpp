#include<stdio.h>
#include <iostream>
using namespace std; 

int main(){
    char input = 0; 
    int current_state = 0;
    int arr[3][2]= {{0,1},{0,2},{0,2}};

    while(cin.get(input)){
        if(input==10) { 
            break;
        }
        if(input!='0'){
            if(input!='1'){
                cout<<"Invalid input alphabet";
                current_state=0;
                break;
            }
        }

        
        input= input-'0'; 

        
        current_state=arr[current_state][input];
    }

    if(current_state ==2){
        cout<<"Accepted"<<endl;
    }
    else{
        cout<<"Rejected";
    }

    return 0;
}
