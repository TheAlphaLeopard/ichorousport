// gml_Object_oChestOption_Create_0 @ 0x1408a2fc0

void gml_Object_oChestOption_Create_0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  longlong *plVar10;
  double dVar11;
  double dVar12;
  longlong *plVar13;
  code *pcVar14;
  ulonglong uVar15;
  undefined1 **ppuVar16;
  undefined4 uVar17;
  ulonglong in_stack_fffffffffffffe50;
  ulonglong uVar18;
  undefined4 uVar19;
  longlong *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 local_150;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  local_100 = "gml_Object_oCheckTutorial_Draw_0";
  local_f8 = 0;
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0.0;
  local_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_f8 = 3;
  thunk_FUN_141039d20(0);
  local_f8 = 4;
  thunk_FUN_141039d50(0);
  local_f8 = 6;
  uStack_17c = 0xf;
  local_188 = (longlong *)0x100000600000001;
  dVar11 = (double)FUN_140e4b060(&local_188);
  thunk_FUN_141039cb0((int)dVar11);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_f8 = 8;
  FUN_140e9c240(0);
  local_f8 = 9;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a47588);
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a475c8);
  uStack_17c = 6;
  in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffffffffff00;
  uVar15 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_128,uVar15,in_stack_fffffffffffffe50);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 6;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_158,uVar15 & 0xffffffffffffff00,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_16c = DAT_141dd7534;
  uStack_170 = DAT_141dd7530;
  if ((1 << ((byte)DAT_141dd7534 & 0x1f) & 0x46U) == 0) {
    local_178 = DAT_141dd7528;
  }
  else {
    FUN_1400419b0(&local_178,&DAT_141dd7528);
  }
  uVar3 = uStack_16c;
  local_188 = local_178;
  uStack_180 = uStack_170;
  uStack_17c = uStack_16c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_188);
  if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_88 = local_d8;
  uVar8 = FUN_140e63610(param_1,param_2,&local_148,0,uVar7,0);
  cVar4 = FUN_140e491e0(uVar8);
  if (cVar4 == '\0') {
    uStack_17c = DAT_141dd7524;
    uStack_180 = DAT_141dd7520;
    if ((1 << ((byte)DAT_141dd7524 & 0x1f) & 0x46U) == 0) {
      local_188 = DAT_141dd7518;
    }
    else {
      FUN_1400419b0(&local_188,&DAT_141dd7518);
    }
    pplVar9 = &local_188;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    uStack_16c = DAT_141dd7544;
    uStack_170 = DAT_141dd7540;
    if ((1 << ((byte)DAT_141dd7544 & 0x1f) & 0x46U) == 0) {
      local_178 = DAT_141dd7538;
    }
    else {
      FUN_1400419b0(&local_178,&DAT_141dd7538);
    }
    pplVar9 = (longlong **)&local_178;
    bVar2 = false;
    bVar1 = true;
  }
  local_118 = *(undefined4 *)pplVar9;
  uStack_114 = *(undefined4 *)((longlong)pplVar9 + 4);
  uStack_110 = *(undefined4 *)(pplVar9 + 1);
  uStack_10c = *(undefined4 *)((longlong)pplVar9 + 0xc);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_118);
  if ((bVar1) && ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  if ((bVar2) && ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_188);
  }
  local_80 = local_c8;
  local_118 = (undefined4)local_128;
  uStack_114 = local_128._4_4_;
  uStack_110 = uStack_120;
  uStack_10c = uStack_11c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_118);
  local_78 = local_b8;
  uStack_16c = local_14c;
  uStack_170 = local_150;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_178 = local_158;
  }
  else {
    FUN_1400419b0(&local_178,&local_158);
  }
  uStack_17c = 7;
  local_188 = (longlong *)CONCAT44(local_188._4_4_,0x18);
  FUN_1400462a0(&local_178,&local_188);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_118 = (undefined4)local_178;
  uStack_114 = local_178._4_4_;
  uStack_110 = uStack_170;
  uStack_10c = uStack_16c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_118);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_70 = local_a8;
  ppuVar16 = &local_88;
  uVar8 = FUN_140e64420(param_1,param_2,&local_138,2,ppuVar16);
  uVar5 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
  uStack_16c = *(undefined4 *)((longlong)pdVar6 + 0xc);
  uStack_170 = *(undefined4 *)(pdVar6 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = (longlong *)*pdVar6;
  }
  else {
    FUN_1400419b0(&local_178,pdVar6);
  }
  FUN_1400460e0(&local_178,uVar8);
  local_118 = (undefined4)local_178;
  uStack_114 = local_178._4_4_;
  uStack_110 = uStack_170;
  uStack_10c = uStack_16c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_118);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_68 = local_98;
  ppuVar16 = &local_78;
  uVar15 = CONCAT44(uVar5,DAT_141a04598);
  FUN_140e634e0(param_1,param_2,&local_168,3,uVar15,ppuVar16);
  local_f8 = 10;
  FUN_140e9c240(0xffffff);
  local_f8 = 0xb;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uStack_17c = 6;
  uVar18 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_128,uVar15,uVar18);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 6;
  uVar18 = uVar18 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_158,uVar15,uVar18);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 6;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_141a0f9d8,0x80000000,&local_f0,uVar15 & 0xffffffffffffff00,
                uVar18 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 0xf;
  local_188 = (longlong *)0x1000001000000b8;
  uVar5 = FUN_140e4a8b0(&local_f0);
  plVar10 = local_158;
  if ((local_14c & 0xffffff) != 0) {
    plVar10 = (longlong *)FUN_140e4b060(&local_158);
  }
  dVar11 = local_128;
  if ((uStack_11c & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_128);
  }
  uVar19 = 0;
  pdVar6 = (double *)FUN_140e63610(param_1,param_2,&local_168,0,uVar7,0);
  uVar17 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar6;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar6);
  }
  plVar13 = local_188;
  if ((uStack_17c & 0xffffff) != 0) {
    plVar13 = (longlong *)FUN_140e4b060(&local_188);
  }
  FUN_140ec5dd0(param_1,(int)(double)plVar13,(float)dVar12,(float)dVar11,
                CONCAT44(uVar17,(float)(double)plVar10),CONCAT44(uVar19,0x3f800000),0x3f800000,0,
                uVar5,0x3f800000);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return;
}

