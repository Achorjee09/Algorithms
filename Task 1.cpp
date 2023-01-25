#include<iostream>
using namespace std;

int FIBONACCI(int n)

{
   if (n<=1)
   {
       return n;
   }

   else
   {
       return FIBONACCI(n-1)+FIBONACCI(n-2);
   }
}

int main()

{
    int a;
    cout<<"Enter Value: "<<endl;

    cin>>a;
    cout<<FIBONACCI(a)<<endl;

    return 0;
}
