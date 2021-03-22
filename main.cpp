#include <bits/stdc++.h>
using namespace std;

#define MAXN 110
#define MAXM 1010

int n,m,t;

int read_num(){
    int res=0;
    string str;cin>>str;
    for(int i=0;i<str.length();i++)if(str[i]>='0' && str[i]<='9')
        res=(res<<1)+(res<<3)+(str[i]^48);
    return res;
}

class Server{
    public:
        string Model;
        int Cores,Ram,Purchase_cost,Daily_cost;
        void input(){
            string s;cin>>s;
            Model=s.substr(1,s.length()-2);
            Cores=read_num();
            Ram=read_num();
            Purchase_cost=read_num();
            Daily_cost=read_num();
        }
}s[MAXN];

class Virtual_machine{
    public:
        string Model;
        int Cores,Ram;
        bool sta;
        void input(){
            string s;cin>>s;
            Model=s.substr(1,s.length()-2);
            Cores=read_num();
            Ram=read_num();
            sta=read_num();
        }        
}v[MAXM];

class Task{
    public:
        string Model;
        int id;
        bool sta;
        void input(){
            string s;cin>>s;
            sta=(s[1]=='a');
            if(sta){
                cin>>s;
                Model=s.substr(0,s.length()-1);
                id=read_num();
            }else{
                id=read_num();
            }
        }
};

class Daily_needs{
    public:
        int Task_num;
        vector <Task*> v;  
        void input(){
            scanf("%d",&Task_num);
            for(int i=1;i<=Task_num;i++){
                Task* cur=new Task;
                cur->input();
                v.push_back(cur);
            }
        }
}D[MAXM];

void std_input(){
    cin>>n;
    for(int i=1;i<=n;i++)
        s[i].input();
    cin>>m;
    for(int i=1;i<=m;i++)
        v[i].input();
    cin>>t;
    for(int i=1;i<=t;i++)
        D[i].input();
}

int main(){
    freopen(".\\training-data\\training-1.txt","r",stdin);
    freopen(".\\training-data\\result-1.txt","w",stdout);
    std_input();
    return 0;
}