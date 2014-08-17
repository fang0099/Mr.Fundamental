//快速排序
void QuickSort(int a[], int length)
{
	if(a == NULL || length <= 1)
		return;
	int start = 0, end = length - 1;
	int val = a[0];
	while(start < end)
	{
		for(;start<end;--end)
		{
			if(a[end]<val)
			{
				a[start] = a[end];
				break;
			}
		}

		for(;start<end;++start)
		{
			if(a[start]>val)
			{
				a[end] = a[start];
				break;
			}
		}
	}
	a[start] = val;
	QuickSort(a, start);
	QuickSort(a+start+1, length-start-1);
}
