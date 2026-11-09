// gml_Script_anon_459_gml_Object_oCrab_Create_0 @ 0x1408c3bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_459_gml_Object_oCrab_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar8;
  undefined8 uVar6;
  undefined4 **ppuVar7;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Object_oConvention_Step_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_38 = 2;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  local_c8 = _DAT_141dc6ca0;
  uStack_c4 = uRam0000000141dc6ca4;
  uStack_c0 = uRam0000000141dc6ca8;
  uStack_bc = uRam0000000141dc6cac;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_c8);
  local_68 = local_a8;
  uVar6 = CONCAT44(uVar8,DAT_141a0a0d8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar6,&local_68);
  uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
  local_80 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_88,puVar4);
  }
  uStack_bc = 7;
  local_c8 = 0x3c;
  FUN_140042560(&local_88,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_4c = local_7c;
  local_50 = local_80;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
    local_58 = local_88;
  }
  else {
    FUN_1400419b0(&local_58,&local_88);
  }
  uStack_bc = 7;
  local_c8 = 2;
  FUN_140042560(&local_58,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  uVar2 = FUN_140e851f0(uVar3,&local_58,DAT_141955260,1);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (uVar2 < 0x80000000) {
    local_38 = 4;
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    local_78 = 0;
    local_70 = 0;
    local_6c = 5;
    local_c8 = _DAT_141dd77c8;
    uStack_c4 = uRam0000000141dd77cc;
    uStack_c0 = uRam0000000141dd77d0;
    uStack_bc = DAT_141dd77d4;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_c8);
    local_60 = local_98;
    FUN_140e634e0(param_1,param_2,&local_78,1,CONCAT44(uVar8,DAT_141a03478),&local_60);
    local_38 = 5;
    FUN_140edce70(0,0);
  }
  local_38 = 9;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar5 = (undefined4 *)
           FUN_140e8da20(&local_78,param_1,5,&DAT_1419e9a00,&DAT_1419e99f0,&DAT_1419e99d0,
                         &DAT_1419e9a10,&DAT_1419e99e0);
  if (puVar5 != local_a8) {
    local_c8 = *puVar5;
    uStack_c4 = puVar5[1];
    uStack_c0 = puVar5[2];
    uStack_bc = puVar5[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_c8);
  }
  local_68 = local_a8;
  local_c8 = (undefined4)DAT_1419df7b0;
  uStack_c4 = DAT_1419df7b0._4_4_;
  uStack_c0 = DAT_1419df7b8;
  uStack_bc = DAT_1419df7bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_c8);
  local_60 = local_98;
  ppuVar7 = &local_68;
  uVar3 = gml_Script_InputClusterGetMetadata(param_1,param_2,&local_b8,2,ppuVar7);
  uVar8 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_38 = 10;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  local_38 = 0xc;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57aa0);
  if (puVar5 != local_a8) {
    local_c8 = *puVar5;
    uStack_c4 = puVar5[1];
    uStack_c0 = puVar5[2];
    uStack_bc = puVar5[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_c8);
  }
  local_68 = local_a8;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar8,DAT_141a02ef8),&local_68);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_38 = 0xd;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
    FUN_140046040(uVar3);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

