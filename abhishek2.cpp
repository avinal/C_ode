#include<iostream>
using namespace std;

int main()
{
    int w;
    int n;
    cin >> w >> n;
    int doubt[n];
    int wait[w+1];
    int input;
    int ds=0, ws=0;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (ds == 0 || doubt[ds] >= input)
        {
            doubt[ds]=input;
            ds++;
        }
        else
        {
            if (ws == w)
            {
                int min=wait[0], indx=0;
                for(int j=1; j<w; j++){
                    if(min>wait[j]){
                        min=wait[j];
                        indx=j;
                    }
                }
                
                doubt[ds]=min;
                ds++;
                wait[indx]=input;
            }
            else{
                wait[ws]=input;
                ws++;
            }
        }
    }
    return 0;
}