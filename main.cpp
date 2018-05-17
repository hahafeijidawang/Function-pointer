#include <iostream>

using namespace std;
int add(int a,int b){

    printf("func add-----\n");

    return a+b;


}
int main()
{
    add(1,2);
    {
        typedef int (MyFuncType)(int a,int b);

        MyFuncType *myPointerFunc = NULL;//定义了一个指针指向某一类函数

        myPointerFunc = &add;//细节。=myPointerFunc = add  c语言历史版本兼容原因

        myPointerFunc(3,4);//间接调用

    }

        //定义一个函数指针类型
        {
            typedef int (*MyPointerFuncType)(int a,int b);//int *a =NULL

            MyPointerFuncType MyPointerFunc;//定义一个函数指针

            MyPointerFunc = add;

            MyPointerFunc(5,6);


    }
    //函数指针
    {

        int (*MyPointerFunc)(int a,int b); //定义一个变量。

        MyPointerFunc = add;

        MyPointerFunc(7,12);

        printf("MyPointerFunc:%d\n",MyPointerFunc(7,12));

    }

    return 0;
}

