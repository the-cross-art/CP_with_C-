# include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main (){

   int n;
   cin >>n;
   cin.ignore();
   char arr[n+1];
   cin.getline(arr ,n);
   cin.ignore();
   int i =0;
   int currLen = 0;int maxLen =0;
   while(1){
       if(arr[i]==' ' || arr[i]=='\0'){
           if(currLen > maxLen){
               maxLen = currLen;
           }
           currLen =0;
       }
       else {
           currLen++;
       }
       if(arr[i]=='\0')
            break;
        i++;
   }
   cout<<maxLen;
  return 0;

}
