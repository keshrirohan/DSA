#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;

    // // pattern 1

    // for(int row=0;row<size;row++){
    //     for(int col=0;col<size;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // pattern-2

    // for(int row=0;row<size;row++){
    //     for(int col=0;col<size;col++){
    //         cout<<row+1;
    //     }
    //     cout<<endl;
    // }


    // patter 3
    // for(int row=0;row<size;row++){
    //     for(int col=0;col<size;col++){
    //         cout<<col+1;
    //     }
    //     cout<<endl;
    // }

    // pattern4
    // for(int row=1;row<=size;row++){
    //     for(int col=size;col>0;col--){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }



    // pattern 5
    int num=1;
    // for(int row=0;row<size;row++){
    //     for(int col=0;col<size;col++){
    //         cout << setw(2) << num << " ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // pattern 6
    // for(int row=1;row<=size;row++){
    //     for(int col=1;col<=row;col++){
    //         cout<<"* ";
    //     }
    // cout<<endl;
    // }

    // pattern 7
    // for(int row=1;row<=size;row++){
    //     for(int col=1;col<=row;col++){
    //         cout<<row;
    //     }
    //     cout<<endl;
    // }

    // pattern 8

    // for(int row=1;row<=size;row++){
    //     for(int col=1;col<=row;col++){
    //         cout<<setw(2)<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // pattern 9
    // for(int row=1;row<=size;row++){
    //     num=row;
    //     for(int col=1;col<=row;col++){
    //         cout<<setw(2)<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // pattern 10
    // for(int row=1;row<=size;row++){
    //     num=row;
    //     for(int col=1;col<=row;col++){
    //         cout<<num;
    //         num--;
    //     }
    //     cout<<endl;

    // }


    // pattern 11
    // for(int row=1;row<=size;row++){
    //     int num = 65;
    //     for(int col=1; col<=row;col++){
    //         cout<<char(num);
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // pattern-12
    // for(int row=1;row<=size;row++){
    //     num=65;
    //     for(int col=1;col<=size;col++){
    //         cout<<char(num);
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // pattern 13
    int alp=65;
    for (int row=1;row<=size;row++ ){
        for(int col=1;col<=size;col++){
            cout<<char(alp);
            alp++;
        }
        cout<<endl;
    }

}

