
int main()
{
    int ival = 1.01;        //正确
    int &rval1 = 1.01;      //错误  const &raval1 = 1.01; 正确
    int &rval2 = ival;      //正确
    int &ravl3;             //错误，没有初始化
}