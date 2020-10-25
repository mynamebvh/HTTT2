let submit = document.getElementById("submitForm");

const regexPhone = /^((\+84)|0)[0-9]{9}$/;
const regexPass = /^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[!@#$%^&*()]).{8,}$/

submit.addEventListener("click", () => {
  let submit1 = document.getElementById("phone").value;
  let pass1 = document.getElementById("pass").value;

  if(regexPass.test(pass1)){
    if(regexPhone.test(submit1)){
      alert("ban da dang ki thanh cong")
    }
    else {
      alert("vui long nhap lai so dt");
    }
  }
  else{
    alert("vui long nhap pass dung dinh dang" ) ;
  };

})
