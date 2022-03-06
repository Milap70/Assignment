#include <stdio.h>
 
int main() {
    int arr[] = {1,5,4,8,9,2,0,6,11,7};
    int x;
    printf("Enter the element you want to search: ");
    scanf("%d", &x);
    
     
    int arrLen = sizeof arr / sizeof arr[0];
    int present = 0;
     
    for (int i = 0; i < arrLen; i++) {
        if (arr[i] == x) {
            present = 1;
            break;
        }
    }

    if (present) {
        printf("YES");
    } else {
        printf("NO");
    }
     
    return 0;
}