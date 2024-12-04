char* makeFancyString(char* s) {
    char a = '\n';
    char b = '\n';
    int n = strlen(s);
    char* A = (char*)malloc((n + 1) * sizeof(char));
    
    int k = 0;
    for(int i = 0; i < n ; i ++) {
        if(!(a == b && b == s[i])) {
            A[k] = s[i];
            k ++;
        }
        a = b;
        b = s[i];
    }
    A[k] = '\0';
    return A;
}