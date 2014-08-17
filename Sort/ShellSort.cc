//希尔排序
void ShellSort(int a[], int length)
{
	int i,j;
	int temp;
	for(int k = length/2; k >= 1; k/=2)
	{
		for(i = k; i< length; ++i)
		{
			j = i - k;
			temp = a[i];
			while(j >= 0 && a[j] > temp)
			{
				a[j+k] = a[j];
				j-=k;
			}
			a[j+k] = temp;
		}
	}
}
