#include <iostream>

int main()
{

    // INTEGERS MODIFIERS

    short short_num{-32768}; // 2 bytes
    short int short_int{455};
    signed short signed_short{122};
    signed short int signed_short_int{-456};
    unsigned short int unsigned_short_int{456};

    int int_num{55}; // 4 bytes
    signed signed_var{64};
    signed int signed_int{77};
    unsigned int unsigned_int{77};

    long long_num{89}; // 4 u 8  bytes
    long int long_int{33};
    signed long signed_long{44};
    signed long int signed_long_int{44};
    unsigned long int unsigned_long_int{44};

    long long long_long{888}; // 8 bytes
    long long int long_long_int{999};
    signed long long signed_long_long{444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int usigned_long_long_int{1234};

    return 0;
}