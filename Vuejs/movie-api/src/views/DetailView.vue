<template>
    <div class="detail">
        <div class="card my-3 bg-transparent border-0 ">
            <div class="row g-0">
                <div class="col-md-3">
                
                </div>
                <div class="col-md-3">
                    <img :src="moviedetail.Poster" class="img-fluid w-md-50" alt="IMG Poster">
                </div>
                <div class="col-md-6 col-sm-12  col-12">
                    <div class="card-body mt-md-5">
                        <h5 class="card-title mb-0 text-white text-bolder">{{moviedetail.Title}}</h5>
                        <p class="card-text mb-0 text-white"><small>{{moviedetail.Language}}</small></p>
                        <p class="card-text mb-0 text-white"><small>{{moviedetail.Plot}}</small></p>
                        
                        <p class="card-text mb-0 text-white"><small>{{moviedetail.Awards}}</small></p>
                        <p class="card-text mb-0 text-white"><small>Rerleased:{{moviedetail.Released}}</small></p>
                    </div>
                </div>
            </div>
        </div>
    </div>
</template>

<script>
import venv from '@/venv.js';
const axios = require('axios').default;

export default {
    data(){
        return{
            moviedetail: "",
        }
    },
    mounted(){
            let id = this.$route.params.id
            axios.get(`https://www.omdbapi.com/?apikey=${venv.apikey}&i=${id}`)
                .then(response => {
                    this.moviedetail = response.data
                    console.log(this.moviedetail)
                })
        }
}
</script>