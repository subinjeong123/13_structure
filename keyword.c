#define MAX_NAME 30
struct keytab
{
	int nums; //��� ������ 
	char name[MAX_NAME]; 
};
//���� Ʋ �ϼ�

struct keytab keywrds[13] = { //������� �� �������Ƿ� �迭�� ���� Ʋ
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
	
	//�� keyword����  
	for (i=0;i<13;i++)
	{	//if word��i��° keyword�� ������ 
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
	//i��° keyword�� ���ؼ�
	for (i=0;i<13;i++)
		//print(Ű���� �̸� : �󵵼�); 
		printf("%s : %i\n", keywrds[i].name, strlen(keywrds[i].name));
}
