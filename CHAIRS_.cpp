#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>X>>Y;
	    if(Y>X)
	    {
	        cout<<0<<endl;
	    }
	    else{
	        cout<<X-Y<<endl;
	    }
	}
	return 0;
}
