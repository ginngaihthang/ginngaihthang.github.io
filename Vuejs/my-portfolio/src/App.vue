<template>    
    <nav class="navbar navbar-expand-lg navbar-light shadow-sm   bg-body " id="navbar">
      <div class="container " >
        <a class="navbar-brand " href="#">
          Port<span class="text-danger">filio</span>
        </a>
        <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
          <span class="navbar-toggler-icon"></span>
        </button>
        <div class="collapse navbar-collapse" id="navbarSupportedContent">
          <ul class="navbar-nav ms-auto ">     
            <li class="nav-item" href="#">
              <a class="nav-link" href="#home">Home</a>
            </li>
            <li class="nav-item">
              <a class="nav-link" href="#about">About</a>
            </li>
            <li class="nav-item">
              <a class="nav-link" href="#skill">Skills</a>
            </li>
            <li class="nav-item">
              <a class="nav-link" href="#portfolio">Portfolio</a>
            </li>
            <li class="nav-item">
              <a class="nav-link" href="#contact">Contact</a>
            </li>
            
          </ul>
        </div>
      </div>
      
     
    </nav>

  <div class="container">
     <router-view/>
  </div>
</template>


<style>
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  /* -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale; */
  text-align: center;

}
*{
  margin: 0px;
  padding: 0px;

}

nav a {
  font-weight: bold;
  color: #485e74;
}

nav a.router-link-exact-active {
  color: #42b983;
}
#navbar{
    z-index: 99;
    width: 100%;
    position: fixed;


}

 


</style>
