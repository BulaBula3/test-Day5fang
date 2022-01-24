#include <iostream>
using namespace std;

int main1()
{
    int a = 10;
    int b = 20;

    cout << (a == b) << endl;//==相等于

    cout << (a != b) << endl;//!=不等于

    cout << (a > b) << endl;

    cout << (a < b) << endl;

    cout << (a >= b) << endl;

    cout << (a <= b) << endl;
   
    //c++中，除了0，都为真
    int a1 = 10;
    cout << !a1 << endl;
    cout << !!a1 << endl;
    //&&逻辑与(同真为真，其余为假)
    int a2 = 10;
    int b2 = 10;
    cout << (a2 && b2) << endl;

    a2 = 0;
    b2 = 10;
    cout << (a2 && b2) << endl;

    a2 = 0;
    b2 = 0;
    cout << (a2 && b2) << endl;

    // ||逻辑或(同假为假，其余为真)
    int a3 = 10;
    int b3 = 10;

    cout << (a3 || b3) << endl;

    a3 = 0;
    b3 = 10;
    cout << (a3 || b3) << endl;

    a3 = 0;
    b3 = 0;
    cout << (a3 || b3) << endl;

    //选择结构 if语句
    int score = 0;
    cout << "请输入一个分数：" << endl;
    cin >> score;
    cout << "您输入的分数为：" << score << endl;

    if (score >=600)
    {
        cout << "恭喜您考上了一本大学" << endl;
    }
    else if (score >= 500)
    {
        cout << "恭喜您考上了二本大学" << endl;
    }
    else if (score >= 400)
    {
        cout << "恭喜您考上了三本大学" << endl;
    }
    else
    {
        cout << "未考上本科大学，请再接再厉" << endl;

    }


    system("pause");

    return 0;
}