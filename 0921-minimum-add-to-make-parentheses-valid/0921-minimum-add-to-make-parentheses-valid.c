int minAddToMakeValid(char* s) {
    int o = 0;
    int c = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            o++;
        } else if (s[i] == ')') {
            if (o > 0) {
                o--; 
            } else {
                c++;
            }
        }
    }
    return o + c;
    }
