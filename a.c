#include <stdio.h>
    void main()
    {

        int i, j, a, n, ar[10];
        printf("Enter the value of N \n");
        scanf("%d", &n);

        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &ar[i]);

        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (ar[i] > ar[j])
                {

                    a =  ar[i];
                    ar[i] = ar[j];
                    ar[j] = a;

                }

            }

        }

        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", ar[i]);

    }
