//直接插入排序
void InsertSort(int a[], int length)
{
    int i,j;
    int temp;
    for(i = 1; i<length; ++i)
    {
        j = i - 1;
        temp = a[i];
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = temp;
    }
}
