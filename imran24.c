void getDuplicate(int arr[],int size)

#include<stdio.h>
 #include<conoi.h>
 void main()




{
    int pos = 0;
    int desiredPos = 0;
    while(pos < size)
    {
        if(arr[pos] <= 0)
        {
            pos++;
        }
        desiredPos = arr[pos] -1;
        if(arr[desiredPos] > 0)
        {
            arr[pos] = arr[desiredPos];
            arr[desiredPos] = -1;
        }
        else
        {
            arr[desiredPos]--;
            arr[pos] = 0;
            pos++;
        }
    }
}
getch();
}



