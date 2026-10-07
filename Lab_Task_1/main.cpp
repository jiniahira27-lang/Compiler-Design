#include <iostream>

using namespace std;

// Q1

void numericFunc(){
    string value;
    cout<<"Enter a value: ";
    cin>>value;

    bool isNumeric;
        for(int i=0; i<value.length();i++){
            char ch=value[i];
            if(ch<48 || ch>57){
                isNumeric=false;
                break;
            }
            else{
                isNumeric=true;
            }
        }

        if(isNumeric){
            cout<<"Numeric Constant"<<endl;
        }
        else{
            cout<<"Not Numeric"<<endl;
        }

 }

 //Q2

 void opertFunc(){
    string input;
    cout<<"Enter a value: ";
    cin>>input;

    int operatorCount=1;
    for(int i=0;i<input.length(); i++){
        if(input[i]== '+' || input[i]== '-'
           ||input[i]== '*' || input[i]== '/'
           ||input[i]== '%' || input[i]== '=')
            {
            cout<<"Operator"<<operatorCount<<":"<<input[i]<<endl;
            operatorCount++;

        }
    }

 }

 //Q3

 void commentcheckFunc(){
     char str[100];
     int cmnt=0;
     cout<<"Enter a line: ";
     cin>>str;
     for(int i=0; i<100;i++){
        if(str[i] == '/' && str[i+1] == '/'){
            cout<<"It's a single line comment."<<endl;
            cmnt=1;
        }
        else if( str[i] == '/' && str[i+1] == '*'){
            cout<<"It's a multi line comment."<<endl;
            cmnt=1;

        }
     }

     if(cmnt==1){
        cout<<"It's a comment"<<endl;
     }
     else{
        cout<<"It's not a comment line"<<endl;
     }

 }


 //Q4

void inputIdentFunc()
{
    string value;
    cout << "Enter a value: ";
    cin >> value;

    char ch = value[0];

    if (!((ch >= 'A' && ch <= 'Z') ||
          (ch >= 'a' && ch <= 'z') ||
          ch == '_')){
        cout << "Invalid Identifier";
        return;
    }

    for (int i = 1; i < value.length(); i++){

        ch = value[i];
    if (!((ch >= 'A' && ch <= 'Z') ||
          (ch >= 'a' && ch <= 'z') ||
          (ch >= '0' && ch <= '9') ||
           ch == '_')){
            cout << "Invalid Identifier";
            return;
        }
    }
    cout << "Valid Identifier";
}


int main()
{

    numericFunc();
    opertFunc();
    commentcheckFunc();
    inputIdentFunc();
    return 0;
}
