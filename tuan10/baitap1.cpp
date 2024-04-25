#include<iostream>
using namespace std;
//struct person
int strlen(char a[])
{
	int i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return i;

}

char* reverse(char a[])
{
	
	int len = strlen(a);
	char* s = new char[len + 1]; // Allocate memory for the reversed string
	int j = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		s[j++] = a[i];
	}
	s[j] = '\0'; // Terminate the reversed string with null character
	return s;
}

char* delete_char(char a[], char c)
{
	int i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == c)
		{
			int j = i;
			while (a[j] != '\0') // Corrected condition
			{
				a[j] = a[j + 1];
				j++;
			}
		}
		else
		{
			i++;
		}
	}
	return a;
}

char* pad_left(char a[], int n)
{
	int len = strlen(a);
	char* s = new char[len + n ];
	int j = 0;
	for (int i = 0; i < len+n+1; i++)
	{
		if (i < n)
		{
			s[i] = '_';
		}
		else s[i] = a[j++];
	}
	return s;
}

bool is_palindrome(char a[])
{
	int n = strlen(a);
	for (int i = 0; i < n / 2; i++)
	{
		if (a[i] != a[n - 1 - i]) return false;
	}
	return true;
}

char* trim_left(char a[])
{
	int len = strlen(a);
	int dem = 0;
	for (int i = 0; i < len; i++)
	{
		if (a[i] == ' ')  dem++;
	}
	char* s = new char[len-dem];
	int j = 0;
	for (int i = dem; i < len; i++)
	{
		/*if (a[i] != ' ' && j <= len - dem)
		{*/
			s[j] = a[i];
			j++;
		/*}*/
	}
	s[len - dem ] = '\0';
	return s;
}



int main()
{
	
	char s1[] = "olo";
	char s2[] = "    0absl";
	char *s = new char [6];
	cout << strlen(s1)<<endl;
	cout << (reverse(s1))<<endl;
	char c = 'l';
	cout << c << endl;
	cout << delete_char(s1, c)<<endl;
	cout << pad_left(s1, 5)<<endl;
	cout << is_palindrome(s1) << endl;
	cout << trim_left(s2)<<endl;
		

}