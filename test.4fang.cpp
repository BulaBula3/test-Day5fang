#include <iostream>
using namespace std;

int main1()
{
    int a = 10;
    int b = 20;

    cout << (a == b) << endl;//==�����

    cout << (a != b) << endl;//!=������

    cout << (a > b) << endl;

    cout << (a < b) << endl;

    cout << (a >= b) << endl;

    cout << (a <= b) << endl;
   
    //c++�У�����0����Ϊ��
    int a1 = 10;
    cout << !a1 << endl;
    cout << !!a1 << endl;
    //&&�߼���(ͬ��Ϊ�棬����Ϊ��)
    int a2 = 10;
    int b2 = 10;
    cout << (a2 && b2) << endl;

    a2 = 0;
    b2 = 10;
    cout << (a2 && b2) << endl;

    a2 = 0;
    b2 = 0;
    cout << (a2 && b2) << endl;

    // ||�߼���(ͬ��Ϊ�٣�����Ϊ��)
    int a3 = 10;
    int b3 = 10;

    cout << (a3 || b3) << endl;

    a3 = 0;
    b3 = 10;
    cout << (a3 || b3) << endl;

    a3 = 0;
    b3 = 0;
    cout << (a3 || b3) << endl;

    //ѡ��ṹ if���
    int score = 0;
    cout << "������һ��������" << endl;
    cin >> score;
    cout << "������ķ���Ϊ��" << score << endl;

    if (score >=600)
    {
        cout << "��ϲ��������һ����ѧ" << endl;
    }
    else if (score >= 500)
    {
        cout << "��ϲ�������˶�����ѧ" << endl;
    }
    else if (score >= 400)
    {
        cout << "��ϲ��������������ѧ" << endl;
    }
    else
    {
        cout << "δ���ϱ��ƴ�ѧ�����ٽ�����" << endl;

    }


    system("pause");

    return 0;
}