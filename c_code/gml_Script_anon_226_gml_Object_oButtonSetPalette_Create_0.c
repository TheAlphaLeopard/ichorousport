// gml_Script_anon_226_gml_Object_oButtonSetPalette_Create_0 @ 0x1408759c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_226_gml_Object_oButtonSetPalette_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  double *pdVar4;
  undefined8 *puVar5;
  double *pdVar6;
  ulonglong uVar7;
  double *pdVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar16;
  undefined1 **ppuVar14;
  undefined8 **ppuVar15;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  double local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  double local_118;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  double local_c8;
  byte local_bc;
  double local_b8;
  byte local_ac;
  double *local_98;
  undefined1 *local_90;
  double *local_88;
  double *local_80 [2];
  uint local_70 [2];
  undefined8 *local_68;
  
  local_100 = "gml_Script_anon@723@gml_Object_oButtonSetGameplay_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x1c;
  FUN_140041df0(local_70,param_4,5,param_5);
  _eh_vector_constructor_iterator_(&local_e8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_16c = 0;
  local_178 = 0;
  local_11c = 0;
  local_128 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x1c;
  pdVar8 = (double *)&DAT_1419df7b0;
  uVar7 = (ulonglong)local_70[0];
  if ((int)local_70[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_68[4];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_f8 = 0x1c;
    uStack_160 = (char *)CONCAT44(0xd,(undefined4)uStack_160);
    local_168 = (undefined8 *)0x0;
    if ((int)local_70[0] < 5) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_68[4];
      if (&local_168 == puVar5) goto LAB_140875b3d;
    }
    local_148 = 0.0;
    uStack_140 = (undefined4)uStack_160;
    uStack_13c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_148);
  }
LAB_140875b3d:
  local_f8 = 0x1e;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  local_168 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_160 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_168);
  local_98 = (double *)&local_e8;
  uStack_13c = DAT_141dd71f4;
  uStack_140 = DAT_141dd71f0;
  if ((1 << ((byte)DAT_141dd71f4 & 0x1f) & 0x46U) == 0) {
    local_148 = DAT_141dd71e8;
  }
  else {
    FUN_1400419b0(&local_148,&DAT_141dd71e8);
  }
  uVar16 = uStack_13c;
  local_168 = (undefined8 *)local_148;
  uStack_160 = (char *)CONCAT44(uStack_13c,uStack_140);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_168);
  if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_90 = local_d8;
  pdVar4 = (double *)
           gml_Script_anon_147_DefineBossAttributes_BOSSMODSINIT
                     (param_1,param_2,&local_138,1,&local_98);
  if (pdVar4 != &local_c8) {
    local_168 = (undefined8 *)*pdVar4;
    uStack_160 = (char *)pdVar4[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_168);
  }
  local_88 = &local_c8;
  ppuVar14 = &local_90;
  pdVar4 = (double *)FUN_140e64420(param_1,param_2,&local_128,2,ppuVar14);
  uVar16 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
  if (pdVar4 != &local_b8) {
    local_168 = (undefined8 *)*pdVar4;
    uStack_160 = (char *)pdVar4[1];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_168);
  }
  local_80[0] = &local_b8;
  pdVar4 = (double *)
           FUN_140e634e0(param_1,param_2,&local_178,1,CONCAT44(uVar16,DAT_141a086f8),local_80);
  if (pdVar4 != &local_118) {
    local_168 = (undefined8 *)*pdVar4;
    uStack_160 = (char *)pdVar4[1];
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_168);
  }
  local_f8 = 0x20;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_98 = &local_118;
  local_168 = (undefined8 *)CONCAT44(uRam00000001419e9274,_DAT_1419e9270);
  uStack_160 = (char *)CONCAT44(uRam00000001419e927c,uRam00000001419e9278);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_168);
  local_90 = local_d8;
  local_168 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_160 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_168);
  local_88 = &local_c8;
  ppuVar15 = &local_98;
  gml_Script_pal_swap_layer_init(param_1,param_2,&local_178,3,ppuVar15);
  uVar16 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
  local_f8 = 0x22;
  if ((int)local_70[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_68[4];
  }
  cVar2 = FUN_140e491e0(puVar5);
  bVar9 = cVar2 == '\0';
  if (bVar9) {
    uStack_13c = 0xf;
    local_148 = 7.291128972912503e-304;
    pdVar4 = &local_148;
  }
  else {
    uStack_160 = (char *)CONCAT44(0xf,(undefined4)uStack_160);
    local_168 = (undefined8 *)0x1000001000000b9;
    pdVar4 = (double *)&local_168;
  }
  if ((int)local_70[0] < 2) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_68[1];
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar6;
  }
  else {
    dVar10 = (double)FUN_140e4b060();
  }
  if ((int)local_70[0] < 1) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)*local_68;
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar6;
  }
  else {
    dVar11 = (double)FUN_140e4b060();
  }
  if (3 < (int)local_70[0]) {
    pdVar8 = (double *)local_68[3];
  }
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar8;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar8);
  }
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar4;
  }
  else {
    dVar13 = (double)FUN_140e4b060(pdVar4);
  }
  FUN_140ec5d30(param_1,(int)dVar13,(float)dVar12,(float)dVar11,CONCAT44(uVar16,(float)dVar10));
  if ((bVar9) && ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_148);
  }
  if ((!bVar9) && ((1 << ((byte)((ulonglong)uStack_160 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_168);
  }
  local_f8 = 0x24;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_170 = 0;
  uStack_160 = "gml_Script_pal_swap_reset";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_16c = 5;
  local_178 = 0;
  local_158 = 0x71;
  iVar3 = FUN_140ec9d80();
  if (iVar3 != -1) {
    local_158 = 0x71;
    FUN_140ec9dc0();
  }
  DAT_141dc7a50 = local_168;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,5,FUN_140041b30);
  if (0 < (int)local_70[0]) {
    puVar5 = local_68;
    do {
      puVar1 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_68);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

