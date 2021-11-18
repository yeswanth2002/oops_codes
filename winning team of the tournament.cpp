#include <iostream>
#include<string.h>
using namespace std;
#define MAX 50

int main() {

    int win, count=0,arr[MAX];
    int batting[MAX];
    int balling[MAX];
    int feilding[MAX];
    int All_rounder_performance[MAX];
    int captain_performance[MAX];
    int Total_score[MAX];
    int tnum;
    cout<<"enter no of teams : ";
    cin>>tnum;
   
    for(int i=0;i<tnum;i++)
    {
    	cout <<"Team "<<i+1 <<" batting : ";
   	cin >> batting[i];
    	cout <<"Team "<<i+1 <<" balling : ";
    	cin >> balling[i];
    	cout <<"Team "<<i+1 <<" feilding : ";
    	cin >> feilding[i];
    	cout <<"Team "<<i+1 <<" All-rounder's performance : ";
    	cin >> All_rounder_performance[i];
    	cout <<"Team "<<i+1 <<" captain's performance : ";
    	cin >> captain_performance[i];
    	cout<<endl;
    }
    for(int i=0;i<tnum;i++)
    {
    	for(int j=0;j<tnum;j++)
    	{
    	 	if(i!=j)
    		{
    		 	 count=0;
    			if(batting[i]>batting[j])
    			{
    				count++;
    			}
    			if(balling[i]>balling[j])
    			{
    				count++;
    			}
    			if(feilding[i]>feilding[j])
    			{
    				count++;
    			}
    			if(All_rounder_performance[i]>All_rounder_performance[j])
    			{
    				count++;
    			}
    			if(captain_performance[i]>captain_performance[j])
    			{
    				count++;
    			}
    			if(count>=3)
    			{
    				win++;
    			}
	    	}
    	}
    	Total_score[i]=win;
    	cout<<Total_score[i];
    	win=0;
    }
    
   int maxIndex = 0;
   int maxValue = Total_score[0];
   for (int i = 1; i < tnum; i++)
   {
      if (Total_score[i] > maxValue)
      {
          maxValue = Total_score[i];
          maxIndex = i;
      }
      else if(Total_score[i] = maxValue)
      {
      	
      }
   }   
      cout<<"The winner is Team  "<<maxIndex+1<<endl;
   return 0;
}	
