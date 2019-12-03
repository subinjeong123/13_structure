#define MAX_NAME 30
struct keytab
{
	int nums; //몇번 나오냐 
	char name[MAX_NAME]; 
};
//와플 틀 완성

struct keytab keywrds[13] = { //보고싶은 게 여러개므로 배열로 와플 틀
	{0, "int"},
	{1, "float"},
	{2, "return"},
	{3, "if"},
	{4, "for"},
	{5, "while"},
	{6, "goto"},
	{7, "switch"},
	{8, "case"},
	{9, "void"},
	{10, "default"},
	{11, "char"},
	{12, "do"},
 };

void count_word(char *word)
{
	int i;
	
	//각 keyword별로  
	for (i=0;i<13;i++)
	{	//if word랑i번째 keyword랑 같으면 
		if(strncmp(word, keywrds[i].name, strlen(keywrds[i].name) )==0)
		{
			
		
		//nums++;
		keywrds[i].nums++;
		}
	}
}

void print_word()
{
	int i;
	//i번째 keyword에 대해서
	for (i=0;i<13;i++)
		//print(키워드 이름 : 빈도수); 
		printf("%s : %i\n", keywrds[i].name, strlen(keywrds[i].name));
}
