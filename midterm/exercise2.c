#include<stdio.h>
int main(){
    unsigned int a,b,c,d,e,f,g,h,i,j;
    int k=0;
    unsigned int m[1000];
    int max = 0;
     while (1)
    {
        m[k] = getchar();
        if(m[k] == ' ')
        {
            break;
        }
        a = a * 10 + m[k] - '0';
        k++;
    }
    while (1)
    {
        m[k] = getchar();
        if(m[k] == ' ')
        {
            break;
        }
        b = b * 10 + m[k] - '0';
        k++;
    }
    while (1)
    {
        m[k] = getchar();
        if(m[k] == ' ')
        {
            break;
        }
        c = c * 10 + m[k] - '0';
        k++;
    }
    while (1)
    {
        m[k] = getchar();
        if(m[k] == ' ')
        {
            break;
        }
        d = d * 10 + m[k] - '0';
        k++;
    }
     while (1)
    {
        m[k] = getchar();
        if(m[k] == ' ')
        {
            break;
        }
        e = e * 10 + m[k] - '0';
        k++;
    }
     while (1)
    {
        m[k] = getchar();
        if(m[k] == ' ')
        {
            break;
        }
        f = f * 10 + m[k] - '0';
        k++;
    }
     while (1)
    {
        m[k] = getchar();
        if(m[k] == ' ')
        {
            break;
        }
        g = g * 10 + m[k] - '0';
        k++;
    }
     while (1)
    {
        m[k] = getchar();
        if(m[k] == ' ')
        {
            break;
        }
        h = h * 10 + m[k] - '0';
        k++;
    }
     while (1)
    {
        m[k] = getchar();
        if(m[k] == ' ')
        {
            break;
        }
        i = i * 10 + m[k] - '0';
        k++;
    }
     while (1)
    {
        m[k] = getchar();
        if(m[k] == '\n'||m[k]==EOF)
        {
            break;
        }
        j = j * 10 + m[k] - '0';
        k++;
    }
    if(a>b){
        max=a;
    }else{
        max=b;
        if(b>c){
            max=b;
        }else{
            max=c;
            if(c>d){
                max=c;
            }else{
                max=d;
                if(d>e){
                    max=d;
                }else{
                    max=e;
                    if(e>f){
                        max=e;
                    }else{
                        max=f;
                        if(f>g){
                            max=f;
                        }else{
                            max=g;
                            if(g>h){
                                max=g;
                            }else{
                                max=h;
                                if(h>i){
                                    max=h;
                                }else{
                                    max=i;
                                    if(i>j){
                                        max=i;
                                    }else{
                                        max=j;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("the max is %d\n",max);
    return 0;
}