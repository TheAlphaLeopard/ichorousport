// gml_Script____struct___431_gml_Object_oEnemyCage_Create_0 @ 0x14092a190

longlong *
gml_Script____struct___431_gml_Object_oEnemyCage_Create_0
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  code *pcVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffee0;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [12];
  byte local_a4;
  undefined1 local_a0 [12];
  byte local_94;
  undefined8 local_90;
  byte local_84;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  uint local_50 [2];
  undefined8 *local_48;
  
  local_c0 = "gml_Script_anon@653@gml_Object_oEnemyCage_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x18;
  FUN_140041df0(local_50,param_4,1,param_5);
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0;
  uVar8 = 0;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x18;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_50[0];
  if ((int)local_50[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_48;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_b8 = 0x18;
    if ((int)local_50[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_48;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x3ff0000000000000;
  }
  local_b8 = 0x19;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_10c = 6;
  in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_d8,uVar10,in_stack_fffffffffffffee0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  uStack_10c = 6;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_e8,uVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffee0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = (longlong *)local_d8;
  uStack_110 = uStack_d0;
  uStack_10c = uStack_cc;
  if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b0);
  }
  FUN_140041b80(local_b0,&local_118);
  local_68 = local_b0;
  if ((int)local_50[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_48;
  }
  uStack_10c = local_dc;
  uStack_110 = local_e0;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_118 = (longlong *)local_e8;
  }
  else {
    FUN_1400419b0(&local_118,&local_e8);
  }
  FUN_1400460e0(&local_118,puVar4);
  local_78 = (undefined4)local_118;
  uStack_74 = local_118._4_4_;
  uStack_70 = uStack_110;
  uStack_6c = uStack_10c;
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_78);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_60 = local_a0;
  uVar3 = gml_Script_IsBetween(param_1,param_2,&local_f8,2,&local_68);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419efe78);
    if (((int)local_50[0] < 1) || (puVar6 = (undefined8 *)*local_48, puVar6 != &local_90)) {
      local_78 = *(undefined4 *)puVar6;
      uStack_74 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_70 = *(undefined4 *)(puVar6 + 1);
      uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      FUN_140041b80(&local_90,&local_78);
    }
    local_58 = &local_90;
    uVar3 = FUN_140e63610(param_1,param_2,&local_108,1,uVar3,&local_58);
    uStack_10c = 0;
    local_118 = (longlong *)0xc010000000000000;
    iVar2 = FUN_140e851f0(uVar3,&local_118,DAT_141955260,0);
    bVar7 = iVar2 != 0;
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
  }
  else {
    bVar7 = true;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (bVar7) {
    uVar8 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar8 << 0x20;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_b0,0x10,3,FUN_140041b30);
  if (0 < (int)local_50[0]) {
    puVar6 = local_48;
    do {
      puVar4 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

