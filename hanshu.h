val vlist[100];
int vweizhi=0;
int nprint=0;
void print(val v);
void printlist(list* l);
void printelement(element* p);
element* transvtoe(val v);
element* newele(val v);
val transetov(element* p);
int vlistpos(char id[]);
void printelement(element* p){
	switch(p->type){
		case INt:
			printf("%d",p->i);break;
		case REAl:
			printf("%f",p->r);break;
		case STRING:
			printf("%s",p->str);break;
		case LIST:
			printlist(p->l);break;	
		default:
			break;	
	}
}
void printlist(list* l){
    element* p;
    printf("[");
    if (l->len!=0){
    	p=l->first;
    	while(p!=NULL){
    		printelement(p);
    		printf(",");
    		p=p->next;	
		}
	} 
	printf("\b]");
}
void print(val v){
	switch(v.type){
		case INt:
			printf("%d",v.i);break;
		case REAl:
			printf("%f",v.r);break;
		case Id:
			printf("%s",v.id);break;
		case STRING:
			printf("%s",v.str);break;
		case LIST:
			printlist(v.l);break;	
		default:
			printf("what?");break;
	} 
}
element* newele(val v){
	element* p;
	p=(element*)malloc(sizeof(element));
	p->type=v.type;
	switch(v.type){
		case INt:
			p->i=v.i;break;
		case REAl:
			p->r=v.r;break;
		case STRING:
			strcpy(p->str,v.str);break;
		case LIST:
			p->l=v.l;break;
		default: 
			break; 
	}
	return p;
}
val transetov(element* p){
	val v;
	v.type=p->type;
	switch(v.type){
		case INt:
			v.i=p->i;break;
		case REAl:
			v.r=p->r;break;
		case STRING:
			strcpy(v.str,p->str);
			break;
		case LIST:
			v.l=p->l;break;
		default:
			break;
	}
	return v;
}
element* transvtoe(val v){
	element* p;
	p=(element*)malloc(sizeof(element));
	p->type=v.type;
	switch(v.type){
		case INt:
			p->i=v.i;break;
		case REAl:
			p->r=v.r;break;
		case STRING:
			strcpy(p->str,v.str);break;
		case LIST:
			p->l=v.l;break;
		default:
			break; 
	}
	return p;
}
int vlistpos(char id[]){
	int i;
	for(i=0;i<100;i++)
	if (strcmp(id,vlist[i].id)==0)
	return i;
	return -1;
}
