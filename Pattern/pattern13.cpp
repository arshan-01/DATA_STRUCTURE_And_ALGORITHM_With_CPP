/*          A
            B       C
            D       E       F           */
#include <iostream>
using namespace std;
int main() {
    int n;
     char value = 'A';
    cout<<"Enter the number of rows: ";
    cin>>n;
for (int i = 1; i <= n; i++)
{
    
   for (int j = 1; j <= i; j++)
   {
     cout<<value<<"\t"; 
      value++; 
   }
   cout<<endl;
  
   
    
}
return 0;
}