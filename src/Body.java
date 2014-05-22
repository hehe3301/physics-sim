
public class Body {
	private Triple pos, newPos;
	private Triple vel, newVel;
	private Triple acc, newAcc;
	private Triple force, newForce;
	private double mass, radus, timestep;
	private String name;
	
	public Triple getNewForce() {
		return newForce;
	}

	public void setNewForce(Triple newForce) {
		this.newForce = newForce;
	}

	public Triple getPos() {
		return pos;
	}

	public double getMass() {
		return mass;
	}

	public double getRadus() {
		return radus;
	}

	public double G(){
		return 6.67384*Math.pow(10, -11.0);
	}
	
	public void addForce(Body that){
		Triple R = this.getPos().diff(that.getPos());
		double r = R.mag();
		double F=(this.mass*that.getMass()*G())/(r*r);
		Triple force=R.times(F/r);
		this.newForce.add(force);
	}
	public void updateAcc(){
		this.newAcc=this.newForce.times(1/this.mass);
	}
	public void updateVel(){
		this.newVel=this.vel.add(this.newAcc.times(this.timestep));
	}
	public void updatePos(){
		Triple p1 = this.newVel.times(this.timestep);
		Triple p2 = this.newAcc.times(this.timestep).times(this.timestep);
		this.newPos=this.pos.add(p1).add(p2);
	}
	@Override
	public String toString() {
		return "Body [pos=" + pos + ", name=" + name + "]";
	}

}

