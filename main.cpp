#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    float text1, res1;
    cin>>text1;
    res1=problemSolution1(text1);
    cout<<res1<<endl;
    cout<<endl;

    cout << "Problem 2\n";
    float text2p1, text2p2, tex2p3, res2;
    res2=problemSolution2(text2p1, text2p2, tex2p3);
    cout<<res2<<endl;
    cout<<endl;

    cout << "Problem 3\n";
    float text3p1;
    char text3p2;
    basic_string<char> res3;
    res3=problemSolution3(text3p1,text3p2);

    cout << "Problem 4\n";
    string text4, res4;
    cin>>text4;
    res4 = problemSolution4(text4);
    cout<<res4<<endl;
    cout<<endl;

    cout << "Problem 5\n";
    float text5p1, text5p2, res5;
    char text5p3;
    res5=problemSolution5(text5p1, text5p2, text5p3);
    cout<<res5<<endl;
    return 0;
}