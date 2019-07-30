import java.util.*;
    public class snacktower{
        public static void main(String[] args)
        {
            Scanner sc= new Scanner(System.in);
            int n=sc.nextInt();
            int x=n;
            int a[]= new int[n];
            ArrayList<Integer> list= new ArrayList<>();

            for(int i=0;i<n;i++)
            a[i]=sc.nextInt();

            for(int i=0;i<n;i++) {
                if(a[i]==n) {
                     System.out.print(a[i]+" ");
                    n=n-1;

                    while(list.contains(n)==true)
                    {
                        System.out.print(n+" ");
                        n=n-1;
                    }

                    
                    System.out.println();
                }
                 
                else{
                    list.add(a[i]);
                    System.out.println();
                 
                }
             
             
            }

        }
     
    }