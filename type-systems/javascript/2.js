class Landmark { 
  report() { 
    return "?"; 
  } 
}
class Peak extends Landmark {
  constructor(name, m) { 
    super(); 
    this.name = name; 
    this.m = m; 
  }
  
  report() { 
    return `${this.name} ${this.m}m`; 
  }
}
const announce = l => console.log(l.report());



const gear = ["rope"];
const partner = gear;
partner.push("axe");
console.log(gear.length, partner.length);

const k2 = new Peak("K2", 8611);
announce(k2);
announce({ report: () => "Baltoro 4000m" });
console.log(k2.m / 4);
console.log(2 ** 70, 2n ** 70n);
console.log(2n + 1)
