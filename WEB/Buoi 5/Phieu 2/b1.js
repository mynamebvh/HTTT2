var button = document.getElementById('button');

button.addEventListener('click', ptBac2);

function ptBac2(){
    var valueA = document.getElementById("a").value;
    var valueB = document.getElementById('b').value;
    var valueC = document.getElementById('c').value;
   
    if(valueA === 0){
        alert("day la pt bac 1 vui long nhap pt bac 2");
    }
    else{
        var delta = valueB * valueB - (4 * valueA * valueC);
        
        if(delta < 0 ){
            alert("PT vo nghiem");
        }
        else if(delta === 0){
            alert("Pt có hai nghiệm phân biệt là x1 = x2 = " + (-valueB / 2 * valueA));
        }
        else {
            alert("Pt có hai nghiệm phân biệt là x1 = " + ((-valueB + Math.sqrt(delta)) / (2 * valueA)) + " x2 = " + (((-valueB - Math.sqrt(delta)) / (2 * valueA))));
        }
    }
    
}


