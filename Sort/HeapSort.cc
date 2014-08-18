//堆排序
void HeapAdjust(int a[], int pos, int length)
{
    int child = 2 * pos + 1;
    int temp;

    for(int p = pos; child<length; child = 2 * p + 1)
    {
        if((child+1)<length && a[child+1]>a[child])
          ++child;
        if(a[p]<a[child])
        {
            temp = a[p];
            a[p] = a[child];
            a[child] = temp;
        }
        else
          break;

        p = child;
    }

}

void HeapSort(int a[], int length)
{
    int n = (length - 1)/2;
    for(;n>=0;--n)
    {
        HeapAdjust(a,n,length);
    }

    while(length>1)
    {
        int temp = a[0];
        a[0] = a[length - 1];
        a[length - 1] = temp;

        --length;
        HeapAdjust(a,0,length);
    }
}
