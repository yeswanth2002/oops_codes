#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

bool verify(float ,float ,int );
int function(string ,string );
int word(int ,string );

int main()
{  
     int threshold;
     float string1,string2; 
     string string_1;
     string string_2;
     cout<<"Enter the string 1 : ";
     getline(cin,string_1);
     cout<<"Enter the string 2 : ";
     getline(cin,string_2);
     cout<<"Enter the threshold : ";
     cin>>threshold;
     string1=function(string_1,string_2);
     string2=function(string_2,string_1);
     cout<<verify(string1,string2,threshold)<<endl;
    return 0;
}

bool verify(float st1,float st2,int threshold)
{
    if(st1>=threshold && st2>=threshold)
        return 1;
    else
        return 0;
}

int word(int length_str1,string str1)
{
    int temp=0,i;
    for (i=0;i<length_str1;i++)
    {
    if(str1[i]==' ')
       temp++;
    }
      temp+=1;
      return temp;
}

int function(string str1,string str2)
{
     int length_str1 = str1.length();
     int length_str2 = str2.length();
     
     float n;
     int initial=0;
     float output=0;
     string temp="";
     
     n=word(length_str1,str1);
     for(int i=0;i<n;i++)
     {
         temp="";
       for(int j=initial;j<length_str1;j++)
       {
         int y=j;
        if(str1[y]==' ')
        {
          initial=y+1;
          break;
          }
       temp+=str1[y];
      }
      
      if (str2.find(temp) != string::npos)
      {
        output++;
      }
  }
	  float result; 
	  result=(output/n)*100;
	  return result;
	  
}



