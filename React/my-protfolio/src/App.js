import 'bootstrap/dist/css/bootstrap.min.css';
import React from "react";
import './App.css';
import Home from './Home';
import About from './About';
import Skill from './Skill';
function App() {

  return (
    <div>
      <nav class="navbar navbar-expand-lg navbar-light shadow-sm py-1  bg-body " id="navbar">
      <div class="container">
        <a class="navbar-brand text-start" href="#">
          Port<span class="text-danger">filio</span>
        </a>
        <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
          <span class="navbar-toggler-icon"></span>
        </button>
        <div class="collapse navbar-collapse" id="navbarSupportedContent">
          <ul class="navbar-nav ms-auto mb-2 mb-lg-0">     
            <li class="nav-item" href="#">
              <a class="nav-link" href="#home">Home</a>
            </li>
            <li class="nav-item">
              <a class="nav-link" href="#about">About</a>
            </li>
            <li class="nav-item">
              <a class="nav-link" href="#skills">Skills</a>
            </li>
            <li class="nav-item">
              <a class="nav-link" href="#contact">Contact</a>
            </li>
          </ul>
        </div>
      </div>
      
     
    </nav>
    <section>
      <Home />
    </section>
    <section>
      <About />
    </section>
    
    </div>
  )
}

export default App;