#include <iostream>
#include <stdexcept>
#include <cstring>

int BruteForce(char* text, char* query)
{
    int textLen = strlen(text);
    int queryLen = strlen(query);

    int i = 0, j = 0;
    while(i < textLen && j <queryLen)
    {
        if(text[i] == query[j])
        {
            i++;
            j++;
        }
        else
        {
            i = i - j +1;
            j = 0;
        }
    }
    if(j == queryLen)
      return i - j;
    else
      return -1;
}

void GetNext(char* p, int next[])
{
    int pLen = strlen(p);
    next[0] = -1;
    int k = -1;
    int j = 0;
    while(j < pLen - 1)
    {
        if(k == -1 || p[j] == p[k])
        {
            ++k;
            ++j;
            next[j] = k;
        }
        else
        {
            k = next[k];
        }
    }

}

int KmpSearch(char* s, char* p)
{
    int i = 0, j = 0;
    int sLen = strlen(s);
    int pLen = strlen(p);
    int *next = new int[pLen];

    GetNext(p,next);

    while( i <sLen && j < pLen)
    {
        if( j == -1 || s[i] == p[j])
        {
            i++;
            j++;
        }
        else
        {
            j = next[j];
        }
    }
    if( j == pLen)
      return i - j;
    else
      return -1;
}



int main(int argc, char* argv[])
{
    //  char* text = "fangyonghao";
    //  char* query = "yong";
    try
    {
        if(argc == 1)
          throw std::runtime_error("no input");
    }
    catch(const std::runtime_error& error)
    {
        std::cout<<error.what()<<std::endl;
        return -1;
    }


    std::cout<<"pos:"<<KmpSearch(argv[1],argv[2])<<std::endl;
    return 0;
}
