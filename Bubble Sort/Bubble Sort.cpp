class Solution
{
    public:

    void bubbleSort(int a[], int n)
    {
       for(int i=0;i<n;i++) {
           int flag = 0;
           for(int j = 0;j<n-i-1;j++) {
               if(a[j] > a[j+1]) {
                   int temp = a[j];
                   a[j] = a[j+1];
                   a[j+1] = temp;
                   flag = 1;
               }
           }
           if(flag == 0) {
               break;
           }
       }
    }
};

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
      
    ob.bubbleSort(arr, n);
    printArray(arr, n);
    }
    return 0;;
}  