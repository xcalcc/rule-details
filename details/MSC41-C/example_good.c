#include <stdio.h>

int check_passwd(const char *s);

int func(void)
{
    // user inputs password so no sensitive
    // data leaked
    #define PASSWORD_LEN 10
    char password[PASSWORD_LEN];
    printf("Please enter your password:\n");
    fgets(password, sizeof(password), stdin);

    int check = check_passwd(password);
    memset_s(password, 0, sizeof(password));
    // program logic
    // ...
    if (check)
    {
        // ... continue
    }
    else
    {
        // handle error
        // ...
    }
}

