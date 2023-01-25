#include<bits/stdc++.h>
using namespace std;

//Function
//-->Recursive function
//-->Library function -->math.h
//-->user define function

void f (int *x,int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<(x+i)<<" "<<*(x+i)<<" "<<x[i]<<endl;
    }

}
int main()

{

int a[]={10,20,30,40};
f(a,4);

    return 0;
}


