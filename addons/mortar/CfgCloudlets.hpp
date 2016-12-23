class CfgCloudlets
{
	class Default;

	class if_WPCloud: Default
	{
		interval = 0.2;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 0.1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.9;
		rubbing = 0.1;
		size[] = {5,10,13,16,18,20,21,22};
		color[] = {{1,1,1,1},{1,1,1,0}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "\z\ifa3_comp_ace\addons\mortar\scripts\smokeShell.sqf";
		lifeTimeVar = 0.1;
		positionVar[] = {2,0,2};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

	class if_WPTrails: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.07;
		lifeTime = "6 + (random 2)";
		moveVelocity[] = {0,"6 + (random 2)",0};
		rotationVelocity = 0;
		weight = "14.6 + (random 0.5)";
		volume = 7.9;
		rubbing = 0.1;
		size[] = {0.5};
		color[] = {{1,1,1,1}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		particleEffects = "WPTrailEffectMain2";
		lifeTimeVar = 1;
		positionVar[] = {2,2,2};
		MoveVelocityVar[] = {10,5,10};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

	class ifa3_GrenadeExp: Default
	{
		interval = 1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 1;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.05;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.9;
		rubbing = 0.1;
		size[] = {1,1};
		color[] = {{1,1,1,0},{1,1,1,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "\z\ifa3_comp_ace\addons\mortar\scripts\oskolki.sqf";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};