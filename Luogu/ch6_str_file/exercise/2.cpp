#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	cin.ignore();
    cin.ignore();
	string s;
	getline(cin,s);

	// find all the VK
	int vk[100];
	int pos = s.find("VK");
	int count = 0;
	while(pos != -1) {
		vk[count] = pos;
		count++;
		pos = s.find("VK",pos+2);
	}
	for(int i = 0; i < count; i++) {
		s.replace(vk[i],2,"  ");
	}
	
	string str = s;
	
	// find all VV
	int v_pos = str.find("VV");
	if(v_pos != -1) {
		count += 1;
		v_pos = str.find("VV",v_pos+1);
        cout << count << endl;
        return 0;
	}

	// find all KK
	int k_pos = str.find("KK");
	if(k_pos != -1) {
		count += 1;
		k_pos = str.find("KK",k_pos+1);
        cout << count << endl;
        return 0;
	}
	
	cout << count << endl;
	return 0;
}	


