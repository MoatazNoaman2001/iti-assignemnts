import java.lang.*;
import java.util.*;
import java.util.function.*;


public class Main{

	public static Function<Double, Double> c_t = (c) -> (c * 9/5) + 35;
	public static void main(String[] args){
		System.out.println(c_t.apply(37.7));

		Function<Double[] , Double> innerSolver = (values) ->{
			return values[1] * values[1] - 4 * values[0] * values[2];
		};

		Function<Double[], Double[]> quadratic = (values)->{
		
			Double inner = innerSolver.apply(values);

			Double innerSquered = Math.sqrt(inner);

			return new Double[]{
				(-values[1] + innerSquered) / ( 2 * values[0]),	
				(-values[1] - innerSquered) / ( 2 * values[0]),
			};
		
		};

		System.out.println(Arrays.toString(quadratic.apply((new Double[]{1.0 , -3.0 , 2.0}))));
		
	}

}
