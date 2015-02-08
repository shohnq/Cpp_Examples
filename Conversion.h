#Type conversion
#Convert hex string (char []) to int
const char *hexstring = "abcdef0";
int number = (int)strtol(hexstring, NULL, 16);

# int to hex string
std::stringstream stream;
stream << std::hex << your_int;
std::string result( stream.str() );
