import java.util.ArrayList;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        
        int T=scan.nextInt();
        int caso=1;
        while(T>0){
            ArrayList datos=new ArrayList<Integer>();
            for(int i=0;i<1;i++){
                for(int j=0;j<2;j++){
                    int f=scan.nextInt();
                    datos.add(f);
                }
            }
            int N=(int)datos.get(0);
            int K=(int)datos.get(1);
            int inicio=1;
            int Final=N/2;
            String val=scan.next();
            char cadena[]=new char[N+1];
            for(int i=0;i<N;i++){
                cadena[i+1]=val.charAt(i);
            }
            int count=0;
            for(int i=inicio;i<=Final;i++){
                if(cadena[i]!=cadena[((N)-i)+1]){
                    count++;
                }
            }
            
            int bondad=0;
            if(K>count){
                bondad=K-count;
            }else{
                bondad=count-K;
            }
            System.out.println("Case #"+caso+": "+bondad);
            caso++;
            T--;
        }
    }
}
