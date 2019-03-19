#include <stdio.h>
#include <math.h>
#define ll long long
bool s(long double x) 
{   
  return (sqrt(x)*sqrt(x)==x);
} 

int main() {
	ll t; scanf("%lld",&t);
	while (t != 0) {
		if (s(t))
			printf("yes");
		else printf("no");
		printf("\n");
		scanf("%lld",&t);
	}
}