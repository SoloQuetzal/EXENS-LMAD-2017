void Cono(Slices, Radio, Alto)
  int index = 0;
  int indexbase = 0;
  int indexpunta = 0;
  const float phix = D3DX_PI * 2.0;
  const float thetax = D3DX_PI;
  SimpleVertex *vertex = new SimpleVertex[Slices * cantOfSecctions];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < Slices; j++) {
      float x = (float)j / (Slices - 1);
      switch(i) {
        case 0:
          vertex[index].pos.x = Radio * cos(x*phix);
          vertex[index].pos.y = -Alto / 2;
          vertex[index].pos.z = Radio * sin(x*phix);
          indexbase = index;
        break;

        case 1:
          vertex[index].pos.x = 0;
          vertex[index].pos.y = -Alto / 2;
          vertex[index].pos.z = 0;
          indexpunta = index;
          break;

        case 2:
          vertex[index].pos.x = 0;
          vertex[index].pos.y = Alto / 2;
          vertex[index].pos.z = 0;
        break;
      }
    index++;
  }
}
