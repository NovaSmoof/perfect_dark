#include <ultra64.h>

char *lang[] = {
	/*  0*/ "\n",
	/*  1*/ "Kill count",
	/*  2*/ "Died once\n",
	/*  3*/ "Died",
	/*  4*/ "times",
	/*  5*/ "Suicide count",
	/*  6*/ "Unarmed\n",
	/*  7*/ "Falcon 2\n",
	/*  8*/ "Falcon 2 (silencer)\n",
	/*  9*/ "Falcon 2 (scope)\n",
	/* 10*/ "MagSec 4\n",
	/* 11*/ "Mauler\n",
	/* 12*/ "DY357 Magnum\n",
	/* 13*/ "DY357-LX\n",
	/* 14*/ "Phoenix\n",
	/* 15*/ "CMP150\n",
	/* 16*/ "AR34\n",
	/* 17*/ "Dragon\n",
	/* 18*/ "SuperDragon\n",
	/* 19*/ "K7 Avenger\n",
	/* 20*/ "Cyclone\n",
	/* 21*/ "MagSec SMG\n",
	/* 22*/ "RC-P120\n",
	/* 23*/ "Callisto NTG\n",
	/* 24*/ "Laptop Gun\n",
	/* 25*/ "Shotgun\n",
	/* 26*/ "Reaper\n",
	/* 27*/ "Rocket Launcher\n",
	/* 28*/ "Devastator\n",
	/* 29*/ "Slayer\n",
	/* 30*/ "MaianGrenade\n",
	/* 31*/ "FarSight XR-20\n",
	/* 32*/ "Sniper Rifle\n",
	/* 33*/ "Crossbow\n",
	/* 34*/ "Tranquilizer\n",
	/* 35*/ "Combat Knife\n",
	/* 36*/ "Grenade\n",
	/* 37*/ "N-Bomb\n",
	/* 38*/ "Timed Mine\n",
	/* 39*/ "Proximity Mine\n",
	/* 40*/ "Remote Mine\n",
	/* 41*/ "ECM Mine\n",
	/* 42*/ "FlashBang\n",
	/* 43*/ "Disguise\n",
	/* 44*/ "Rocket\n",
	/* 45*/ "Homing Rocket\n",
	/* 46*/ "Grenade Round\n",
	/* 47*/ "Laser\n",
	/* 48*/ "Bolt\n",
	/* 49*/ "Psychosis Gun\n",
	/* 50*/ "PP9i\n",
	/* 51*/ "CC13\n",
	/* 52*/ "KL01313\n",
	/* 53*/ "KF7 Special\n",
	/* 54*/ "ZZT (9mm)\n",
	/* 55*/ "DMC\n",
	/* 56*/ "AR53\n",
	/* 57*/ "RC-P45\n",
	/* 58*/ "Tester\n",
	/* 59*/ "Night Vision\n",
	/* 60*/ "CamSpy\n",
	/* 61*/ "DrugSpy\n",
	/* 62*/ "BombSpy\n",
	/* 63*/ "Door Decoder\n",
	/* 64*/ "Explosives\n",
	/* 65*/ "X-Ray Scanner\n",
	/* 66*/ "Alien Medpack\n",
	/* 67*/ "Suitcase\n",
	/* 68*/ "Disguise\n",
	/* 69*/ "IR Scanner\n",
	/* 70*/ "R-Tracker\n",
	/* 71*/ "Briefcase\n",
	/* 72*/ "Suicide Pill\n",
	/* 73*/ "Cloaking Device\n",
	/* 74*/ "Combat Boost\n",
	/* 75*/ "Data Uplink\n",
	/* 76*/ "Horizon Scanner\n",
	/* 77*/ "Falcon 2 (s)\n",
	/* 78*/ "Falcon 2 (+)\n",
	/* 79*/ "FarSight\n",
	/* 80*/ "R-Launcher\n",
	/* 81*/ "Proxy Mine\n",
	/* 82*/ "Psychosis\n",
	/* 83*/ "Knife\n",
	/* 84*/ "DY357\n",
	/* 85*/ "Single Shot\n",
	/* 86*/ "Rapid Fire\n",
	/* 87*/ "Burst Fire\n",
	/* 88*/ "Reapage\n",
	/* 89*/ "Shotgun Fire\n",
	/* 90*/ "Rail-gun effect\n",
	/* 91*/ "Rocket Launch\n",
	/* 92*/ "Targetted Rocket\n",
	/* 93*/ "Fly-By-Wire Rocket\n",
	/* 94*/ "Pistol Whip\n",
	/* 95*/ "Explosive Shells\n",
	/* 96*/ "Guided Shots\n",
	/* 97*/ "Magazine Discharge\n",
	/* 98*/ "Grenade Launcher\n",
	/* 99*/ "Wall Hugger\n",
	/*100*/ "Punch\n",
	/*101*/ "Disarm\n",
	/*102*/ "Follow Lock-On\n",
	/*103*/ "Use Scope\n",
	/*104*/ "Half Magazine Discharge\n",
	/*105*/ "Double Blast\n",
	/*106*/ "Grinder\n",
	/*107*/ "Sedate\n",
	/*108*/ "Lethal Injection\n",
	/*109*/ "Knife Slash\n",
	/*110*/ "Throw Poison Knife\n",
	/*111*/ "Target Locator\n",
	/*112*/ "Instant Kill\n",
	/*113*/ "Boost\n",
	/*114*/ "Revert\n",
	/*115*/ "High Impact Shells\n",
	/*116*/ "Cloak\n",
	/*117*/ "Deploy as Sentry Gun\n",
	/*118*/ "Proximity Self Destruct\n",
	/*119*/ "Threat Detector\n",
	/*120*/ "Timed Explosive\n",
	/*121*/ "Proximity Explosive\n",
	/*122*/ "Remote Explosive\n",
	/*123*/ "Detonate\n",
	/*124*/ "4-Second Fuse\n",
	/*125*/ "Proximity Pinball\n",
	/*126*/ "Timed Detonation\n",
	/*127*/ "Proximity Detonation\n",
	/*128*/ "3-Round Burst\n",
	/*129*/ "Charge-Up Shot\n",
	/*130*/ "Crouch\n",
	/*131*/ "Infect\n",
	/*132*/ "Pulse Fire\n",
	/*133*/ "Short Range Stream\n",
	/*134*/ "Impact Detonation\n",
	/*135*/ "Light Amplifier\n",
	/*136*/ "Mobile Camera\n",
	/*137*/ "X-Ray Vision\n",
	/*138*/ "Thermal Imager\n",
	/*139*/ "Zoom\n",
	/*140*/ "Jamming Device\n",
	/*141*/ "Connect\n",
	/*142*/ "Identify Targets\n",
	/*143*/ "Wear Disguise\n",
	/*144*/ "Place Explosives\n",
	/*145*/ "Telescopic Sight\n",
	/*146*/ "Silencer\n",
	/*147*/ "Magazine Extension\n",
	/*148*/ "Laser Sight\n",
	/*149*/ "dataDyne\n",
	/*150*/ "Carrington\n",
	/*151*/ "Chesluk Industries\n",
	/*152*/ "Skedar\n",
	/*153*/ "Maian\n",
	/*154*/ "JonesCorp\n",
	/*155*/ "Even without a weapon, you are still a worthy adversary. Use your fists to knock your opponents out or disarm them and use their weapons against them.\n",
	/*156*/ "Accurate and trustworthy, this gun is the workhorse of the Institute's operations. Use the laser sight to place bullets with deadly effect, or pistol-whip adversaries to knock them out.\n",
	/*157*/ "An upgraded Falcon 2, which has the added benefit of being silent, but deadly.\n",
	/*158*/ "An upgraded Falcon 2, featuring a 2x magnification scope which allows you to take advantage of the Falcon's superior accuracy.\n",
	/*159*/ "A state-of-the-art military pistol, largely used by peacekeeping forces. It has a slight zoom capability, and boasts a 3-round burst secondary fire mode.\n",
	/*160*/ "If you see a Skedar coming at you, the chances are it's carrying one of these. A large magazine and a bladed barrel make the pistol a formidable handgun, but the killer blow comes from the secondary function - charge the shot up for extra power at the cost of a few rounds of ammo.\n",
	/*161*/ "The dataDyne DY357 is the most powerful handgun in the world. Each round has an impressive penetration factor and knocks the target back with the weight and power of the shot. Custom models are made for valued clients; NSA director Trent Easton is rumored to have a gold plated variant.\n",
	/*162*/ "The DY357-LX was custom built for NSA director Trent Easton. Besides boasting an attractive genuine tiger skin grip, this golden gun features a velocity optimized barrel, meaning that each bullet always meets its target with fatal force.\n",
	/*163*/ "The Maian standard issue sidearm. A flexible gun, the pistol fires standard shots, or explosive shots at no cost to the rest of the magazine.\n",
	/*164*/ "A dataDyne classic, and a bestseller, this submachine gun boasts a 32 rnd mag and a special feature - the ability to designate and lock on to targets in the line of sight. It turns an average marksman into an excellent one, provided he or she is clever enough to operate the gun. Average fire rate: 900 rpm.\n",
	/*165*/ "The Carrington Institute's main assault rifle. A good range and magazine size make it a useful weapon; the secondary mode enables the user to move while zoomed in on a target. Average fire rate: 750 rpm.\n",
	/*166*/ "A standard assault rifle with an evil twist - when the secondary mode is activated, it becomes a proximity-activated mine that looks like a gun. Average fire rate: 700 rpm.\n",
	/*167*/ "A variant of the Dragon assault rifle - instead of a proximity explosive, it has a small grenade launcher. Excellent support weapon. Average fire rate: 700 rpm.\n",
	/*168*/ "Another piece of high-tech kit from dataDyne. Ordinarily an assault rifle with a smallish magazine and a powerful punch, it has a threat detection mode that highlights explosives, wallguns, and similar hazards. Average fire rate: 950 rpm.\n",
	/*169*/ "Designed for use by bodyguards, the Cyclone has been adopted by Presidential Security due to its excellent capability when used for suppression. In extreme circumstances, it can more than double the fire rate, discharging the magazine in a second. Average fire rate: 900 rpm. Unloads at 2000 rpm.\n",
	/*170*/ "The Carrington Institute secret weapon. It fires at a phenomenal rate and has a huge magazine capacity. The secondary mode is a cloaking device that runs off the ammunition in the magazine. A devastating weapon. Average fire rate: 1100 rpm.\n",
	/*171*/ "Another example of excellent Maian firearm design. It can fire standard shots as fast as any other SMG, or it can fire high velocity rounds which will easily penetrate objects to find targets hiding in cover. The only drawbacks with the secondary fire mode are that the fire rate is lower and the accuracy suffers from the power of the shot. Average fire rate: 900 rpm (s/f:300 rpm).\n",
	/*172*/ "A submachine gun made to look like a laptop PC. In disguised form, the gun cannot fire, but when activated, it unfolds into shape. The PC gun will not bear close inspection; it will boot up, but the memory is a quarter of what it is supposed to be. Average fire rate: 1000 rpm.\n",
	/*173*/ "A dataDyne weapon manufactured for security forces. A nine-cartridge magazine combined with single or double fire modes make it a dangerous close-quarters weapon.\n",
	/*174*/ "A truly terrifying weapon in the hands of someone strong enough to control the massive recoil; for anyone else, a highly unwieldy but effective corridor clearance weapon. Maximum fire rate: 1800 rpm.\n",
	/*175*/ "A cumbersome weapon. Fires either a standard rocket or a slower, homing rocket when locked on to the unfortunate target.\n",
	/*176*/ "A long range grenade delivery system manufactured by dataDyne. The secondary fire mode coats the grenades with a sticky substance; when fired, the bomb attaches itself to wall or ceiling. After a few seconds, it detaches to fall to the ground, where it detonates.\n",
	/*177*/ "The Skedar enjoy seeing the terror of their enemies. It seems natural that they should have a remote-controlled rocket as a secondary fire mode on their basic rocket launcher, so that they can take pleasure from the prey's vain attempts to escape the closing projectile.\n",
	/*178*/ "The FarSight rifle is a Maian hybrid of an X-ray scanning device coupled with a rifle that can shoot through solid objects. The scope can lock onto and track life sources, though the device does not pan as fast as a running enemy can move.\n",
	/*179*/ "With a powerful zoom and a high velocity bullet, this Carrington Institute weapon is one of the best sniper rifles ever made. Crouch down for perfectaccuracy.\n",
	/*180*/ "This crossbow is a short-range 'pistol' sized example, mounted on a Carrington Institute agent's wrist. It folds up to aid concealment and can fire up to five bolts, either the more usual drugged shots, or a lethal bolt.\n",
	/*181*/ "A rapid-fire device, it can be used as a weapon in an emergency, but it is designed primarily as a dermal spray injector for sedative drugs. Users are advised that a full discharge of the drug reservoir can be fatal.\n",
	/*182*/ "A large and vicious combat knife. It contains a vial of poison that shatters when thrown, giving a wounded enemy at most 6 seconds to live. A dataDyne weapon through and through.\n",
	/*183*/ "An updated version of the trusty grenade. Can be thrown with a four-second fuse or used as a bouncing proximity bomb.\n",
	/*184*/ "A hand-held, small area effect neutron bomb. It can either detonate on impact or be set to proximity detonation.\n",
	/*185*/ "A mine with a short timed fuse. It has a threat detection/evaluation sensor that can be activated as a secondary mode.\n",
	/*186*/ "A mine with a proximity fuse. It has a threat detection/evaluation sensor that can be activated as a secondary mode.\n",
	/*187*/ "A mine that can be triggered remotely. The activate command is the secondary mode.\n",
	/*188*/ "A focused white-noise jamming device, capable of simulating one of many common electrical faults in any system to which it is directly attached.\n",
	/*189*/ "The laser is wrist-mounted and deadly accurate. It can either fire long-range pulses, or it can sustain a constant, concentrated stream of energy at short range.\n",
	/*190*/ "Geneered stimulants designed for combat applications. When administered, they seem to slow down the passage of time to give a reaction window.\n",
	/*191*/ "The latest of a line of 'starlight' scopes that enhance visible light to produce a clearer picture of the surrounding environment. Uses a target-movement algorithm to highlight possible threats.\n",
	/*192*/ "Using the smallest application yet of anti-grav technology, this is the ultimate snooping device. It has a video/audio link with a recording function and an onboard facility for spectroscopic holography.\n",
	/*193*/ "A short-range scope that can see through any material - even lead - producing a simplified chromatic representation of the environment.\n",
	/*194*/ "This scope uses infra-red scanning modulated with ultrasonic data to provide not only a clearer picture of the surrounding area, but also a location of any structural irregularities. It can also locate enemies using cloaking technology or other optical baffles.\n",
	/*195*/ "Uses the light-warping qualities of an alien crystal to create a refractive field around the wearer. Functions as long as there is little kinetic disturbance within the field boundary; the act of firing a gun is enough to cause a return to visibility.\n",
	/*196*/ "A binocular-input long range visual scanner. The visor shows a composite image of the two input sources. Also has a zoom function.\n",
	/*197*/ "Capable of remote interrogation of almost any type of stored data, which is sent directly back to the Institute computer hackers. A variant of this device provides the hackers with a direct link into the local system.\n",
	/*198*/ "A powerful tracking device that can be customized to fit any set of parameters: people, weapons, objects, and locations are some of the possibilities.\n",
	/*199*/ "A modified medical scanner that contains the most up-to-date record of the President's state of health and a library of past conditions and treatments. It can detect the vital functions of the President from a distance, even when the target is in the middle of a crowd.\n",
	/*200*/ "A safecracker, pure and simple. Breaks electronic encoded locks, usually in a matter of seconds, though this, of course, depends on the individual lock.\n",
	/*201*/ "Maian medical marvel, can auto-diagnose and perform surgical procedures without the need of incisions. One drawback is that it only works on Maians; the other drawback is the lack of a bedside manner.\n",
	/*202*/ "A small plastic explosive charge, complete with sealed tamper-proof timer, and embedded with teflon-coated shrapnel. Nasty.\n",
	/*203*/ "As you are aware, this is a directional fusion bomb, to be placed so that the charge is directed downwards. This will obliterate the dataDyne research labs and cause the rest of the building to collapse into the hole.\n",
	/*204*/ "A small bug that is attached to any part of a communication relay. It 'piggybacks' the official signal, enabling the link between Institute and agent to be maintained through intensive local countermeasures; to all intents and purposes, it is part of the target location's comms setup.\n",
	/*205*/ "The inner workings of this bug are a closely guarded secret - the self-destruct mechanism forms a large part of the device. It is speculated that this is an example of quantum molecular communication, which explains the phenomenal reliability of the device in field use.\n",
	/*206*/ "Uses quantum communication technology to provide supremely accurate targetting infomation to orbital weapons, helping to minimize collateral damage. The same technology is used in the Carrington Institute tracker bugs.\n",
	/*207*/ "Details of the flight path and communication codes and frequencies for Air Force One - also current encryption keys.\n",
	/*208*/ "All data pertaining to ocean floor research carried out by dataDyne on the pirated deep sea diving operations vessel Pelagic II. Contents  sonar mapping, geological data, alien artifact data, hull samples, etc.\n",
	/*209*/ "The last personality-state recording of the artificial intelligence, self-designated Dr. Caroll, prior to memory wipe and cerebral restructuring. Use for case study, theoretical projections only. Morally incorrupt, and therefore dangerous. dataDyne I.S.C.E.O. 23/6/23\n",
	/*210*/ "A chemical cocktail that warps the perceived reality of the target. Good becomes bad, bad becomes good; enemies and friends change places. Another one of the darker research projects from Trent Easton's Area 51.\n",
	/*211*/ "Not your normal outfit. Wear it to pretend not to be you.\n",
	/*212*/ "PROXY\n",
	/*213*/ "TIMED\n",
	/*214*/ "REMOTE\n",
	/*215*/ "AUTOGUN\n",
	/*216*/ "IMPACT\n",
	/*217*/ "Big King Rocket\n",
	/*218*/ "Data Uplink\n",
	/*219*/ "President Scanner\n",
	/*220*/ "AutoSurgeon\n",
	/*221*/ "Skedar Bomb\n",
	/*222*/ "Comms Rider\n",
	/*223*/ "Tracer Bug\n",
	/*224*/ "Target Amplifier\n",
	/*225*/ "Flight Plans\n",
	/*226*/ "Research Tape\n",
	/*227*/ "Backup Disk\n",
	/*228*/ "Key Card\n",
	/*229*/ "Briefcase\n",
	/*230*/ "Necklace\n",
	/*231*/ "PresidentScan\n",
	/*232*/ "Boost\n",
	/*233*/ "XRayScan\n",
	/*234*/ "HorizonScan\n",
	/*235*/ "Target Amp\n",
	/*236*/ "In this version of the CamSpy the recording device has been replaced by a highly powerful plastic explosive.\n",
	/*237*/ "This version of the CamSpy Uses a paralysing nerve toxin to induce near-instant catatonia in targets.\n",
	/*238*/ "Cassandra De Vries' necklace. fitted with a proximity key tag to allow access to restricted areas. mk3 model only functions while owner is alive. security class AA-1 (gamma).",
	/*239*/ "Cassandra De Vries' replacement necklace.  Username: CDV780322  Password: I8MOZYM8NDI85\n",
};
