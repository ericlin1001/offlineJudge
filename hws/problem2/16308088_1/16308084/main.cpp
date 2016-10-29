#include<cmath> 
#include <iostream>
using namespace std;

float Average(float data[], int n); 
float Bias(float data[], int n); 
int main() 
{   int n;
    float data[100] = {0}; 
    cout<<"Please input how many numbers:"<<endl; 
    cin>>n;
    cout<<"Please input all the numbers:"<<endl; 
    for (int i = 0; i < n; i++) 
    cin>>data[i];
    cout<<"The average is "<<Average(data,n)<<endl;
    cout<<"The s is "<< Bias(data, n)<< endl;
    return 0; 
} 
float Average(float data[], int n) 
{   float sum = 0.0; 
    for(int i = 0; i < n; i++) 
    { 
        sum += data[i]; 
    } 
    return sum / n; 
} 
float Bias(float data[], int n) 
{   float temp = 0.0; 
    float average = Average(data, n); 
    for (int i = 0; i < n; i++) 
    { 
        temp += powf(data[i] - average, 2); 
    } 
    return sqrtf((1.0 / (n - 1)) * temp); 
} 
