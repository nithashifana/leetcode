bool isPalindrome(char* s) {
    int i = 0;
    int j = strlen(s) - 1;
    while (i <= j) {
        if (!(isalnum(s[i]))) {
            i++;
        }
        if (!(isalnum(s[j]))) {
            j--;
        }
        if (isalnum(s[i]) && isalnum(s[j])) {
            s[i] = tolower(s[i]);
            s[j] = tolower(s[j]);
            if (s[i] != s[j]) {
                return false;
            } else {
                i++;
                j--;
            }
        }
    }
    return true;
}