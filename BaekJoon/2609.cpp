#include <iostream>
using namespace std;
int gcd(int n, int m){
    int temp;
    while(m){
        temp = n%m;
        n = m;
        m = temp;
    }
    return n;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int c = gcd(a, b);
    printf("%d\n%d", c ,a*b/c);
}