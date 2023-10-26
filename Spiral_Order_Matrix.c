#include <stdio.h>
void prnitspiralorder(int n,int arr[][n]){
    int left=0,top=0;
    int right=n-1,buttom=n-1;
    
    while(left<=right && top<=buttom){
        for(int i=left;i<=right;i++){
            printf("%d ",arr[top][i]);
        }
        top++;
        
        for(int i=top;i<=buttom;i++){
            printf("%d " ,arr[i][right]);
        }
        right--;
        
        if(top<=buttom){
            for(int i=right;i>=left;i--){
                printf("%d " , arr[buttom][i]);
            }
            buttom--;
        }
        
        if(left<=right){
            for(int i=buttom;i>=top;i--){
                printf("%d ",arr[i][left]);
            }
            left--;
        }
        
    }
}
int main()
{
    int n;
    printf("Enter the n value : ");
    scanf("%d",&n);
    int mat[n][n];
    int k=1;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat[i][j]=k++;
        }
    }
    prnitspiralorder(n,mat);
    return 0;
}