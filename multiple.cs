using System;
namespace multiple_inheritance{

	interface calcu1{
		int add(int a, int b);
	}

	interface calcu2{
		int sub(int c, int d);
	}

	interface calcu3{
		int multi(int e, int f);
	}

	interface calcu4{
		int div(int g, int h);
	}




	class Calculation : calcu1, calcu2, calcu3, calcu4{

		public int result1, result2, result3, result4;

		public int add(int a, int b){
			return result1 = a + b;
		}

		public int sub(int c, int d){
			return result2 = c - d;
		}

		public int multi(int e, int f){
			return result3 = e * f;
		}

		public int div(int g, int h){
			return result4 = g / h;
		}
	}


	class Program
	{
		static void Main(string[] args)
		{
			Calculation c = new Calculation();

			c.add(10, 21);
			c.sub(33, 21);
			c.multi(5, 4);
			c.div(55, 11);

			Console.WriteLine("Addition: " + c.result1);
			Console.WriteLine("Subtraction: " + c.result2);
			Console.WriteLine("Multiplication: " + c.result3);
			Console.WriteLine("Division: " + c.result4);
			
			Console.ReadKey();


		}
	}
}
