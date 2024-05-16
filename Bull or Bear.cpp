#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int X,Y;
        cin>>X>>Y;
        if(Y==X)
            cout<<"NEUTRAL"<<endl;
        else if(Y>X)
            cout<<"PROFIT"<<endl;
        else
            cout<<"LOSS"<<endl;
        
        
    }
	return 0;
}