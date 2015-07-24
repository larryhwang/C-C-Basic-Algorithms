/// <summary>
        /// ≤Â»Î≈≈–Ú
        /// </summary>
        /// <param name="unsorted"></param>
        static void insertion_sort(int[] unsorted)
        {
            for (int i = 1; i < unsorted.Length; i++)
            {
                if (unsorted[i - 1] > unsorted[i])
                {
                    int temp = unsorted[i];
                    int j = i;
                    while (j > 0 && unsorted[j - 1] > temp)
                    {
                        unsorted[j] = unsorted[j - 1];
                        j--;
                    }
                    unsorted[j] = temp;
                }
            }
        }

        static void Main(string[] args)
        {
            int[] x = { 6, 2, 4, 1, 5, 9 };
            insertion_sort(x);
            foreach (var item in x)
            {
                if (item > 0)
                    Console.WriteLine(item + ",");
            }
            Console.ReadLine();
        }
