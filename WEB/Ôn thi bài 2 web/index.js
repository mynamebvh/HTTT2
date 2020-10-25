var btn = document.getElementById("btn");

btn.addEventListener("click", () => {
  var a = document.getElementById("input1").value;
  var b = document.getElementById("input2").value;
  var c = document.getElementById("input3").value;

  var a = parseInt(a);
  var b = parseInt(b);
  var c = parseInt(c);


  let delta = b * b - 4 * a * c;

  
  if(delta < 0){
    alert("pt vo nghiem");
    return;
  }

  if(delta === 0){
    alert("pt nghiem kep " + "x1 = x2 = " + (-b * 1.0 / 2 * a));
    return;
  }

  else {
    alert("pt co nghiem phan biet " + "x1 = " + 1.0 * (-b - Math.sqrt(delta)) / (2 * a) 
      + "x2 = " + 1.0 * (-b + Math.sqrt(delta)) / (2 * a));
  }
});

