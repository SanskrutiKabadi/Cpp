#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    if(X<3)
	        cout<<"LIGHT"<<endl;
	    else if(X>=3 and X<7)
	        cout<<"MODERATE"<<endl;
	    else
	        cout<<"HEAVY"<<endl;
	}
	return 0;
}
