#include <iostream>
using namespace std;

int main()
{
    int i,j,temp=0;
    string string1, string2; 
    int len1=string1.length();
    int len2=string2.length();
    cout<<"Enter the string 1 : "<<endl;
    getline(cin, string1);
    cout<<"Enter the string 2 : "<<endl;
    getline(cin, string2);
 
    if(len1!=len2) 
        cout<<"They are not anagrams"<<endl;
    else 
    {
        for(i=0;i<len1;i++)
        {
        	for(j=0;j<len2;j++)
        	{
        		if(string1[i]==string2[j])
        		{
        			temp++;
        			string2.erase(j,1);  
        			break;
				}    
			}
		}
    }
    if(temp==len1)
        cout<<"yes, The given strings are anagram";
    else 
        cout<<"no, The given strings are not anagram";

    return 0;
}
