
var button = document.getElementById('equal');
var btn = document.querySelectorAll(".btn");

button.addEventListener('click', calculate);

var arr = [];
var dem = 0;
var sum = 0;

// lắng nghe người dùng ấn nút
btn.forEach(item => {
    item.addEventListener('click', () => {
        item.classList.add('secondary')
        
        //kiểm tra lấy số
        if(item.textContent >= '0' && item.textContent <= '9'){
            if(dem < 2){
                arr.push(item.textContent);
                ++dem;
            }
        } 
    })
})

function calculate(){
    for(var item of arr){
        sum += parseInt(item);
    }
    alert(`Ket qua = ${sum}`);
    location.reload();
}