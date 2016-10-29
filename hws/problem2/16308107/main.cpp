#include <iostream>
#include <cmath>
using namespace std;
float a,b,c,d,e,A,B,C,D,f;
int main()
{
    cout<<"input 4 numbers seperated by space"<<endl;
    cin>>a>>b>>c>>d;
    e=(a+b+c+d)/4;
    A=(a-e)*(a-e);
    B=(b-e)*(b-e);
    C=(c-e)*(c-e);
    D=(d-e)*(d-e);
    f=sqrt(A/4+B/4+C/4+D/4);
    
    cout<<e<<"\t"<<f<<endl;
    
    return 0;
}
    
