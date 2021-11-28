#include <iostream>

int main() {
  char a;
  double b;
  double c;
  double ans;
  scanf("%c",&a);
  scanf("%lf",&b);
  scanf("%lf",&c);
  if(a=='+'){
    ans = (b+c);
    printf("%lf",ans);
  }
  if(a=='-'){
  ans = (b-c);
    printf("%lf",ans);
} 
  if(a=='*'){
ans = (b*c);
    printf("%lf",ans);
}
  if(a=='/'){
ans = (b/c);
    printf("%lf",ans);
}
}