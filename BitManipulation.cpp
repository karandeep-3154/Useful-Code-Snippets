//https://docs.google.com/document/d/1dFa34W13pfol1hZ8j0Dl-rDK-y62MrcVXY-iZLNqiiw/edit?usp=sharing

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod = 1e9+7;
void precode(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif 

}

string convertToBinary(int n){

    //TC = SC(size of binary string will be no. of digits so, nlogn) = O(Log n)

    string binary = "";

    while(n){

        binary = to_string(n%2) + binary;;
        n /= 2;

    }

    return binary;

}

int convertToDecimal(string n){

    //TC = O(size)
    //SC = O(1)

    int decimal = 0, p = 1;

    for(int i=n.size()-1;i>=0;i--){

        if(n[i] == '1')
            decimal += p;

        p *= 2;

    }

    return decimal;

}

void solve(){


    string n;cin>>n;
    
    // cout<<convertToBinary(n)<<endl;
    cout<<convertToDecimal(n)<<endl;


   
}
int main()
{

    precode();
 
    int t;
    cin >> t;
 
    while (t--)
    {
 
        solve();
        
    }    
 
}
