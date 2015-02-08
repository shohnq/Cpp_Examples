#Type conversion
#Convert hex string (char []) to int
const char *hexstring = "abcdef0";
int number = (int)strtol(hexstring, NULL, 16);
