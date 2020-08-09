#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for(int i=0; i<skill_trees.size(); i++){
        bool check[skill.size()];
        for(int j=0; j<skill.size(); j++) check[j]=false;
        bool save = true;
        for(int j=0; j<skill_trees[i].size(); j++){
            //해당 스킬이 스킬트리의 몇 번째에 해당하는지 찾는다.
            int idx = skill.find(skill_trees[i][j]);
            //그 이전 스킬 check가 true인지 확인한다.
            if(idx!=-1){
                for(int k=0; k<idx; k++){
                    //false면 불가능한 스킬트리. -> break;
                    if(check[k]==false){
                        save=false;
                        break;
                    }
                }
            }
            //배운 스킬 check에 표시
            check[idx]=true;
        }//for
        if(save) answer++;
    }
    return answer;
}
