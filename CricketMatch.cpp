#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,M;
	    cin>>N>>M;
	    if((M*6*6)>=N)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	  }
	return 0;
}
