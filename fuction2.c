struct Car {
    char *name;
    double price;
} a = {"Audi A6L", 390000.99};

int main() {
    struct Car b = a;

    printf("%p\n", &a); //结构体a变量的地址 00007ff75a019020
    printf("%p\n", &b); //结构体b变量的地址 000000a6201ffcd0

    printf("%p\n", a.name); //结构体a变量的成员name的地址  00007ff7d778a000
    printf("%p\n", b.name); //结构体b变量的成员name的地址  00007ff7d778a000

    printf("%p\n", a.price);
    printf("%p\n", b.price);

    return 0;
}