 #include<stdio.h>    
   
    int main()
    {  
    int a[10],n,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        sum=sum+a[i];
        
    }
    printf("%d",sum);
    return 0;  
    }  


