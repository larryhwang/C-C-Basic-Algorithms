#include <stdio.h>
#include <windows.h>
#include <time.h>                   //time_t time()  clock_t clock()   
#include <Mmsystem.h>               //timeGetTime()   
#pragma comment(lib, "Winmm.lib")   //timeGetTime()   

//使用方法：将Sleep()函数换成需要测试运行时间的函数即可。

int main()
{   //用time()来计时，以秒为单位
    time_t timeBegin, timeEnd;
    timeBegin = time(NULL);
    Sleep(1000);
    timeEnd = time(NULL);
    printf("%d\n", timeEnd - timeBegin);


    //用clock()来计时，以毫秒为单位
    clock_t  clockBegin, clockEnd;
    clockBegin = clock();
    Sleep(800);
    clockEnd = clock();
    printf("%d\n", clockEnd - clockBegin);


    //用timeGetTime()来计时，以毫秒为单位
    DWORD  dwBegin, dwEnd;
    dwBegin = timeGetTime();
    Sleep(800);
    dwEnd = timeGetTime();
    printf("%d\n", dwEnd - dwBegin);


    //用GetTickCount()来计时，以毫秒为单位
    DWORD  dwGTCBegin, dwGTCEnd;
    dwGTCBegin = GetTickCount();
    Sleep(800);
    dwGTCEnd = GetTickCount();
    printf("%d\n", dwGTCEnd - dwGTCBegin);


    //用QueryPerformanceCounter()来计时，以微秒为单位
    LARGE_INTEGER  large_interger;
    double dff;
    __int64  c1, c2;
    QueryPerformanceFrequency(&large_interger);
    dff = large_interger.QuadPart;
    QueryPerformanceCounter(&large_interger);
    c1 = large_interger.QuadPart;
    Sleep(800);
    QueryPerformanceCounter(&large_interger);
    c2 = large_interger.QuadPart;
    printf("本机高精度计时器频率%lf\n", dff);
    printf("第一次计时器值%I64d\n第二次计时器值%I64d\n计时器差%I64d\n", c1, c2, c2 - c1);
    printf("计时%lf毫秒\n\n", (c2 - c1) * 1000 / dff);
    return 0;
}
