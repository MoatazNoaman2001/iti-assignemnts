import java.lang.*;
import java.util.*;


class Main{

	static abstract class Shape {
		public abstract void draw();
	}

	static class Circle extends Shape{
		@Override
		public void draw(){
			System.out.println("Draw a Circle");
		}
	}
	static class Rectangle extends Shape{
		@Override
		public void draw(){
			System.out.println("Draw a Rectangle");
		}
	}

	static class Test {
		public void DrawingShape(List<? extends Shape> list){
			for (Shape s : list){
				s.draw();
			}
		}
	}

	static class Complex<T>{
		private T r, i;

		Complex(T r, T i) {
			this.r = r;
			this.i = i;
		}

		void setR(T r){this.r = r;}
		T getR(){return r;}
		T getI(){return i;}
		void setI(T i){this.i = i;}

		public void add(Complex c){this.r += c.r; this.i += c.i;}
		public void sub(Complex c){this.r -= c.r; this.i -= c.i;}
		public void multiplay(Complex c){this.r *= c.r; this.i *= c.i;}
		public void div(Complex c){this.r /= c.r; this.i /= c.i;}

		@Override
		public String toString(){
			return "Complex: real: " + r + " img: " + i;
		}
	}
	public static void main (String[] args){
		Test t= new Test();
		t.DrawingShape(new ArrayList<Rectangle>(){{
			add(new Rectangle());
			add(new Rectangle());
			add(new Rectangle());
			add(new Rectangle());
		}});

				
		t.DrawingShape(new ArrayList<Circle>(){{
			add(new Circle());
			add(new Circle());
			add(new Circle());
			add(new Circle());
		}});

		Complex c = new Complex(4 , 7), c2 = new Complex(1 , 6);

		System.out.println(c);
		c2.add(c);
		System.out.println(c2);
	}
}
