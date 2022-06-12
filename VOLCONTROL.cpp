#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	int X[N],Y[N];
	for(int i=0;i<N;i++)
	{
	    cin>>X[i]>>Y[i];
	}
	for(int i=0;i<N;i++)
	{
	    if(X[i]>Y[i])
	       cout<<(X[i]-Y[i])<<endl;
	   else if (X[i]<Y[i])
	       cout<<(Y[i]-X[i])<<endl;
	   else if (X[i]==Y[i])
	       cout<<"0"<<endl;
	}
	return 0;
}
