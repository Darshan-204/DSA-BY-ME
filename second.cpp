#include <iostream>
#include <string>
using namespace std;
bool isSequence(string str1,string str2,string str3)
{
    int j=0,k=0;
    for(int i=0;i<str3.length();i++)
    {
        
        if(j<str1.size() && str1[j]==str3[i])
        {
            j++;
        }
        else if(k<str2.size() && str2[k]==str3[i])
        {
            k++;
        }
        else
        {
            return false;
        }
   
    }
     if(j!= str1.size() || k != str2.size())
        {
            return false;
        }
       return true; 
}

int main() {
    string str1="ab";
    string str2="cd";
    string str3="acb";
    if(isSequence(str1,str2,str3))
    {
        cout<<"Yes, str3 is a sequence of str1 and str2"<<endl;
    }
    else
    {
        cout<<"No, str3 is not a sequence of str1 and str2"<<endl;
    }
    return 0;
}
//Time complexity for this program is o(n) n=length of string3
//Space complexity is O(1) as we are using only a few variables for counting

