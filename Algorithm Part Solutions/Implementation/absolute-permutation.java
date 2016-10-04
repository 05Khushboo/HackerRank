import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{	Scanner sc=new Scanner(System.in);
		int t; 
		t=sc.nextInt();
		while(t!=0){ 
			int n,k;t--; 
			n=sc.nextInt();
			k=sc.nextInt();
			int[] a=new int[n+1];
			if(k>(n/2)) System.out.print("-1\n");
			else{
				if(k==0){
					for(int i=1;i<=n;i++) 
						System.out.print(i+" ");
					System.out.println();
				}
				else{
					for(int i=1;i<=n;i++) 
						a[i]=i;
					int i;
					for(i=1;i<=n-k;i++){
						if(Math.abs(a[i]-i)<k){
							int b=a[i];
							a[i]=a[i+k];
							a[i+k]=b;
						}
					}
					int f =0;
					for(i=1;i<=n;i++){
						if(Math.abs(a[i]-i)!=k){
							f=1; 
							break;
						}
					}
					if(f==1){
						System.out.print("-1\n");
					}
					else{
						for(i=1;i<=n;i++) 
							System.out.print(a[i]+" ");
						System.out.println();
					}
				}
			}
		}
	}
}
