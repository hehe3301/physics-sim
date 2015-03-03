

public class Triple {
	private double x;
	private double y;
	private double z;
	
	public Triple(double x, double y, double z){
		this.x=x;
		this.y=y;
		this.z=z;
	}
	
	public Triple add(Triple o){
		return new Triple(this.x + o.x(), this.y+o.y(), this.z+o.z());
	}
	
	/**
	 * subtracts two vectors and returns the vector from A to B
	 * @param o -The destination point
	 * @return the vector to "o"
	 */
	public Triple diff(Triple o){
		return new Triple(o.x()-this.x, o.y()-this.y, o.z()-this.z);
	}
	
	public Triple times(double d){
		return new Triple(this.x*d, this.y*d, this.z*d );
	}

	public double x() {
		return x;
	}

	public void x(double x) {
		this.x = x;
	}

	public double y() {
		return y;
	}

	public void y(double y) {
		this.y = y;
	}

	public double z() {
		return z;
	}

	public void z(double z) {
		this.z = z;
	}
	
	public double mag(){
		return Math.sqrt(this.x*this.x + this.y*this.y + this.z*this.z);
	}

	@Override
	public String toString() {
		return "("+this.x+", "+this.y+", "+this.z+")";
	}
	
	

}
