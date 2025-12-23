#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int arr[1000] = { 0, };
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result[1000] = { 0, };
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            result[1] += arr[i];
        }
        else
        {
            result[1] -= arr[i];
        }
    }
    result[1] /= 2;
    printf("%d\n", result[1]);
    for (int i = 2; i <= n; i++)
    {
        result[i] = arr[i - 1] - result[i - 1];
        printf("%d\n", result[i]);
    }
}
