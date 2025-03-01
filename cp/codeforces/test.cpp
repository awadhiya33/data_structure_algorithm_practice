long long mod2=1000000007;
map<pair<int,int>, long long >mp;
long long solve1(int i, int curr, vector<long long>&p){
  if(i==p.size()){
    if(curr==0)return 0;
    else return INT_MIN/4;
  }
  if(mp[{i, curr}]>0)return mp[{i, curr}];
  if(curr>0){
    return mp[{i, curr}]=(max({(-1*p[i]+solve1(i+1, curr+1, p)), p[i]+solve1(i+1, curr-1, p), solve1(i+1, curr, p)})+mod2)%mod2;
  }
  else return mp[{i, curr}]=(max({-1*p[i]+solve1(i+1, curr+1, p), solve1(i+1, curr, p)})+mod2)%mod2;
}