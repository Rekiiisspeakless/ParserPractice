//simple statement and initialized
int a;
int b,c;
double d=2.2,e=3.34;
int a[2];
int b[3][2];
int c[2],d[3];
int g,ed[2];
int a[2]={3,2,3};
int b[3][2]={2};
int a=3;double c=2;int b[2][3]={2,3};
bool g=true,e=false;
char c='3';
char c[2]={"df"};
double g[3]={};
bool b[2]={true,false};
//const
const int a=3;
const double b=2.3,c=2;
const int a=2;const double b=32.3;const bool g=true;const char d = '2';
//function
int a;
int main(){	
}
int cool(int a,double b,bool c,char d[2]){
}
int a;void co(){}
int goo(int e[3][2][4])
{
	int a=3;
}
// expression check
//int e[2+3/4]={5+3*5>4};
//mix use
int test(){
a= 324 + 3;
b = 1.2-3/4;
c = 4*9%3;
d=78 + 5 < 34;
e = 67 - 3>=23;
f = 87 <=1;
g = 23 > 4;
h = 7*(1+3);
i = 8+(j++);
j = k+l;
k = a + (b<2)*(c>=d);
l = -2;
m = 4-(-2);
n = g+!73;
o=1+-5+a+++(+5);
tmd[886+9487]=4&&2+gj++;
REM[EMT()]=486;
b=cc(EMT);
//function usage
emt();
eee(3.0+232/4.121*3.1415);
bbc("haha",false,2,3.0);
a = b( c() , d() );
gg(max()+min()*abs(emt(!486+a)), c[7]);
}

int test_for()
{
	for(8&&3;3<12;9+1){
		for(;;){}
	}
//	for(i=0;;) { a=2; } int EMT=9487; //No strict order	
}

void test_if()
{
	if(i==0){ int j=2,i=0; }
	else{EMT=486;}
	if(gg){
		if(EMT<=486){}
		else{}
	}

}
void test_while()
{
	while(EMT<=486){EMT=EMT+1;}
	do{}while(EMT==486);
	while(7878){}
	while(!gogogo){}

}
void test_bcr()
{
	for(;;)
	{
		break;
	}
	while(i<EMT)
	{
		
		continue;
	}
	return EMT;
	return EMT;
}
void test_switch()
{
	switch(EMT)
	{
		case 4:
			break;
		case 'd':
		default:
			EMT=486;
			break;
	}

}
int mix_use(double g[2][3],char c[3])
{
	int EMT=486;
	int TT[5]={false,"cc",4.32,3};
	//double max = max(3.1415926,TT);
	double sci = 12.03E41;
	for(;i<100;)
	{
		for(;;)
		{
			if(!(max>=100) ){
				max = 486;
			}
			 
		}
		
		if(EMT!=486) {continue;}
		switch(EMT)
		{
			case 'd':
			case 1:
			case 486:

				cc[5] = 5;
				break;
		}
		printf("%d",abc);	//test std function
		return EMT;
	}
	if(486){a=2; int EMT=9487;} //no strict order
	while(1){a=2; int EMT=9487;} //no strict order
	for(;test;){a=2; int EMT=9487;} //no strict order
}

void test_error(){
// const int d; //const should have initialize
// const int b=2,a[2]={"d"}; //const can't have array
// int cc(){	int dd(){}  }//function nested detect
// switch(EMT){case 486: char cc[5]={"12345"};} //define in switchcase
// switch(EMT486){case 6 : break; default: case 3: break;}	//default not at last
// switch(ETTT){}	//no case inside
// int GG(){	for(;;){} int ee(){} }//function nested detect
// int a[2/4];//error
}
// int a(b[3+2]){}//error
