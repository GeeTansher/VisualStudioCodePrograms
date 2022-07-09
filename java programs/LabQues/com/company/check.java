package com.company;
import java.util.LinkedList;

class PD{
	LinkedList<Integer> list=new LinkedList<>();
	int capacity=10;
	int size=0;
	
	void producer(int item) throws InterruptedException {
		synchronized(this) {
			while(size==capacity) {
				System.out.println("No item to produced");
				wait();
			}
			list.add(item);
			System.out.println("Producer Produced: "+item);
			size++;
			notify();
			Thread.sleep(100);
		}
		
	}
	
	void consumer() throws InterruptedException {
		synchronized(this) {
			while(size==0) {
				System.out.println("No item to consume");
				wait();
			}
			int item=list.removeFirst();
			
			System.out.println("Consumer consumed: "+item);
			size--;
			notify();
			Thread.sleep(100);
		}
		
	}
	
}

class Producer extends Thread{
	PD p;
	Producer(PD p){
		this.p=p;
	}
	public void run() {
		for(int i=1;i<=11;i++) {
			try {
				p.producer(i);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
}

class Consumer extends Thread{
	PD p;
	Consumer(PD p){
		this.p=p;
	}
	public void run() {
		for(int i=1;i<=11;i++) {
			try {
				p.consumer();
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
}

public class check {
	public static void main(String[] args) {
		PD p=new PD();
		Producer os= new Producer(p);
		Consumer user=new Consumer(p);
		os.start();
		user.start();
	}
}
