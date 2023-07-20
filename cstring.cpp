#include<iostream>
#include<cstring>

int main(int argc, char const *argv[])
{
    const char message1[]{"The sky is blue"};

    const char* message2{"The sky is blue"};
    std::cout << "Message 1: " << message1 << '\n';
    std::cout << "strlen(message1): " << std::strlen(message1) << '\n';
    std::cout << "sizeof(message1): " << sizeof(message1) << '\n';
    std::cout << "strlen(message2): " << std::strlen(message2) << '\n';
    std::cout << "sizeof(message2): " << sizeof(message2) << '\n';
    return 0;
}
