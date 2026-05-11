int mySqrt(int x) {
    int i=1;
    for(i; x/i>=i; i++);
    return i-1;
}