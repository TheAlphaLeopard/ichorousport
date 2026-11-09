// gml_Script_anon_125_gml_Object_oCheckEpilepsy_Create_0 @ 0x1408a1230

void gml_Script_anon_125_gml_Object_oCheckEpilepsy_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  double *pdVar4;
  longlong *plVar5;
  longlong *plVar6;
  double dVar7;
  longlong *plVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffec0;
  undefined1 **ppuVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  longlong *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  longlong *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_e0;
  uint local_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined1 local_a0 [12];
  byte local_94;
  undefined1 local_90 [12];
  byte local_84;
  undefined8 local_80;
  byte local_74;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  
  local_c0 = "gml_Object_oCheckBox_Draw_0";
  local_b8 = 0;
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_b8 = 3;
  uStack_10c = 0xf;
  local_118 = (longlong *)0x100000600000001;
  dVar7 = (double)FUN_140e4b060(&local_118);
  thunk_FUN_141039cb0((int)dVar7);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_b8 = 4;
  thunk_FUN_141039d20(0);
  local_b8 = 5;
  thunk_FUN_141039d50(0);
  local_b8 = 7;
  FUN_140e9c240(0);
  local_b8 = 9;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a47588);
  uStack_10c = 6;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_d8,uVar10,in_stack_fffffffffffffec0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  uStack_10c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_e8,uVar10,
                in_stack_fffffffffffffec0 & 0xffffffffffffff00);
  uVar1 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_108 = local_d8;
  uStack_100 = uStack_d0;
  uStack_fc = uStack_cc;
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_108);
  local_70 = local_a0;
  uStack_10c = local_dc;
  uStack_110 = local_e0;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_118 = local_e8;
  }
  else {
    FUN_1400419b0(&local_118,&local_e8);
  }
  uStack_fc = 7;
  local_108 = (longlong *)CONCAT44(local_108._4_4_,0x18);
  FUN_1400462a0(&local_118,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = local_118;
  uStack_100 = uStack_110;
  uStack_fc = uStack_10c;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_108);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_68 = local_90;
  if (puVar2 != &local_80) {
    local_108 = (longlong *)*puVar2;
    uStack_100 = *(undefined4 *)(puVar2 + 1);
    uStack_fc = *(uint *)((longlong)puVar2 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_108);
  }
  local_60 = &local_80;
  ppuVar12 = &local_70;
  uVar10 = CONCAT44(uVar1,DAT_141a04598);
  FUN_140e634e0(param_1,param_2,&local_f8,3,uVar10,ppuVar12);
  local_b8 = 0xb;
  FUN_140e9c240(0xffffff);
  local_b8 = 0xd;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a475c8);
  uStack_fc = 6;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_d8,uVar10,uVar13);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_e8,uVar10,uVar13);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = 6;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0f9d8,0x80000000,&local_b0,uVar10 & 0xffffffffffffff00,
                uVar13 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_10c = 0xf;
  local_118 = (longlong *)0x1000001000000b8;
  uVar1 = FUN_140e4a8b0(&local_b0);
  plVar5 = local_e8;
  if ((local_dc & 0xffffff) != 0) {
    plVar5 = (longlong *)FUN_140e4b060(&local_e8);
  }
  plVar6 = local_d8;
  if ((uStack_cc & 0xffffff) != 0) {
    plVar6 = (longlong *)FUN_140e4b060(&local_d8);
  }
  uVar14 = 0;
  pdVar4 = (double *)FUN_140e63610(param_1,param_2,&local_f8,0,uVar3,0);
  uVar11 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar4;
  }
  else {
    dVar7 = (double)FUN_140e4b060(pdVar4);
  }
  plVar8 = local_118;
  if ((uStack_10c & 0xffffff) != 0) {
    plVar8 = (longlong *)FUN_140e4b060(&local_118);
  }
  FUN_140ec5dd0(param_1,(int)(double)plVar8,(float)dVar7,(float)(double)plVar6,
                CONCAT44(uVar11,(float)(double)plVar5),CONCAT44(uVar14,0x3f800000),0x3f800000,0,
                uVar1,0x3f800000);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_a0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return;
}

