void InsertionSort(std::vector<int> & data)
{
    int length = data.size();

    for (int i = 1; i < length; ++i)
    {
        bool inplace = true;
        int j = 0;
        for (; j < i; ++j)
        {
            if (data[i] < data[j])
            {
                inplace = false;
                break;
            }
        }

        if (!inplace)
        {
            int save = data[i];
            for (int k = i; k > j; --k)
            {
                data[k] = data[k-1];
            }
            data[j] = save;
        }
    }
}
