int mySqrt(int x) {
    if(x <= 0)
        return 0;
    int r  = 1;
    while(r < (x /2))
    {
        if(x/r > r )
            r++;
        else 
            break;
    }
    if(r > x / r)
        r--;
    return r;
}