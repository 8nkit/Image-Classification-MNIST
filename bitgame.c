#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int count=0, i=0, j, l, k=0;
    scanf("%s", a);
    l = strlen(a);
    for(i=0; i < l; i++)
    if(a[i] == '1')
    {
        k = i;
        count = 0;
        while(a[k] == '1')
        {
            count += 1;
            k++;
            if(count == 5)
            {
                for(j = l + 1; j > k; j--)
                {
                    a[j] = a[j - 1];
                }
                a[k] = '0';
                l++;
                break;
            }
            i = k;
        }
    }
    printf("\n Stuffed  %s", a);
    k = 0;
    for(i = 0; i <= l; i++)
    {
        if(a[i] == '1')
        {
            k = i;
            count = 0;
            while(a[k] == '1')
            {
                count++;
                k++;
                if(count == 5)
                {
                    for(j = k; j < l + 1; j++)
                    {
                        a[j] = a[j + 1];
                    }
                    l--;
                    a[l + 1] = '0';
                    break;
                }
            }
            i = k - 1;
        }
    }
    printf("\n Unstuffed : %s \n", a);
}
