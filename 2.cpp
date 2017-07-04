#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<set>
using namespace std;
int n,a;
set<int>g;
void print (set<int, less<int> >& s)   //没有弄懂的地方！！！ 
{   
    set<int, less<int> >::iterator It;   
    for ( It = s.begin(); It != s.end(); It++ )   
cout << *It << " ";   
cout << endl;   
}   
int main()
{
	freopen("random.in","r",stdin);
	freopen("random.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    	scanf("%d",&a);
    	g.insert(a);
	}
	printf("%d\n",g.size());
   print(g);
 
}
