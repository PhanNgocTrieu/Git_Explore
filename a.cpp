s = "acsckqkmqspqsd"
--------------------
s1 = "acs" - 3
s2 = "sckq" - 4
s3 = "qkm" - 3
s4 = "kmqsp" - 4



string res = "";

string = "";

for(char c : s)
{		
	if (string.find(c))
	{
		if (strlen(stack.top()) <  string)
		{
			res = string;
			string = "";
		}
	}
	else
	{
		string += c;
	}
}


string res = "";
for (int iRun = 0; iRun < s.length(); iRun++)
{
	string connect = s[iRun];
	for (int jRun = iRun + 1; jRun < s.length(); jRun++)
	{
		if (connect.find(s[jRun]))
		{
			if (strlen(res) < strlen(connect))
			{
				res = connect;
				break;
			}
		}
		else
		{
			connect += s[jRun];
		}
	}
}	



