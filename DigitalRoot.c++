{

#include <iostream>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<digitalRoot(n)<<endl;
	    
	    
	}
	return 0;
}
}

int digitalRoot(int n)
{
    
    if(n<10)
    return n;
    return digitalRoot(n%10+n/10);
}
