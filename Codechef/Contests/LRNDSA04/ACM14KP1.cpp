#include<bits/stdc++.h>
using namespace std;
#define int double

class Co_ords {
	public :
		int x,y;
};

Co_ords pt[1000000];
Co_ords strip[1000000];

bool compare_x(Co_ords &a, Co_ords &b){
    return a.x < b.x;
}

bool compare_y(Co_ords &a, Co_ords &b){
    return a.y < b.y;
}

int distance(Co_ords &a,Co_ords &b){
	 int x1,x2,y1,y2;
    x1 = a.x; x2 = b.x;
    y1 = a.y; y2 = b.y;
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

int sum(Co_ords &a, Co_ords &b, Co_ords &c){
    return distance(a,b)+distance(b,c)+distance(a,c);
}
int closeUtil(long s,long e){
	
	if(s == e)
        return 1e9;
    if(s+1 == e)
        return 1e9;
    if(s+2 == e)
        return sum(pt[s],pt[s+1],pt[s+2]);
		long mid = s + ((e-s)/2);
		int dl = closeUtil(s,mid);
		int dr = closeUtil(mid+1,e);
		int d_min = min(dl,dr);
		Co_ords m = pt[mid];
		long idx = 0;
		for(long i=s;i<=e;i++){
			if(abs(pt[i].x - m.x)<d_min) strip[idx++] = pt[i];
		}
		sort(strip,strip+idx,compare_y);
		for(long i = 0; i < idx ; i++)
    {
        for(long j = i+1; j < idx && (strip[j].y - strip[i].y)<d_min; j++)
        {
            for(long k = j+1; k < idx && (strip[k].y - strip[j].y)<d_min; k++)
            {
                d_min = min(d_min, sum(strip[i],strip[j],strip[k]));
            }
        }
    }
    return d_min;
	
}
signed main(){
	long  t;
    cin >> t;
    for(long i=1; i<=t; i++)
    {
        long n;
        cin >> n;
        
        for(long i = 0; i<n; i++)  cin >> pt[i].x >> pt[i].y;
        sort(pt, pt+n, compare_x);
        cout<<fixed<<setprecision(10)<<"Case "<<i<<": "<<closeUtil(0,n-1)<<endl;
    }
	return 0;
}