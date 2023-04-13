#include<iostream>
using namespace std;
int lengthOfLastWord(string s) {
    string s1;
    getline(cin,s1);
    int num = 0;
    for(int n = s1.size(),i = n-1;i>=0;i--){
        if (s1[i] != ' '){
            num+=1;
        }else{
            break;
        }
    }
    return num;

}
int main(){


    int a = lengthOfLastWord("Hello World");
    cout<<a;
    return 0;
};
