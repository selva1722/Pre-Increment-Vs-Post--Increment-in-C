# Pre-Increment-Vs-Post--Increment-in-C
A compiler level understanding of Pre Increment and Post- Increment in C


Pre increment:
int T, a=5;
T=++a;/*a=a+1;T=a*/ /*a=6, T=6 */

Post Increment
int T, a=5;
T=a++; /*T=a; a=a+1 *//* T= 5, a=6*/



Let us consider the follwing 

sum=3; tot=3

tot=tot+ sum++;    \*tot=?, sum=? *\
tot=tot + ++sum;   \*tot=?, sum=? *\
tot= tot + sum--;  \*tot=?, sum=? *\
tot=tot + --sum;   \*tot=?, sum=? *\

Inn this case the final value is 3,3 


