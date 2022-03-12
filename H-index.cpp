#include <bits/stdc++.h>

#include<unordered_map>


using namespace std;



int max(int &a,int &b){
  if(a>=b)return a;
  else return b;
}

vector<int> GetHIndexScore(vector<int> citations_per_paper) {

  int h_ind=0;

  unordered_map<int,int>cit;

  vector<int>h_index;
 
  int freq=0;
  
  
  // TODO: Calculate and return h-index score for each paper.

  for(int i=0;i<citations_per_paper.size();i++){

    int ele=citations_per_paper[i];

    

    if(ele>h_ind){

      if(cit.find(ele)!=cit.end())cit[ele]++;
      else cit[ele]=1;
      freq++;
      if(cit.find(h_ind)!=cit.end()){
        
        freq-=cit[h_ind];

        cit[h_ind]=0;
      }

      

      if(freq>=h_ind+1)h_ind++;



    }

    

    h_index.push_back(h_ind);

  }

  

  

  

  


  return h_index;
}

int main() {
  int tests;
  cin >> tests;
  for (int test_case = 1; test_case <= tests; test_case++) {
    // Get number of papers for this test case
    int paper_count;
    cin >> paper_count;
    // Get number of citations for each paper
    vector<int> citations(paper_count);
    for (int i = 0; i < paper_count; i++) {
      cin >> citations[i];
    }
    vector<int> answer = GetHIndexScore(citations);
    cout << "Case #" << test_case << ": ";
    for (int i = 0; i < answer.size(); i++) {
      cout << answer[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
