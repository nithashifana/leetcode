bool isSubsequence(char* s, char* t) {
    int i = 0, j = 0;
    while(t[j] != '\0') 
    if(s[i] == t[j]) {
        i ++;
        j ++;
    }
    else j ++;

if(s[i] != '\0') {
    return false;
}
return true;
}