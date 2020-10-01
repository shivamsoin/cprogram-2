#include <stdio.h>

void main()
{
    //Initialize array
    int arr[] = {5,2,3,4,2,3,4,3};
    int checkarr[8];//{2,3,4}
    int z= 0;//1//2//3
    int ln = 8;
    int duplicate = 0;

    for (int i = 0; i < ln; i++)//arr[0] = 5,arr[1]= 2,arr[2]= 3,arr[3] = 4,arr[4]= 2,arr[5]=3,arr[6]=4
    {
        int proceed = 1;
        for (int k = 0; k < z+1; k++)
        {
            if (arr[i] == checkarr[k])//5 not found,2 not found
            {
                proceed = 0;
            }
        }


        if (proceed == 1)
        {
            for (int j = i + 1; j < ln; j++)
            {
                if (arr[i] == arr[j])//5 not found at index1,2,3,4,5// 2 found ar index 4//3 found at 5//4 found at index 6
                {
                    printf("%d ", arr[i]);//2,3,4
                    checkarr[z] = arr[i];//checkarr[0] = 2//checkarr[1] = 3//checkarr[2]=4
                    z++;
                    duplicate++;
                    break;
                }
            }
        }
    }

    printf("\nno of duplicates = %d", duplicate);
}