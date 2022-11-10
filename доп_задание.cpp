

//Выведены размера и максимальные значения основных типов переменных
#include <iostream>
# include <climits>

int main ( void ){
    
    using namespace std;

    cout << " sizeof ( short int)= " << sizeof (short int) << endl;
    cout << " sizeof ( unsigned short)= " << sizeof ( unsigned short) << endl;
    cout << " sizeof ( long int )=" << sizeof ( long int ) << endl;
    cout << " sizeof ( unsigned long int )=" << sizeof ( unsigned long int ) << endl;
    cout << " sizeof ( long long )=" << sizeof (long long) << endl;
    int n = INT_MAX;
    cout << " sizeof (n) = " << sizeof (n ) << endl ;
    cout << "n=" << n << endl;
    cout << "short int_MAX" << n << endl;
    cout << "short int_MIN" << n << endl;
    cout << "unsigned short_MAX" << n << endl;
    cout << "unsigned short_MIN" << n << endl;
    cout << "long int_MAX" << n << endl;
    cout << "long int_MIN" << n << endl;
    cout << "unsigned long int_MAX" << n << endl;
    cout << "unsigned long int_MIN" << n << endl;
    cout << "long long_MAX" << n << endl;
    cout << "long long_MIN" << n << endl;
    
    unsigned short s = USHRT_MAX;
    cout << "s= " << s << endl ;
    s++;
    cout << "s= " << s << endl ;
    
    unsigned int m = UINT_MAX;
    cout << "m=" << m << endl ; 
    m++;
    cout << "m=" << m << endl;
    
    return 0;
}
