#include <iostream>

using namespace std;

int main() {
    int n, a[3], sum=0, count=0;
    scanf("%d",&n);
    while(n--) {
        for (int i = 0; i < 3; ++i) {
            scanf("%d", &a[i]);
        }
        sum = 0;
        for (int i = 0; i < 3; ++i) {
            if (a[i] == 1) {
                sum++;
            }
        }
        if (sum >= 2) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
