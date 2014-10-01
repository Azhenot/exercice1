public class Voiture {

    public Voiture() {
        couleur = "gris";
        nbRoues = 4;
    }

    public Voiture(String couleur, int nbRoues) {
        this.couleur = couleur;
        this.nbRoues = nbRoues;
    }
    
    String couleur;
    int nbRoues;  
    
    public void changerCouleur(String couleur)    
    {
        this.couleur = couleur;
    }
}
