%{
   /* definition */
   #include <stdio.h>
   #include <ctype.h>
   #include "jiegou.h"
   #include "hanshu.h"
   #define YYSTYPE val
   void yyerror(char *s);
%}
%token ID INT REAL STRING_LITERAL


%%
Start : prompt Lines
      ;
Lines : Lines  stat '\n' prompt
      | Lines  '\n' prompt
      | 
      | error '\n' {yyerrok;}
      ;
prompt : {printf("miniPy> ");}add_expr
       ;
stat  : assignExpr{
	 	if(nprint==1) {
	 		nprint=0;
		 	}
		else if(nprint==0){print($$);
		      printf("\n");
		      nprint=0;
			}
		 }
      ;
assignExpr:
        atom_expr '=' assignExpr{
   		if($1.opr==oldval){	
		    	$$=$3;
   			strcpy($$.id,$1.id);
   			$$.weizhi=$1.weizhi;
   			vlist[$$.weizhi]=$$;
   			}
   		else if($1.opr==newval){
   			$$=$3;
   			strcpy($$.id,$1.id);
   			$$.weizhi=vweizhi;
   			vlist[vweizhi]=$$;
			vweizhi=(vweizhi+1)%100;
			}
		else if($1.opr==slice){
				$$=$1;
		if($$.l->len!=$3.l->len){
			yyerror("no match size!");
			$$.opr=error;
		}
		else {
			element *p,*q,*next,*pre;
			int i,j;
			if($$.step>0){
			p=$$.begin;
			q=$3.l->first;
			for(i=0;i<$$.l->len;i++){
				next=p->next;
				pre=p->pre;
				*p=*q;p->next=next;p->pre=pre;
				q=q->next;
				for(j=0;j<$$.step;j++)
				p=p->next;
				}	
			}
			else if($$.step<0){
			p=$$.begin;
			q=$3.l->first;
			for(i=0;i<$$.l->len;i++){
				next=p->next;
				pre=p->pre;
				*p=*q;p->next=next;p->pre=pre;
				q=q->next;
				for(j=0;j>$$.step;j--)
				p=p->pre;
				}	
			}
		}
	}	
		else if($1.opr==ele){
		$$=$3; 
		$$.weizhi=$1.weizhi;
		$$.begin=$1.begin;
		element *p,*q;
		p=$1.begin->next;
		q=$1.begin->pre;
		*($$.begin)=*(transvtoe($3));
		$$.begin->next=p;
		$$.begin->pre=q;
		}
		else{
		yyerror("something is wrong!");$$.opr=error;
		   }
		   nprint=1;
		}
      | add_expr 
      ;
factor : '+' factor
       | '-' factor{
			if($2.type==INt){$$.type=INt;$$.i=-$2.i;
			}
			else if($2.type==REAl){
				$$.type=REAl;$$.r=-$2.r;
			}
			else {
				yyerror("The type of factor is wrong!");$$.opr=error; 
			}
	   }
       | atom_expr
       ; 
atom  : ID{
        		int position;
				position=vlistpos($1.id);
				if(position>=0){
					$$=vlist[position];
					$$.opr=oldval;
					$$.weizhi=position;
					if ($$.type==LIST){
						$$.begin=$$.l->first;
					}
				} 
				else{
					$$.opr=newval;
				}
		}
      | STRING_LITERAL 
      | List 
      | INT
      | REAL 
      ;
slice_op : {
		$$.type=INt;
		$$.i=1;
		$$.opr=kong;	
		 /*  empty production */}
        | ':' add_expr {$$=$2;}
        ;
sub_expr: {
		$$.type=INt;
		$$.opr=kong;
		$$.i=0;	
		} /*  empty production */
        | add_expr
        ;        
atom_expr : atom 
        | atom_expr  '[' sub_expr  ':' sub_expr  slice_op ']'{
        if($3.type!=INt||$5.type!=INt||$6.type!=INt){
        	yyerror("slice type not INt!");
        	$$.opr=error;
			}
		else if($1.type!=LIST){
			yyerror("operation type not LIST!");
			$$.opr=error;
			}
		else {
			int start,stop,step;
			int i,j;
			element *p,*q;
			step=$6.i;
			$$.opr=slice;
			$$.type=LIST;
			$$.step=step;
			$$.l=(list*)malloc(sizeof(list));
			$$.l->len=0;
			$$.l->first=NULL;
			$$.l->last=NULL;
			if($3.opr==kong&&$5.opr==kong){
				if(step>0){
					start=0;stop=$1.l->len-1;
					}
				else if(step<0){
					start=$1.l->len-1;stop=0;
					}
				else {
					yyerror("slice step not 0!");
					$$.opr=error;
					}
				}
			else if($3.opr==kong){
				if (step>0){
					start=0;stop=$5.i;
					}
				else if(step<0){
					start=$1.l->len-1;stop=$5.i;
					}
				}
			else if($5.opr==kong){
				if (step>0){
					start=$3.i;stop=$1.l->len-1;
					}
				else if(step<0){
					start=$3.i;stop=0;
					}
				}
			else {
				start=$3.i;stop=$5.i;
			}
			if(start<0){
				start+=$1.l->len;
			}
			if(stop<0){
				stop+=$1.l->len;
			}
			if (start<stop&&step>0){
				p=$1.l->first;
				for (i=0;i<start;i++)
				p=p->next;
				$$.begin=p;
				for (i=start;i<=stop;i+=step){
				      q=(element*)malloc(sizeof(element));
				      *q=*p;q->next=NULL;q->pre=NULL;
				      if($$.l->len==0){
				      $$.l->first=q;
					  $$.l->last=q;
					  }
					else{
						$$.l->last->next=q;
						q->pre=$$.l->last;
						$$.l->last=q;
					}
					  $$.l->len++;
					  for(j=0;j<step&&p!=NULL;j++){
					  	p=p->next;
					  }						  
				}
			}
			else if(start>stop&&step<0){
				p=$1.l->first;
				for (i=0;i<start;i++)
				p=p->next;
				$$.begin=p;
				for (i=start;i>=stop;i+=step){
				      q=(element*)malloc(sizeof(element));
				      *q=*p;q->next=NULL;q->pre=NULL;
				      if($$.l->len==0){
				      $$.l->first=q;
					  $$.l->last=q;
					  }
					else{
						$$.l->last->next=q;
						q->pre=$$.l->last;
						$$.l->last=q;
						}
					  $$.l->len++;
					  for(j=0;j>step&&p!=NULL;j--){
					  	p=p->pre;
					  }						  
				}	
			}
		}
	}
        | atom_expr  '[' add_expr ']'
        {
        	if($1.type!=LIST){
        	yyerror("operation type not LIST!");
			$$.opr=error;
			}
			else if($3.type!=INt){
			yyerror("pick element type not INt!");
        	$$.opr=error;	
			}
			else{
				if($3.i<0){
					$3.i+=$1.l->len;
				} 
				element* p;
				p=(element*)malloc(sizeof(element));
				p=$1.l->first;
				for(int i=0;i<$3.i;i++)
				p=p->next;
				$$=transetov(p);
				$$.opr=ele;
				$$.begin=p;
			}
		}
        | atom_expr  '.' ID
         	{
         		strcpy($$.func,$3.id);
			 }
        | atom_expr  '(' arglist opt_comma ')'
        {
        	if(strcmp($1.func,"append")==0){
        		if($1.type!=LIST){
        			yyerror("append type not LIST!");
        			$$.opr=error;
				}
				else if($3.l->len!=1){
					yyerror("append arglist num must be one!");
					$$.opr=error;
				}
				else {
				element *p,*q;
				p=(element*)malloc(sizeof(element));
				q=$3.l->first;
				*p=*q;
				p->next=NULL;
				$1.l->last->next=p;
				p->pre=$1.l->last;
				$1.l->last=p;
				$1.l->len++;	
				}
				nprint=1;
			}
			else if (strcmp($1.func,"range")==0){
				if(($3.l->len!=1)&&($3.l->len!=2)&&($3.l->len!=3)){
					yyerror("range arg num error!");
					$$.opr=error;
				}
				else {
					int start,stop,step;
					if($3.l->len==1){
						start=0;stop=$3.l->first->i;step=1;
					}
					else if($3.l->len==2){
						start=$3.l->first->i;stop=$3.l->last->i;step=1;
					}
					else {
						start=$3.l->first->i;stop=$3.l->first->next->i;step=$3.l->last->i;
					}
					$$.type=LIST;
					$$.l=(list*)malloc(sizeof(list));
					$$.l->len=0;
					$$.l->first=NULL;
					element* p;
					int i=start;
					 while((step>0&&i<stop)||(step<0&&i>stop)){
					 	p=(element*)malloc(sizeof(element));
					 	p->type=INt;
					 	p->i=i;
					 	p->next=NULL;
					 	if ($$.l->first==NULL){
					 		$$.l->first=p;
					 		$$.l->last=p;
						 }
						 else {
						 	$$.l->last->next=p;
						 	p->pre=$$.l->last;
						 	$$.l->last=p;
						 }
						 i+=step;
						 $$.l->len++;
					 }
				}
			}
			 else if(strcmp($1.func,"print")==0){
            	    element *x = $3.l->first;
                    while(x){
            		print(transetov(x));
                    printf(" ");
                    //nprint=0;
                    x = x->next;
                    }
                    nprint=1;
                    printf("\n");
				
			}
			 else if (strcmp($1.func,"len")==0){
                        if($3.l->len!=1){
                                yyerror("len arg num error!");
                                $$.opr=error;
                        }
                        else if($3.l->first->type!=LIST){
                                yyerror("len type error!");
                                $$.opr=error;
                        }
                        else {
                                $$.type=INt;
                                $$.i= $3.l->first->l->len;
                       }
                }
		}
        | atom_expr  '('  ')'
        {
        	if(strcmp($1.id,"quit")==0){
        		return 0;
			}
		}
        ;
arglist : add_expr{
        $$.type=LIST;
		$$.l=(list*)malloc(sizeof(list));
		$$.l->len=1;
		$$.l->first=newele($1);
		$$.l->last=$$.l->first;
		}
        | arglist ',' add_expr {
		$$.type=LIST;
		$$.l=(list*)malloc(sizeof(list));
		$$.l->len=$1.l->len+1;
		$$.l->first=$1.l->first;
		$$.l->last=$1.l->last;
		$$.l->last->next=newele($3);
        $$.l->last->next->pre=$$.l->last;
        $$.l->last=$$.l->last->next;	
		}
        ;
        ;      
List  : '[' ']'{
		$$.type=LIST;
		$$.l=(list*)malloc(sizeof(list));
		$$.l->len=0;
		$$.l->first=NULL;
		$$.l->last=NULL;
		}
      | '[' List_items opt_comma ']' {
	  		$$.type=LIST;
	  		$$.l=(list*)malloc(sizeof(list));
	  		$$.l->len=$2.l->len;
			$$.l->first=$2.l->first;
			$$.l->last=$2.l->last;
		  }
      ;
opt_comma : /*  empty production */
          | ','
          ;
List_items  
      : add_expr{
  		$$.type=LIST;
		$$.l=(list*)malloc(sizeof(list));
		$$.l->len=1;
		$$.l->first=newele($1);
		$$.l->last=$$.l->first;
	  }
      | List_items ',' add_expr {
	  	$$.type=LIST;
		$$.l=(list*)malloc(sizeof(list));
		$$.l->len=$1.l->len+1;
		$$.l->first=$1.l->first;
		$$.l->last=$1.l->last;
		$$.l->last->next=newele($3);
        $$.l->last->next->pre=$$.l->last;
        $$.l->last=$$.l->last->next;	
	  }
      ;
add_expr : add_expr '+' mul_expr{
		if($1.type==INt&&$3.type==INt){$$.type=INt;$$.i=$1.i+$3.i;}
		else if($1.type==INt&&$3.type==REAl){$$.type=REAl;$$.r=$1.i+$3.r;}
		else if($1.type==REAl&&$3.type==INt){$$.type=REAl;$$.r=$1.r+$3.i;}
		else if($1.type==REAl&&$3.type==REAl){$$.type=REAl;$$.r=$1.r+$3.r;}
		else if($1.type==STRING&&$3.type==STRING){
			$$.type=STRING;
			strcpy($$.str,$1.str);
			strcat($$.str,$3.str);
			}
		else if($1.type==LIST&&$3.type==LIST){
			$$.type=LIST;
			$$.l=(list*)malloc(sizeof(list));
			$$.l->len=$1.l->len+$3.l->len;
			$$.l->first=NULL;
			$$.l->last=NULL;
			if($$.l->len!=0){
				element *p,*q;
				q=$1.l->first;
				while(q!=NULL){
					p=(element*)malloc(sizeof(element));
					*p=*q;p->next=NULL;p->pre=NULL;
					if($$.l->first==NULL){
						$$.l->first=p;
						$$.l->last=p;
						p->next=NULL;
						p->pre=NULL;
						}
						else{
						$$.l->last->next=p;
						p->pre=$$.l->last;
						$$.l->last=p;
						}
					q=q->next;
					}
				q=$3.l->first;
				while(q!=NULL){
					p=(element*)malloc(sizeof(element));
					*p=*q;p->next=NULL;p->pre=NULL;
					if($$.l->first==NULL){
						$$.l->first=p;
						$$.l->last=p;
						p->next=NULL;
						p->pre=NULL;
						}
					else{
						$$.l->last->next=p;
						p->pre=$$.l->last;
						$$.l->last=p;
						}
					q=q->next;
					}
				}
			}
		else {
			yyerror("invalid + operation!");
			$$.opr=error;
			}
		}
	      |  add_expr '-' mul_expr{
		if($1.type==INt&&$3.type==INt){$$.type=INt;$$.i=$1.i-$3.i;}
		else if($1.type==INt&&$3.type==REAl){$$.type=REAl;$$.r=$1.i-$3.r;}
		else if($1.type==REAl&&$3.type==INt){$$.type=REAl;$$.r=$1.r-$3.i;}
		else if($1.type==REAl&&$3.type==REAl){$$.type=REAl;$$.r=$1.r-$3.r;}
		else{
			yyerror("invalid - operation!");
			$$.opr=error;
				}
		  	}
	      |  mul_expr 
        ;
mul_expr : mul_expr '*' factor{
        if($1.type==INt&&$3.type==INt){$$.type=INt;$$.i=$1.i*$3.i;}
		else if($1.type==INt&&$3.type==REAl){$$.type=REAl;$$.r=$1.i*$3.r;}
		else if($1.type==REAl&&$3.type==INt){$$.type=REAl;$$.r=$1.r*$3.i;}
		else if($1.type==REAl&&$3.type==REAl){$$.type=REAl;$$.r=$1.r*$3.r;}
		else if($1.type==LIST&&$3.type==INt){
			$$.type=LIST;
			$$.l=(list*)malloc(sizeof(list));
			$$.l->len=0;
			$$.l->first=NULL;
			$$.l->last=NULL;
			element *p,*q;
			if($1.l->len!=0){
				for (int i=1;i<=$3.i;i++){
					$$.l->len+=$1.l->len;
					q=$1.l->first;
					while(q!=NULL){
					p=(element*)malloc(sizeof(element));
					*p=*q;p->next=NULL;p->pre=NULL;
					if($$.l->first==NULL){
						$$.l->first=p;
						$$.l->last=p;
						p->next=NULL;
						p->pre=NULL;
						}
					else{
						$$.l->last->next=p;
						p->pre=$$.l->last;
						$$.l->last=p;
						}
					q=q->next;
						}
					}
				} 
			}
		else if($1.type==INt&&$3.type==LIST){
			$$.type=LIST;
			$$.l=(list*)malloc(sizeof(list));
			$$.l->len=0;
			$$.l->first=NULL;
			$$.l->last=NULL;
			element *p,*q;
			if($3.l->len!=0){
				for (int i=1;i<=$1.i;i++){
					$$.l->len+=$3.l->len;
					q=$3.l->first;
					while(q!=NULL){
					p=(element*)malloc(sizeof(element));
					*p=*q;p->next=NULL;p->pre=NULL;
					if($$.l->first==NULL){
						$$.l->first=p;
						$$.l->last=p;
						p->next=NULL;
						p->pre=NULL;
						}
					else{
						$$.l->last->next=p;
						p->pre=$$.l->last;
						$$.l->last=p;
						}
					q=q->next;
						}
					}
				} 
			}
		else if($1.type==STRING&&$3.type==INt){
			$$.type=STRING;
			if($3.i<=0){
				$$.str[0]='/0';
				}
			else {
				strcpy($$.str,$1.str);
				for(int i=1;i<$3.i;i++)
				   strcat($$.str,$1.str);
				}
			}
		else if($3.type==STRING&&$1.type==INt){
			$$.type=STRING;
			if($1.i<=0){
				$$.str[0]='/0';
				}
			else {
				strcpy($$.str,$3.str);
				for(int i=1;i<$1.i;i++)
				   strcat($$.str,$3.str);
				}
			}
		else {
			yyerror("invalid * operation!");
			$$.opr=error;
			}
		}
        |  mul_expr '/' factor
        	{
        	if($1.type==INt&&$3.type==INt){$$.type=REAl;$$.r=((double)$1.i)/$3.i;}
			else if($1.type==INt&&$3.type==REAl){$$.type=REAl;$$.r=$1.i/$3.r;}
			else if($1.type==REAl&&$3.type==INt){$$.type=REAl;$$.r=$1.r/$3.i;}
			else if($1.type==REAl&&$3.type==REAl){$$.type=REAl;$$.r=$1.r/$3.r;}	
			
			else {
				yyerror("invalid / operation!");
				$$.opr=error;
			}
		}
	      |  mul_expr '%' factor
	       	{
	       		if($1.type==INt&&$3.type==INt){$$.type=INt;$$.i=$1.i%$3.i;}
	       		else {
	       			yyerror("invalid % operation!");
	       			$$.opr=error;
				   }
			   }
        |  factor
        ;

%%

int main()
{  
   return yyparse();
}

void yyerror(char *s)
{
   printf("%s\n",s);
   nprint=1;
}

int yywrap()
{ return 1; }        		    
