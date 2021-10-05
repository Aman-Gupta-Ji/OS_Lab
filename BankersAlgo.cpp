#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int r, n, i, j, temp;
    cout<<"R N"<<endl;
    cin>>r>>n;
    vector<vector<int>> allo(n, vector<int> (r)); //allocated
    vector<vector<int>> max(n, vector<int> (r));  //max required
    vector<int> instances(r);
    vector<int> avail(r); //availabel
    cout<<"\nALLOCATED"<<endl;
    for(i=0;i<n;i++) {
        for(j=0;j<r;j++) {
            cin>>temp;
            allo[i][j]=temp;
        }
    }
    cout<<"\nMAX REQUIRED"<<endl;
    for(i=0;i<n;i++) {
        for(j=0;j<r;j++) {
            cin>>temp;
            max[i][j]=temp;
        }
    }
    vector<bool> complete(n,false);
    int completed=0;
    cout<<"\nINSTANCES"<<endl;
    for(i=0;i<r;i++) {
        cin>>temp;
        instances[i]=temp;
        avail[i]=temp;
    }
    for(i=0;i<n;i++) {
        for(j=0;j<r;j++) {
            avail[j]-=allo[i][j];
        }
    }
    for(i=0;i<r;i++) {
        if(avail[i]<0) {
            cout<<"Deadlock... :("<<endl;
            return 1;
        }
    }
    int select;
    cout<<"\nCOMPLETED"<<endl;
    while(completed!=n) {
        select=-1;
        for(i=0;i<n;i++) {
            if(complete[i])
                continue;
            for(j=0;j<r;j++) {
                if(allo[i][j]+avail[j]<max[i][j]) {
                    break;
                }
            }
            if(j==r) {
                select=i;
                break;
            }
        }
        if(select==-1) {
            cout<<"Deadlock... :("<<endl;
            return 1;
        }
        completed++;
        complete[select]=true;
        cout<<"\nP"<<(select+1)<<" ";
        for(i=0;i<r;i++) {
            avail[i]+=allo[select][i];
            cout<<max[select][i]<<" ";
        }
    }
    cout<<endl<<"All process completed .... :)"<<endl;
    return 0;
}