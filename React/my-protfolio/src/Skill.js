import React from "react";
import 'bootstrap/dist/css/bootstrap.min.css';
import skill from './image/m1.jpg';
function Skill() {
    return (
        <div class="container my-lg-5 my-sm-3 my-3">
      <div class="row ">
        <div class="col-12 pb-2">
          <h4 class=" online_font text-center">My skills</h4>
        </div>
      </div>
      <div class="row">
        <div class="col-md-6">
          <h5 class="fw-bold my-3 text-start">Skills & Experiences</h5>
          <div class="lead text-start">
            <small>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Nisi odio vitae repellendus aperiam cum commodi, repellat sapiente rerum quia quis excepturi adipisci, at eos vero. Neque iste aspernatur.</small>
            <ul class="list-group ">
              <li class="list-group-item p-0 shadow_css   border-0">
                <div class="ps-3 py-2">
                  <svg xmlns="http://www.w3.org/2000/svg"  width="30" height="30" fill="currentColor" class="bi bi-filetype-html text-danger" viewBox="0 0 384 512">
                    <path d="M0 32l34.9 395.8L191.5 480l157.6-52.2L384 32H0zm308.2 127.9H124.4l4.1 49.4h175.6l-13.6 148.4-97.9 27v.3h-1.1l-98.7-27.3-6-75.8h47.7L138 320l53.5 14.5 53.7-14.5 6-62.2H84.3L71.5 112.2h241.1l-4.4 47.7z"/>
                    </svg> 
                    <small>  HTML 5</small>
                </div>
                <div class="progress-bar bg-danger skillset" role="progressbar" style="width: 90%" aria-valuenow="75" aria-valuemin="0" aria-valuemax="100"></div>
              </li>
              <br/>
              <li class="list-group-item p-0 shadow_css  border-0 proces">
                <div class="ps-3 py-2">
                   <svg xmlns="http://www.w3.org/2000/svg"  width="30" height="30"  fill="currentColor" class="bi bi-filetype-scss text-danger" viewBox="0 0 384 512"><path d="M0 32l34.9 395.8L192 480l157.1-52.2L384 32H0zm313.1 80l-4.8 47.3L193 208.6l-.3.1h111.5l-12.8 146.6-98.2 28.7-98.8-29.2-6.4-73.9h48.9l3.2 38.3 52.6 13.3 54.7-15.4 3.7-61.6-166.3-.5v-.1l-.2.1-3.6-46.3L193.1 162l6.5-2.7H76.7L70.9 112h242.2z"/></svg>
                    <small>  CSS 3</small>
                </div>
                <div class="progress-bar bg-danger skillset" role="progressbar" style="width: 85%" aria-valuenow="85" aria-valuemin="0" aria-valuemax="100"></div>
              </li>
              <br/>
              <li class="list-group-item p-0 shadow_css border-0 proces">
                <div class="ps-3 py-2">
                  <svg xmlns="http://www.w3.org/2000/svg"  width="30" height="30" fill="currentColor" class="bi bi-filetype-js text-danger"  viewBox="0 0 448 512"><path d="M0 32v448h448V32H0zm243.8 349.4c0 43.6-25.6 63.5-62.9 63.5-33.7 0-53.2-17.4-63.2-38.5l34.3-20.7c6.6 11.7 12.6 21.6 27.1 21.6 13.8 0 22.6-5.4 22.6-26.5V237.7h42.1v143.7zm99.6 63.5c-39.1 0-64.4-18.6-76.7-43l34.3-19.8c9 14.7 20.8 25.6 41.5 25.6 17.4 0 28.6-8.7 28.6-20.8 0-14.4-11.4-19.5-30.7-28l-10.5-4.5c-30.4-12.9-50.5-29.2-50.5-63.5 0-31.6 24.1-55.6 61.6-55.6 26.8 0 46 9.3 59.8 33.7L368 290c-7.2-12.9-15-18-27.1-18-12.3 0-20.1 7.8-20.1 18 0 12.6 7.8 17.7 25.9 25.6l10.5 4.5c35.8 15.3 55.9 31 55.9 66.2 0 37.8-29.8 58.6-69.7 58.6z"/></svg>
                    <small>  JAVASCRIPT</small>
                </div>
                <div class="progress-bar bg-danger skillset" role="progressbar" style="width: 75%" aria-valuenow="70" aria-valuemin="0" aria-valuemax="100"></div>
              </li>
              <br/>
              <li class="list-group-item p-0 shadow_css border-0 proces">
                <div class="ps-3 py-2">
                  <svg xmlns="http://www.w3.org/2000/svg" width="30" height="30" fill="currentColor" class="text-danger" viewBox="0 0 384 512"><path d="M14 95.7924C14 42.8877 56.8878 0 109.793 0H274.161C327.066 0 369.954 42.8877 369.954 95.7924C369.954 129.292 352.758 158.776 326.711 175.897C352.758 193.019 369.954 222.502 369.954 256.002C369.954 308.907 327.066 351.795 274.161 351.795H272.081C247.279 351.795 224.678 342.369 207.666 326.904V415.167C207.666 468.777 163.657 512 110.309 512C57.5361 512 14 469.243 14 416.207C14 382.709 31.1945 353.227 57.2392 336.105C31.1945 318.983 14 289.5 14 256.002C14 222.502 31.196 193.019 57.2425 175.897C31.196 158.776 14 129.292 14 95.7924ZM176.288 191.587H109.793C74.2172 191.587 45.3778 220.427 45.3778 256.002C45.3778 291.44 73.9948 320.194 109.381 320.416C109.518 320.415 109.655 320.415 109.793 320.415H176.288V191.587ZM207.666 256.002C207.666 291.577 236.505 320.417 272.081 320.417H274.161C309.737 320.417 338.576 291.577 338.576 256.002C338.576 220.427 309.737 191.587 274.161 191.587H272.081C236.505 191.587 207.666 220.427 207.666 256.002ZM109.793 351.795C109.655 351.795 109.518 351.794 109.381 351.794C73.9948 352.015 45.3778 380.769 45.3778 416.207C45.3778 451.652 74.6025 480.622 110.309 480.622C146.591 480.622 176.288 451.186 176.288 415.167V351.795H109.793ZM109.793 31.3778C74.2172 31.3778 45.3778 60.2173 45.3778 95.7924C45.3778 131.368 74.2172 160.207 109.793 160.207H176.288V31.3778H109.793ZM207.666 160.207H274.161C309.737 160.207 338.576 131.368 338.576 95.7924C338.576 60.2173 309.737 31.3778 274.161 31.3778H207.666V160.207Z"/></svg>
                    <small>  Figama</small>
                </div>
                <div class="progress-bar bg-danger skillset" role="progressbar" style="width: 70%" aria-valuenow="70" aria-valuemin="0" aria-valuemax="100"></div>
              </li>
            </ul>
        </div>
        </div>
        <div class="col-md-6 d-flex flex-column justify-content-center">
            <img src={skill} class="img-fluid skillImg" alt="Skill"/>
        </div>
      </div>
    </div>
 
    )
}

export default Skill;