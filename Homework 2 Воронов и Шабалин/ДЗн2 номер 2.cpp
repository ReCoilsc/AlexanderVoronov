#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin >> n;
    int *a = new int[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int *pa = &a[0];
    int *pla= &a[n-1];
    int t=*pa;
    *pa=*pla;
    *pla=t;
    for (int i = 0; i <= n - 1; i++) {
		std::cout << a[i] << " ";
	}
    
delete[] a;
    return 0;
}