int count(n)
{
int count=0
while(n!=0)
{
n=n%10;
++count
}
return count 0;
}
int main()
{
n=123456
printf("the number are",n);
count(digits(n));
return 0;
}
