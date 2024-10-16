#include <iostream>
using namespace std;
int fact(int n)
{
    int sum=0;
    if (n<=1)
        return 1;
    else 
    {
        return (n+fact(n-1));
    }
    cout<<sum;
}
int main()
{
    cout<<fact(5);
}
/*OUTPUT
15
*/
