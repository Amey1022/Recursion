#include <iostream>
using namespace std;
int print_rev(int i)
{
    if(i>0)
    {
        cout<<(i%10);
        print_rev(i/10);
    }
}
int main()
{
    print_rev(7568);
}
/*OUTPUT
8657
*/