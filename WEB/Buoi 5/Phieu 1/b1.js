var dayElement = document.getElementById('days');
var monthElement = document.getElementById('months');
var yearElement = document.getElementById('years');


var days = [];
var months = [];
var years = [];

for(i = 1 ; i <= 30; i++){
    var day = dayElement.innerHTML = `<option value="${i}">${i}</option>`
    days.push(day);
}
for(i = 1 ; i <= 12; i++){
    var month = monthElement.innerHTML = `<option value="${i}">${i}</option>`
    months.push(month);
}
for(i = 1900 ; i <= 2020; i++){
    var year = yearElement.innerHTML = `<option value="${i}">${i}</option>`
    years.push(year);
}

dayElement.innerHTML = days.join('');
monthElement.innerHTML = months.join('');
yearElement.innerHTML = years.join('');



