print ("Categoria de Veículo de Carga por Peso Bruto Total (PBT)")

PBT = float(input("Informe o PBT do Veículo (Kg):"));

if PBT < 3500:
        print ("Veículo Urbano de Carga(VUC)");
elif PBT < 6500:
        print ("Caminhão Leve");
elif PBT < 14000:
        print ("Caminhão Médio");
elif PBT < 23000:
        print ("Caminhão Semi-Pesado");
else :
        print ("Caminhão Extra-Pesado");
