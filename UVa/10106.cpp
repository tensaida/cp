#include <bits/stdc++.h>
using namespace std;

int Xarr[251], Yarr[251], mult[251][500], res[500];

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	string X, Y;
	while (cin >> X && cin >> Y) {


		if ((X.size() == 1 && X[0] == '0') || (Y.size() == 1 && Y[0] == '0'))
		{
			cout << 0 << '\n';
			continue;
		}

		int ind = 0;
		for (int i = X.size()-1; i >= 0; i--)
			Xarr[ind++] = X[i] - '0';
		ind = 0;
		for (int i = Y.size()-1; i >= 0; i--)
			Yarr[ind++] = Y[i] - '0';
		ind = 0;

		for (int i = 0; i < X.size(); i++) {
			int rem = 0;
			for (int j = 0; j < Y.size() + 1; j++) {
				mult[i][j+ind] = Xarr[i]*Yarr[j] + rem;

				if (j == Y.size())
					mult[i][j+ind] = rem;

				if (mult[i][j+ind] >= 10)
				{
					rem = (mult[i][j+ind]/10) % 10;
					mult[i][j+ind] -= rem*10; 
				} else rem = 0;
				//cout << "i,j=" << i << "," << j+ind << "  " << mult[i][j+ind] << " "; 
			}
			//cout << endl;
			ind++;
		}

		int rem = 0;
		for (int j = 0; j < Y.size()+ind; j++) {
			int sum = 0;
			
			for (int i = 0; i < X.size(); i++) {
				sum += mult[i][j];	
			}

			res[j] = sum + rem;
			
			if (res[j] >= 10 && j != Y.size()+ind - 1) {
				rem = (res[j]/10);
				res[j] -= rem*10; 
			} else rem = 0;
		
		}

		bool zero = true;
		
		for (int i = Y.size()+ind-1; i >= 0; i--) {
			if (zero && res[i] != 0) zero = false;
			if (!zero) cout << res[i];
		}

		cout << '\n';
	}
}