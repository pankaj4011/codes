
class W{
	public static void main(String [] args){
		int i=20,j=30;
		int lcm=0,gcd=0;
		int max=(i>j)?i:j;
		while(true){
			if(max%i==0 && max%j==0){
				lcm=max;
				 System.out.println("LCM = "+ max);
			break;
			}
			else
				++max;

		}
int n,d,r;
		if(i>j){
			n=i;
			d=j;
		}
		else{
			n=j;d=i;

		}
		r=n%d;
		while(r!=0){
n=d;
d=r;
r=n%d;
		}
gcd=d;
System.out.println("GCD = "+ gcd);
	}
}
