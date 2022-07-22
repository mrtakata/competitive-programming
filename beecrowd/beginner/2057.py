def calcula_jornada(hora_partida: int, tempo_de_viagem: int, fuso: int) -> int:
    hora_chegada = hora_partida+tempo_de_viagem+fuso

    if hora_chegada > 23:
        hora_chegada = hora_chegada-24
    elif hora_chegada < 0:
        hora_chegada = hora_chegada+24
    return hora_chegada
    
    
if __name__ == "__main__":
    entrada = input()
    hora_partida, tempo_de_viagem, fuso = entrada.split(" ", 3)
    hora_partida = int(hora_partida)
    tempo_de_viagem = int(tempo_de_viagem)
    fuso = int(fuso)
    hora_chegada = calcula_jornada(hora_partida=hora_partida,
                                   tempo_de_viagem=tempo_de_viagem, fuso=fuso)
    print(hora_chegada)