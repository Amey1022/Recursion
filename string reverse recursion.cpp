#include <bits/stdc++.h> 
using namespace std; 
void print_rev(char *str)
{
    if(*str !='\0')
    {
        print_rev(str+1);
        cout<< *str;
    }
}
int main()
{
    print_rev("Amey");
}
/*OUTUT
yemA
*/