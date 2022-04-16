import { createStore } from 'vuex'

export default createStore({
  state: {
    name: "Gin Ngaih Thang",
    students: [
      {name: "Su Su", age: 20,gender: "female"},
      {name: "Ko Ko", age: 21,gender: "male"},
      {name: "Kyaw kyaw",age: 21, gender: "male"},
      {name: "mya mya",age: 25, gender: "female"},
    ]
  },
  getters: {
    boys(state){
      return state.students.filter(student => student.gender == "male")
    }
  },
  mutations: {
    change(state){
      state.name = "Mg Mg"
    }
  },
  actions: {
    change(store){
      store.commit('change')
    }
  },
  modules: {
  }
})
