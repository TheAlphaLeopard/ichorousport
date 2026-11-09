// gml_Script_anon_9614_gml_Object_oRogueLevelManager_Other_12 @ 0x140d06df0

undefined8 *
gml_Script_anon_9614_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double *pdVar3;
  undefined8 *puVar4;
  float fVar5;
  double dVar6;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  double local_e8;
  undefined4 local_dc;
  double local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [12];
  byte local_94;
  undefined1 local_90 [12];
  byte local_84;
  undefined8 local_80;
  byte local_74;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  
  local_b0 = "gml_Script_anon@8409@gml_Object_oRogueLevelManager_Other_12";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x128;
  _eh_vector_constructor_iterator_(local_a0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x129;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    pdVar3 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar3 = (double *)*param_5;
  }
  if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) {
    dVar6 = *pdVar3;
  }
  else {
    dVar6 = (double)FUN_140e4b060();
  }
  fVar5 = (float)FUN_140e78f90(0x3f800000,(float)dVar6);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = (double)fVar5;
  local_a8 = 0x12a;
  if (param_4 < 1) {
    pdVar3 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar3 = (double *)*param_5;
  }
  if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) {
    dVar6 = *pdVar3;
  }
  else {
    dVar6 = (double)FUN_140e4b060();
  }
  fVar5 = (float)FUN_140e79010(0x3f800000,(float)dVar6);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = (double)fVar5;
  local_a8 = 300;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fa658);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5eb8);
  FUN_140e87170(uVar2,DAT_1419fe0e8,0x80000000,&local_f8,param_1,param_2);
  FUN_140e87170(uVar2,DAT_1419fe158,0x80000000,&local_108,param_1,param_2);
  uStack_11c = local_ec;
  uStack_120 = local_f0;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_128 = local_f8;
  }
  else {
    FUN_1400419b0(&local_128,&local_f8);
  }
  FUN_1400460e0(&local_128,&local_d8);
  local_c8 = (undefined4)local_128;
  uStack_c4 = local_128._4_4_;
  uStack_c0 = uStack_120;
  uStack_bc = uStack_11c;
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_c8);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_70 = local_a0;
  uStack_11c = local_fc;
  uStack_120 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_128 = local_108;
  }
  else {
    FUN_1400419b0(&local_128,&local_108);
  }
  FUN_1400460e0(&local_128,&local_e8);
  local_c8 = (undefined4)local_128;
  uStack_c4 = local_128._4_4_;
  uStack_c0 = uStack_120;
  uStack_bc = uStack_11c;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_c8);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_68 = local_90;
  if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_80)) {
    local_c8 = *(undefined4 *)puVar4;
    uStack_c4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_c0 = *(undefined4 *)(puVar4 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_c8);
  }
  local_60 = &local_80;
  FUN_140e63610(param_1,param_2,&local_118,3,uVar1,&local_70);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_a0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

