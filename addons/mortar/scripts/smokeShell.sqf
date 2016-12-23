if (local player) then 
{

_this spawn
{
_smoke = 'G_40mm_Smoke'  createVehicleLocal _this;
_smoke setpos _this;


_sm1 = "#particlesource" createVehicleLocal (getPos _smoke);
_sm1 setParticleRandom 
[
/*LifeTime*/		0,
/*Position*/		[1+random(0.5),1+random(0.5),0+random(0.5)],
/*MoveVelocity*/	[2+random(0.5), 2+random(0.5), 0+random(1)],
/*rotationVel*/		0,
/*Scale*/		0.0,
/*Color*/		[0.1, 0.1, 0.1, 0.1],
/*randDirPeriod*/	0,
/*randDirIntesity*/	0,
/*Angle*/		360
];
_sm1 setParticleParams 
[
/*Sprite*/	    [ "\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 13, 0],"",
/*Type*/			"Billboard",
/*TimmerPer*/		1,
/*Lifetime*/		(20+random(2.5)),
/*Position*/		[0,0,0],
/*MoveVelocity*/	[0, 0, 0],
/*Simulation*/	 1+random(0.25), 9-random(0.15),7, 0.5, //rotationVel,weight,volume,rubbing
/*Scale*/		[1+random(0.3),3+random(1.3),7+random(2.3),10+random(1.3),12,13,13.5,14,14.25,14.5,14.75,(15+random(0.25))],
/*Color*/		[[1, 1, 1, 0],[1, 1, 1, 1],[1, 1, 1, 0.8],[1, 1, 1, 0.7], [1, 1, 1, 0.35], [1, 1, 1, 0]],
/*AnimSpeed*/		[1],
/*randDirPeriod*/	1,
/*randDirIntesity*/	0,
/*onTimerScript*/	"",
/*DestroyScript*/	"",
/*Follow*/		_smoke,
/*Angle*/              0,
/*onSurface*/          true,
/*bounceOnSurface*/    0.5,
/*emissiveColor*/      [[0,0,0,0]]
];
	
_sm1 setDropInterval 0.05;
sleep 45;
deleteVehicle _sm1;
};
};