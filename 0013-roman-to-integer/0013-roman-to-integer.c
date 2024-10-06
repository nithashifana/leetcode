int IntegerValue(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {
    int sum = 0;
    int length = strlen(s);

    for (int i = 0; i < length; i ++) {
    int integer = IntegerValue(s[i]);
    int nextVal ;
    if (i < length - 1) {
        nextVal = IntegerValue(s[i+1]);
    }
    else nextVal = 0;
    if (integer < nextVal) {
        sum = sum - integer;
    }
    else 
        sum = sum + integer;
}


    return sum;
}