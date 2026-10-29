#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream MyFile("file.txt");
    string myText;

    string keyword="";
    int wordCount=0;
    string keywordArr[100];

    while (getline (MyFile, myText)) {
    for(int i=0; i<myText.length();i++){
        if(myText[i] != ' '){
            keyword+=myText[i];
        }
        else{
          if (keyword != "") {
            keywordArr[wordCount]=keyword;
            wordCount++;
            keyword = "";
          }
        }
    }
}
for (int i=0; i<sizeof(keywordArr) / sizeof(keywordArr[0]);i++){
    if(keywordArr[i]=="(" || keywordArr[i]==")" || keywordArr[i]=="{"
       || keywordArr[i]=="}" || keywordArr[i]==";" || keywordArr[i]=="["
       || keywordArr[i]=="]" || keywordArr[i]==":"){
        cout<<"Punctuations : "<<keywordArr[i]<<endl;
    }
     else if (keywordArr[i]=="main" || keywordArr[i]=="x"
              || keywordArr[i]=="y" || keywordArr[i]=="cout"){
        cout<<"Identifiers : "<<keywordArr[i]<<endl;
    }
    else if(keywordArr[i]=="<" || keywordArr[i]==">" || keywordArr[i]=="="){
        cout<<"Operators : "<<keywordArr[i]<<endl;
    }
    else if(keywordArr[i]=="10" || keywordArr[i]=="2.5" || keywordArr[i]=="Hello"
            || keywordArr[i]=="world" || keywordArr[i]=="0"){
        cout<<"Constant : "<<keywordArr[i]<<endl;
    }
    else if(keywordArr[i]=="int" ||keywordArr[i]=="float" ||keywordArr[i]=="return"){
        cout<<"Keywords : "<<keywordArr[i]<<endl;
    }
}
return 0;
}

