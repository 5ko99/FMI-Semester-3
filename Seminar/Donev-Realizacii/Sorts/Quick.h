void swap(std::vector<int> & data, int i, int j)
{
    int tmp = data[i];
    data[i] = data[j];
    data[j] = tmp;
}

int Partition(std::vector<int> & data, int low, int high);
void QuickSort(std::vector<int> & data, int low, int high)
{
    if (low >= high) return;

    int p = Partition(data, low, high);

    QuickSort(data, low, p-1);
    QuickSort(data, p+1, high);
}

int Partition(std::vector<int> & data, int low, int high)
{
    int p = low;
    for (int i = p+1; i <= high; ++i)
    {
        if (data[i] < data[p])
        {
            swap(data, i, p);
            if (i != p+1)
            {
                swap(data, i, p+1);
            }
            p = p + 1;
        }
    }

    return p;
}
