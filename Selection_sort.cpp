#include<iostream>
#include<vector>
using namespace std;

void print_array (vector<int> &v ){
  for(int i = 0 ; i <v .size(); i++){
    cout<< v[i]<<"   ";
  }
  cout << endl;
}
void input_array(int n ,vector<int> &v ){
    for(int i = 0 ; i < n ; i++){
        cout<< i<< " element: " ;
        int temp ;
        cin>> temp;
        v.emplace_back(temp);

    }
    cout<< endl;
}

void sort_array(vector<int> &v){
      for(int i = 0 ; i < v.size();i++){
        for(int j = i+1; j < v.size(); j++){
            if(v[i] >v[j]) swap(v[i] ,v[j]);
        }
      }
}
int main(){
int n ;
cout << "vector size: "; 
cin>> n ; 
vector<int> v;    
input_array(n,v);
print_array(v);
sort_array(v);
print_array(v);
}