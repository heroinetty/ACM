//将边长为正整数a，b的长方形划分成若干边长均为正整数，每个正方形的边均平行于矩形的相应边，试求这些正方形边之和的最小值MIN。
//(如果这个长方形可以分成N个正方形，其中每个边长为Ai,那么MIN=A1+A2+^^^+AN
//注意，数组A中的元素可能相等）
//将边长为正整数a，b的长方形划分成若干边长均为正整数，每个正方形的边均平行于矩形的相应边，试求这些正方形边之和的最小值MIN。
//(如果这个长方形可以分成N个正方形，其中每个边长为Ai,那么MIN=A1+A2+^^^+AN
//注意，数组A中的元素可能相等）

//记所求最小值为f(m,n),可以证明f(m,n)=m+n-(m,n). (*)
//其中(m,n)表示m和n的最大公约数

//事实上,不妨设m≥n.
//(1)关于m归纳,可以证明存在一种合乎题意的分法,使所得正方形边长之和恰为m+n-(m,n).
//当m=1时,命题显然成立.
//假设当m≤k时,结论成立(k≥1).当m=k+1时,若n= k+1,则命题显然成立.若n< k+1,从矩形ABCD中切去正方形AA1D1D(如图),由归纳假设矩形A1BCD1有一种分法使得所得正方形边长之和恰为m-n+n-(m-n,n)= m-(m,n).
//于是原矩形ABCD有一种分法使得所得正方形边长之和为m+n- (m,n).
//(2)关于m归纳可以证明(*)成立.
//当m=1时,由于n=1,显然f (m,n)=1= m+n- (m,n).
//假设当m≤k时,对任意1≤n≤m有f (m,n)= m+n- (m,n).
//若m=k+1,当n= k+1时显然f(m,n)= k+1= m+n- (m,n).
//当1≤n≤k时,设矩形ABCD按要求分成了p个正方形,其边长分别为a1,a2,…,ap,不妨设a1≥a2≥…≥ap.
//显然a1=n或a1若a1 m+n- (m,n).
//若a1=n,则一个边长分别为m-n和n的矩形可按题目要求分成边长分别为a2,…,ap的正方形,由归纳假设
//a2+…+ap≥m-n+n-(m-n,n)= m- (m,n).
//从而a1+a2+…+ap≥m+n-(m,n).
//于是当m=k+1时,f(m,n)≥m+n- (m,n).
//再由(1)可知f (m,n)=m+n- (m,n)

#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
    return !b ? a : gcd(b,a % b);
}
int main()
{
    for(int i = 0; i < 10; i++)
    {
        long long a,b;
        scanf("%lld%lld",&a,&b);
        long long Min = a + b - gcd(a,b);
        printf("%lld\n",Min);
    }
    return 0;
}
