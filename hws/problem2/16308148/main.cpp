#include<iostream>
#include<math.h>

using namespace std;
	
int a;
int b;
int c;
int d;
float mean;
float s;

int main()
{
		cin >> a >> b >> c >> d;
		mean = (a + b + c + d) / 4.0;
	    s = sqrt(((a - mean)*(a - mean) + (b - mean)*(b - mean) + (c - mean)*(c - mean) + (d - mean)*(d - mean)) / 4);
		cout << mean << "\t" << s<<endl;
		return 0;
}