//直接选择排序
void StraightSelectSort(int a[], int length)
{
	int i,j;
	int min, min_pos;

	for(i = 0; i< length; ++i)
	{
		min = a[i];
		min_pos = i;
		for(j = i+1; j<length;++j)
		{
			if(a[j]<min)
			{
				min = a[j];
				min_pos = j;
			}
		}
		a[min_pos] = a[i];
		a[i] = min;
	}
}
