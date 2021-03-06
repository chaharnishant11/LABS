3D Transformation of a Cube.

Translation

	

A translation in space is described by tx, ty and tz. It is easy to see that this matrix realizes the equations:

	x2=x1+tx
	y2=y1+ty
	z2=z1+tz

Scaling	

Scaling in space is described by sx, sy and sz. We see that this matrix realizes the following equations:

	x2=x1·sx
	y2=y1·sy
	z2=z1·sz
		
Rotation

3D rotation is not same as 2D rotation. In 3D rotation, we have to specify the angle of rotation along with the axis of rotation. We can perform 3D rotation about X, Y, and Z axes. They are represented in the matrix form as below −

   Rx(θ)=   {1 0     0    0 
	    0 cosθ  sinθ 0 
            0 −sinθ cosθ 0
            0 0     0    1}

   Ry(θ)=  { cosθ 0 −sinθ 0 
            0    1  0    0
            sinθ 0  cosθ 0
            0    0  0    1}

   Rz(θ)=  {cosθ  sinθ 0 0
            −sinθ cosθ 0 0
            0     0    1 0
            0     0    0 1}
