#include <iostream>
using namespace std;

int main() {
    int score[5]={0}; //요리사별 점수 저장 변수
    int curScore; //점수 입력을 위한 변수
    int idxWinner=0; //우승자 인덱스
    int maxScore; //우승자 점수
    for(int i=0; i<5; i++)
        for(int j=0; j<4; j++){
            cin >> curScore;
            score[i] += curScore;
        }
    maxScore=score[0];
    idxWinner=1;
    for(int i=1; i<5; i++)
        if(score[i]>maxScore){
            idxWinner = i+1;
            maxScore = score[i];
        }
    cout << idxWinner << " " << maxScore;
}
