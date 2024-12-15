#include <stdio.h>
int main() {
    int arr[6] = {178, 1342, 1457, 162, 123,123};
    int rollno; 
    int present = 0;
    printf("Enter Student ID: ");
    scanf("%d", &rollno);
    for (int i = 0; i < 5; i++) {
        if (rollno == arr[i]) {
            present = 1;
            break;
        }
    }
    if (present) {
        printf("%d is Present.\n", rollno);
    } else {
        printf("%d is Absent.\n", rollno);
    }

    return 0;
}
