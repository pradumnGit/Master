#include <iostream>
#include <string>

using namespace std;
class str
{
	const char *Buf;
	char *Buffer;
	int sz;

public:
	str(){}
	str(const char *buf)
	{
		int i = 0;
		const char *ptr = buf;
		sz = Size(ptr);
		Buffer = new char[sz+1];
		for (i = 0; *buf; buf++, i++)
		{
			Buffer[i] = *buf;
		}Buffer[i] = '\0';
	}
	int Size(const char *ptr)
	{
		int counter=0;
		while (*ptr++)
			counter++;
		return counter;
	}
	void display()
	{
		cout <<" : "<<Buffer<<endl;
	}
	void change(const char* ptr)
	{
		
		delete[] Buffer;
		sz = Size(ptr);
		Buffer = new char[sz];
		for (int i = 0; *ptr; i++, ptr++)
		{
			Buffer[i] = *ptr;
		}Buffer[sz] = '\0';
	}
	str(const str &s)
	{
		sz = s.sz;
		const char *buf = s.Buffer;
		Buffer = new char[sz + 1];
		for (int i = 0; *buf; i++, buf++)
		{
			Buffer[i] = *buf;
		}Buffer[sz] = '\0';
	}
	str& operator +(const str &s)
	{
	str obj;
	char *dest = this->Buffer; // pradumn  Buffer : pradumn
	char *src = s.Buffer;
	sz = Size(this->Buffer) + Size(s.Buffer); int i = 0;
	Buffer = new char[sz];
	while (*dest)
	{
		Buffer[i++] = *dest++;
	}Buffer[i++] = ' ';
	while (*src)
	{
		Buffer[i++] = *src++;
	}Buffer[i] = '\0';
	obj.Buffer = Buffer;
	return obj;
	}
	char* mystrcat(char* dest, char*  src)
	{
		//sz = Size(dest) + Size(src); int i=0;
		////int temp_sz = 
		//Buffer = new char[sz];
		//while (*dest)
		//{
		//	Buffer[i++] = *dest++;
		//}Buffer[i++] = ' ';
		//while (*src)
		//{
		//	Buffer[i++] = *src++;
		//}Buffer[i] = '\0';
		//cout << Buffer << endl;
		/*char *ptr = src + strlen(src);
		cout << ptr;
		while (*dest)
		{
			*ptr++ = *dest++;
		}*ptr = '\0';*/
		//return dest;
	}
	friend ostream& operator << (ostream &out, const str &s)
	{
		out << s.Buffer << endl;
		return out;
	}
	str& operator = (const str &s)
	{
		//cout  << s.Buffer << endl;
		int i;
		Buffer = s.Buffer;
		//char *buf = s.Buffer;
		/*sz = s.sz;
		Buffer = new char[sz + 1];
		for (i = 0; *buf; i++,buf++)
		{
			Buffer[i] = *buf;
		}Buffer[i] = '\0';*/
		return *this;
	}
	~str()
	{
		delete[] Buffer;
	}
	/*bool operator == (char *ptr, char *ptr1)
	{
		return true;
	}*/
};


int main()
{
	// size of string
	// copy str
	// concat str

	str s("Hello");
	str s1;// = s;
	s1.change("pradumn");
	str s2;
	s2 = s1;
	s2.display();
	cout << s2;
	cout << s << s1;
	cout << s1;
	
	//s2 = s1 + s;

	return 0;
}
