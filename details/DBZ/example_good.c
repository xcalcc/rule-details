int divide(int num, int denom) {

    // checks if denom is 0, and always throws an
    // error when trying to divide by 0
    if (denom == 0) 
    {
        printf("Cannot divide a number by 0");
        exit(133);
    }

    return num/denom;
}