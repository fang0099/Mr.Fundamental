#include <stdio.h>
#define EIGHT 8

static int a[EIGHT] = {0};

void print()
{
    for(int i = 0; i < EIGHT; ++i)
    {
        for(int j = 0; j <a[i];++j)
        {
            printf("□");
        }
        printf("■");
        for(int j = a[i]+1; j < EIGHT;++j)
        {
            printf("□");
        }
        printf("\n");
    }
    printf("-----------------------------------------\n");
}

bool isValid(int index, int value)
{
    int curr_value;
    for(int curr_index = 0; curr_index < index; ++curr_index)
    {
        curr_value = a[curr_index];
        if(curr_value == value ||
           curr_value + curr_index == value + index ||
           curr_value - curr_index == value - index)
        {
            return false;
        }
    }
    return true;
}

void eightQueen(int index, int &count)
{
    for(int row = 0; row < EIGHT ; ++row)
    {
        if(isValid(index,row))
        {
            a[index] = row;
            if(index == EIGHT - 1)
            {
                ++count;
                printf("%d\n",count);
                print();
                a[index] = 0;
            }
            eightQueen(index + 1, count);
            a[index] = 0;
        }
    }
}

int main()
{
    int count = 0;
    eightQueen(0, count);
    printf("total number: %d\n",count);
    
    return 0;
}
