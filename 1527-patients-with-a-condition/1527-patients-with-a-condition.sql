SELECT * FROM Patients
where conditions like '% DIAB1'
   OR conditions LIKE 'DIAB1%' 
   OR conditions LIKE '%DIAB1%'     
   OR conditions = 'DIAB1'