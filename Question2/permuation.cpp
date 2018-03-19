#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int no_per;
int check(string per[n])
int fact(int n)
{
    if(n<=1)
        return 1;
    else
        return ( n*fact(n-1) );
}
int check(string per[no_per],string man)
{
    for(int i = 0;i<no_per;i++)
    {
        if(per[i] == "")
            break;
        if(strcmp(per[i],man)==0)
            return 1;
    }
    return 0;

}
int function(str chars,string word,int n)
{
    int count = 0;
    int no_per = fact(n);
    string per[no_per];
    sort(chars.begin(),chars.end());
    per.push_back(chars);

    string man;
    string x;
    arr = chars;
   // k = n-2;
    int i = n-1;
    while(1)
    {
        count++;
        int index = i-1;
        for(int j = 0;j<n;j++)
        {
            man[j] = arr[i];
            if(j >= index  && j<i)
            {
                    x.push_back(j);
            }
        }
        man.push_back(i);
        int k = 0;
        while(1)
        {
            man.push_back(x[k]);
            if(x[k+1]=="")
            break;
        }

        if( check(per,man) ==0)
        {
            per.push_back(man);
        }
        else
            arr = man;

        if(count == no_per-1)
            break;
    }



}
int main()
{
    int n;
   string chars;
   string word;
   char input;
   cin>>n;


   for(int i = 0;i<n;i++)
   {
       cin>>input;
       chars.push_back(input);
   }
   cin>>word;

   cout<<chars;
}
