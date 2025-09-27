#include <stdio.h>
union Packet
{
    int id;
    short error_code;
};
int main()
{
    union Packet p;
    printf("Size of union Packet: %zu bytes\n", sizeof(p));
    printf("Address of p.id: %p\n", (void*)&p.id);
    printf("Address of p.error_code: %p\n", (void*)&p.error_code);
    printf("\n--- Example 1: Write to p.id ---\n");
    p.id = 12345;
    printf("p.id = %d\n", p.id);
    printf("p.error_code = %hd(shows mixed/corrupted value)\n", p.error_code);
    printf("\n--- Example 2: Write to p.error_code ---\n");
    p.error_code = 99;
    printf("p.error_code = %hd\n", p.error_code);
    printf("p.id = %d (corrupted value)\n", p.id);
    return 0;
}
