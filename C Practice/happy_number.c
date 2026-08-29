/*bool isHappy(int n)
{
    int t = n, n1;
    int sum, d;
    int seen[1000] = {0};

    while(t != 1)
    {
        sum = 0;
        n1 = t;

        while(n1 > 0)
        {
            d = n1 % 10;
            sum = sum + d * d;
            n1 = n1 / 10;
        }

        t = sum;

        if(seen[t] == 1)
            return false;

        seen[t] = 1;
    }

    return true;
}
int main(){.............}*/