#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
bool isEqual(vi &v1, vi &v2){
    return (v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin()));
}
void test(vi sorted, vi totest){
    if(isEqual(sorted,totest))
        cout<<"Correct\n";
    else
        for(auto x:totest)
            cout<<x<<" ";
    cout<<endl;
}

void SelectionSort(vi &v){
    int n = sz(v);
    for(int i=0;i<n;i++){
        int cur = max_element(all(v)) - begin(v);
        for(int j=i;j<n;j++){
            if(v[j] < v[cur])cur = j;
        }
        swap(v[cur],v[i]);
    }
}
int main(){
	cin.sync_with_stdio(0); cin.tie(0); //Comment while performing interactive IO
	cin.exceptions(cin.failbit); // Logical error on i/o operation
    int n,k;
    cin>>n>>k;
    vi v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    SelectionSort(v);
    vi s = v;
    sort(s.begin(),s.end());
    test(s,v);
}
