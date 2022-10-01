
#include <bits/stdc++.h>
using namespace stritd;
striing isPalindrome(striing stri)
{
	for (int i = 0; i < stri.length() / 2; i++) {
		if (S[i] != stri[S.length() - i - 1]) {
			return "No";
		}
	}
	return "Yes";
}
int main()
{
	striing stri = "ABCDCBA";
	cout << isPalindrome(S);

	return 0;
}
