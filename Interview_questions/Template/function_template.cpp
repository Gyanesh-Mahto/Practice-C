#include <iostream>
using namespace std;

template <typename T>
T add(T x, T y)
{
    return x+y;
}

int main()
{
    cout<<add<int>(2,3)<<endl;
    cout<<add<float>(2.1f, 3.2f)<<endl;
    cout<<add<double>(3.1, 6.2)<<endl;
    cout<<add<string>("a", "b")<<endl;

    return 0;
}

/*
O/P:
5                                                                                                                     
5.3                                                                                                                   
9.3                                                                                                                   
ab       
*/
