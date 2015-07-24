#include <stdio.h>
#include <windows.h>
#include <time.h>                   //time_t time()  clock_t clock()   
#include <Mmsystem.h>               //timeGetTime()   
#pragma comment(lib, "Winmm.lib")   //timeGetTime()   

//ʹ�÷�������Sleep()����������Ҫ��������ʱ��ĺ������ɡ�

int main()
{   //��time()����ʱ������Ϊ��λ
    time_t timeBegin, timeEnd;
    timeBegin = time(NULL);
    Sleep(1000);
    timeEnd = time(NULL);
    printf("%d\n", timeEnd - timeBegin);


    //��clock()����ʱ���Ժ���Ϊ��λ
    clock_t  clockBegin, clockEnd;
    clockBegin = clock();
    Sleep(800);
    clockEnd = clock();
    printf("%d\n", clockEnd - clockBegin);


    //��timeGetTime()����ʱ���Ժ���Ϊ��λ
    DWORD  dwBegin, dwEnd;
    dwBegin = timeGetTime();
    Sleep(800);
    dwEnd = timeGetTime();
    printf("%d\n", dwEnd - dwBegin);


    //��GetTickCount()����ʱ���Ժ���Ϊ��λ
    DWORD  dwGTCBegin, dwGTCEnd;
    dwGTCBegin = GetTickCount();
    Sleep(800);
    dwGTCEnd = GetTickCount();
    printf("%d\n", dwGTCEnd - dwGTCBegin);


    //��QueryPerformanceCounter()����ʱ����΢��Ϊ��λ
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
    printf("�����߾��ȼ�ʱ��Ƶ��%lf\n", dff);
    printf("��һ�μ�ʱ��ֵ%I64d\n�ڶ��μ�ʱ��ֵ%I64d\n��ʱ����%I64d\n", c1, c2, c2 - c1);
    printf("��ʱ%lf����\n\n", (c2 - c1) * 1000 / dff);
    return 0;
}
