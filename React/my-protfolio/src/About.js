import React from "react";
import 'bootstrap/dist/css/bootstrap.min.css';
import about from './image/thang_no.png';
function About() {
    return (

          <div class="container mt-lg-5 mt-sm-0 pt3 mb-lg-5 " id="about">
            <div class="row">
              <div class="col-12 p-0">
                <h4 class="online_font text-center mb-lg-5 mb-sm-2">About me</h4>
              </div>
            </div>
             <div class="row">
              <div class="col-md-6 col-12 text-center">
              <img src={about} class="img-fluid" />
              </div>
              <div class="col-md-6 col-12 d-flex flex-column justify-content-center">
                <h4 class="text-danger my-4 text-start fw-bold">FRONT-END DEVELOPER</h4>
                <p class="lead mb-4 text-start text-muted">
                   <small class="fw-sm">I am undergraduate student. I have learned Html, Css, Javascript, VueJs, Bootstrap, C++, Database, Java, Python, Algoritham from Myanmar It Bootcamp in 2021.And I'm intrested in coding as well as Drawing design.</small>
                </p>
                <div class="buttons text-start">
                  <button class="btn btn-danger px-5 py-2 me-2">Download CV</button>

                </div>
              </div>
            </div>
          </div>

    )
}

export default About;