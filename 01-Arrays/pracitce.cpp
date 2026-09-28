#include <iostream>
#include <vector>
#include <cstring>
#include <cctype>
using namespace std;

bool isAlphaNum(char ch) {
    if((ch >= '0' && ch <= '9') ||  (tolower(ch)>='a'  &&  tolower(ch) <= 'z')){
        return true;
    }
    
    return false;
}

int main(){
    
  string str = "A man, a plan, a canal: Panama";
   int start = 0,end = str.length() - 1;
   bool s = true;
        while(start < end){
            if(!isAlphaNum(str[start])){
                start++;
            } 
            if(!isAlphaNum(str[end])){
                end--;
            } 
            if(islower(str[start]) != islower(str[end])){
                cout<<"'there is we'"<<endl;
            s = false;
            cout<<start<<end<<":"<<endl;
            cout<<str[start]<<endl;
            cout<<str[end]<<endl;
               break;
            }
            start++;
            end--;
        }
    //    string ss = "sfadfa";
    //    cout<<isalpha(ss);
 cout<<s<<"Jno";
    return 0;
}