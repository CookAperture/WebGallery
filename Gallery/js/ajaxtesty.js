function showContent() 
{
    var xhttp;
    xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function()
    {
      if (this.readyState == 4 && this.status == 200)
      {
        document.getElementById("cont").innerHTML = this.responseText;
      }
    };
    xhttp.open("GET", "../php/get.php", true);
    xhttp.send();
  }