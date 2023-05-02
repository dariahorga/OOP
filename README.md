# Proiect1
Numele proiectului: My Company <br/>
Tema: Gestionarea resurselor umane <br/>
Clasele implementate: <br/>
•	clasa Company- care conține numele firmei, CIF-ul, contactul, numărul ne angajați, numărul de joburi, un vector cu toți angajații firmei și un vector cu job-urile pe care le pot avea aceștia <br/>
•	clasa Employee- care are ca atribute un id pentru fiecare angajat, numele complet, contactul, salariu, job-ul pe care îl are în firmă, salariul și data la care s-a angajat; acesta clasa contine si un obiect de tip contact si jobs <br/>
•	clasa Contact- conține adresa, mail-ul și numărul de telefon ;<br/>
•	clasa Jobs- care desemnează un job, salariul minim și maxim pe care îl poate avea un angajat în acea poziție <br/>
•	clasa Job_history- care păstrează data l-a care s-a angajat și a demisionat un lucrător ar firmei <br/>
•	clasele Developer, Manager, Analyst, mostenite din clasa Jobs <br/>
•	clasa Departments mostenita din Contact si Job_history, clasa abstracta <br/>
•	clasele HR, Engineering si Finance, mostenite din Departments <br/>
•	I_IO interfata in care am metoda de afisare si citire <br/>
•	Invalid_ID_exception <br/>
•	InvalidNameException <br/>

Funcționalitățile proiectului: <br/>
•	Permite citirea de la tastatură și crearea obiectelor de tip Employee, Jobs și le adaugă în vectori ce stochează obiectele de acest tip(metoda addEmployees și metoda addJobs) <br/>
•	Permite afișarea pe ecran a tutoror detaliilor despre firmă, de la anagajați, până la locație și adresa de mail, numărul de telefon <br/>
•	Calculează salariu mediu al angajaților din firmă <br/>
•	Afișează pe ecran salariul cel mai mare din firma <br/>
•	Permite crearea departamentelor si afisarea unei descrieri,bugetul si taxa. </br>


