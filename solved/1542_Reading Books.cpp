#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
        int q = 0, d = 0, p = 0, bookPage = 0;
        scanf("%d", &q);
        if(q == 0) {
            break;
        }
        else {
            scanf("%d %d", &d, &p);
            if(p > q) {
            bookPage = (p * q * d) / (p - q);
            if(bookPage == 1) {
                printf("%d pagina\n", bookPage);
            }
            else {
                printf("%d paginas\n", bookPage);
            }
            }
        }
    }
    return 0;
}
