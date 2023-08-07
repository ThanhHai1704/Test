#include <bits/stdc++.h>

using namespace std;


int main(){
    int a[100001] = {0, 10};
    int n; cin >> n;
    int sum = 0; int j = 0;
    for(int i = 2; i <= 100000; i++)
    {
        if(i <= 100){
            int res = a[i - 1];
            while(res != 0){
                sum += res%10;
                res /= 10;
            }
            sum += i;
            a[i] = sum;
            sum = 0;
        } else{
            a[i] = a[++j];
        }
    }
    for(int i = n - 1; i < n; i++) cout << a[n] << endl;
    for(int i = 1; i <= n; i++) sum = sum + a[i];
    cout << sum << endl;
    return 0;
}
