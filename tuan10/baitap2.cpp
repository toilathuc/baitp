#include<iostream>
#include<cstring>
using namespace std;
char  *concat(const char* c1, const char* c2)
{
    int len1 = strlen(c1);
    int len2 = strlen(c2);
	char*  res = new char[len1 + len2+1];
    int j = 0, k=0;
    for (int i = 0; i < len1 + len2 + 1; i++)
    {
        if (j < len1) res[i] = c1[j++];
        else  res[i] = c2[k++];
    }
    res[len1+len2+1]='/ 0' ;
    return res;
    
}

int main() {
    const char* c1 = "hello"; 
    const char* c2 = "hi";    
    char* result = concat(c1, c2);
    cout << result << endl;
    delete[] result; 
    return 0;
}

