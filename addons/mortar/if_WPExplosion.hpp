class if_WPExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 1;
	};

	class Explosion1
	{
		simulation = "particles";
		type = "if_WPCloud";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};

	class Explosion2
	{
		simulation = "particles";
		type = "WPCloud";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};

	class Trails
	{
		simulation = "particles";
		type = "if_WPTrails";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};