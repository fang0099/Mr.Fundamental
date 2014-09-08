#include <iostream>
#include <cstring>
using namespace std;

void GetNext(char *p, int next[])
{
    int j = 0, k = -1;
    next[0] = -1;
    int pLen = strlen(p);
    while( j < pLen - 1)
    {
        if(k == -1 || p[j] == p[k])
        {
            k++;
            j++;
            next[j] = k;
        /*   优化代码待理解
            if(p[j]!=p[k])
              next[j] = k;
            else
              next[j] = next[k];*/
        }
        else
        {
            k = next[k];
        }
    }
}

int KmpSearch(char* s, char* p)
{
    int sLen = strlen(s);
    int pLen = strlen(p);
    int i = 0, j = 0;
    int* next = new int[pLen];
    GetNext(p, next);

    while( i < sLen && j < pLen)
    {
        if(j == -1 || s[i] == p[j])
        {
            i++;
            j++;
        }
        else
        {
            j =  next[j];
        }
    }

    if(j == pLen)
      return i - j;
    else
      return -1;
}


int main(int argc, char* argv[])
{
    cout<<KmpSearch(argv[1],argv[2])<<endl;
    return 0;
}
