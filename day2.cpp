#include<bits/stdc++.h>
using namespace std;
//question 1
int main(){
  int a,b,c;
  cin >> a,b,c;
  if(a>b && a>c) cout << a;
  else if(b>a && b>c) cout << b;
  else cout << c;
}
//question 2
int main(){
  int x;
  xin >> x;
  if(x>=90) cout << 'A';
  else if(x>=80) cout << 'B';
  else if(x>=70) cout << 'C';
  else if(x>=60) cout << 'D';
  else if(x>=50) cout << 'E';
  else cout << 'F';
}
//question 3
int main(){
  int m;
  cin >> m;
  switch(m){
    case 1:
    cout << "january";
    break;
    case 2:
    cout << "febrary";
    break;
    case 3:
    cout << "march";
    break;
    case 4:
    cout << "april";
    break;
    case 5:
    cout << "may";
    break;
    case 6:
    cout << "june";
    break;
    case 7:
    cout << "july";
    break;
    case 8:
    cout << "auguest";
    break;
    case 9:
    cout << "september";
    break;
    case 10:
    cout << "october";
    break;
    case 11:
    cout << "november";
    break;
    case 12:
    cout << "december";
    break;
    default:
    cout << "Invalid";
  }
}
