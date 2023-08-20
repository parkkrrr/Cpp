#include <iostream>
using namespace std;

void hollowRectangle(int rows, int cols){
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++){
            if (i == 1 || i == rows || j == 1 || j == cols)
                cout << " * ";
            else
                cout << "   ";
        }
        cout << endl;
    }
}
int main(int argc, char *argv[])
// int main()
{
    if(argc>=4)
        return -1;
        
    int first = atoi(argv[1]);
    int second = atoi(argv[2]);
    hollowRectangle(first, second);
    // hollowRectangle(5,8);

    return 0;
}