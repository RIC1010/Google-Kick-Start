import java.util.Scanner;
public class Solution {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int T=scan.nextInt();
        int count=1;
        while(T>0){
            int N=scan.nextInt();
            String val=scan.next();
            int res[]=new int[N];
            int i=0;
            int j=1;
            res[0]=1;
            while(i<N-1){
                int char1=val.charAt(i);
                int char2=val.charAt(j);
                if(char2>char1){
                    res[j]=res[i]+1;
                    i++;
                    j++;
                }else{
                    res[j]=1;
                    i++;
                    j++;
                }
            
            }
            System.out.print("Case #"+count+":");
            for(int x=0;x<res.length;x++){
                System.out.print(" "+res[x]);
            }
            System.out.println("");
            T--;
            count++;
        }
    }
}
