#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int fact=1;
	    for(int i=n;i>0;i--)
	     fact=fact*i;
	    cout<<fact<<endl; 
	}
	
	return 0;
}


