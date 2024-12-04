void createTable(int table[], char P[], int m) {
    int j = 0;
    table[0] = 0;  
    for(int i = 1; i < m; i++) {
        while(j > 0 && P[i] != P[j]) {
            j = table[j - 1];
        }
        if(P[i] == P[j]) {
            j++;
        }
        table[i] = j;
    }
}

bool kmp(char T[], char* P) {
    int n = strlen(T);
    int m = strlen(P);
    int table[m];
    createTable(table, P, m);
    
    int j = 0;
    for(int i = 0; i < n; i++) {
        while(j > 0 && P[j] != T[i]) {
            j = table[j - 1];
        }
        if(P[j] == T[i]) {
            j++;
        }
        if(j == m) {
            return true; 
        }
    }  
    return false;
}
bool rotateString(char* s, char* goal) {
    int n = strlen(s);
    int m = strlen(goal);
    if(n != m) {
        return false;
    }
    char arr[2*n + 1];
    int k = 0;
    for(int i = 0; i < n; i ++) {
        arr[i] = s[i];
    }
    int j = 0;
    for(int i = n; i < 2*n; i ++) {
        arr[i] = s[j ++];
    }
    arr[2*n] = '\0';
    return kmp(arr, goal);
}