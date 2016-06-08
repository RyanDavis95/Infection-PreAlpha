class Infection_Core {

    tag="INF";
        
        class Core {
            file="Core";
            
            class initSurvivor {};
            class initZombie {};
            class setupEVH {};
            
        };
        
        class Functions {
            file="Core\Functions";

            class bloodEffects {};
            class getObjHeight {};          
            class jump {};
            class keyDown {};
            class mouseDown {};
            class playMusic {};
            class setupGear {};
            class spawnPlayer {};
            
        };
        class Icons {
            file="Core\Icons";  
            
            class modIcon {};
            class drawIcon {};
            
        };
        class Stats {
            file="Core\Stats";
            
            class decStat {};
            class incStat {};
            class saveStats {};
            class showStats {};
            class updateStats {};
        };
        
        class Survivors {
            file="Core\Survivors";
            
            class HandleSurvDamage {};           
        };
        
        class Zombies {
            file="Core\Zombies";
            
            class glowEffects {};
            class zombieDmg {};
            class zombieAttack {};
        };
        
};

class Infection_Server {
    
    tag="INFS";
        
        class Server {         
            file="Server";
          
            class roundManager {};
            class setupEVH {};        
        };  
        
        class Items {
            file="Server\Items";
            
            class createGrave {};
            class dropItem {};
            class giveAmmo {};
            class giveEndurance {};
            class giveHealth {};
            class giveMine {};
            class itemPickup {};            
        };
        
        class PlayerManager {
            file="Server\PlayerManager";
            
            class connectedPlayer {};
            class disconnectedPlayer {};
            class unitKilled {};  
            class unitRespawned {};
            class updateTeams {};
        };
        
        class RoundManager {
            
            file="Server\RoundManager";
            
            class aquirePlayers {};
            class pickZombie {};
            class pickZone {};
            class resetWorld {};
            class startIntermission {};
            class startRound {};
            class stopRound {};
        };   
};