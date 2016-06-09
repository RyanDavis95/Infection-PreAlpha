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