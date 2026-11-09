// gml_Object_oCollectionMenu_Other_5 @ 0x1408b29d0

double * gml_Object_oCollectionMenu_Other_5
                   (longlong *param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  longlong *plVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  double *pdVar10;
  undefined4 uVar11;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  undefined4 local_180;
  undefined4 local_17c;
  double local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  double local_158;
  undefined4 local_150;
  uint local_14c;
  double local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  double local_134;
  undefined4 local_12c;
  undefined4 local_128;
  double local_124;
  undefined4 local_11c;
  undefined4 local_118;
  double local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  uint local_f0;
  double local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  double local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  double *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  
  local_90 = "gml_Script_anon@2088@gml_Object_oCollectionMenu_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x3f;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_138 = 0xffffff;
  local_104 = 0xffffff;
  local_110 = 0.0;
  pdVar1 = (double *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57730);
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_88 = 0x41;
  pdVar2 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57720);
  pdVar10 = (double *)&DAT_1419df7b0;
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*param_5;
  }
  pdVar3 = (double *)FUN_140046e40(&local_1a8,puVar8,pdVar2);
  uVar9 = 0xffffff;
  if (pdVar3 != &local_148) {
    local_198 = *pdVar3;
    uStack_190 = pdVar3[1];
    FUN_140041b80(&local_148,&local_198);
    uVar9 = local_13c;
  }
  if ((1 << (uStack_1a0._4_1_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_88 = 0x42;
  uStack_170 = local_140;
  local_f0 = uVar9 & 0x1f;
  uStack_16c = uVar9;
  if ((1 << (sbyte)local_f0 & 0x46U) == 0) {
    local_178 = local_148;
  }
  else {
    FUN_1400419b0(&local_178,&local_148);
  }
  FUN_140042560(&local_178,pdVar2);
  uStack_1a0 = (double)CONCAT44(uStack_16c,uStack_170);
  local_1a8 = local_178;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  FUN_140041b80(&local_100,&local_1a8);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_88 = 0x43;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57450);
  if (pdVar2 != &local_c8) {
    local_1a8 = *pdVar2;
    uStack_1a0 = pdVar2[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1a8);
  }
  local_80 = &local_c8;
  iVar7 = 0;
  if ((*(int *)((longlong)plVar4 + 0xc) == 2) && (*plVar4 != 0)) {
    iVar7 = *(int *)(*plVar4 + 0x24);
  }
  uStack_190 = (double)((ulonglong)uStack_190 & 0xffffffff);
  local_198 = (double)iVar7;
  FUN_1400462a0(&local_198,&local_100);
  local_1a8 = local_198;
  uStack_1a0 = uStack_190;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_1a8);
  if ((1 << ((byte)((ulonglong)uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_78 = local_b8;
  pdVar2 = (double *)FUN_140e79230(&local_168,2,&local_80);
  if (pdVar2 != &local_110) {
    local_1a8 = *pdVar2;
    uStack_1a0 = pdVar2[1];
    FUN_140041b80(&local_110,&local_1a8);
    local_138 = local_104;
  }
  local_88 = 0x45;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  pdVar2 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57630);
  pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57400);
  local_68 = (**(code **)(*param_1 + 8))(param_1,DAT_141a574f0);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_198,gml_Object_oCollectionMenu_Step_0,0);
  if (&local_198 != pdVar1) {
    local_1a8 = local_198;
    uStack_1a0 = uStack_190;
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar1);
    }
    FUN_140041b80(pdVar1,&local_1a8);
  }
  FUN_140e60910(1);
  if (pdVar1 != &local_c8) {
    local_1a8 = *pdVar1;
    uStack_1a0 = pdVar1[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1a8);
  }
  if ((1 << ((byte)((ulonglong)uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_80 = &local_c8;
  if (0 < param_4) {
    pdVar10 = (double *)*param_5;
  }
  local_17c = *(undefined4 *)((longlong)pdVar10 + 0xc);
  local_180 = *(undefined4 *)(pdVar10 + 1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *pdVar10;
  }
  else {
    FUN_1400419b0(&local_188,pdVar10);
  }
  FUN_1400462a0(&local_188,&local_100);
  uStack_190 = (double)CONCAT44(local_17c,local_180);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_198 = local_188;
  }
  else {
    FUN_1400419b0(&local_198,&local_188);
  }
  FUN_140042560(&local_198,pdVar2);
  local_14c = *(undefined4 *)((longlong)pdVar2 + 0xc);
  local_150 = *(undefined4 *)(pdVar2 + 1);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
    local_158 = *pdVar2;
  }
  else {
    FUN_1400419b0(&local_158,pdVar2);
  }
  uStack_1a0 = (double)((ulonglong)uStack_1a0 & 0xffffffff);
  local_1a8 = 2.0;
  FUN_140046500(&local_158,&local_1a8);
  if ((1 << ((byte)((ulonglong)uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_118 = local_138;
  local_11c = local_108;
  bVar5 = (byte)local_138 & 0x1f;
  if ((1 << bVar5 & 0x46U) == 0) {
    local_124 = local_110;
  }
  else {
    FUN_1400419b0(&local_124,&local_110);
  }
  FUN_140042560(&local_124,pdVar2);
  local_cc = local_118;
  local_d0 = local_11c;
  if ((1 << ((byte)local_118 & 0x1f) & 0x46U) == 0) {
    local_d8 = local_124;
  }
  else {
    FUN_1400419b0(&local_d8,&local_124);
  }
  uStack_1a0 = (double)((ulonglong)uStack_1a0 & 0xffffffff);
  local_1a8 = 2.0;
  FUN_140046500(&local_d8,&local_1a8);
  if ((1 << ((byte)((ulonglong)uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_16c = 0;
  local_178 = 240.0;
  FUN_1400462a0(&local_178,&local_d8);
  local_128 = uStack_16c;
  local_12c = uStack_170;
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_134 = local_178;
  }
  else {
    FUN_1400419b0(&local_134,&local_178);
  }
  FUN_1400460e0(&local_134,&local_158);
  uStack_dc = local_128;
  uStack_e0 = local_12c;
  if ((1 << ((byte)local_128 & 0x1f) & 0x46U) == 0) {
    local_e8 = local_134;
  }
  else {
    FUN_1400419b0(&local_e8,&local_134);
  }
  FUN_1400460e0(&local_e8,&local_198);
  uStack_1a0 = (double)CONCAT44(uStack_dc,uStack_e0);
  local_1a8 = local_e8;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_1a8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_128 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_134);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_118 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_124);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)((ulonglong)uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_78 = local_b8;
  local_14c = local_13c;
  local_150 = local_140;
  bVar6 = (byte)local_f0;
  if ((1 << (bVar6 & 0x1f) & 0x46U) == 0) {
    local_158 = local_148;
  }
  else {
    FUN_1400419b0(&local_158,&local_148);
  }
  FUN_140042560(&local_158,pdVar2);
  local_17c = *(undefined4 *)((longlong)pdVar3 + 0xc);
  local_180 = *(undefined4 *)(pdVar3 + 1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *pdVar3;
  }
  else {
    FUN_1400419b0(&local_188,pdVar3);
  }
  FUN_1400462a0(&local_188,local_68);
  uStack_190 = (double)CONCAT44(local_17c,local_180);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_198 = local_188;
  }
  else {
    FUN_1400419b0(&local_198,&local_188);
  }
  FUN_1400460e0(&local_198,&local_158);
  local_1a8 = local_198;
  uStack_1a0 = uStack_190;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_1a8);
  if ((1 << ((byte)((ulonglong)uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_70 = local_a8;
  pdVar10 = (double *)
            FUN_140e634e0(param_1,param_2,&local_168,3,CONCAT44(uVar11,DAT_1419fd6d8),&local_80);
  if (pdVar10 != param_3) {
    local_1a8 = *pdVar10;
    uStack_1a0 = pdVar10[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1a8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << bVar5 & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << (bVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

