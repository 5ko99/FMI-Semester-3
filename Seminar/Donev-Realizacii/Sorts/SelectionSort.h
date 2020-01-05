void SelectionSort(std::vector<int> & data)
{
    int length = data.size();

    for (int i = 0; i < length; ++i)
    {
        int min = i;
        for (int j = i+1; j < length; ++j)
        {
            if (data[j] < data[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            swap(data, i, min);
        }
    }
}
