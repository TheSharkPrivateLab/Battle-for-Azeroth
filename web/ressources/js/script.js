function print(p) { console.log(p); }
function ping() { print("ping");}
function randRain() {
    var rand = Math.floor((Math.random() * 500) + 1);
    return (rand === 1);
}

class Player{
    constructor(name) {
        this.name = name;
        this.money = 0;
        this.team = [];
    }

    growFlowers() {
        var x = 0;
        var rain = randRain();
        var player = this;
        this.flowers.forEach(function (flower) {
            if (flower.grown === false) {
                updateFlower(flower, rain);
            }
            else {
                flower.vitality -= 2;
            }
            if (flower.vitality <= 0) {
                player.flowers.splice(x, 1);
                displayEvent(player);
            }
            x++;
        });
    }
}

class Hero {
    constructor() {
        this.vitality = 1000;
        this.growth = 0;
        this.moisture = 1000;
        this.grown = false;
    }

    water(amount) {
        this.moisture += amount;
        if (this.moisture < 0) {
            this.moisture = 0;
        }
    }
}

function displayMainMenu() {
    var body = $("body"); 
    body.html("<h1 class=\"text-center\">Battle for Azeroth</h1>" +
        "<nav class=\"navbar navbar-toggleable-md navbar-light bg-faded\">"+
        "<button class=\"navbar-toggler navbar-toggler-right\" type=\"button\" data-toggle=\"collapse\" data-target=\"#navbarNav\" aria-controls=\"navbarNav\" aria-expanded=\"false\" aria-label=\"Toggle navigation\">"+
        "<span class=\"navbar-toggler-icon\"></span>"+
        "</button>"+
        "<img src=\"ressources/img/favicon.png\" width=\"30\" height=\"30\" class=\"d-inline-block align-top\" alt=\"\">"+
        "<div class=\"collapse navbar-collapse\" id=\"navbarNav\">"+
        "<ul class=\"navbar-nav\">"+
        "<li class=\"nav-item active\">"+
            "<a class=\"nav-link\" href=\"#\">Village<span class=\"sr-only\">(current)</span></a>"+
        "</li>"+
        "<li class=\"nav-item\">"+
            "<a class=\"nav-link disabled\" href=\"#\">Joueur</a>"+
       "</li>"+
        "<li class=\"nav-item\">"+
            "<a class=\"nav-link disabled\" href=\"#\">Recruter</a>"+
       "</li>"+
        "<li class=\"nav-item\">"+
            "<a class=\"nav-link disabled\" href=\"#\">&Eacute;quipe</a>"+
        "</li>"+
        "</ul>"+
        "</div>" +
        "</nav>");


};