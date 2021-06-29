class UserThread extends Thread{
	@Override
	public void run() {
		//tasks for thread
		System.out.println("This is user defined Thread");
	}
}
public class ThreadOperations {

		public static void main(String []args) throws InterruptedException {
			System.out.println("Program Started..");
			int x=56+34;
			System.out.println("sum is " +x);
			//Thread...
			Thread t=Thread.currentThread();
			
			t.setName("Krish  ");
			System.out.println("Thread Name is  "+t.getName());
			System.out.println("Thread id "+t.getId());
			System.out.println("Program Ended...");
			
			Thread.sleep(4000);
			//going to start user Defined Thread
			UserThread thread=new UserThread();
			thread.start();
			
		}
}
