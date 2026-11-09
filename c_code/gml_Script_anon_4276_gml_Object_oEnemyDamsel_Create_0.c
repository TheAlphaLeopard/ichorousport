// gml_Script_anon_4276_gml_Object_oEnemyDamsel_Create_0 @ 0x14097afe0

longlong *
gml_Script_anon_4276_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [12];
  byte local_94;
  undefined1 local_90 [12];
  byte local_84;
  undefined1 *local_80;
  undefined1 *local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_b0 = "gml_Script_anon@3755@gml_Object_oEnemyDamsel_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0xa9;
  FUN_140041df0(local_58,param_4,1,param_5);
  _eh_vector_constructor_iterator_(local_a0,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  uVar8 = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0xa9;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_50;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_a8 = 0xa9;
    if ((int)local_58[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_50;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  local_a8 = 0xaa;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0708);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0ab8);
  if ((int)local_58[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_50;
  }
  uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_e0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_e8);
  }
  FUN_1400460e0(&local_e8,puVar5);
  local_68 = (undefined4)local_e8;
  uStack_64 = local_e8._4_4_;
  uStack_60 = uStack_e0;
  uStack_5c = uStack_dc;
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_68);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_80 = local_a0;
  uVar3 = FUN_140e63610(param_1,param_2,&local_c8,1,uVar3,&local_80);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0a28);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0818);
    if (0 < (int)local_58[0]) {
      puVar7 = (undefined8 *)*local_50;
    }
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
      local_e8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_e8);
    }
    FUN_1400460e0(&local_e8,puVar7);
    local_68 = (undefined4)local_e8;
    uStack_64 = local_e8._4_4_;
    uStack_60 = uStack_e0;
    uStack_5c = uStack_dc;
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_68);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_78[0] = local_90;
    uVar3 = FUN_140e63610(param_1,param_2,&local_d8,1,uVar3,local_78);
    cVar1 = FUN_140e491e0(uVar3);
  }
  else {
    cVar1 = '\x01';
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (cVar1 != '\0') {
    uVar8 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar8 << 0x20;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_a0,0x10,2,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar7 = local_50;
    do {
      puVar4 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

