int scoreOfString(char* s) {
    int i = 0, sum = 0;
    while (s[i+1]) {
        int a = s[i]- s[i + 1];
        if (a < 0)
            a = a * -1;
        else a = a;
        sum = sum + a;
        i ++;
    }
    return sum;
}