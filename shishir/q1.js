function validateForm(aregex) {
    let x = document.forms["myForm"]["fname"].value;
    let y = document.forms["myForm"]["lname"].value;
    var validRegex = /^[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9-]+(?:\.[a-zA-Z0-9-]+)*$/;
    if (x.trim() == "") {
      alert("Name must be filled out");
      return false;
    }else if(y.trim() == ""){
        alert("Last Name should be filled");
    }else if (aregex.value.match(validRegex)) {

        alert("Valid email address!");
    
        document.form1.text1.focus();
    
        return true;
    
      } else {
    
        alert("Invalid email address!");
    
        document.form1.text1.focus();
    
        return false;
    
      }


    }