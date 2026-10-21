#include <iostream>
#include <algorithm>
using namespace std;
int main(){string s="level",r=s;reverse(r.begin(),r.end());cout<<(s==r?"Palindrome":"Not palindrome")<<'\n';}