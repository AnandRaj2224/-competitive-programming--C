#include <stdio.h>

int main() {
    long long n, f;
    scanf("%lld%lld", &n, &f);
    
    long long totalOdds = (n + 1) / 2;  
    
    if (f <= totalOdds) {
        printf("%lld\n", 2 * f - 1);
    } else {
        printf("%lld\n", 2 * (f - totalOdds));
    }

    return 0;
}
