#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	int fir[N],sec[N];
	for(int i=0;i<N;i++)
	{
	    cin>>fir[i]>>sec[i];
	}
	for(int i=0;i<N;i++)
	{
	    if(fir[i]>sec[i])
	       cout<<"SECOND"<<endl;
	    else if (fir[i]<sec[i])
	       cout<<"FIRST"<<endl;
	    else if(fir[i]==sec[i])
	        cout<<"ANY"<<endl;
	}
	return 0;
}
