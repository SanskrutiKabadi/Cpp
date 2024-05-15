#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B;
	    cin>>A>>B;
	    if(A<=B)
	        cout<<A<<endl;
	    else
	        cout<<B<<endl;
	}
	return 0;
}
