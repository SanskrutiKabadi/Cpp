#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    if(Y>X)
	        cout<<(Y-X)<<endl;
	    else    
	        cout<<(X-Y)<<endl;
	}
	return 0;
}