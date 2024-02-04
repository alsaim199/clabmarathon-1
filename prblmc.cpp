#include <stdio.h>
#include <math.h>
int main()
{
    int t,T=1;
    scanf("%d", &t);
    while (t--)
    {
        int o1, o2, a1, a2, b1, b2;
        scanf("%d %d %d %d %d %d", &o1, &o2, &a1, &a2, &b1, &b2);
        int dt = (a1 - o1) * (b1 - o1) + (a2 - o2) * (b2 - o2);
        int ct = (a1 - o1) * (b2 - o2) - (a2 - o2) * (b1 - o1);
        float angle = atan2(ct, dt);
        float rd = sqrt(((a1 - o1) * (a1 - o1)) + (a2 - o2) * (a2 - o2));
        float arce = rd * abs(angle);
        printf("Case %d: %.8f\n",T++, arce);
    }
}