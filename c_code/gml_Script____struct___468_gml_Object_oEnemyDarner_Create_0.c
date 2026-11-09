// gml_Script____struct___468_gml_Object_oEnemyDarner_Create_0 @ 0x1409a72a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___468_gml_Object_oEnemyDarner_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  double *pdVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar12;
  ulonglong uVar11;
  undefined1 **ppuVar13;
  ulonglong uVar14;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  double local_148;
  undefined4 local_140;
  uint local_13c;
  double local_138;
  undefined4 local_130;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 *local_118;
  undefined4 local_10c;
  double local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  double local_e8;
  uint local_dc;
  double local_d8;
  uint local_cc;
  double local_c8;
  uint local_bc;
  double local_b8;
  uint local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_90 [12];
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined1 *local_70;
  undefined1 *local_68 [8];
  
  local_a0 = "gml_Script_anon@11706@___struct___468@gml_Object_oEnemyDarner_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x217;
  _eh_vector_constructor_iterator_(local_90,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_10c = 0xffffff;
  local_118 = (undefined1 *)0x0;
  local_14c = 0;
  local_158 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x219;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
  FUN_140e609c0(param_1);
  uVar12 = 0;
  puVar2 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_158,0,0);
  if (puVar2 != puVar1) {
    local_168 = (longlong *)*puVar2;
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_168);
  }
  FUN_140e60910(1);
  local_98 = 0x21a;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  local_168 = (longlong *)CONCAT44(uRam0000000141dc6e94,_DAT_141dc6e90);
  uStack_160 = uRam0000000141dc6e98;
  uStack_15c = uRam0000000141dc6e9c;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_168);
  local_70 = local_90;
  local_168 = (longlong *)CONCAT44(uRam0000000141dc6e94,_DAT_141dc6e90);
  uStack_160 = uRam0000000141dc6e98;
  uStack_15c = uRam0000000141dc6e9c;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_168);
  local_68[0] = local_80;
  uVar5 = CONCAT44(uVar12,DAT_141a0a0d8);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_128,1,uVar5,local_68);
  uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_12c = *(uint *)((longlong)pdVar4 + 0xc);
  local_130 = *(undefined4 *)(pdVar4 + 1);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *pdVar4;
  }
  else {
    FUN_1400419b0(&local_138,pdVar4);
  }
  uStack_15c = 0;
  local_168 = (longlong *)0x3ff8000000000000;
  FUN_140042560(&local_138,&local_168);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  ppuVar13 = &local_70;
  uVar11 = CONCAT44(uVar12,DAT_141a0a0d8);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar11,ppuVar13);
  local_13c = *(uint *)((longlong)pdVar4 + 0xc);
  local_140 = *(undefined4 *)(pdVar4 + 1);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
    local_148 = *pdVar4;
  }
  else {
    FUN_1400419b0(&local_148,pdVar4);
  }
  uStack_15c = 0;
  local_168 = (longlong *)0x3fe999999999999a;
  FUN_140042560(&local_148,&local_168);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  dVar7 = local_138;
  if ((local_12c & 0xffffff) != 0) {
    dVar7 = (double)FUN_140e4b060(&local_138);
  }
  dVar8 = local_148;
  if ((local_13c & 0xffffff) != 0) {
    dVar8 = (double)FUN_140e4b060(&local_148);
  }
  uVar5 = FUN_140e78f40((longlong)dVar8,(longlong)dVar7);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = uVar5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e87930(uVar3,DAT_141a0a848,0x80000000,&local_f8);
  local_98 = 0x21b;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  uStack_15c = 6;
  uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_b8,uVar11,uVar14);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_15c = 6;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_c8,uVar11 & 0xffffffffffffff00,
                uVar14 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_d8,param_1,param_2);
  FUN_140e87170(uVar3,DAT_1419fe158,0x80000000,&local_e8,param_1,param_2);
  dVar7 = local_e8;
  if ((local_dc & 0xffffff) != 0) {
    dVar7 = (double)FUN_140e4b060(&local_e8);
  }
  dVar8 = local_d8;
  if ((local_cc & 0xffffff) != 0) {
    dVar8 = (double)FUN_140e4b060(&local_d8);
  }
  dVar9 = local_c8;
  if ((local_bc & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_c8);
  }
  dVar10 = local_b8;
  if ((local_ac & 0xffffff) != 0) {
    dVar10 = (double)FUN_140e4b060(&local_b8);
  }
  fVar6 = (float)FUN_140e793d0((float)dVar10,(float)dVar9,(float)dVar8,(float)dVar7);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = (double)fVar6;
  FUN_140e87930(uVar5,DAT_141a1eed0,0x80000000,&local_108);
  local_98 = 0x21c;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = &DAT_bff0000000000000;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar3,DAT_141a067b8,0x80000000,&local_118);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

