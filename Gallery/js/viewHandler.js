class viewHandler {
    constructor() {
        this._onChangeToLoginViewButton = document.getElementById('onChangeToLoginView');
        // this._mainView = document.getElementById('mainView');
        // this._loginView = document.getElementById('loginView');
        }

    onChangeToLoginView() {
        let mainView = document.getElementById('mainView');
        let loginView = document.getElementById('loginView');
        
        mainView.classList.toggle('hidden');
        loginView.classList.toggle('hidden');
    }
}