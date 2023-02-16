#include<iostream>
class samp1
{
    int a,b;
    public:
    samp1()
    {
        a=10;
        b=767;
    }
    samp1(samp1 &old)
    {
        a=old.a;
        b=old.b;
    }
    void show()
    {
        std::cout <<"a is:"<<a<< std::endl;
        std::cout <<"b is:"<<b <<std::endl;
    }
};
main()
{
    samp1  s1;
    samp1 &s2(s1);
    s1.show();
    s2.show();
    return 0;
}
