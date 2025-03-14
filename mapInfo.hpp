class mc3_terrain {
	//
	population[] = {
		{"Old Town",1236}
	};
	//
	disabledTowns[] = {}; //no towns that need to be disabled
	antennas[] = {
		
	};
	antennasBlacklistIndex[] = {};
	banks[] = {
		{8362.23,4148.2,-0.236536},{8842.68,3767.72,0},{9007.32,3668.92,0.00212669},{9840.79,3427.74,-0.467955},{9858.21,3354.28,-0.674835},{9970.96,3165.36,0.00209427},{8210.48,3445.33,-0.352077},{8349.15,3396.34,0},{9686.81,3109.43,-0.319984},{9178.68,3097.26,-0.311712},{8215.76,3275.86,-0.837046},{9024.81,3064.7,-0.675116},{8182.23,3258.47,-0.841965},{7922.03,3291.24,-0.672298},{8329.94,3106.38,0.260946},{9931.82,2822.93,0.260925},{9284.46,2877.09,-0.199999},{8669.52,2937.38,-0.566114},{8738.16,2909.68,0.260946},{7651.26,3191.64,-0.837465},{8663.1,2876.72,0},{8556.46,2872.75,-0.801168},{8907.91,2781.42,-0.355707},{8328.43,2881.14,-0.858719},{8255.64,2881.38,-0.599262},{9690.26,2622.78,-0.406462},{8300.55,2779.1,-0.638676},{7175,3113.52,0.0223827},{7654.73,2879.77,0},{10550,2436.93,-0.00618935},{6700.12,3249.72,0.0273418},{6373.17,3410.43,0},{7278.1,2961.2,0},{7874.29,2734.98,-0.378538},{10620.4,2321.19,-0.607138},{6842.41,3070.59,0},{10559.8,2260.31,-0.764383},{7246.3,2827.52,-0.515236},{6180.34,3352.37,0},{10269.6,2134.37,-0.630077},{8593.92,2261.85,-0.469728},{6258.62,3102.2,-0.786856},{6640.62,2858.58,0},{7915.17,2362.86,-0.815033},{10200.1,1936.33,-0.199999},{7947.78,2243.67,0.199999},{10514.6,1903.42,-0.502371},{8255.1,2134.37,0},{6142.99,2924.96,-0.483217},{10132.5,1837.83,-0.81827},{6992.6,2442.54,-0.00700569},{6581.79,2622.2,0},{8727.81,1923.57,0},{9247.25,1816.3,-0.771967},{9182.65,1805.79,-0.854271},{9246.8,1788.06,-0.788549},{9151.87,1764.54,-0.0163231},{9300.18,1719.24,-0.5},{6981.48,2298.69,0},{8587.79,1804.53,-0.55131},{9386.29,1687.29,-0.879},{7822.61,1988.27,-0.579514},{9621.47,1660.78,-0.475275},{9242.15,1698.48,-0.5},{6800.52,2325.72,0},{7753.61,1950.62,0},{6866.85,2263.29,0},{6711.27,2322.36,0},{8252.34,1794.58,0},{7175,2109.25,-0.233671},{7665.13,1923.38,-0.464102},{6486.76,2376.11,0.00739288},{6579.98,2299.51,0},{6711.29,2223.43,0},{6947.27,2120.16,0},{6360.84,2377.65,-0.5},{6759.74,2173.73,0},{8470.71,1635.66,0},{6466.65,2233.59,0},{6195.63,2368.69,0},{6862.55,2055.77,0},{6941.29,2006.33,0},{6685.07,2112.05,0},{7297.38,1845.32,0},{6595.76,2119.38,0},{7445.31,1756.06,0},{6336.22,2196.16,0},{6686.94,2032.77,0},{6416.82,2141.77,0},{6549.8,2049.75,0},{7644.1,1635.84,-0.504055},{6067.99,2283.8,0.00518608},{6927.66,1866.67,0},{6664.87,1974.09,0},{7210.35,1676.17,0},{6009.41,2200.53,0},{7141.85,1673.15,-0.480425},{6539.75,1904.45,0},{6050.62,2127.14,0},{6018.34,2120.5,0},{6278.63,1957.58,0},{5378.49,2434.36,0.00714302},{6980.38,1633.23,0},{6913.54,1633.49,0},{6091.26,1959.37,0},{5360.18,2350.84,0},{5273.23,2312.3,-0.643581},{5806.64,1997.19,0},{5471.72,2173.6,-0.314426},{5773.54,1955.5,0},{6339.06,1633.64,0},{5471.74,2081.55,0.00209808},{5344.96,2015.45,0},{5273.73,1973.1,-0.608746},{5210.32,1997.92,-0.0998745},{5043.18,2079.17,0},{5053.93,1562.26,-0.316498}
	};
	garrison[] = {
		{},{"airport_1","outpost_10","resource_13"},{},{}
	};
	fuelStationTypes[] = {
		"Land_FuelStation_Feed_F","Land_fs_feed_F","Land_FuelStation_01_pump_malevil_F","Land_FuelStation_01_pump_F","Land_FuelStation_02_pump_F","Land_FuelStation_03_pump_F"
	};
	climate = "arid";
	buildObjects[] = {
		// Large vanilla tropical structures
		{"Land_BagBunker_01_large_green_F", 300}, {"Land_HBarrier_01_tower_green_F", 300}, {"Land_BagBunker_01_small_green_F", 60},
		{"Land_Shed_09_F", 120}, {"Land_Shed_10_F", 140}, {"Land_House_Big_02_F", 500},
		// vanilla tropical sandbag walls
		{"Land_BagFence_01_short_green_F", 10}, {"Land_BagFence_01_round_green_F", 10}, {"Land_BagFence_01_long_green_F", 10},
		// Non-camo vanilla stuff
		{"Land_SandbagBarricade_01_half_F", 20}, {"Land_SlumWall_01_s_2m_F", 5},
		{"Land_Barricade_01_4m_F", 30}, {"Land_GuardBox_01_brown_F", 80}, {"Land_Tyres_F", 10}
	};
};
