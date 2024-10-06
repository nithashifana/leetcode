bool isPalindrome(int x) {
    long int original = x, reversed = 0, rem = 0;
    while (x != 0 && x > 0) {
        rem = x%10;
        reversed = 10*reversed + rem;
        x = x/10;
    }
    return original == reversed;
}