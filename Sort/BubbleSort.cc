//冒泡排序
void BubbleSort(int a[], int length)
{
    int i,j;
    int temp;
    for(j = length - 1; j > 0; --j)
    {
        for(i = 0; i < j; ++i)
        {
            if(a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
}
