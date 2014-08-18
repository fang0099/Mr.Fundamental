//归并排序
void MergeArray(int list1[], int list1_size, int list2[], int list2_size)
{
    int *list = (int*)malloc((list1_size + list2_size)*sizeof(int));
    int list1_index = 0;
    int list2_index = 0;
    int list_index = 0;
    while(list1_index<list1_size && list2_index<list2_size)
    {
        if(list1[list1_index]<list2[list2_index])
          list[list_index++] = list1[list1_index++];
        else
          list[list_index++] = list2[list2_index++];
    }

    while(list1_index<list1_size)
    {
        list[list_index++] = list1[list1_index++];
    }
    while(list2_index<list2_size)
    {
        list[list_index++] = list2[list2_index++];
    }

    for(int i = 0; i <list1_size+list2_size; i++)
    {
        list1[i] = list[i];
    }
}

void MergeSort(int a[], int length)
{
    if(a == NULL || length <= 1)
      return;
    int list1_size = length/2;
    int list2_size = length - list1_size;

    MergeSort(a,list1_size);
    MergeSort(a+list1_size, list2_size);
    MergeArray(a,list1_size,a+list1_size, list2_size);

}
