long long sdjc(int x)
{
	int z = 1;
	int i = 0;
	for (i = 1; i <= x; i++)
	{
		z *= i;
	}
	return z;
}
long long tnjtj(int n)
{
	int i = 0;
	long long knx = 0;
	for (i = 1; i <= n; i++) 
	{
		knx += sdjc(i);
	}
	return knx;
}
long long qzh(int n)
{
	int i = 0;
	int j = 0;
	long long knx = 0;
	for (i = 1; i <= n; i++)
	{
		knx += (sdjc(n)/sdjc(n-i))/ sdjc(i);
	}
	return knx;
}
